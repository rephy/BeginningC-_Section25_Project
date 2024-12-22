#include <iostream>

int main() {
    auto func = [](double a, double b) -> double {
        return (a + b);
    };

    auto result {func(30, 10)};
    std::cout << "result: " << result << std::endl;
    std::cout << "func(9, 25): " << func(9, 25) << std::endl;

    std::cout << "Done!" << std::endl;

    return 0;
}