#include <bits/stdc++.h>

#include <iostream>
#include <vector>

void demo(std::vector<int> *temp) {
    std::cout << &temp->at(0) << std::endl;
}

int main(int, char **) {
    std::cout << "Hello, world!\n";

    std::vector<int> arr = {1, 2, 3};
    std::vector<int> *ptr_arr = &arr;

    std::cout << arr[0] << "\t" << &arr << "\t" << ptr_arr << " \t" << std::endl;

    demo(ptr_arr);

    int x = 10;
    int &y = x;

    return 0;
}
