#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    cout << T / 3600 << endl;
    cout << T / 60 % 60 << endl;
    cout << T % 60 << endl;
}