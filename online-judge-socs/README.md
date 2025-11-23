# SOCS Online Judge Problems

This directory contains solutions to problems from the SOCS (School of Computer Science) Online Judge platform.

## Organization

Problems can be organized by:
- **Problem ID**: Using the problem identifier from the online judge
- **Difficulty**: `easy/`, `medium/`, `hard/`
- **Topic**: `graph/`, `dynamic-programming/`, `greedy/`, etc.
- **Contest**: If from a specific contest

## Example Structure

```
online-judge-socs/
├── problem-001/
│   ├── solution.cpp
│   ├── README.md
│   └── test-cases/
│       ├── input1.txt
│       └── output1.txt
├── problem-002/
│   └── solution.java
└── README.md (this file)
```

## Problem Directory Contents

Each problem directory should ideally contain:
- **Solution code**: The accepted solution
- **README.md**: Problem description, approach, and notes
- **Test cases** (optional): Sample inputs and expected outputs
- **Alternative solutions** (optional): Different approaches to the same problem

## Naming Convention

- Use descriptive names when possible: `two-sum.cpp`, `fibonacci-sequence.py`
- Or use problem ID: `socs-0001.cpp`, `oj-142.java`
- Include verdict/status in comments if helpful (e.g., // Accepted, // 100 points)
