/*
此文件是功能函数包，存放各种用户自定义的函数。
有对应的FunctionPackage.h 来存放声明。
*/
#include "algorithm"
using namespace std;


//    1>快速排序函数
void quickSort(int arr[], int low, int high) {
    // 选出中间值作为基准数
    int mid = arr[(low + high) / 2];
    int i = low;
    int j = high;

    // 不断将小于基准数的元素移到左侧，大于基准数的元素移到右侧
    while (i <= j) {
        while (arr[i] < mid) {
            i++;
        }
        while (arr[j] > mid) {
            j--;
        }
        if (i <= j) {
            //std::swap(arr[i], arr[j]);
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // 递归处理左侧和右侧的子数组
    if (low < j) {
        quickSort(arr, low, j);
    }
    if (i < high) {
        quickSort(arr, i, high);
    }
}
