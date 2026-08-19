# 04 — Functions, Pointers and References / Функции, указатели и ссылки

Three files, three ways of passing an argument to a function. Each one prints
addresses as well as values.

Три файла, три способа передать аргумент в функцию. Каждый печатает не только
значения, но и адреса.

| File | What the code does | Что делает код |
|---|---|---|
| `pass_by_value.cpp` | `void p(int x)` assigns `x = 100` inside the function. The caller prints `age` and `&age` before the call, the function prints `x` and `&x` inside — the addresses differ | `void p(int x)` присваивает `x = 100` внутри функции. Вызывающий печатает `age` и `&age` до вызова, функция печатает `x` и `&x` внутри — адреса разные |
| `pass_by_pointer.cpp` | `void pomena(int* x)` does `*x = 100`; called as `pomena(&age)`. `age` is printed before and after the call | `void pomena(int* x)` делает `*x = 100`; вызывается как `pomena(&age)`. `age` печатается до и после вызова |
| `pass_by_reference.cpp` | `void obmen(int& a, int& b)` swaps two values through a `temp` variable. Values and addresses are printed before and after | `void obmen(int& a, int& b)` меняет местами два значения через переменную `temp`. Значения и адреса печатаются до и после |
