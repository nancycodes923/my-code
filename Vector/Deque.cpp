#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
  deque<int> d ={1,2,3,4,5};

  d.emplace_back(1);// gives same result as push back
  d.push_back(1);
  d.push_back(2);
  d.push_front(3);
  d.push_front(5);

  d.pop_back();
  d.pop_front();

  for(int val: d){
    cout<< val << " ";
  }
  cout << endl;

  return 0;
}