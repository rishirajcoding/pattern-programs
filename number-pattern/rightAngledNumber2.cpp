#include<bits/stdc++.h>
using namespace std;
  void  RightAngledNumber(int n){
      for(int i=1; i<=n; i++){
          for(int j=1; j<=i; j++){
              cout<<i;
          }
          cout<<endl;
      }
  }
int main (){
    int N ;
    cout<<"Enter Size: ";
    cin>>N;
    RightAngledNumber(N);
    return 0;
}