# Compiler Design Project

## Overview

This Compiler Design project is aimed at creating a compiler that performs lexical analysis, syntax analysis, semantic analysis, and intermediate code generation. Additionally, it identifies basic blocks within the input code. 

## Learnings

**Lexical Analysis**: It converts the source code into tokens, identifying basic building blocks like keywords and identifiers.

**Syntax Analysis**: It checks the code's structure based on grammar rules, ensuring it conforms to the language's syntax.

**Semantic Analysis**: It verifies the code's meaning and checks for logical errors.

**Intermediate Code Generation**: It produces an abstract representation of the source code, often simpler than the source code itself.

**Identifying Basic Blocks**: It isolates continuous sequences of code with single entry and exit points, useful for optimization and analysis in compilers.


## Setup

Follow these steps to get started with the setup project:

### Prerequisites

``Flex`` and ``Yacc`` are required to run this project. You can install them by running,

```shell
sudo apt-get install bison flex
```

**Clone the Repository**:

```shell
git clone https://github.com/Machine-Impossible/sala.git
cd sala
```

### Running the project

Make sure you write the input in sala lang in the **example.sal** and run from the root of the repository.

```shell
./runsal.sh
```