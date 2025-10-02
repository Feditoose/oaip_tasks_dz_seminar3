#include <iostream>
using namespace std;

int main(){
    const int n = 15;
    double arr[n];
    int maxKef = 0, minKef = 0;
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] > arr[maxKef]){
            maxKef = i;}
        if (arr[i] < arr[minKef]){
            minKef = i;}
    }
    for (int k = 0; k < n; k++){
        cout << arr[k] << " : ";
    }
    cout << endl;

    swap(arr[0], arr[minKef]);
    if (maxKef == 0) maxKef = maxKef;
    swap(arr[n - 1], arr[maxKef]);

    for (int k = 0; k < n; k++){
        cout << arr[k] << " : ";
    }

    return 0;
}