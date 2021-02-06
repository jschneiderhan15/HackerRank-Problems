#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Program to practice using arrays.
int main() {
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++){
        int b; 
        cin >> b;
        arr[i] = b;
    }
    for(int i = a - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
