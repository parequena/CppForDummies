#include <iostream>

void imprime(int paraImprimir)
{
   std::cout << "Mi variable: " << paraImprimir << '\n';
}

void sumar1(int& var)
{
   // var = var + 1;
   ++var;
}

int main()
{
   int mi_variable { 10 };
   int& ref{0};
   imprime(10); // 10
   sumar1(13);
   imprime(12); // 11

   return 0;
}