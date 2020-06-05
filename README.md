# Zadanie 2
Version: 3.7
## Spis tresci
* [Informacje ogolne](#informacje-ogolne)
* [Sposob uzycia](#sposob-uzycia)
* [Instalacja poprzez plik z .tar.gz](#instalacja-poprzez-plik-z-.tar.gz)
* [Historia wersji](#historia-wersji)
* [Licencja](#licencja)
* [Autor](#autor)

## Informacje ogolne
Program ma na celu liczenie pola kwadratu i objetosci szescianu o boku podanym przez uzytkownika. \
Uzytkownik podaje liczbe zmiennoprzecinkowa, a progam Wypisuje pole i objetosc.\
Program jest napisany strukturalnie w jezyku C. 

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
$ sudo gcc -v
$ make
```
Ustawienie kompilatora (sudo gcc -v) wystarczy zrobic tylko raz na systemie operacyjnym.

4.Program uruchomiany jest nastepujaco:
```sh
$ ./src/main
```

## Instalacja poprzez plik z .tar.gz
Instrukcja instalacji poprzez plik z archiwum znajduje sie w pliku [INSTALL.md](INSTALL.md "Link do pliku INSTALL.md")

## Historia wersji
+ 1.X - Program uzywa plikow .c i .h do liczenia pola i objetosci
  + 1.6 - Program jest w pelni funkcjonalny
+ 2.X - Program tworzy i uzywa bibliotek statycznych .a
  + 2.2 - Program jest w pelni funkcjonalny
+ 3.X - Program tworzy i uzywa bibliotek statycznych .a i dynamicznych .la
  + 3.4 - Program jest w pelni funkcjonalny

## Licencja
Licencja MIT zawarta w pliku LICENSE

## Autor
Autorem repozytorium jest [Tomasz Wiejak](https://github.com/zomsik "Link do profilu github") \
Podziekowania dla [Barisa Yuksela](https://www.youtube.com/channel/UCibKclzsnnHjQZFOLuykZ1A "Kanal na Youtube") za poradnik na Youtubie odnosnie automake \
oraz dla spolecznosci [stackoverflow.com](https://stackoverflow.com/) za rozwianie wszelkich watpliwosci.
