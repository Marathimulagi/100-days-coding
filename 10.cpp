#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    cin >> s;   

    stringstream ss(s);
    int num;
    char comma;

    while (ss >> num) {
        cout << num << endl;
        ss >> comma;  
    }

    return 0;
}
