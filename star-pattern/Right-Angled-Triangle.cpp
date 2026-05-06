#include<bits/stdc++.h>
using namespace std;

void rightAngleTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cout<<"Enter size : ";
    cin>>N;
     rightAngleTriangle(N);
    return 0;
}