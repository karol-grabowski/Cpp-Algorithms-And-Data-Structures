# Operacje na Liście Jednokierunkowej w C++

Ten folder zawiera program w języku C++ demonstrujący zaawansowaną manipulację węzłami w dynamicznej liście jednokierunkowej.

## Funkcjonalności
- **Wczytywanie dynamiczne**: Tworzenie listy powiązanej na podstawie danych wprowadzanych bezpośrednio przez użytkownika z konsoli.
- **Logika biznesowa i wyszukiwanie**: Przeszukiwanie listy pod kątem kryteriów liczbowych (rok wejścia na giełdu) i wskaźnikowe śledzenie elementów.
- **Modyfikacja struktury**: 
  - Bezpieczne usuwanie wybranego węzła (np. na podstawie wskaźnika na przedostatni pasujący element) z zachowaniem ciągłości powiązań listy.
  - Wstawianie nowego elementu bezpośrednio na drugą pozycję listy.
- **Zarządzanie pamięcią**: Iteracyjne usuwanie całej listy na końcu programu (`delete`) zapobiegające wyciekom pamięci.

## Jak uruchomić
Skompiluj i uruchom plik `main.cpp` za pomocą dowolnego standardowego kompilatora C++:
```bash
g++ main.cpp -o list_operations
./list_operations
