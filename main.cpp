#include <iostream>

int main()
{
    std::string input = {};

    std::cout << "What's your name?\n";

    std::cin >> input;

    std::cout << "Hi " + input + "!\n";

    std::cin.get();

    return 0;
}