#include<bits/stdc++.h>
using namespace std;


int target(int num){
    
    if(num == 4) return 0;
    else{
        cout << num << " ";
        num++;
    }
    num++;

}

int main(){
    target(0);
}