#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N % 3 == 0) cout << "fizz";
    if(N % 5 == 0) cout << "buzz";
    if(N % 3 && N % 5) cout << N;
    cout << "\n";
}