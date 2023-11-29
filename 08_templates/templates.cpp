#include <iostream> 

auto min(auto const lhs, auto const rhs)
{
   return lhs <= rhs ? lhs : rhs;
}

void print_min(auto const lhs, auto const rhs)
{
   auto const min_val = min(lhs, rhs);
   std::cout << "Min value: " << min_val << '\n';
}

int main()
{
   float const a1 = 1.3F;
   float const a2 = 2.3F;
   print_min(a1, a2);
   print_min(1, -7);
   return 0;
}