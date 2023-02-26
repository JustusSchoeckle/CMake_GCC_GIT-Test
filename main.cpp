#include <iostream>

int main()
{
    std::string input = {};

    std::cout << "What's your name?\n";

    std::cin >> input;

    std::cout << "Hi " + input + ", what a nice name!\n";

    std::cin.get();

    return 0;
}