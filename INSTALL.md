
# Instalacja programu poprzez plik .tar.gz

1.Zainstaluj wszystkie wymagane pakiety:
```sh
$ sudo apt-get install autoconf automake libtool
```

2.Pobierz z folderu archive interesujaca Cie wersje programu. \
Informacja o sposobie dzialania kazdej wersji znajduje sie w pliku [README.md](README.md "Plik README.md")

3.Rozpakuj plik przy pomocy polecenia:
```sh
$ tar -xf zad2-(VERSION).tar.gz
```
Na przyklad:
```sh
$ tar -xf zad2-3.7.tar.gz
```

4.Skompiluj rozpakowane pliki poleceniem:
```sh
$ aclocal && autoconf && automake && ./configure && make
```

5.Uruchom skompilowany program poleceniem:
```sh
$ ./src/main
```
