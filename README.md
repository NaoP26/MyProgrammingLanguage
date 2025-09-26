Elbette, projenizin teknik detaylarını vurgulayan ve uluslararası bir kitleye hitap eden, **İngilizce** bir **README.md** metni:

-----

# 💻 MPL Compiler: A Simple Programming Language with Turkish Keywords

This repository contains the source code for a compiler for a simple **Mini Programming Language (MPL)**. The project was developed in **C** using the **Flex** (Lexer) and **Bison** (Parser) tools.

A unique feature of this language is its use of **Turkish keywords** for core control structures (e.g., `eyer` for `if`, `dondur` for `while`, `omer` for program start).

The compiler performs lexical and syntactical analysis of the source code. Upon successful analysis, it prints `OK` to the terminal; otherwise, it reports the corresponding syntax error.

-----

## ✨ Language Features (MPL)

The MPL language supports fundamental programming constructs:

  * **Program Structure:** Programs begin with the keyword `omer` and end with `opan`.
  * **Data Types:** Supports variable declarations for `integer`, `float`, and `character` types.
  * **Control Flow:**
      * Conditional statements: `eyer` (if) and `degilse` (else) blocks.
      * Loops: `dondur` (while) loop.
  * **Operators:** Supports arithmetic (`+`, `-`, `*`, `/`), logical (`and`, `or`), and comparison operators (`==`, `!=`, `>`, `<`, etc.).

-----

## 🛠️ Prerequisites

To compile and run this project locally, you need the following tools installed on your system:

  * **Flex (or Lex):** To generate the lexical analyzer.
  * **Bison (or Yacc):** To generate the syntactic analyzer.
  * **GCC:** A C compiler to build the final executable.

-----

## 🚀 Installation and Build

Follow these steps in a Linux/macOS environment or using WSL (Windows Subsystem for Linux).

### 1\. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git
cd YOUR_REPO_NAME/PLC # Adjust path if necessary
```

### 2\. Build the Compiler

Run the following commands sequentially to generate the C source files from Flex and Bison definitions, and then compile the final executable named `mpl`:

```bash
# 1. Generate the Parser C code and y.tab.h file using Bison.
bison -d mpl.y 

# 2. Generate the Lexer C code (lex.yy.c) using Flex.
flex mpl.l

# 3. Compile all C files (lex.yy.c, y.tab.c) into the 'mpl' executable.
gcc lex.yy.c y.tab.c -o mpl
```

### 3\. Run Your MPL Code

To execute an MPL source file (like `myprog.mpl`), use **input redirection** (`<`):

```bash
./mpl < myprog.mpl
```

-----

## 📄 Example Code (`myprog.mpl`)

A snippet from the example source file demonstrating the language syntax:

```mpl
omer
    integer : num1 ;
    float : num2 ;

    num1 = 15 ;
    num2 = 3.14 ;

    eyer (num1 > 10 and num2 != 4.0)
        num1 = num1 + 5 ;
    degilse
        num1 = num1 - 5 ;

    dondur (num1 < 30)
        num1 = num1 + 2 ;
opan
```

-----

## 📧 Contact

  * **Author:** Ömer Opan
  * **GitHub:** https://github.com/NaoP26
  * **Contact Email:** omeropan26@gmail.com
