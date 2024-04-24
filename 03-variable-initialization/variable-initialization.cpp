// https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/

#include <iostream>

int main()
{
    // Question: why would we want to use [[maybe_unused]] attribute?
    // Isn't it simply better to remove the unused variable?
    [[maybe_unused]] int x{5};

    // Question: Isn't zero-initialization super error prone? What is the point of this?
    [[maybe_unused]] int y{};
    return 0;
}
