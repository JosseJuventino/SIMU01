#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   

    int T;
    cin >> T;
    while(T--){
        int n;
        string s;
        cin >> n >> s;

        int cnt01 = 0, cnt10 = 0;
        int zeros = 0, ones = 0;
        for(char c: s){
            if(c=='0') ++zeros;
            else         ++ones;
        }
        for(int i = 0; i+1 < n; i++){
            if(s[i]=='0' && s[i+1]=='1') ++cnt01;
            if(s[i]=='1' && s[i+1]=='0') ++cnt10;
        }

        int  transitions= cnt01 + cnt10;
        int base_cost = n + transitions + (s[0]=='1');

        bool can2 = false;
        if(cnt01 >= 2 || cnt10 >= 2) {
            can2 = true;
        } else if(s[0]=='1' && cnt01 >= 1) {
            can2 = true;
        }
        bool can1 = false;
        if(!can2){
            if(s[0]=='1' && zeros > 0)        can1 = true; 
            if(s[n-1]=='0' && ones  > 0)      can1 = true; 
        }

        int reduction = can2 ? 2 : (can1 ? 1 : 0);
        cout << (base_cost - reduction) << "\n";
    }

    return 0;
}
