# Porównanie algorytmów sortowania (C++)

Ten folder zawiera program w języku C++ służący do implementacji oraz porównania wydajności algorytmów sortowania.

## Funkcjonalności
- **MergeSort**: Rekurencyjny algorytm sortowania typu "dziel i zwyciężaj" o złożoności O(n log n).
- **SelectionSort**: Kwadratowy, iteracyjny algorytm sortowania przez wybór o złożoności O(n^2).
- **Pomiar wydajności (Benchmark)**: Mierzy i porównuje czas wykonania obu algorytmów przy użyciu biblioteki `<ctime>`.
- **Weryfikacja poprawności**: Zawiera wbudowane testy sprawdzające, czy tablica została poprawnie posortowana i czy nie wystąpiły błędy.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o sorting_test
./sorting_test
