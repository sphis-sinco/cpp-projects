#include <iostream>

namespace bob{
        int age = 30;
}
namespace sally{
        int age = 25;
}

int main()
{
        std::cout << "What's Bob's age again?\n" << bob::age << " right?\n";
        std::cout << "And sallies...\n" << sally::age << " right?";

        return 0;
}