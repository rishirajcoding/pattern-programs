#include<bits/stdc++.h>
using namespace std;

void Diamond(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
      
      
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
     cout<<endl;
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i-1)-1; j++){
            cout<<"*";
        }
       cout<<endl;
    }
    
}
int main(){
    int N;
    cout<<"Enter size : ";
    cin>>N;
    Diamond(N);
    return 0;
}