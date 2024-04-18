#include<iostream>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++) {  
        for(int j=0;j<=i;j++){
            cout<< "* ";
        }
        cout << endl;
}
}

int main(){
 int N = 8;
 pattern(N);
 return 0;
}