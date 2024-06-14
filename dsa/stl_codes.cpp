//stl-->std template library which contains alot of predefined templates in terms of containers and classes 

//unorderd_set: 
//*stores unique elements but not sorted
//every operation has O(1) in avg case and O(n) in worst case
//Syntax= unordered_set <object_type> variable_name; 
//insert()
//begin():returns an iterator pointing to 1st element
//end():returns an iterator pointing to one past the last element of set
//count():returns 1 if elemnt present otherwise 0
//clear():deletes all element
//find():to serach a element in set
//ersae():to delete single elemnet or element between range
//size(): returns size of unordered list
//empty():checks if unoredred set is empty or not
//emplace():used to insert element in set
//cbegin():returns constant iterator pointing to first element of unordered set
//cend():to obtain a constant iterator to end of set.
//cbegin() and begin() both returns contant iterator in case of unordered set 
//s.begin()=12;
//s.cbegin()=12;
//both will return compilation error as both returns constant iterator
//cend():returns constant iterator prevents modification
//end(): returns regular iterator allowing modification of elements
#include<bits/stdc++.h>
using namespace std;
int main() {

  // unordered_set <int> s;
  // for (int i = 1; i <= 10; i++) {
  //   s.insert(i);
  // }//{1,2,3,4,5,6,7,8,9,10}

  // cout << "Elements present in the unordered set: ";
  // for (auto it = s.begin(); it != s.end(); it++) {
  //   cout << *(it) << " ";
  // }
  // cout << endl;
  // int n = 2;
  // if (s.find(2) != s.end())
  //   cout << n << " is present in unordered set" << endl;

  // s.erase(s.begin());//{2,3,4,5,6,7,8,9,10}
  // cout << "Elements after deleting the first element: ";
  // for (auto it = s.begin(); it != s.end(); it++) {
  //   cout << * it << " ";
  // }
//   cout << endl;

//   cout << "The size of the unordered set is: " << s.size() << endl; 
//   if (s.empty() == false)
//     cout << "The unordered set is not empty " << endl;
//   else
//     cout << "The unordered set is empty" << endl;
//   s.clear();
//   cout << "Size of the unordered set after clearing all the elements: " << s.size();
// cout<<"\n";
// ////////////////////////////////////////////
// //vector:dynamic arrays that have ability to change size
// //elements are stored in cont memory locatons
// //syntax:vector<obtect type>variable;
// //begin():returns iterator pointing to first element
// //end():returns iterator after last element
// //push_back():element inserted at end
// //insert(index,element):insert element at particular index and not removes pehle se pada element
// //erase(starting , ending) or erase(location)
// //erase(casnnot write value of element)
// //pop_back()-->deletes last element
// //front():returns reference to first element of vector
// //back():returns reference to last element
// //clear()
// //empty():returns 0/1
// //size()

// // vector<int>v1;
// // v1.push_back(5);//{5}
// // v1.emplace_back(3);//{5,3}
// // v1.emplace_back(5);//{5,3,5}
// // auto it=v1.begin();
// // v1.insert(it,510);//{510,5,3,5}
// // v1.erase(it+1);//{510,3,5}
// // v1.pop_back();//{510,3}
// // for(it;it!=v1.end();it++){
// //     cout<<*(it)<<" ";
// // }
// // cout<<"\n"<<!(v1.empty());

// //2:
//   vector <int> v;
//   for (int i = 1; i<=10; i++) {
//     v.push_back(i); //inserting elements in the vector
//   }//{1,2,3,4,5,6,7,8,9,10}

//   cout << "the elements in the vector: ";
//   for (auto it = v.begin(); it != v.end(); it++)
//     cout << * it << " ";

//   cout << "\nThe front element of the vector: " << v.front();//1
//   cout << "\nThe last element of the vector: " << v.back();//10
//   cout << "\nThe size of the vector: " << v.size();//10
//   cout << "\nDeleting element from the end: " << v[v.size() - 1];
//   v.pop_back();//{1,2,3,4,5,6,7,8,9}

//   cout << "\nPrinting the vector after removing the last element:" << endl;
//   for (int i = 0; i < v.size(); i++)
//     cout << v[i] << " ";

//   cout << "\nInserting 5 at the beginning:" << endl;
//   v.insert(v.begin(), 5);///{5,1,2,3,4,5,6,7,8,9}
//   cout << "The first element is: " << v[0] << endl;//5
//   cout << "Erasing the first element" << endl;
//   v.erase(v.begin());//{1,2,3,4,5,6,7,8,9}
//   cout << "Now the first element is: " << v[0] << endl;//1
//   if (v.empty())
//     cout << "\nvector is empty";
//   else
//     cout << "\nvector is not empty" << endl;

//   v.clear();
//   cout << "Size of the vector after clearing the vector: " << v.size();//0

/////////////////////////////////set
//stores unique element in particular order
//O(1) in avg case and O(n) in worst case
//syntax:set<object_type> variable_name;
//insert()
//begin()
// end()
// count()
//clear()
//find()
//erase()
//size()
//empty():
  // set <int> s;
  // for (int i = 1; i <= 10; i++) {
  //   s.insert(i);//{1,2,3,4,5,6,7,8,9,10}
  // }

  // cout << "Elements present in the set: ";
  // for (auto it = s.begin(); it != s.end(); it++) {
  //   cout << *(it) << " ";
  // }
  // cout << endl;
  // int n = 2;
  // if (s.find(2) != s.end())
  //   cout << n << " is present in set" << endl;

  // s.erase(s.begin());
  // cout << "Elements after deleting the first element: ";
  // for (auto it = s.begin(); it != s.end(); it++) {
  //   cout << * it << " ";
  // }
  // cout << endl;

  // cout << "The size of the set is: " << s.size() << endl;

  // if (s.empty() == false)
  //   cout << "The set is not empty " << endl;
  // else
  //   cout << "The set is empty" << endl;
  // s.clear();
  // cout << "Size of the set after clearing all the elements: " << s.size();

//queue:FIFO
    // queue<int> q;
    // q.push(1);//{1}
    // q.push(2);//{1,2}
    // q.emplace(4);//{1,2,4}
    // q.back()+=5;//{1,2,9}
    // cout<<q.back();//9
    // cout<<q.front();//1
    // q.pop();//{2,9}//upper wala delete ho jayega
    // cout<<q.front();//2

    //multiset
    // multiset<int>ms;
    // ms.insert(1);//{1}
    // ms.insert(1);//{1,1}
    // ms.insert(1);//{1,1,1}

    // // ms.erase(1);//all 1's will be erased

    // int cnt=ms.count(1);//3
    // cout<<cnt<<"\n";
    // ms.erase(ms.find(1));//{1,1} only single one is erased
    // auto itr=ms.find(1);
    // ms.erase(itr,next(itr,1));//range of erase
    // for(auto it=ms.begin();it!=ms.end();++it){
    //   cout<<*it<<" ";
    // }

  /////////////////////////////////////map//////////////////////////////////////////
    // Declare a map where the key is a string and the value is an integer
//     map<string, int> myMap;
//     // Insert elements into the map using insert() method
//     myMap.insert(make_pair("apple", 5));
//     myMap.insert(make_pair("banana", 3));
//     myMap["orange"] = 7; // Another way to insert elements
//     myMap.insert({"lichi",3});
//     myMap.emplace("melon",4);//by default takes it pair
//     // Accessing elements
//     cout << "Value of apple: " << myMap["apple"] << endl;

//     // Iterating over the map
//     cout << "Elements of the map:" << endl;
//     for (auto it = myMap.begin(); it != myMap.end(); ++it) {
//         cout << it->first << ": " << it->second << endl;
//     }

//     // Check if a key exists
//     string key = "apple";
//     if (myMap.find(key) != myMap.end()) {
//         cout << key << " exists in the map." << endl;
//     } else {
//         cout << key << " does not exist in the map." << endl;
//     }

//     // Erase an element by key
//     myMap.erase("banana");

//     // Check the size of the map
//     cout << "Size of the map after erasing: " << myMap.size() << endl;

//////////////////////////multi map
    // multimap<int, string> myMultimap;
    // // Inserting elements into the multimap using insert()
    // myMultimap.insert(pair<int, string>(1, "apple"));
    // myMultimap.insert(make_pair(2, "banana"));
    // myMultimap.insert({1, "apricot"}); // C++11 brace initialization
    // myMultimap.insert({1, "avocado"});
    // myMultimap.insert({2, "blueberry"});
    // myMultimap.emplace(3, "cherry");
    // myMultimap.emplace(4, "date");
    // // Displaying elements of the multimap
    // cout << "Elements of the multimap:" << endl;
    // for (const auto& pair : myMultimap) {
    //     cout << pair.first << ": " << pair.second << endl;
    // }
    // // Counting occurrences of a key
    // int key = 1;
    // cout << "Count of key " << key << ": " << myMultimap.count(key) << endl;
    // // Finding elements with a specific key
    // auto range = myMultimap.equal_range(1);//equal_range(key)
    // cout << "Elements with key " << key << ":" << endl;
    // //range.first pointing to first element and 
    // //range.second-->pointing to element just after last element
    // for (auto it = range.first; it != range.second; ++it) {
    //     cout << it->first << ": " << it->second << endl;
    // }
    // // Erasing elements with a specific key
    // key = 2;
    // myMultimap.erase(key); // Remove all elements with key 2
    // // Erasing a single element
    // auto it = myMultimap.find(3);
    // if (it != myMultimap.end()) {
    //     myMultimap.erase(it); // Remove the element with key 3
    // }
    // // Clearing the multimap
    // myMultimap.clear();
    // // Checking if the multimap is empty
    // if (myMultimap.empty()) {
    //     cout << "The multimap is empty." << endl;
    // } else {
    //     cout << "The multimap is not empty." << endl;
    // }

///unordered map:
//     unordered_map<string, int> myMap;
//     myMap["apple"] = 5;
//     myMap["banana"] = 3;
//     myMap.insert(make_pair("orange", 7));
//     myMap.insert({"grape", 4});
// myMap.emplace("melon",1);
//     cout << "Elements of the unordered_map:" << endl;
//     for (const auto& pair : myMap) {
//         cout << pair.first << ": " << pair.second << endl;
//     }
//     string key = "banana";
//     cout << "Value of " << key << ": " << myMap[key] << endl;
//     key = "orange";
//     if (myMap.find(key) != myMap.end()) {//myMap.find(key): This line searches for the key key in the unordered_map myMap. If the key is found, it returns an iterator pointing to the element with that key. 
//     //If the key is not found, it returns myMap.end().
//         cout << key << " exists in the unordered_map." << endl;
//     } 
//     else {
//         cout << key << " does not exist in the unordered_map." << endl;
//     }
//     key = "banana";
//     myMap.erase(key); // Remove the element with key "banana"
//     cout << "Size of the unordered_map after erasing: " << myMap.size() << endl;
//     myMap.clear();
//     if (myMap.empty()) {
//         cout << "The unordered_map is empty." << endl;
//     } else {
//         cout << "The unordered_map is not empty." << endl;
//     }

////////////////////extra
///1
// bool comp(pair<int,int>p1,pair<int,int>p2){
// //{},{}
// if(p1.second<p2.second) return True;
// if(p1.second>p2.second) return False;
// if(p1.first>p2.first) return True; 
// else return False;
// }
// auto a={1,5,3,2};
// n=4;//size
// sort(a,a+n);//arrays
// sort(v.begin(),v.end());//vector
// sort(a+2,a+4);

// sort(a,a+n,greater<int>);//greater<int>-->inbuilt comparator sorts in decreasing order

// //if we want to sort in our way
// pair<int,int> a[]={{1,2},{2,1},{4,1}};
// //sort it acc to second element//{2,1},{4,1},{1,2}
// //if second element is same then sort acc to first element
// // but in descending{4,1},{2,1},{1,2}
// sort(a,a+n,comp)//comp is self written comparator
    
    ///2////
    // When talking about "set bits" in the context of programming or computer science, it usually refers to counting the number of bits that are set to 1 in a binary representation of a number or a data structure
//     int num=7;//111
//     int cnt=_builtin_popcount();//how many 1's are there or set bits are there

// int long num=16543768953687;
// int cnt=__builtin_popcountll();//no. of set bits
    
    // //to get permutations
    // string s="123";
    // //always start from sorted one
    // sort(s.begin(),s.end());
    // do{
    //   cout<<s<<endl;
    //   }
    //   while(next_permutation(s.begin(),s.end()));
      
    //   //max_element to find maximum
    // int max1=max_element(a,a+n);
    return 0;
}

