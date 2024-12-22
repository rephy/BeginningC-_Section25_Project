#include <iostream>

int main() {
    int x {40};
    int y {10};

    auto func = [&](){
        std::cout << "Inner x: " << x << std::endl;
        std::cout << "Inner y: " << y << std::endl;
    };

    for (size_t i {}; i < 5; i++) {
        func();
        std::cout << "Outer x: " << x << std::endl;
        std::cout << "Outer y: " << y << std::endl;
        x++;
        y--;
    }

    return 0;
}