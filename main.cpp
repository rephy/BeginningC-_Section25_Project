#include <iostream>

int main() {
    int x {40};

    auto func = [&x](){
        std::cout << "Inner: " << x << std::endl;
    };

    for (size_t i {}; i < 5; i++) {
        func();
        std::cout << "Outer: " << x << std::endl;
        x++;
    }

    return 0;
}