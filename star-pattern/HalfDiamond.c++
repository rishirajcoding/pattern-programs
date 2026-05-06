// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void HalfDiamond(int n){
    for(int i=1; i<=2*n-1; i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        cout<<endl;
       
    }
    
}

int main() {
  int N;
  cout<<"enter size: ";
  cin>>N;
  HalfDiamond(N);

    return 0;
}