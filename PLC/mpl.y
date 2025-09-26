%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
extern int yylex();
void yyerror(const char *s);
%}

%union {
    char *string;
    double num;
}

%token <string> IDENTIFIER
%token <num> NUMBER
%token <string> CHAR_LITERAL  // CHAR_LITERAL token'ını buraya ekledik
%token BEGIN_PROGRAM END_PROGRAM INT FLOAT CHAR IF WHILE COLON SEMICOLON ASSIGN PLUS MINUS MULT DIV EQUALS NOTEQUALS GREATER LESS GREATEREQUAL LESSEQUAL AND OR ELSE

%left OR AND
%left EQUALS NOTEQUALS
%left LESS GREATER LESSEQUAL GREATEREQUAL
%left PLUS MINUS
%left MULT DIV

%%

program:
    BEGIN_PROGRAM declarations statements END_PROGRAM { printf("OK\n"); }
;

declarations:
    declarations declaration
  | /* bos */
;

declaration:
    type COLON IDENTIFIER SEMICOLON
;

type:
    INT
  | FLOAT
  | CHAR
;

statements:
    statements statement
  | statement
;

statement:
    assignment
  | if_statement
  | while_statement
;

assignment:
    IDENTIFIER ASSIGN expression SEMICOLON
;

expression:
    expression PLUS term
  | expression MINUS term
  | expression GREATER term
  | expression LESS term
  | expression GREATEREQUAL term
  | expression LESSEQUAL term
  | expression EQUALS term
  | expression NOTEQUALS term
  | expression OR term
  | expression AND term
  | term
;

term:
    term MULT factor
  | term DIV factor
  | factor
;

factor:
    NUMBER
  | IDENTIFIER
  | CHAR_LITERAL  // CHAR_LITERAL'ı burada da kullandık
  | '(' expression ')'
;

if_statement:
    IF '(' expression ')' statement optional_else;

optional_else:
    ELSE statement
  | /* bos */;

while_statement:
    WHILE '(' expression ')' statement
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "syntax error\n");
}

int main() {
    yyparse();
    return 0;
}

