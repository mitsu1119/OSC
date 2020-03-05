#include<iostream>
using namespace std;

int main(){
    long A, B, C, D;
    cin >> A >> B >> C >> D;

    long ans = 0;
    for(long x = 0; x <= (D + A - 1)/A; x++){
        for(long y = 0; y <= (D + B - 1)/B; y++){
            long Cz = D - (A*x + B*y);
            if(Cz >= 0 && Cz % C == 0) ans++; 
        }
    }

    cout << ans << endl;
}