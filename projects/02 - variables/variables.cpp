#include <iostream>

int main()
{
        // int (whole number no decimal)
        const int INTEGER = 5;
        // double (number with decimal, a float)
        const double ADOUBLE = 3.14159;
        // single character
        const char CHARACTER = 'A';
        // true/false
        const bool ORIGINAL_ALIVE_VALUE = true;
        bool alive = true;
        // phrase
        const std::string FEELING = "good";

        std::cout << "Hello world!\nHow are you?" << std::endl;
        std::cout << "I'm " << FEELING << ". How about you?" << "\n\n-----\n\n";

        std::cout << "Give me a random integer." << std::endl;
        std::cout << INTEGER << "\n";

        std::cout << "How about a double?" << std::endl;
        std::cout << ADOUBLE << std::endl;

        std::cout << "A character?" << std::endl;
        std::cout << "\"" << CHARACTER << "\"" << std::endl;
        std::cout << "Clever." << std::endl;

        std::cout << "Are you alive?" << std::endl;
        if (alive)
        {
                if (ORIGINAL_ALIVE_VALUE == alive)
                {
                        std::cout << "Yes" << std::endl;
                        std::cout << "Good!" << std::endl;
                }
                else
                {

                        std::cout << "I am now." << std::endl;
                        std::cout << "Good... Wait what?" << std::endl;
                }
        }
        else
        {
                if (ORIGINAL_ALIVE_VALUE == alive)
                {
                        std::cout << "No" << std::endl;
                        std::cout << "Huh?" << std::endl;
                }
                else
                {

                        std::cout << "I am no longer alive." << std::endl;
                        std::cout << "Wait what? Am I talking to a corpse..?" << std::endl;
                }
        }

        return 0;
}