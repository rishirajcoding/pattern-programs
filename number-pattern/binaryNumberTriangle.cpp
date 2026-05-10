#include <bits/stdc++.h>
using namespace std;
void binaryNumberTriangle(int n){
     int start=1;
      for(int i=0; i<n; i++){
         if(i%2==0) start=1;
         else start=0;
          for(int j=0; j<=i; j++){
              cout<<start;
              start=1-start;
          }
          cout<<endl;
      }   
  }
int main(){
    int N;
    cout<<"Enter Size: ";
    cin>>N;
    binaryNumberTriangle(N);
    return 0;
}