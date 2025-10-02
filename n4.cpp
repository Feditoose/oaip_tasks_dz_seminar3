#include <iostream>
using namespace std;

int main(){
    const int n = 15;
    double arr[n];
    int minKef = 0, maxKef = 0;
    for (int i = 0;i < n; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] < arr[minKef]){
            minKef = i;}
        if (arr[i] > arr[maxKef]){
            maxKef = i;}
    }
    if (maxKef < minKef){
        cout << "min * max = " << arr[minKef] * arr[maxKef] << endl;
    } else{ cout << "Ничего" << endl; }

    return 0;
}