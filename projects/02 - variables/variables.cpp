#include <iostream>

int main()
{
        // int (whole number no decimal)
        int integer = 5;
        // double (number with decimal, a float)
        double adouble = 3.14159;
        // single character
        char character = 'A';
        // true/false
        bool alive = true;
        // phrase
        std::string feeling = "good";

        std::cout << "Hello world!\nHow are you?" << std::endl;
        std::cout << "I'm " << feeling << ". How about you?" << "\n\n-----\n\n";

        std::cout << "Give me a random integer." << std::endl;
        std::cout << integer << "\n";

        std::cout << "How about a double?" << std::endl;
        std::cout << adouble << std::endl;

        std::cout << "A character?" << std::endl;
        std::cout << "\"" << character << "\"" << std::endl;
        std::cout << "Clever." << std::endl;

        std::cout << "Are you alive?" << std::endl;
        if (alive)
        {
                std::cout << "Yes" << std::endl;
                std::cout << "Good!" << std::endl;
        }
        else
        {
                std::cout << "No" << std::endl;
                std::cout << "Huh?" << std::endl;
        }

        return 0;
}