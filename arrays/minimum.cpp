#include<iostream>
using namespace std;

// Function prototype
void maximum(int arr[]);

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    maximum(arr1);
    return 0;
}

// void minimum(int arr[]) {
//     int min = arr[0];
//     for (int i = 0; i < 5; i++) {
//         if (min > arr[i]) {
//             min = arr[i];
//         }
//     }
//     cout << "Minimum number is: " << min;
// }


void maximum(int arr[]) {
    int max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Maximum number is: " << max;
}