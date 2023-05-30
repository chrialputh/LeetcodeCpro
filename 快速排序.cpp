#include <iostream>
#include "FunctionPackage.h"
using namespace std;

void QuickSort_demo() {
    int arr[] = { 9, 5, 7, 3, 1, 8, 6, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, n - 1);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}