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
    std::cout << std::endl;

    std::cout << "v1 should have size 2: " << v1.size() << std::endl;
    std::cout << "v2 should have size 3: " << v2.size() << std::endl;
    std::cout << std::endl;

    std::cout << "both capacities should be 4: " << v1.capacity() << std::endl;
    std::cout << v2.capacity() << std::endl;
    std::cout << std::endl;

    v1.reserve(8);
    std::cout << "new capacity for v1 should be 8: " << v1.capacity() << std::endl;
    std::cout << std::endl;

    // std::cout << "access int at index v1[1] should be 2: " << v1.at(1) << std::endl;
    return 0;
}
