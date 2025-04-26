#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=0;

    cin >> t;

    while(t!=0){
        int k=0,p=0;
        int n=0;
        cin >> n >> k >> p;
        if(k==0){
            cout <<0<<endl;
        }else if(k>=-p && k<=p){
            cout <<1<<endl;
        }else if(k%p==0){
            if(abs(k/p) <= n){
                cout <<abs(k/p)<<endl;
            }else{
                cout <<-1<<endl;
            }
        }else if(abs(k/p)+1 <=n){
            cout <<abs(k/p)+1<<endl;
        }else{
            cout <<-1<<endl;
        }
        t--;
    }

return 0;
}