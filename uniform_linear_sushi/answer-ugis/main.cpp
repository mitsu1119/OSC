#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdint> 
#include<tuple>
using namespace std;

int main(){
    using i64 = int_fast64_t;

    int N;
    cin >> N;
    vector<pair<i64,i64>> sushi(N);

    for(int i = 0; i < N; i++){
        i64 S, T;
        cin >> S >> T;
        sushi[i] = {S+T, S};
    }

    sort(sushi.begin(), sushi.end());
    i64 t = 0, ans = 0;
    for(auto& p : sushi){
        i64 s, e;
        tie(e, s) = p;
        if(t <= s) {
            t = e;
            ans++;
        } 
    }

    cout << ans << endl;
}