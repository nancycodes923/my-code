#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//custom comparator
bool comparator(pair<int, int> p1, pair<int, int>p2) {
    if(p1.second <p2.second) return;
    if (p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
    }
    
    int main(){
        int n = 15;
        long int n = 15;
        long long int n = 15;
    vector<int> vec = {3,5,1,8,2};
    vector<pair<int, int>> vecPair = {{3,1}, {2,1}, {7,1},{5,2}};
    sort(vec.begin(), vec.end());// ascending order
    sort(vecPair.begin(), vecPair.end());// ascending order

    sort(vec.begin(), vec.end(), comparator);

    for(auto p : vecPair){
        cout << p.first << " " << p.second << endl;
    }
    for(int val:vec) {
        cout<< val<< " ";

        cout<< __builtin_popcount(n)<< endl;
       // cout<< __builtin_popcountl(n2)<< endl;
        //cout<< __builtin_popcountll(n3)<< endl;
    }
    cout<<endl;
    return 0;
}
