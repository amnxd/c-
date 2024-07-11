#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "enter age : ";
    cin >> n;

    if(n<18 && n>0){
        if(n>=18 && n>=14){
            cout << "You're teen";
        }
    cout << "You're young";
    }
    else{
        cout << "You're adult";
    }
    return 0;

}