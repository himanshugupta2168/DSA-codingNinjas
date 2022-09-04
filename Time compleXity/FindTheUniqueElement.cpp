#include<iostream>
using namespace std;
int findUnique(int *arr, int n) {
    int ans =0;
    for (int i =0; i< n ; i++){
        ans = ans ^ arr[i];// since the jor of any same elem
        
    }
    return ans; 
}

//#include "solution.h"

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}