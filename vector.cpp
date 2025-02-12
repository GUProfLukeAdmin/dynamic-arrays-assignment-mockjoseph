#include <vector>
#include<iostream>


void part1() {
    std::vector<int> vecA;
    for(int i = 0; i < 50000; ++i){
        vecA.push_back(i);
    }
    std::cout << "After adding elements: Size = " 
            << vecA.size() << ", Capacity = " << vecA.capacity() << std::endl;

    vecA.resize(vecA.size() / 2);
    
    std::cout << "After resizing: Size = " << vecA.size() 
            << ", Capacity = " << vecA.capacity() << std::endl;

    vecA.shrink_to_fit();

    std::cout << "After shrink_to_fit(): Size = " << vecA.size() 
            << ", Capacity = " << vecA.capacity() << std::endl;
}

void part2() {
    std::vector<bool> vecB(10000);
    std::vector<char> vecC(10000);
    
    std::cout << "Memory usage of std::vector<bool>: " << sizeof(vecB) + ((vecB.capacity() + 7) / 8) << " bytes\n";
    std::cout << "Memory usage of std::vector<char>: " << vecC.capacity() * sizeof(char) << " bytes\n";

}

int main() {
    part1();
    part2();
    return 0;
}