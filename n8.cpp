#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10);
    for (int i = 0; i < 10; i++){
        cout << "v[" << i << "]: ";
        cin >> v[i];
    }
    auto minmax = minmax_element(v.begin(), v.end());
    int min_pos = minmax.first - v.begin();
    int max_pos = minmax.second - v.begin();
    if ((min_pos == 4) || (max_pos == 1)){
        for (int i = min_pos + 1; i <= v.size(); i++){
            v[i] = *minmax.second;
        }
    }
    for (int element : v){ cout << element << " "; }

    return 0;
}