#include <iostream>
#include <string>
using namespace std;

//Program to practice using strings.
int main() {
	string a, b;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    char c, d;
    c = a[0];
    d = b[0];
    cout << d << a.substr(1) << " " << c << b.substr(1) << endl;
    
    return 0;   
}
