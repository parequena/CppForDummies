#pragma once

#include <iostream>

void imprime(auto const toPrint) // const-correctness 
{
   std::cout << "Var: " << toPrint << '\n';
}