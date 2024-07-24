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
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // 6 6 6 6 6 6
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
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
void pattern8(int n){
    // *********
    //  ******* 
    //   *****  
    //    ***   
    //     *    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " " ;
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*" ;
        }
        for(int j=0; j<i; j++){
            cout << " " ;
        }
        cout << endl;
    }
}
void pattern9(int n){
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    //1st half
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
    //2nd half
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " " ;
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*" ;
        }
        for(int j=0; j<i; j++){
            cout << " " ;
        }
        cout << endl;
    }

    

}
void pattern10(int n){
    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *
    for(int i=0; i<2*n-1; i++){
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j=1; j<star; j++){
            cout << "*";
        }
    cout << endl;
    }
}
void pattern11(int n){
    // 1
    // 01
    // 101
    // 0101
    // 10101
    int val = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) val = 1;
        else val = 0;
        for(int j=0; j<=i; j++){
            cout << val;
            val = 1-val;
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
    //     // pattern7(n);
    // }
    int n;
    cin >> n;
    pattern11(n);
}
.

.