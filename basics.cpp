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
void explainPQ(){
    // max heap
    priority_queue<int>pq;
    // min heap
    // priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(10);
    pq.push(12);
    pq.push(9);
    pq.push(13);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
void explainSet() {
    set< int > st;
    for(int i = 0; i < 5; i += 1){
        // insert operation in a set
        st.insert(i*10);
    }
    for(int i = 0; i < 6; i += 1){
        // insert operation in a set
        st.emplace(i*10);
    }
    // erase() : iterative way of removal an element from a set
    set<int> :: iterator itr = st.end();
    itr --;
    itr --;
    st.erase(itr);
for(auto i : st){
    cout << i << " ";
}
    // lower_bound and upper_bound
    /*
        lower_bound returns an iterator which points to a number
        that is greater than equal to given number 

        upper_bound returns an iterator which points to a number 
        that is greater than given number 
    */
   auto it = st.upper_bound(70);
   auto it2 = st.lower_bound(83);
   if( it == st.end() || it2 == st.end()){
    cout << "Bahir ho";
   }
   cout << *it << " " << *it2;
}
void explainMultiSet(){
    /* 
        Stores in ascending sorted order but have repeated elements

        When find one exact element gives the first occurance of 
        the number/char/string else return 0

    */
    multiset<int> ms;
    for(int i = 0; i < 5; i += 1){
        // insert operation in a set
        ms.insert(i*10);
    }
    for(int i = 0; i < 6; i += 1){
        // insert operation in a set
        ms.emplace(i*10);
    }
    for(auto i : ms){
    cout << i << " ";
    }

    auto it = ms.find(40);
    cout << *it << " ";

    cout << ms.count(40);
}
void explainMap(){
    map<int, string> mp;
    for(int i = 0; i < 10; i += 1){
        mp.insert({ i, "abc"});
    }
    for(auto it: mp){
        cout << it.first << ": " << it.second<< endl;
    }
    auto itr = mp.find(11);
    cout << (*itr).second << " ";

    if( itr == mp.end()){
        cout << "Not found";
    }
}
void explainUnorderedMap(){
    unordered_map<int, string> mp;
    for(int i = 0; i < 10; i += 1){
        mp.insert({ i, "abc"});
    }
    for(auto it: mp){
        cout << it.first << ": " << it.second<< endl;
    }
    auto itr = mp.find(0);
    cout << (*itr).second << " ";

    if( itr == mp.end()){
        cout << "Not found";
    }
}
void explainMultiMap(){
    multimap<int, string> mmp;
    mmp.insert({1, "abc"});
     mmp.insert({1, "ebc"});
      mmp.insert({1, "fbc"});
       mmp.insert({2, "gbc"});
        mmp.insert({1, "ibc"});
         mmp.insert({2, "kbc"});
          mmp.insert({1, "lbc"});
     for(auto it: mmp){
        cout << it.first << ": " << it.second<< endl;
    }
    auto it = mmp.equal_range(1);
    for( auto i = it.first; i != it.second; i++){
        cout << (*i).first << "->" << (*i).second<< endl;
    }
}
bool comparator(int a,int b){
    return a - b > 0 ? true : false;
}
void explainAlgoFunctions(){
    vector<int> arr = { 20,10,0,15,12};
    sort(arr.begin(), arr.end());
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum is: " << sum << endl;;

    int frequencies = count(arr.begin(), arr.end(), 12);
    cout << "No of time presemt is: " << frequencies << endl;
    string s = "abc";
    do{
        cout << s << " ";
    }while(next_permutation(s.begin(), s.end()));

   auto itr = max_element(arr.begin(), arr.end());

   cout << *itr;

   reverse(arr.begin(), arr.end());
   for(auto i : arr){
        cout << i << " ";
    }
 cout << pow(2,9) << "is the power of 2 to the power 9" << endl;

 sort(arr.begin(), arr.end(), comparator);
 for(auto i : arr){
        cout << i << " ";
    }
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
//    explainPQ() ;
//    explainSet();
//    explainMap();
//   explainMultiSet();
// explainUnorderedMap();
// explainMultiMap();
// explainAlgoFunctions();
    return 0;
}