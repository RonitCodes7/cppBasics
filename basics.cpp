    #include "./stdc++.h"
    using namespace std;

int  passByValue(int num1, int num2){
    return num1 + num2;
}
int passByReference( int *num1, int *num2){
    *num1 += 1;
    return *num1 + *num2;
}
void explainPair(){
    pair<int,int> p1 = {2,8};
    pair<int,int> p2 = make_pair(2,8);
    pair<int,string> p3 = { 7, "Ronit"};
    pair<pair<int,int>,int> p4 = {{1,2},3};

    cout<< p1.first << " " << p1.second << endl;
    cout<< p2.first << " " << p2.second << endl;
    cout<< p3.first << " " << p3.second << endl;
    cout<< p4.first.first << " " << p4.first.second << " " << p4.second << endl;
}

void explainVector() {
    vector<int> v1 ;

    /* Vector insertion of element */
    v1.push_back(1);
    v1.push_back(2);
    v1.emplace_back(3);
    /* Vector insertion of element */
    for( int i = 0; i < v1.size(); i += 1){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Iterator 
    vector<int> :: iterator beginItr = v1.begin();
    vector<int> :: iterator endItr = v1.end();
    for(vector<int> :: iterator itr = beginItr; itr < endItr; itr ++){
        cout << *itr << " ";
    }
    cout << endl;
    auto beginItrAuto = v1.begin();
    auto endItrAuto = v1.end();
    for(auto i = beginItrAuto; i < endItrAuto ; i ++){
        cout << *i << " ";
    }
    cout << endl ;
     // Reverse Iterator 
     auto reverseBegin = v1.rbegin();
     auto reverseEnd = v1.rend();
     for(auto i = reverseBegin; i < reverseEnd; i += 1){
        cout << *i << " ";
     }
    // Erase at any place 
    v1.erase(v1.begin() + 1);
    cout << endl;

    //Insert any place 
    v1.insert(v1.begin(), 0);
    auto beginItrAuto1 = v1.begin();
    auto endItrAuto1 = v1.end();
    for(auto i = beginItrAuto1; i < endItrAuto1 ; i ++){
        cout << *i << " ";
    }
    // Front to back access
    cout << v1.front() << " ";
    cout << v1.back() << " "; 

}
void explainList() {
    list<int>ls = {1,2};
    ls.push_front(0);
    for(auto i : ls){
        cout << i << " ";
    }
    cout << endl;
}
void explainStack(){
    stack < int > stk;
    // Stack insert
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    // Top most element 
    cout << stk.top()<< " "<< endl;
    // Empty ness check
    while(!stk.empty()){
        cout << stk.top() << " ";
    // Top element removal
        stk.pop();
    }
   cout << endl;
   stk.emplace(0); // Alternative method
   cout << stk.top();
}
void explainQueue(){
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);
    while(!que.empty()){
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
}
int main()
{
    // cout << pow(2,9)
    /*
    C++ STL HAS CONTAINER , FUNCTIONS , ALGORITHMS
    We will be starting with pair and will go by following tutorial
    */
    // Pair : utility library 
    // explainPair();
    // 

    //Vector: Container 
    // explainVector();
    //

    //List Explained
    // explainList();
    // List End


/**************************/

// List vs Vector 

// In List you can push from front also , vector does not allow that 


/*************************/

//    explainStack(); // LIFO
//    explainQueue(); // FIFO
    return 0;
}