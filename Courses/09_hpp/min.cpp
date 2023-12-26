#include "min.hpp"

int min_2_int(int const lhs, int const rhs)
{
   return lhs <= rhs ? lhs : rhs;
}

int min_3_int(int const lhs, int const rhs, int const ohs)
{
   auto const min_2 = min_2_int(lhs, rhs);
   return min_2 <= ohs ? min_2 : ohs;
}