# Analiza Napisów i Cykliczne Przesunięcie Tablicy (C++)

Ten folder zawiera program w języku C++ demonstrujący walidację danych wejściowych, przetwarzanie ciągów znaków (`string`) oraz algorytmiczne modyfikowanie tablic jednowymiarowych.

## Funkcjonalności
- **Walidacja wejścia**: Pętla z warunkiem (`do-while`) wymuszająca na użytkowniku podanie poprawnej cyfry jednocyfrowej dodatniej.
- **Analiza napisów**: Wprowadzanie dynamicznej liczby napisów, sprawdzanie warunku logicznego (czy pierwszy i ostatni znak napisu są identyczne) oraz obliczanie średniej długości spełniających warunek ciągów.
- **Obsługa tablic jednowymiarowych**: Wczytywanie i wyświetlanie tablicy znaków (`char A[n]`) o stałym rozmiarze.
- **Cykliczne przesunięcie w prawo**: Algorytm przemieszczający wszystkie elementy tablice o jedną pozycję w prawo z zachowaniem ostatniego elementu na początku za pomocą zmiennej pomocniczej (`schowek`).

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o string_shift_app
./string_shift_app
