#include<bits/stdc++.h>
using namespace std;

//q1 print a name "n" times using recursion..
/*
void fnn(int i,int n){
    if(i>n) return;
    cout << "Aman" << endl;
    fnn(i+1, n);
}

int main(){
    int n;
    cin >> n;
    fnn(1,n);
}*/

//q2 print numbers upto "n" {input number} in ascending order {1-n} using recursion..
/*
// void fnn(int i,int n){
//     if(i>n) return;
//     cout << i << endl;
//     fnn(i+1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     fnn(1,n);
// }
*/

//q3 print numbers upto "n" {input number} in descending order {n-1} using recursion..

// void fnn(int n){
//     if(n==0) return;
//     cout << n << endl;
//     fnn(n-1);
// }
// void fnn1(int i,int n){
//     if(i<1) return;
//     cout << i << endl;
//     fnn1(i-1,n);
// }
// int main(){
//     int n;
//     cin >> n;
//     fnn1(n,n);
// }

// q3 print numbers upto "n" {input number} in ascending order {1-n} with backtracking..

void fn(int i,int n){
    if(i>n) return;
    fn(i-1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    fn(n,n);
}