# 07_scopes

[**Castellano**](#Castellano) - Esta documentación se realiza en varios idiomas.</br>
[**English**](#English) - This documentation has been written in multiple languages.</br></br>


## Castellano
---

En este vídeo comentamos y por fín introducimos el término `scope`, ya comentado alguna vez en algunos de los vídeos que hemos subido ya, además, introducimos el término `static` y revisamos el término `constexpr`, además de comentar (por encima) que `int main` tiene una sorpresa, y es que viene con argumentos
``` cpp
int main(int const argc, char const * const argv[]) // Prefiero esta forma de ponerlo, que la canónica.
{
   return 0;
}
```


## English
---

In this video, we discuss and finally introduce the term `scope`, which has been mentioned in some of the videos we have previously uploaded. Additionally, we introduce the term `static` and review the term `constexpr`. We also briefly mention that `int main` has a surprise, namely, it comes with arguments.
``` cpp
int main(int const argc, char const * const argv[]) // I do really like this way, more than the normal one.
{
   return 0;
}
```
