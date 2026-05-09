// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void SymmetricButterfly(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i)-2; j++){
            cout<<" ";
        }
          for(int j=1; j<=i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i); j++){
            cout<<" ";
        }
          for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}




int main() {
   int N;
   cout<<"Enter Size: ";
   cin>>N;
   SymmetricButterfly(N);

    return 0;
}