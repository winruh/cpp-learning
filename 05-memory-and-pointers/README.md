# 05 — Memory: Stack and Heap / Память: стек и куча

Suggested reading order / Порядок чтения:

| # | File | What the code does | Что делает код |
|---|---|---|---|
| 1 | `address_of.cpp` | Prints the value of `age` and its address via `&age` | Печатает значение `age` и его адрес через `&age` |
| 2 | `pointer_reassign.cpp` | `int* p = &age;` then `p = &year;` then `*p = 100;` — both `age` and `year` are printed afterwards | `int* p = &age;` затем `p = &year;` затем `*p = 100;` — после этого печатаются и `age`, и `year` |
| 3 | `stack_frames.cpp` | A function with a local `int x` prints `&x`; the function is called three times in a row | Функция с локальной `int x` печатает `&x`; функция вызывается три раза подряд |
| 4 | `heap_new_delete.cpp` | `int* p = new int` next to a stack `int y` with the same value; prints `*p`, `p` and `&y`, then `delete p; p = nullptr;` | `int* p = new int` рядом со стековым `int y` с тем же значением; печатает `*p`, `p` и `&y`, затем `delete p; p = nullptr;` |
| 5 | `heap_factory.cpp` | `int* udvoy(int)` allocates with `new`, writes `chislo * 2` and returns the pointer. `main` calls it twice, prints values and addresses, then `delete`s both and sets them to `nullptr` | `int* udvoy(int)` выделяет память через `new`, записывает `chislo * 2` и возвращает указатель. `main` вызывает её дважды, печатает значения и адреса, затем делает `delete` обоим и присваивает `nullptr` |
| 6 | `memory_leak.cpp` | A version that leaks (`q = sozday(10);` immediately overwritten by `q = sozday(30);`, only the second block is deleted) followed by the corrected version, with the author's own written explanation between them | Версия с утечкой (`q = sozday(10);` сразу перезаписывается `q = sozday(30);`, удаляется только второй блок), а следом исправленная версия, с собственным письменным объяснением между ними |

> `memory_leak.cpp` holds both versions in one file for comparison, so it has two
> `main()` functions and does not compile as a single translation unit.
>
> `memory_leak.cpp` содержит обе версии в одном файле для сравнения, поэтому в нём
> два `main()` и как единица трансляции он не компилируется.
