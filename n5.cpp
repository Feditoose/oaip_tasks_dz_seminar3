#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    const int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++){ cout << "arr[" << i << "]: "; cin >> arr[i];}

    auto minmax = minmax_element(arr, arr + n);
    if (((minmax.first - arr) == 4) && ((minmax.second - arr) == 9)){
        cout << (*minmax.first + *minmax.second) / 2 << endl;
    } else { cout << "Ничего" << endl; }

    return 0;
}