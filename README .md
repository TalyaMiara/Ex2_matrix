# Assignment 2 – Operator Overloading for Square Matrices

## student information:
- name: Talya Miara
- id: 325612695
- gmail: taliyam123@gmail.com
##
## Project Overview
This assignment focuses on practicing key concepts including:
- Operator overloading  
- Friend functions  
- The Rule of Three  
##
## Project Structure

The code is organized modularly into the following files:

- `SquareMat.hpp` – Class declaration.
- `SquareMat.cpp` – Implementation of the class functions and overloaded operators.
- `main.cpp` – Demonstration of class usage.
- `test.cpp` – Unit tests (using doctest).
- `makefile` – Contains all required build/test commands.
- `README.md` – This file.
- `doctest.h`
##
## Namespace and Class
All classes are encapsulated in a namespace called `matrix`.
##
### Class: `SquareMat`

This class represents a square matrix of real numbers and includes the following operator overloads:

| Operator              | Description                                      |
|-----------------------|--------------------------------------------------|
| `+`                   | Add two matrices                                 |
| `-`                   | Subtract one matrix from another                 |
| `-mat`                | Flip the sign of each element                    |
| `*`                   | Multiply two matrices                            |
| `scalar * mat`        | Multiply matrix by scalar (left)                 |
| `mat * scalar`        | Multiply matrix by scalar (right)                |
| `mat1 % mat2`         | Element-wise multiplication                      |
| `mat % int`           | Modulo of each element with an integer           |
| `/`                   | Divide all elements by scalar                    |
| `^`                   | Raise matrix to a power                          |
| `++` / `--`           | Add or subtract 1 to each element (pre/post)     |
| `~mat`                | Transpose the matrix                             |
| `mat[i][j]`           | Access or change a specific element              |
| `==`, `!=`            | Compare matrices by total sum of elements        |
| `<`, `>`, `<=`, `>=`  | Compare matrices by sum of elements              |
| `!mat`                | Calculate the determinant                        |
| `+=`, `-=`, `*=`,     | Do operation and update the matrix               |
| `/=`, `%=`            | (continued compound assignments)                 |
| `>>`                  | Print the matrix                                 |