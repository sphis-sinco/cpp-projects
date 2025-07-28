#include <iostream>
#include <string> // makes getline work

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
        std::string name;
        int age;
        int year = 2025;

        std::cout << "What's your name?\n> ";
        std::getline(std::cin >> std::ws, name); // lets you have spaces and (removes?) whitespace

        std::cout << "Hello " << name << "\n";
        std::cout << "What's your age?\n> ";
        std::cin >> age;

        std::cout << name << " of age " << age;

        std::cout << "\nSince it is year " << year << ". You were born " << year - age << ". Or " << year - age - 1 << " if your birthday hasn't happened yet.";

        return 0;
}