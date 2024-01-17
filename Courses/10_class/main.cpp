#include <iostream>

void printName(std::string const &age)
{
   std::cout << "Name: " << age << '\n';
}

void printAge(int const age)
{
   std::cout << "Age: " << age << '\n';
}

struct Person
{
   Person(std::string const& name, int const age, bool const isProgrammer)
      : name_{ name }
      , age_{ age }
      , isProgrammer_{ isProgrammer }
   { }

   ~Person()
   {
      name_ = "";
      age_ = 0;
      isProgrammer_ = false;
   }

   std::string Name() const { return name_; }
   int Age() const { return age_; }
private:
   std::string name_{};
   int age_{};
   bool isProgrammer_{};
};

int main()
{
   Person const pablo = Person("Pablo", 30, true);

   printName(pablo.Name());
   printAge(pablo.Age());

   return 0;
}