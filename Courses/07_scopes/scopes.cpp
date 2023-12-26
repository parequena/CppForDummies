#include <iostream>

static constexpr int k_minima_edad = 0;

void imprime(int const paraImprimir) // const-correctness 
{
   std::cout << "Mi variable: " << paraImprimir << '\n';
}

int main()
{
   int const edad { 30 };
   imprime(edad);

   { // scope de temperatura
      int const temperatura { 13 };
      imprime(edad);
      imprime(temperatura);
   }
   imprime(k_minima_edad);

   return 0;
}