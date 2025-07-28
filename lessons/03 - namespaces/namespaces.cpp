#include <iostream>
using namespace std;

namespace bob
{
        int age = 30;
}
namespace sally
{
        int age = 25;
}

int main()
{
        cout << "What's Bob's age again?\n"
             << bob::age << " right?" << endl;
        cout << "And sallies...\n"
             << sally::age << " right?";

        return 0;
}