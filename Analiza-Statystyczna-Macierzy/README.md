# Analiza Statystyczna i Przetwarzanie Macierzy (C++)

Ten folder zawiera program w języku C++ demonstrujący zaawansowane obliczenia statystyczne na dwuwymiarowej tablicy liczb zmiennoprzecinkowych (`double`).

## Funkcjonalności
- **Losowe generowanie danych**: Wypełnianie macierzy o wymiarach 7x6 wartościami pseudolosowymi z zadanego przedziału przy użyciu funkcji `rand()` i `srand()`.
- **Analiza wierszowa (Średnie)**: Obliczanie i wyświetlanie średniej arytmetycznej dla każdego wiersza macierzy w trakcie jej formatowanego drukowania.
- **Warunkowa modyfikacja danych**: Tworzenie "drugiej tablicy" w oparciu o logikę biznesową – elementy mniejsze od średniej w swoim wierszu są automatycznie zastępowane wartością tej średniej.
- **Analiza kolumnowa (Maksima)**: Przeszukiwanie macierzy pionowo (kolumna po kolumnie) w celu wyznaczenia i wypisania najwyższej wartości w każdej kolumnie.
- **Formatowanie wyjścia**: Precyzyjne wyrównywanie i zaokrąglanie wyników do 2 miejsc po przecinku przy użyciu biblioteki `<iomanip>`.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o matrix_stats
./matrix_stats
