#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int space = 2*n-2;
    for(int i=2*n; i>=n+1; i--){
        for(int j=i;j<=2*n;j++){
            cout<<"*";
        }
        for(int k=space;k>=1;k--){
            cout<<" ";
        }
        for(int m=i; m<=2*n; m++){
            cout<<"*";
        }
        cout<<endl;
        space-=2;
    }
    space=2;
    for(int i=1; i<n; i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int m=i; m<n; m++){
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }
}