#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int index = 0;
    vector<double> v(15);
    for (double element : v){
        cout << "v[" << index << "]: ";
        cin >> v[index];
        index++;
    }
    auto minmax = minmax_element(v.begin(), v.end());
    if ((minmax.first - v.begin()) == 1 && (minmax.second - v.begin()) == 0){
        for (double& element : v){
            element /= 2;
        }
    }
    for (double element : v){ cout << element << " "; }

    return 0;
}