# cpp-learning

C++ practice programs written while learning the language from scratch.
Each file is a small standalone program covering one topic. Files are grouped
into folders from simpler to more advanced.

Учебные программы на C++, написанные в процессе изучения языка с нуля.
Каждый файл — отдельная небольшая программа на одну тему. Файлы разложены
по папкам от простого к сложному.

| Folder / Папка | Topic / Тема | Files |
|---|---|---|
| [`01-basics`](01-basics) | Output, input, variables, types / Вывод, ввод, переменные, типы | 7 |
| [`02-control-flow`](02-control-flow) | `if`/`else`, `while`, `for` / Ветвления и циклы | 7 |
| [`03-arrays`](03-arrays) | Fixed-size arrays / Массивы фиксированного размера | 2 |
| [`04-functions-and-references`](04-functions-and-references) | Passing by value, pointer, reference / Передача по значению, указателю, ссылке | 3 |
| [`05-memory-and-pointers`](05-memory-and-pointers) | Stack, heap, `new`/`delete` / Стек, куча, `new`/`delete` | 6 |
| [`06-modern-cpp`](06-modern-cpp) | `unique_ptr` | 1 |

Each folder has a README listing what every file does.
В каждой папке README со списком того, что делает каждый файл.

## Language features used / Что использовано в коде

`std::cout`, `std::cin`, `std::endl`, `std::string`, `int`, `double`, `char`,
`if` / `else if` / `else`, `%`, `while`, `for`, C-style arrays, functions with
`void` and non-`void` return types, `&` (address-of), pointers, `*` (dereference),
references (`int&`), `new` / `delete`, `nullptr`, `rand()` / `srand()` / `time()`,
`std::unique_ptr`, `std::make_unique`.

## Build and run / Сборка и запуск

Every file compiles on its own / Каждый файл компилируется отдельно:

```bash
g++ -std=c++17 -Wall -Wextra 01-basics/hello.cpp -o hello
./hello
```
