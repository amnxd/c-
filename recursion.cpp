#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int goal (){
    cout << sum << " ";
    sum++;
    if(sum == 4) return 0;
    else 
    cout << sum << endl;
}

int main(){
    goal();
}