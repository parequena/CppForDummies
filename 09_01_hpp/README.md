# 9_hpp

[**Castellano**](#Castellano) - Esta documentación se realiza en varios idiomas.</br>
[**English**](#English) - This documentation has been written in multiple languages.</br></br>


## Castellano
En este vídeo, creamos nuestro primer fichero de cabecera `.hpp` además, comentamos por encima lo que hacen los include guards, además, hablamos de los flags de compilación así como el porqué tenemos que compilar todos los ficheros `.cpp`.

##### Flags
- `-c` | Compila el fichero `.cpp` para convertirlo en un fichero `.o`.
- `-I` | Añade un directorio para la búsqueda de ficheros para incluir.
- `-o` | Nombra la salida de un fichero (ya sea `.o` o un ejecutable).

``` cpp
#ifndef CPP_FOR_DUMMIES // Include guard
#define CPP_FOR_DUMMIES
// .....
#endif

#pragma once // También Include guard.
```
</br>


## English
In this video, we create our first .hpp header file. Additionally, we briefly explain what include guards do. We also discuss compilation flags and the reason why we need to compile all .cpp files.

##### Flags
- `-c` | Compiles the `.cpp` file to produce a `.o` file.
- `-I` | Adds a directory for searching for files to include.
- `-o` | Names the output file (either `.o` or an executable).

``` cpp
#ifndef CPP_FOR_DUMMIES // Include guard
#define CPP_FOR_DUMMIES
// .....
#endif

#pragma once // Also Include guard.
```
