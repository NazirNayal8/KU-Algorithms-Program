#include <bits/stdc++.h>

using namespace std;

// how to define a vector:
vector<int> v1; // empty vector
vector<int> v2(10); // vector of size 10
vector<int> v3(10,7); // vector of size 10 initialized
vector<int> v4[10];// define a list of vectors

// how to define a set:
set<int> s; // empty set
set<int> s1[10]; // list of 10 sets


int main(){

// add element to vector:
v1.push_back(8);

// remove last element
v1.pop_back();

// print size of vector
cout << v1.size();

// sort vector
sort(v1.begin(),v1.end());

// delete all elements in vector
v1.clear();

// add element to set
s.insert(3);

// erase element from set
s.erase(3);

// search for element in set
auto res = s.find(3);
if(res == s.end())
    cout << "Element not found";
else
    cout << (*res) << endl;



}
