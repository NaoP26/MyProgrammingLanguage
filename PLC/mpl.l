%{
#include "y.tab.h"
%}

%%

"omer"        { return BEGIN_PROGRAM; }
"opan"        { return END_PROGRAM; }
"integer"     { return INT; }
"float"       { return FLOAT; }
"character"   { return CHAR; }
"eyer"        { return IF; }
"degilse"     { return ELSE; }
"dondur"      { return WHILE; }
":"           { return COLON; }
"and"         { return AND; }
"or"          { return OR; }
[A-Za-z][A-Za-z0-9]* { yylval.string = strdup(yytext); return IDENTIFIER; }
"-"[0-9]+"."[0-9]+ { yylval.num = atof(yytext); return NUMBER; }
"-"[0-9]+          { yylval.num = atoi(yytext); return NUMBER; }
[0-9]+"."[0-9]+    { yylval.num = atof(yytext); return NUMBER; }
[0-9]+             { yylval.num = atoi(yytext); return NUMBER; }
"'"[A-Za-z0-9]"'"  { yylval.string = strdup(yytext); return CHAR_LITERAL; } 
"+"           { return PLUS; }
"-"           { return MINUS; }
"*"           { return MULT; }
"/"           { return DIV; }
"=="          { return EQUALS; }
"!="          { return NOTEQUALS; }
">"           { return GREATER; }
"<"           { return LESS; }
">="          { return GREATEREQUAL; }
"<="          { return LESSEQUAL; }
";"           { return SEMICOLON; }
"="           { return ASSIGN; }
"("           { return '('; }
")"           { return ')'; }
\n            { yylineno++; }
[ \t]+        { /* space */ }
.             { printf("Unrecognized token: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}

