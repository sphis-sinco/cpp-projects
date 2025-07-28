#include <iostream>

int main()
{
        double x = (int) 3.14;
        std::cout << x << std::endl;

        // char y = 100; // d
        char y = (char) 100; // d
        std::cout << y << std::endl;

        int correct = 8;
        int questions = 10;

        // double score = correct/questions * 100; // 0%
        double score = correct/(double)questions * 100; // 80%

        std::cout << score << "%" << std::endl;

        return 0;
}