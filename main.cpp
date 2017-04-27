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
    std::cout << std::endl;

    std::cout << "Default Constructor Should Be Called: " << std::endl;
    Vector<int> v1;
    v1.pushBack(1);
    v1.pushBack(2);
    v1.pushBack(3);
    printVector(v1);

    std::cout << std::endl;

    std::cout << "Copy Constructor Should Be Called: " << std::endl;
    Vector<int> v2(v1);
    printVector(v2);

    std::cout << std::endl;

    v2[0] = 4;
    
    std::cout << "V2 should be 4, 2, 3, -->" << std::endl;
    printVector(v2);

    std::cout << std::endl;

    std::cout << "V1 should still be 1, 2, 3, -->" << std::endl;
    printVector(v1);

    std::cout << std::endl;

    v1 = v2;
    std::cout << "overloaded operator should be called (vectors should be same): " << std::endl;
    printVector(v1);
    printVector(v2);


    std::cout << std::endl;

    std::cout << "v1 should have one less element: " << std::endl;
    v1.popBack();
    printVector(v1);

    return 0;
}
