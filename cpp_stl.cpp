#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    //pairs
    pair<int,int> p={2,3};
    pair<int,pair<int,int>> t={1,{3,4}};
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};

    cout<<p.second<<endl;
    cout<<t.second.first<<endl;
    cout<<arr[1].second<<endl;


// vector
vector<int>v;
v.push_back(1);
v.emplace_back(2);
cout<<v[0]<<" "<<v.at(0);
vector<int>v1(5,20);//in(5,20) 5 is the size and 20 will be 5 times in this 
// i can also put a pair in vector in emplace back i can just pass  no. 
//it will take it as a pair no{}needed
vector<int>v2(v);// copy of v is v2

vector<int>::iterator it=v.begin();//it is just name iterator point to the memory address
it++;
cout<<*(it)<<" ";
// there is v.end which points to the memory after the last element v.back=last element
for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
}
cout<<endl;
for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
}//auto detects the data type by itself let it be vector iterator or any other
 for(auto it:v){
    cout<<it<<" ";
 }  


 v.erase(v.begin() + 1);//Erasing a single element
 v.erase(v.begin() + 2, v.begin() + 4);//Erasing a range of elements the end is not included


vector<int> v3(2, 100);   // {100, 100}
v3.insert(v3.begin(), 300);      // {300, 100, 100}
v3.insert(v3.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}(the position,how many times,no.)


vector<int> copy(2, 50);  // {50, 50}
v.insert(v.begin(), copy.begin(), copy.end());
//will print 50,50 at beginning as (position,copy.begin,copy.end) 

//list
list <int> ls;
ls.push_back(2);
ls.push_front(3);
//all the other things are same as vector

//deque
deque<int> dq;

    dq.push_back(1);       // {1}
    dq.emplace_back(2);    // {1, 2}
    dq.push_front(4);      // {4, 1, 2}
    dq.emplace_front(3);   // {3, 4, 1, 2}

    dq.pop_back();         // {3, 4, 1}
    dq.pop_front();        // {4, 1}

 //stack  works on the principle LIFO
 
 stack<int> st;

    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(3);     // {3, 3, 2, 1}
    st.emplace(5);  // {5, 3, 3, 2, 1}

    cout << "Top element: " << st.top() << endl; // 5
    st.pop(); // removes 5 → {3, 3, 2, 1}
    cout << "Top after pop: " << st.top() << endl; // 3
    cout << "Size of stack: " << st.size() << endl; // 4
    cout << "Is stack empty? " << st.empty() << endl; // 0 (false)
    stack<int> st1, st2;
    st1.swap(st2); // swaps contents

 //queue   works on the principle FIFO

  queue<int> q;

    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  // modify last element → {1, 2, 9}
    cout << "Back element: " << q.back() << endl;   // 9
    cout << "Front element: " << q.front() << endl; // 1
    q.pop(); // removes front → {2, 9}
    cout << "Front after pop: " << q.front() << endl; // 2
    cout << "Size: " << q.size() << endl;
    cout << "Is empty? " << q.empty() << endl;


//priority queue -works such that the maximum no.is out first

 // MAX HEAP (default)
 
 
    priority_queue<int> pq;

    pq.push(5);      // {5}
    pq.push(2);      // {5, 2}
    pq.push(8);      // {8, 5, 2}
    pq.emplace(10);  // {10, 8, 5, 2}

    cout << "Top (max): " << pq.top() << endl; // 10 top TC-o(1)
    pq.pop(); // removes 10 → {8, 5, 2}  pop TC-logn
    cout << "Top after pop: " << pq.top() << endl; // 8

    //  MIN HEAP
    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);      // {5} TC-logn
    minpq.push(2);      // {2, 5}
    minpq.push(8);      // {2, 5, 8}
    minpq.emplace(10);  // {2, 5, 8, 10}

    cout<< "Top (min): " << minpq.top() << endl; // 2    

// set- it is sorted the values in it will not repeat 
   set<int> stt;
  stt.insert(5);
  stt.insert(1);
  stt.insert(3);
  stt.insert(3); // duplicate  ignored

   auto it = stt.find(3);//If found → iterator to element If not → st.end()

   stt.erase(3);       // remove value
   //stt.erase(it);      // remove using iterator

//multiset - allows duplicate but still sorted

  multiset<int> ms;
  ms.insert(1); // {1}
  ms.insert(1); // {1, 1}
  ms.insert(1); // {1, 1, 1}
  
  ms.erase(1);//remove all occurences
  int cnt = ms.count(1);// returns how many times 1 appears
  ms.erase(ms.find(1));// remove only one occurence 

  //unordered_set-does not store in any order

  //map - key value pair and the datatype can be any , no duplicate key, will be sorted
  map<int,int>mpp;
  mpp[1]=2;//in the key 1 store 2
  mpp.insert({1,2});
  mpp.emplace(3,2);

//multimap-duplicate keys are allowed
auto it =mpp.find(1);//this will give a iterator that eill point towards 3  *(it).second will give 2







// if we have an array {1,5,3,4} for you to sort this sort(a,a+4) a+4 is write after the 4 
// descending order-sort(a,a+n,greater<int>)
//now if we wnat to sort according to us we have to use  sort(a,a+4,comp)where comparator is 
//a booleanoperator which we have to write such that it only return true or false 


int num=7;
int cnt=__builtin_popcount(num);//this will give no. of set bits that means no. of 1's in binary format
//if datatype is longlong then the built in funtion is __builtin_popcountll

/*this will give all the permutations of the string but one thing to remember is that
the string should in sorted manner to print all the permutations */

string s = "123";

do {
    cout << s << endl;
} while(next_permutation(s.begin(), s.end()));


// to get the max element in an array 
// int maxi=*max_element(a,a+n); this will give iterator of the max element and the *will give the element


    return 0;

}



