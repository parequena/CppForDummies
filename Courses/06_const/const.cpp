#include <iostream>

void imprime(int const paraImprimir) // const-correctness 
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
   // constexpr int k_minimo = 0;
   int mi_variable { 10 };
   int const edad { 30 };
   // const int edad = 30;
   
   imprime(mi_variable); // 10
   sumar1(mi_variable);
   imprime(mi_variable); // 11

   return 0;
}