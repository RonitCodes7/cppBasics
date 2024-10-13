    #include "./stdc++.h"
    using namespace std;

int  passByValue(int num1, int num2){
    return num1 + num2;
}
int passByReference( int *num1, int *num2){
    *num1 += 1;
    return *num1 + *num2;
}
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
    
    // int a,b,c;

    // cin >> a >> b >> c;

    // if( a >= b ){
    //     if( a > c){
    //         cout << "a: "<< a << " is larger" ;
    //     }else if( a == c){
    //         cout << "both a , c" ;
    //     }else{
    //         cout << "c: " << c << " is larger";
    //     }
    // }else{
    //     if( a == b ){
    //         cout << "both a , b";
    //     }else if( b == c){
    //         cout << "both b, c";
    //     }else{
    //         cout << "b: "<< b << " is larger";
    //     }
    // }



    // Swtich-Case

    // int num ;
    // cin >> num;
    // switch(num){
    //     case 0:
    //         cout << "Sunday";
    //         break;
    //     case 1:
    //         cout << "Monday";
    //         break;
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     default:
    //         cout << "No day"; 
    //         break;
    // }


    /* Array 
    int arr[4] = { 1,2,3,4};
    for(int i = 0; i < 4; i += 2){
        cout << arr[i] + arr[i+1]<< endl ;
    }
    Array ends*/

    // cout << passByValue(4,9) << endl;
    // int a = 4, b = 9;
    // cout << passByReference(&a, &b) << endl;
    // cout << a << endl;

    /* Patterns */
        // Patterns are done on website only for advantage 
    /* Patterns */
    return 0;
}