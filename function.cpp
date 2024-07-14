#include<bits/stdc++.h>
using namespace std;

// void -> which doesn't returns anything
// return
// parameterised
// non paramerterised 

// void printName(string name){  //void fn
//     cout << "hey " << name << endl;
}
// int main(){
//     string name;
//     cout << "enter name: " << endl;
    return 0;

    
}

void dosmtg(string &s){  // "&" is used to pass by reference
    s[0]= 'D';
    cout << s << endl;
}
int main(){
    string s = "Aman";
    dosmtg(s);
    cout << s << endl;
    return 0;
}

void doarry(int arr[], int n){ // array pass by ref by default
    arr[0] = 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main(){
    int n = 2;
    int arr[n];
    for(int i = 0;i<n; i = i + 1){
        cin >> arr[i];
    }
    doarry(arr,n);
    cout << "value inside int main: " << arr[0] << endl;
    return 0;
}