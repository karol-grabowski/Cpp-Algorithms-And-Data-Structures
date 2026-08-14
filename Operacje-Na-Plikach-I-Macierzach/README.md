# Operacje na Plikach i Macierzach Liczbowych (C++)

Ten folder zawiera program w języku C++ demonstrujemy operacje wejścia-wyjścia na plikach (`ifstream`, `ofstream`) oraz zaawansowaną manipulację macierzą dwuwymiarową typu `double`.

## Funkcjonalności
- **Obsługa strumieni plików**: Odczyt danych macierzy z pliku zewnętrznego (`daneR.txt`) oraz dynamiczny zapis przefiltrowanych wyników do pliku o nazwie wskazanej przez użytkownika.
- **Inicjalizacja i formatowanie**: Ustawianie stałych konfiguracyjnych oraz precyzyjne formatowanie wyjścia liczbowego w konsoli i plikach za pomocą biblioteki `<iomanip>` (`fixed`, `setprecision`, `setw`).
- **Analiza macierzi**: Wyszukanie najmniejszej wartości na głównej przekątnej tablicy kwadratowej.
- **Modyfikacja struktury**: 
  - Masowa zmiana wartości całego wiersza na znalezione minimum.
  - Zamiana miejscami elementów leżących na przeciwnych rogach (skrajnych elementach antydiagonalnych).
- **Selektywny zapis**: Zapisywanie do pliku wyjściowego wyłącznie co drugiego wiersza zmodyfikowanej macierzy.

## Jak uruchomić
1. Upewnij się, że w folderze z programem znajduje się plik tekstowy `daneR.txt` z odpowiednimi danymi wejściowymi.
2. Skompiluj i uruchom plik `main.cpp`:
```bash
g++ main.cpp -o matrix_file_app
./matrix_file_app
