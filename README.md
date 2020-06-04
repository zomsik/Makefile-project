# Zadanie 2

Version: 3.3

Program jest napisany strukturalnie w jezyku C. \
Program ma na celu liczenie pola kwadratu i objetosci szescianu o boku podanym przez uzytkownika. \
Uzytkownik podaje liczbe zmiennoprzecinkowa, a progam Wypisuje pole i objetosc.

## Sposob uzycia
1.Pobrac wszystkie pliki. \
2.Zaintalowac wymagane pakiety:
```sh
$ sudo apt-get install autconf
$ sudo apt-get install automake
$ sudo apt-get install libtool
```

3.W konsoli wpisywac w folderze glownym (folder z configure.ac):
```sh
$ libtoolize
$ aclocal
$ automake --add-missing
$ autoconf
$ automake
$ ./configure
$ sudo gcc-v
$ make
```
4.Program uruchomiany jest nastepujaco:
```sh
$ ./src/main
```

## Licencja
Licencja MIT zawarta w pliku LICENSE

## Historia wersji
+ 1.X - Program uzywa plikow .c i .h do liczenia pola i objetosci
  + 1.6 - Program jest w pelni funkcjonalny
+ 2.X - Program tworzy i uzywa bibliotek statycznych .a
  + 2.2 - Program jest w pelni funkcjonalny
+ 3.X - Program tworzy i uzywa bibliotek statycznych .a i dynamicznych .la
