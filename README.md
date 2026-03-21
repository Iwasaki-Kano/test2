# test2

A sample project for demonstrating code review and analysis features.

## Overview

This repository contains intentionally simple (and sometimes buggy) code snippets written in Python and C. It is designed to serve as a playground for testing automated code review tools, GitHub Copilot features, and other development workflows.

## Features

- **Python sample** (`test3.py`): A basic utility function that calculates the average of a list of numbers, including edge-case handling for empty lists.
- **C sample** (`test4.c`): A CSV parsing program that computes the sum and average of comma-separated integers. The implementation intentionally contains common bugs (buffer overflow, missing error handling, integer division) to demonstrate code review scenarios.

## Usage

### Run the Python sample

```bash
python test3.py
```

Expected output:

```
2.5
0
```

### Build and run the C sample

```bash
gcc test4.c -o test4
./test4 1,2,3,4
```

Expected output:

```
sum=10, avg=2.500000
```

