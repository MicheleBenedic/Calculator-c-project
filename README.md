# CLI Calculator

A simple, interactive command-line calculator written in C. It allows you to perform a chain of mathematical operations on a running total.

## Features

The calculator supports both binary and unary operations:

**Basic Arithmetic:**

* `+` : Addition
* `-` : Subtraction
* `*` : Multiplication
* `/` : Division

**Advanced Math:**

* `m` : Modulo (using `fmod` for floating-point numbers)
* `^` : Power
* `v` : Square Root (unary operation)
* `l` : Natural Logarithm (unary operation)

## Getting Started

### Prerequisites

To compile and run this project, you will need:
A C compiler (e.g., `gcc`)

* `make`

### Compilation

1. Clone the repository or download the source files.
2. Navigate to the project directory in your terminal.
3. Run the `make` command. If your makefile is named `Makefile.mk`, use `make -f Makefile.mk`.

    ```bash
    # If you rename Makefile.mk to Makefile
    make

    # Or, using the current filename
    make -f Makefile.mk
    ```

4. This will create an executable file named `calculator`.

## Usage

Run the program from your terminal:

```bash
./calculator
```

The application will first ask for a starting number. Then, you can enter an operator and, if required, another number. The calculation is performed, and the current result is displayed. You can continue this chain of operations until you enter `=` to see the final result and exit the program.

### Example Session

```bash
$ ./calculator
         CLI CALCULATOR APPLICATION
           A simple math calculator written in C
 Useful for simple...                        +,-,*,/,module (m)
 And not so simple operations!               ^, v, l

Enter a starting number: 100
Enter an operator (+, -, *, /, ^, m, v, l) or '=' to see the result: /
Enter a number: 4
Current result: 25.00

Enter an operator (+, -, *, /, ^, m, v, l) or '=' to see the result: v
Current result: 5.00

Enter an operator (+, -, *, /, ^, m, v, l) or '=' to see the result: =

Final result: 5.00
```

To clean up the compiled files, you can run `make clean` (or `make -f Makefile.mk clean`).
