    #include "./stdc++.h"
    using namespace std;

int main()
{
     // GCD of two numbers

    //    n1 = 4, n2 = 6
       
    //    4) 6 ( 1
    //       4
    //     -----
    //       2 ) 4 ( 2
    //           4
    //         -----
    //           0
    // it means till the smaller goes upto 0, keep dividing and change smaller to the 
    // bigger % smalller and bigger to smaller 
    
    /*
    TC = O (min(n1,n2))
    SC = O(1)
    int gcd(int a,int b){
        if(b == 0){
            return a;
        }
        return gcd(b,a%b);
    }
    

    /*
    Euclidian Algorithm 
        gcd(n1,n2) = gcd(n1-n2,n2) given n1>n2
    
    */
     // GCD of two numbers


     /*  LCM of two numbers n1, n2 */
        //LCM(n1, n2) = ( n1 * n2)/GCD(n1,n2)
     /* LCM of two numbers n1, n2 */
    return 0;
}