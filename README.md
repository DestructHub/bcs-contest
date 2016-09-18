# Brazilian Computer Society Programming Marathon

> [The Programming Marathon](http://maratona.ime.usp.br/) is an event of the Brazilian Computer Society
> that exists since 1996. The marathon born from the classificatory regional contests
> for ACM's International Collegiate Programming Contest and it's part of the south american
> regional of the contest.

## Solving

Our folder structure:

```
.
└── 2016
    ├── Main
    │   └── A
    │       ├── C
    │       │   └── solution_1.c
    │       ├── Python
    │       │   └── solution_1.py
    │       └── __TESTS__
    │           ├── A_1.in
    │           └── A_1.out
    └── Warming
```

Solutions paths must follow the `{year}/{event}/{problem}/{language}/solution_{id}.{ext}` pattern.

All solutions **must** read from the `stdin` then output to the `stdout` as the problem ask you to do.

For input and output samples read the `__TESTS__/*.in` and `__TESTS__/*.out` files in your problem folder.

## Helper

We provide you a python 3 `test` script at the root. You may use it as:

```sh
./test year problem lang solution_number [--event Main] 
```

Alternatively you can use `python3 test [args]`.
