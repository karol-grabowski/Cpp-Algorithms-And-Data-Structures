# Menedżer Rekordów Studentów (C++)

Ten folder zawiera program w języku C++ demonstrujący pracę ze strukturami danych, tablicami oraz mechanizmem referencji.

## Funkcjonalności
- **Struktura danych (`SStudent`)**: Przechowywanie złożonych informacji o studentach (inicjały imienia i nazwiska jako `char`, punkty/oceny jako `double`).
- **Generator liczb pseudolosowych**: Automatyczne generowanie losowych inicjałów oraz ocen w określonym zakresie przy użyciu `<cstdlib>` i `<ctime>`.
- **Przekazywanie przez referencję**: Wykorzystanie referencji (`double &reff`) do przekazania obliczonej średniej arytmetycznej z funkcji z powrotem do funkcji `main`.
- **Formatowanie wyjścia**: Użycie biblioteki `<iomanip>` (`fixed`, `setprecision`, `setw`) do estetycznego wyświetlania danych w konsoli.
- **Analiza statystyczna**: Obliczanie najwyższej oceny oraz porównywanie średnich wyników dwóch grup studentów.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o student_manager
./student_manager
