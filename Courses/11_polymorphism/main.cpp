#include <iostream>

struct Person
{
   Person(std::string const &name) : name_{ name } {};
   virtual ~Person() = default;

   virtual void Say() const { std::cout << "I am a person\n"; }
   virtual void SayName() const = 0;

   std::string Name() const { return name_; }
protected:
   std::string name_{};
};

struct Programmer : public Person
{
   Programmer(std::string const& name, std::string const& lang) : Person{name} , lang_ {lang} {}
   void Say() const override { std::cout << "I do work on " << lang_ << " \n"; }
   void SayName() const override {  std::cout << "Hello my name is: " << name_ << '\n'; };
private:
   std::string lang_{};
};

void SayHello(Person const& person)
{
   person.SayName();
   person.Say();
}

int main()
{
   // auto const Pedro = Person("Pedro");
   // SayHello(Pedro);

   auto const Pablo = Programmer("Pablo", "C++");
   SayHello(Pablo);

   auto const Ana = Programmer("Ana", "C");
   SayHello(Ana);

   return 0;
}