# Macierz Struktur Studentów (C++)

Ten folder zawiera program w języku C++ demonstrujący zaawansowaną dwuwymiarową strukturę danych (siatkę obiektów `struct`) oraz algorytmy przetwarzania danych z podziałem na obwód i wnętrze macierzy.

## Funkcjonalności
- **Dwuwymiarowa struktura danych (`SStudent A[w][k]`)**: Przechowywanie siatki rekordów zawierających inicjały oraz punkty studentów.
- **Losowe generowanie danych**: Automatyczne wypełnianie całej macierzy wartościami losowymi przy użyciu funkcji `rand()` i `srand()`.
- **Analiza obwodu (Krawędzie)**: Algorytm wyszukujący studenta z najwyższą liczbą punktów wyłącznie na zewnętrznym obwodzie macierzy (pierwszy/ostatni wiersz oraz pierwsza/ostatnia kolumna).
- **Analiza wewnętrzna**: Algorytm wyszukujący studenta z najniższą liczbą punktów w wewnętrznej części siatki (z pominięciem obwodu).
- **Operacje na rekordach**: Bezpośrednia zamiana miejscami dwóch wybranych rekordów w pamięci za pomocą zmiennej pomocniczej typu `SStudent` (`schowek`).
- **Formatowanie wyjścia**: Przejrzyste wyświetlanie macierzy przed i po modyfikacji przy użyciu manipulatorów biblioteki `<iomanip>`.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o student_grid
./student_grid
