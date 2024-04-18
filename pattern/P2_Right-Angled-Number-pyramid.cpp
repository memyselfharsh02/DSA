#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=1;j<=i;j++){
            cout<< j ;
        }
        cout<<endl;
}
}

int main(){
    int N=7;
    pattern(N);
    return 0;
}