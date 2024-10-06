# American Call Option Pricer

## Information
This repository provides an American Call Option pricer using the **Black-Scholes-Merton** method. The project aims to value American-style call options using the established financial model. The project follows the [following paper's](https://web.iese.edu/PabloFernandez/docs/FN-0425.pdf) maths.

## Installation
To install and build the project, follow these steps:

1. Create a `build` directory in the project root:
```bash
   mkdir build
```
2. Navigate to the `build` directory:
```bash
   mkdir build
```
3. Run cmake to generate the `build system`:
```bash
   cmake ..
```
4. Build and install the project
```bash
   cmake --install . --config Release
```
5. Run from \build\bin\Release
```bash
   blackscholes.exe
```
