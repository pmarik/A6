#include <iostream>
#include "Vector.hpp"

void printVector(const Vector<int> &v) {
    for (int i = 0; i < v.size(); ++i){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Resource Management!" << std::endl;
    Vector<int> v1;
    v1.pushBack(1);
    v1.pushBack(2);
    v1.pushBack(3);
    printVector(v1);

    Vector<int> v2(v1);
    printVector(v2);
    v2[0] = 4;
    printVector(v2);
    printVector(v1);

    return 0;
}
