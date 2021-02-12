#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

//Program utilizing the stringstream function.

vector<int> parseInts(string str) {
    vector<int> vect;
	stringstream ss(str);
    char x;
    int a;
    while(ss >> a){
        vect.push_back(a);
        ss >> x;
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
