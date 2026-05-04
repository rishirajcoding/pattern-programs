#include<bits/stdc++.h>
using namespace std;

void SquarePattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int N;
    cout<<"Enter size of the Square(N * N): ";
    cin>>N;
    SquarePattern(N);
    return 0;
}