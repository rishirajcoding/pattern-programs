// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void HollowRectangle(int n){
     for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             if(i==0 || i==n-1 || j==0 || j==n-1){
                 cout<<"*";
             }
             else{
                 cout<<" ";
             }
         }
         cout<<endl;
     }
}
int main() {
   int N;
   cout<<"Enter Size: ";
   cin>>N;
   HollowRectangle(N);

    return 0;
}