#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec(10,-1); // dynamic programming - tabulation DP[][]
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec = {0,9,8,7,6};
    
    vec.erase(vec.begin() +1, vec.begin() +3);
    

    vector<int> vec2(vec1);

    for(int val: vec2) {
    cout << val << " ";
    }
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout<< " is empty:" << vec.empty()<< endl;

    return 0;
}
