#include <iostream>

using namespace std;

void output(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void dif_finder(int* arr, int length, int dif) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (abs(arr[i] - arr[j]) == dif) {
                cout << arr[i] << " " << arr[j] << " ";
            }
        }
    }
}

int main()
{
     
    int n;
    cout << "Input length of array: "<< " ";
    cin >> n; 
    int* arr = new int[n];
    
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50 + 1;
    }
    output(arr, n);
    
    int dif;
    cout << "Input number: " << " ";
    cin >> dif;
    dif_finder(arr, n, dif);
    delete[] arr;
    return 0;
}
