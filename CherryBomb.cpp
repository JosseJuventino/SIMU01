#include <iostream>

using namespace std;

#include <bits/stdc++.h>

int main(){

    int t=0;

    cin >> t;

    while (t!=0)
    {
        long long n=0,k=0,negativeElements=0;

        cin >> n >> k;
        vector <int> a(n);
        vector <int> b(n);
        vector <int> aux(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            
        }

        int j=0;
        
        for (int i=0; i <n; i++){
            cin>>b[i];
            if (b[i]==-1){
                negativeElements++;
            }else{
                aux[j]=i;
                j++;
            }
        }


        if(negativeElements==n){
            //case 1: 
            cout<<"Entre aqui :D";
        }else{
            //case 2:
            int valorSum=0;

            valorSum=a[aux[0]]+b[aux[0]];

            bool bandera=true;
            

            for (int i = 1; i < j; i++)
            {   
                if(a[aux[i]]+b[aux[i]]!=valorSum){
                    bandera=false;
                    break; 
                }
                
            }

            if(bandera){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }

        }
        
        t--;
    }
    

    return 0;
}