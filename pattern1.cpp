// patterns - nested loops
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    // * * * *
    // * * * *
    // * * * * 
    // * * * *
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*  " ;
        }
        cout << endl;
    }
}
void pattern2(int n){
    // * 
    // * * 
    // * * * 
    // * * * *
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n){
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    //     *    
    //    ***
    //   *****
    //  *******
    // *********
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        // star
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

}


int main(){
    // int t;
    // cin >> t;
    // for(int i=0; i<t;i++){
    //     int n;
    //     cin >> n;
    //     // pattern1(n);
    //     // pattern2(n);
    //     // pattern3(n);
    //     // pattern4(n);
    //     // pattern5(n);
    //     // pattern6(n);
    //     pattern7(n);
    // }
    int n;
    cin >> n;
    pattern7(n);
    return 0;
}