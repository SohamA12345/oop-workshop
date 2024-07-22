#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array1[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array1, 5) << std::endl;

    /*int array2[7] = {2,2,2,2,2,0,2};
    std::cout << "The number is: " << count(array2, 7) << std::endl;

    int array3[3] = {1,3,5};
    std::cout << "The number is: " << count(array3, 3) << std::endl;

    int array4[3] = {0,0,0};
    std::cout << "The number is: " << count(array4, 3) << std::endl;
    */
    return 0;
}