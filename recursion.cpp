#include<bits/stdc++.h>
using namespace std;

int num = 0;
void target(){
    if(num == 4) return;
    cout << num << endl;
    num++;
    target();
}

int main(){
    target();
}