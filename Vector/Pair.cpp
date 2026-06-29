#include<iostream>
#include <vector>
using namespace std;

int main() {
    pair<int, pair<char, int>>p = {1,{'a',3}};

    cout<< p.first << endl;
    cout<<p.second.first<< endl;
    cout<<p.second.second<<endl;
    return 0;
}
/*vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};
for (auto <int, int> p : vec) {
cout << p.first << " " << p.second << endl;
}
return 0;
}/*/