#include <iostream>
#include <vector>

int main()
{
   int i = 5.8; // entero
   std::cout << "i: " << i << '\n';

   float d = 5.8; // entero
   std::cout << "d: " << d << '\n';

   char c = 'P';
   std::cout << "c: " << c << '\n';

   int coord_x = 1;
   int coord_y = 3;

   std::vector<int> coord { 1, 3, 3, 5, 6 };
   std::cout << '[' << coord[0] << ',' << coord[2] << "]\n";

   std::string palabra = { "Pablo" };

   std::cout << "palabra: " << palabra << '\n';

   bool cierto = true;
   bool falso = false;

   return 0;
}