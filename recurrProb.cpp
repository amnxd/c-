#include<bits/stdc++.h>
using namespace std;

//print a name "n" times using recursion..

// void fnn(int i,int n){
//     if(i>n) return;
//     cout << "Aman" << endl;
//     fnn(i+1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     fnn(1,n);
// }

//print numbers upto "n" {input number} using recursion..

void fnn(int i,int n){
    if(i>n) return;
    cout << i << endl;
    fnn(i+1, n);
}

int main(){
    int n;
    cin >> n;
    fnn(1,n);
}