#include <iostream>

int main()
{
        int students = 20;

        int addsub = 1;
        int multdiv = 3;

        // students = students + addsub;
        // students++;
        students += addsub;

        // students = students - addsub;
        // students--;
        students -= addsub;

        // students = students * multdiv;
        students *= multdiv;

        // students = students / multdiv;
        students /= multdiv;

        // order of operations
        // ()
        // * & /
        // + & -
        int students_classb = 6 - (5 + 4) * 3 / 2;

        int remainder = students % multdiv;
        std::cout << students << '.' << remainder;
        std::cout << students_classb;

        return 0;
}