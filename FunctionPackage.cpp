/*
���ļ��ǹ��ܺ���������Ÿ����û��Զ���ĺ�����
�ж�Ӧ��FunctionPackage.h �����������
*/
#include "algorithm"
using namespace std;


//    1>����������
void quickSort(int arr[], int low, int high) {
    // ѡ���м�ֵ��Ϊ��׼��
    int mid = arr[(low + high) / 2];
    int i = low;
    int j = high;

    // ���Ͻ�С�ڻ�׼����Ԫ���Ƶ���࣬���ڻ�׼����Ԫ���Ƶ��Ҳ�
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

    // �ݹ鴦�������Ҳ��������
    if (low < j) {
        quickSort(arr, low, j);
    }
    if (i < high) {
        quickSort(arr, i, high);
    }
}
