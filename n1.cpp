#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;

    int counter = 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] > pow(2, i)){
            counter++;
        }
    }
    cout << counter;

    return 0;
}