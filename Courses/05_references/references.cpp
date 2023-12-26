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
   
   imprime(mi_variable); // 10
   sumar1(mi_variable);
   imprime(mi_variable); // 11

   return 0;
}