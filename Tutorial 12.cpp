#include <iostream>

namespace sam {
    void display() {
        std::cout << "Hello from my namespace" << std::endl;
    }
}

namespace ns1 {
    void add(int num1, int num2) {
        std::cout << "\nthe addition is \t" << num1 + num2;
    }
}

namespace ns2 {
    void sub(int num1, int num2) {
        std::cout << "\nthe subtraction is : \t" << num1 - num2;
    }
}

int main() {
    sam::display();
    ns1::add(5, 4);
    ns2::sub(5, 4);

    return 0;
}
