#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void Test(int*);

int main() {

    int arr[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "Origion..." << endl;
    for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";

    Test(arr);

    cout << endl << "After..." << endl;
    for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";

    system("pause");
    return 0;
}

void Test(int *arr) {
    for (int i = 0; i < SIZE; i++) arr[i] *=2;
    cout << endl << "Test..." << endl;
    for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";
}