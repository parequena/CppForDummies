#include <iostream>
#include <vector>

int main()
{
   int edad = 20;
   std::vector<int> coord { 1, 3, 3, 5, 6 };
   bool aprendiendo { false };
   
   if(aprendiendo)
   {
      std::cout << "Estoy aprendiendo\n";
   }

   switch (edad)
   {
   case 18:
      std::cout << "Tengo 18!\n";
      break;
   
   default:
      std::cout << "No tengo edad asginada\n";
      break;
   }

   for(int i{ 1 }; i < 6; i += 2)
   {
      std::cout << i << "\tBucle.";
   }


   for( int c : coord)
   {
      std::cout << c << '\n';
   }

   return 0;
}