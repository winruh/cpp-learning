# 06 — Modern C++ / Современный C++

| File | What the code does | Что делает код |
|---|---|---|
| `unique_ptr.cpp` | Creates `std::unique_ptr<int>` and `std::unique_ptr<double>` with `std::make_unique`, dereferences them with `*`, assigns new values, and passes the dereferenced values through two functions (`udvoy` for `int`, `dabl` for `double`). No `new`, `delete` or `nullptr` in the file | Создаёт `std::unique_ptr<int>` и `std::unique_ptr<double>` через `std::make_unique`, разыменовывает через `*`, присваивает новые значения и пропускает разыменованные значения через две функции (`udvoy` для `int`, `dabl` для `double`). В файле нет ни `new`, ни `delete`, ни `nullptr` |
