#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    int maxChet, maxNechet = 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            if (arr[i] > maxChet){
                maxChet = arr[i];
            }
        } else if (arr[i] > maxNechet){
            maxNechet = arr[i];
        }
    }
    cout << "Максимально четное: " << maxChet << endl;
    cout << "Максимально нечетное: " << maxNechet << endl;

    return 0;
}