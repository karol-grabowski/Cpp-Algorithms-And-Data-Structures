# Operacje na Macierzach Znakowych w C++

Ten folder zawiera program w języku C++ demonstrujący zaawansowaną manipulację dwuwymiarowymi tablicami znaków (macierzami).

## Funkcjonalności
- **Dynamiczne generowanie**: Funkcja wypełniająca tablicę dwuwymiarową losowymi znakami z podanego przedziału ASCII (np. litery alfabetu lub cyfry) przy użyciu `rand()` i `srand()`.
- **Formatowanie wyjścia**: Przejrzyste, macierzowe wyświetlanie zawartości tablicy w konsoli z użyciem manipulatora `setw`.
- **Przeszukiwanie i modyfikacja warunkowa**: Algorytm sprawdzający obecność konkretnego znaku w wierszach macierzy – jeśli dany znak nie występuje w wierszu, cały wiersz zostaje zastąpiony nowym znakiem (`wypelnij`).
- **Praca z wieloma instancjami**: Operowanie na niezależnych macierzach znaków (`Li` dla liter, `Cy` dla cyfr) w ramach funkcji `main`.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o matrix_app
./matrix_app
