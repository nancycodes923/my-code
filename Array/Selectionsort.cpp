#include<iostream>
using namespace std;
void selectionSort( int arr[],int n) { // O( n^2)
    for ( int i=0; i<n-1; i++) { // 1*n
        int minIndex = i;// unsorted part starting index
        for ( int j=i+1; j<n; j++) { // n*n
            if ( arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selectionSort(arr, n);
    for ( int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
