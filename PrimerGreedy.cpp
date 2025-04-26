#include <iostream>

#include <bits/stdc++.h>


using namespace std;


int main(){

    int t=0;

    cin >> t;

    while(t!=0){

        int n=0,x=0,teams=0;

        cin >> n >> x;

        vector <long long > a(n);

        for (int i = 0; i < n; i++){

            cin >> a[i];
            
        }

        sort(a.rbegin(), a.rend());
        int j=1;

        for (int i = 0; i < n; i++)
        {
            if(a[i]*j >= x){
                teams++;
                j=1;
            }else{
                j++;
            }
        }

        cout << teams << endl;
        
        t--;
    }

    return 0;
}

