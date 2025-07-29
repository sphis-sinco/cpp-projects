#include <iostream>
#include <string> // makes getline work

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
        std::string answer;

        int a = 9, b = 10;

        std::cout << "What's " << a << "+" << b << "?\n> ";
        std::getline(std::cin >> std::ws, answer);

        if (answer == "" + (a + b))
        {
                std::cout << "Correct";
        } else if (answer == "21" && a == 9 && b == 10)
        {
                std::cout << "You stupid.";
        } else {
                std::cout << "Incorrect.";
        }

        return 0;
}