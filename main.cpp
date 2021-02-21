#include <bits/stdc++.h>

#include <iostream>
#include <vector>

using namespace std;

void demo(std::vector<int> &temp) {
    cout << &temp << endl;
}

int main(int, char **) {
    std::cout << "Hello, world!\n";

    std::vector<int> arr = {1, 2, 3};
    std::vector<int> *ptr_arr = &arr;

    std::cout << arr[0] << "\t" << &arr << "\t" << ptr_arr << " \t" << std::endl;

    demo(arr);

    int x = 10;
    int &y = x;

    std::cout << &x << "\t" << &y << std::endl;

    return 0;
}
