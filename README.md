# cTechTest Rush Assignment Solution

This repository contains the five required C solutions:

- `rush-1-1/`
- `rush-1-2/`
- `rush-1-3/`
- `rush-1-4/`
- `rush-1-5/`

Each delivery directory contains only source/header files and does **not** include a `main` function. The evaluator can add its own `main.c` that calls:

```c
void rush(int x, int y);
```

Invalid dimensions (`x <= 0` or `y <= 0`) print exactly:

```text
Invalid size
```

to standard error.

The output is produced through `my_putchar`, which uses `write`.
