#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v(15);
    int index = 0;
    for (int element : v){ cout << "v[" << index << "]: "; cin >> v[index]; index++;}

    auto minmax = minmax_element(v.begin(), v.end());
    int min_pos = minmax.first - v.begin();

    if ((*minmax.first == 0) || (*minmax.second == 0)){
        for (int i = 0; i < min_pos; i++){
            v[i] = 0;
        }
    }
    for (int element : v){ cout << element << " "; }

    return 0;
}