# Przetwarzacz Listy Jednokierunkowej z Pliku (C++)

Ten folder zawiera program w języku C++ demonstrujący zaawansowane operacje na dynamicznej liście jednokierunkowej, w tym odczyt danych wejściowych z pliku tekstowego oraz manipulację węzłami (usuwanie i warunkowe wstawianie elementów).

## Funkcjonalności
- **Obsługa plików**: Wczytywanie danych struktur (nazwa firmy, siedziba, rok wejścia na giełdę) bezpośrednio z pliku zewnętrznego (`Dane.txt`) za pomocą strumienia `ifstream`.
- **Zarządzanie strukturami wskaźnikowymi**: Tworzenie dynamicznej listy powiązanej od zera i alokowanie pamięci w stercie (`new`/`delete`).
- **Operacje na liście**: 
  - Filtrowanie i usuwanie węzłów na podstawie zadanych kryteriów logicznych (wyszukiwanie znaków i porównywanie wartości).
  - Warunkowe wstawianie nowego elementu na określoną pozycję w liście.
- **Bezpieczne czyszczenie pamięci**: Iteracyjne usuwanie całej listy na zakończenie działania programu w celu uniknięcia wycieków pamięci (memory leaks).

## Jak uruchomić
1. Upewnij się, że w tym samym katalogu znajduje się plik tekstowy `Dane.txt` z danymi wejściowymi.
2. Skompiluj i uruchom plik `main.cpp`:
```bash
g++ main.cpp -o list_app
./list_app
