#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = { 3, 7, 2, 9, 10, 5 };
    int arr2[] = { -10, -5, -3 };
    int arr3[] = { 100, 200, 300, 50, 400 };
    int arr4[] = { 0, 0, -2, 0 };
    int arr5[] = { 10000 };

    cout << "ÃÖ´ñ°ª: " << findMax(arr1, sizeof(arr1) / sizeof(arr1[0])) << endl;
    cout << "ÃÖ´ñ°ª: " << findMax(arr2, sizeof(arr2) / sizeof(arr2[0])) << endl;
    cout << "ÃÖ´ñ°ª: " << findMax(arr3, sizeof(arr3) / sizeof(arr3[0])) << endl;
    cout << "ÃÖ´ñ°ª: " << findMax(arr4, sizeof(arr4) / sizeof(arr4[0])) << endl;
    cout << "ÃÖ´ñ°ª: " << findMax(arr5, sizeof(arr5) / sizeof(arr5[0])) << endl;

    return 0;
}