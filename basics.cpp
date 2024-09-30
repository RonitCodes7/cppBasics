    #include "./stdc++.h"
    using namespace std;
int main()
{
    // int age;
    // cin >> age;
    // if( age >= 18){
    //     cout << "Adult";
    // }else if( age >= 10 && age < 18){
    //     cout << "Teen";
    // }else{
    //     cout << "Not Adult and teen";
    // }


    // float num ;
    // cin >> num;
    // if( num >= 90){
    //     cout << "GRADE A";
    // }else if( num >= 70 && num <90){
    //     cout << "GRADE B";
    // }else if( num >= 60 && num < 70){
    //     cout << "GRADE C";
    // }else if( num < 60 && num >= 45){
    //     cout << "GRADE D";
    // }else{
    //     cout << "Fail";
    // }
    
    int a,b,c;

    cin >> a >> b >> c;

    if( a >= b ){
        if( a > c){
            cout << "a: "<< a << " is larger" ;
        }else if( a == c){
            cout << "both a , c" ;
        }else{
            cout << "c: " << c << " is larger";
        }
    }else{
        if( a == b ){
            cout << "both a , b";
        }else if( b == c){
            cout << "both b, c";
        }else{
            cout << "b: "<< b << " is larger";
        }
    }
    return 0;
}