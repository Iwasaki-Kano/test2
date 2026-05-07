# test2

A lightweight demo project for exploring [GitHub Copilot](https://github.com/features/copilot) and its coding agent capabilities.

## Overview

This repository serves as a sandbox for testing AI-assisted development workflows — including automated code review, documentation improvements, and pull request generation via GitHub Copilot Agent.

It contains small, intentionally simple (and sometimes intentionally buggy) source files across multiple languages to demonstrate how Copilot can analyze, suggest, and apply changes.

## Features

- Multi-language sample code (Python, C)
- Intentionally buggy implementations for code-review demos
- Minimal Node.js project scaffold for CI/CD experimentation
- Ready-to-use GitHub Copilot agent task examples

## Setup

**Prerequisites**

- Node.js ≥ 18
- Python ≥ 3.8
- A GitHub account with GitHub Copilot enabled

**Install dependencies**

```bash
git clone https://github.com/Iwasaki-Kano/test2.git
cd test2
npm install
```

## Usage

### Run the Node.js scripts

```bash
npm run build   # prints "build ok"
npm test        # prints "OK"
```

### Run the Python sample

```bash
python test3.py
```

### Compile and run the C demo

```bash
gcc -o review_demo test4.c
./review_demo 1,2,3
```

> **Note:** `test4.c` contains intentional bugs and unsafe patterns — it is designed for use as a Copilot code-review demo, not for production use.

## Contributing

1. Fork the repository and create a feature branch.
2. Make your changes with clear, focused commits.
3. Open a pull request describing what you changed and why.
4. Assign a Copilot agent task if you would like AI-assisted review or code generation.

Contributions that add new language examples or improve existing demos are especially welcome.

