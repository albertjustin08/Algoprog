# Algoprog

A repository for storing coding exercises and solutions from AlgoProg lab sessions and SOCS online judge problems.

## Repository Structure

```
Algoprog/
├── labs/              # Lab exercises from AlgoProg
│   ├── lab01/        # Lab 1 exercises
│   ├── lab02/        # Lab 2 exercises
│   └── ...
├── online-judge/     # SOCS online judge problems
│   ├── problem-001/  # Problem solutions
│   ├── problem-002/
│   └── ...
└── README.md         # This file
```

## How to Use

### Adding Lab Exercises

Create a new directory under `labs/` for each lab session:
```bash
mkdir -p labs/lab01
```

Add your solution files with descriptive names:
```bash
# Example for C/C++
labs/lab01/problem_name.c
labs/lab01/problem_name.cpp

# Example for other languages
labs/lab01/problem_name.java
labs/lab01/problem_name.py
```

### Adding Online Judge Problems

Create a directory for each problem under `online-judge/`:
```bash
mkdir -p online-judge/problem-name
```

Include:
- Solution file(s)
- Problem description (optional, as comment or separate file)
- Test cases (optional)

## Supported Languages

- C/C++
- Java
- Python
- And other programming languages as needed

## Notes

- Executable files and compiled binaries are excluded via `.gitignore`
- Focus on keeping source code only
- Use meaningful names for your solution files