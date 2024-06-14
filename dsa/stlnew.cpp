//stl is standard template library
//it is compilation of containers,algorithms,iterations,functions in a minimised version. to avoid writing lengthy codes
///divided into 4 parts:
//algorithms
//containers
//functions
//iterators

//std::cin>>
//std::cout<<

//containers:
// 1. Pairs:
#include<bits/stdc++.h>
using namespace std;
// bool compare(double a, double b)
// {
//     return ((int)a == (int)b);
// }
// bool comparator(int first, int second)
// {
//     return first < second;
// }
// void explainPair(){
//     pair<int,int> p1={1,3};
//way of accessing elements:
//     cout<<p1.first<<" "<<p1.second;
//     pair<int,pair<int,int>> p2={1,{3,4}};
//     cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first;
//     pair<int,int> arr[]={{1,2},{2,5},{5,1}};
//     cout<< arr[1].second;    
// }

//cannot modify size of array
//vector is container dynamic in nature
// void explainVector(){
    // vector<int> v;//{}
    // v.push_back(1);//{1}
    // v.emplace_back(2);//{1,2}
 
//point of diff b/w push_back and emplace_back
    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(3,4);

    // vector<int> v1(5,100);//5 is the size {100,100,100,100,100}

    // vector<int> v2(5);//either 0 or garbage value

    // vector<int> v3(v1);//v3 is copy of v1
    
//accessing elements:
//1. iterator--> points to memory
    // vector<int> v4{10,20,30,40};
    // vector<int>::iterator it=v4.begin();
    // cout<< *(it) <<" ";
    // it++;
    // cout<< *(it)<<" ";
    // it=it+2;
    // cout<< *(it)<<" ";

	// vector<string> myvector{ "This", "is","Geeksforgeeks" };
	// for (auto it = myvector.begin();it != myvector.end(); ++it)
	// 	cout << ' ' << *it;

    // vector<int>::iterator it1=v4.end();//pointing after last element
    // it1--;
    // cout<< *(it1)<<" "; 

    // vector<int>::iterator it2=v4.rend(); //{40,30,20,10} pointing after 10
    // it2--;
    // cout<< *(it2)<<" ";//10

    // vector<int>::iterator it3=v4.rbegin(); //{40,30,20,10} pointing to 40
    // cout<< *(it3)<<" "; //40

//another way of accessing elements:
// cout<<v4[0]<<" "<<v4.at(0);
// cout<<v4.back()<<" ";//last element

//third way of accessing elements:
// for(vector<int>::iterator it5=v4.begin();it5!=v4.end();it5++){
//     cout<<*(it5)<<" ";
// }

//fourth way of accessing:
// for(auto it5=v4.begin();it5!=v4.end();it5++){
//     cout<<*(it5)<<" ";
//     }

//fifth way of accessing:
// for(auto it5:v4){//auto here is int
//     cout<<it5<<" ";
// }

//deleting something in vector:
//erase(start address,end) end is not included
// v4.erase(v4.begin()+1);
// for(auto it5=v4.begin();it5!=v4.end();it5++){
//     cout<<*(it5)<<" ";
// }

//inserting something in vector:
// vector<int>v_(2,100);//v_=(2,100) donot write in this way
// v_.insert(v_.begin(),300);
// v_.insert(v_.begin()+1,2,10);//300 10 10 100 100

// vector<int> copy(2,50);
// v_.insert(v_.begin(),copy.begin(),copy.end());
// for(auto it:v_){
//     cout<<it<<" ";
// }

// vector<int> v{1,2,3,4};
// cout<<v.size();

// // difference b/w v.back() and v.pop_back()
// cout<<v.back();//returns last element
// cout<<v.front();//returns first element
// v.pop_back();
// for(auto it:v){
//     cout<<it<<" ";
// }
// v.clear()//{}

// vector<int> v1{10,20};
// vector<int>v2{30,40};
// v1.swap(v2);
// cout<<v1.empty();//returns 0 or 1

//vector::operator= --> It is used to assign new contents to container by replacing existing contents and also modifies size.
// vector<int> myvector1{ 1, 2, 3 };
// vector<int> myvector2{ 3, 2, 1, 4 };
// myvector1 = myvector2;
// cout << "myvector1 = ";
// for (auto it = myvector1.begin(); it != myvector1.end(); ++it)
//     cout << ' ' << *it;
// cout<<"\n"<<"myvector2=";
// for (auto it = myvector2.begin(); it != myvector2.end(); ++it)
//     cout << ' ' << *it;

//vector::operator[]
// vector<int> myvector1{ 1, 2, 3 };
// cout<<myvector1[4]<<"\n";//garbage value
// myvector1[2]=6;
// for(auto it:myvector1){
//     cout<<it;

// }

//vector_name.emplace(const_iterator position,element)-->returns an iterator poinyting to newly inserted element.
// vector<int> vec = { 10, 20, 30 };
    // //insert element by emplace function at front
//     auto it = vec.emplace(vec.begin(), 15);
// cout << "The vector elements are: "; 
//     for (auto it = vec.begin(); it != vec.end(); ++it)
//         cout << *it << " ";
 
    // // insert element by emplace function at the end
//     auto it = vec.emplace(vec.end(), 16);
// cout << "The vector elements are: "; 
//     for (auto it = vec.begin(); it != vec.end(); ++it)
//         cout << *it << " ";

// insert element by emplace function in the middle
//     auto it = vec.emplace(vec.begin() + 2, 16);
// cout << "The vector elements are: "; 
//     for (auto it = vec.begin(); it != vec.end(); ++it)
//         cout << *it << " ";
// emplcee doenot take three arguments like insert 

// vector<pair<int, string>> v = {{1, "one"}, {2, "two"}};
// v.emplace(v.begin() + 1, 3, "three"); // emplace a new pair at the second position
// cout << "Vector: ";
// for (auto x : v) cout << x.first << " " << x.second << " "; // Output: 1 one 3 three 2 two

//in vector there is no emplace_front but only emplace_back

// //vector::assign(int size,int value)
// vector<int> v;
// v.assign(7, 100);
// cout << "Size of first: "<< int(v.size()) << '\n';
// cout << "Elements are\n";
// for (int i = 0; i < v.size(); i++)
//     cout << v[i] << endl;


//for assigning values from an array or list
// vector_name.assign(arr,arr+size)//arr+size is not included
// vector<int> v1;
// int a[] = { 1, 2, 3 };
// v1.assign(a, a + 2);
// cout << "Elements of vector1 are\n";
// for (int i = 0; i < v1.size(); i++)
//     cout << v1[i] << " ";
// vector<int> v2;
// v2.assign(a, a + 3);
// cout << "\nElements of vector2 are\n";
// for (int i = 0; i < v2.size(); i++)
//     cout << v2[i] << " ";

// vector<int> v;
// v.assign(7, 100);
// cout << "Size of first: " << int(v.size()) << '\n';
// cout << "Elements are\n";
// for (int i = 0; i < v.size(); i++)
//     cout << v[i] << endl;
// v.assign(v.begin(), v.begin() + 3);
// cout << "\nModified VectorElements are\n";
// for (int i = 0; i < v.size(); i++)
//     cout << v[i] << endl;

// vector<int> v;
// // Initialize v with an initialization list
// v.assign({ 1, 2, 3 });
// cout << "The list is:" << endl;
// for (auto i = v.begin(); i != v.end(); i++) 
//     {
//         cout << *i << " "; 
//     }
// }

//doubly linked list--> list
// void explainList(){
    // list<int> ls{12,45,8,6};
    // for(auto i: ls){
    //     cout<<i<<" ";
    // }

//     list<int> gqlist1, gqlist2;
//     for (int i = 0; i < 10; ++i) {
//         gqlist1.push_back(i * 2);//{0,2,4,6,8,10,12,14,16,18}
//         gqlist2.push_front(i * 3);//{27,24,21,18,15,12,9,6,3,0}
//     }
//     cout << "\ngqlist1.front() : " << gqlist1.front();//0
//     cout << "\ngqlist1.back() : " << gqlist1.back();//18
//     cout << "\ngqlist1.pop_front() : ";
//     gqlist1.pop_front();
//     for(auto it:gqlist1){
//         cout<<it<<" ";//2 4 6 8 10 12 14 16 18
//     }
//     cout<<"\n";
//     gqlist1.pop_front();
//     for(auto it:gqlist1){
//         cout<<it<<" ";//4 6 8 10 12 14 16 18
//     }
//     cout << "\ngqlist2.pop_back() : ";
//     gqlist2.pop_back();//27 24 21 18 15 12 9 6 3
//    for(auto it:gqlist2){
//         cout<<it<<" ";
//     }
//     cout << "\ngqlist1.reverse() : ";
//     gqlist1.reverse();
//     for(auto it:gqlist1){
//         cout<<it<<" ";
//     }
//     cout << "\ngqlist2.sort(): ";
//     gqlist2.sort();
//      for(auto it:gqlist2){
//         cout<<it<<" ";
//     }

//cbegin() and cend():
// list<int> lis {5,6,7,8,9};
// cout<<*lis.cbegin()<<"\n";
// for(auto it=lis.cbegin();it!=lis.cend();it++){
//     cout<<*it<<" ";
// }
// lis[0]=10
// for(auto it=lis.cbegin();it!=lis.cend();it++){
//     cout<<*it<<" ";
// }

//difference b/w cbegin and begin:
// list<int> v{10,20,30,40,50};
// list<int> :: iterator it;

// for (it = v.begin(); it != v.end(); it++)
// {
//     *it = *it - 10;
//     cout<<*it<<" ";
// }

// list<int> v{10,20,30,40,50};
// list<int> :: iterator it;
// for (it = v.cbegin(); it != v.end(); it++)
// {
//     *it = *it - 10;//error will be raised
//     cout<<*it<<" ";
// }

//list.resize(int n , value_type val)
    // list<int> demoList;
    // demoList.push_back(10);
    // demoList.push_back(20);
    // demoList.push_back(30);
    // demoList.push_back(40);
    // cout << "Initial List: ";
    // for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    //     cout << *itr << " ";//{10,20,30,40}
    // // Resize list to contain less elements
    // demoList.resize(2);
    // cout << "\n\nList after first resize: ";
    // for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    //     cout << *itr << " ";//{10,20}

    // // Resize list to contain more elements
    // demoList.resize(4);
    // cout << "\n\nList after second resize: ";
    // for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    //     cout << *itr << " ";
 
    // // // resize list to contain more elements with a specified value
    // demoList.resize(5, 50);
    // cout << "\n\nList after third resize: ";
    // for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
    //     cout << *itr << " ";

//list.max_size():
// list<int> demoList; 
// cout << demoList.max_size();
// vector<int>v;
// cout<<"\n"<<v.max_size();

//list.unique():
// list<double> list = { 2.55, 3.15, 4.16, 4.16,4.77, 12.65, 12.65, 13.59 };
//     cout << "List is: ";
//     //sort the list 
//     list.sort();
//     // unique operation on list with no parameters
//     list.unique();
//     // starts from the first element of the list to the last
//     for (auto it = list.begin(); it != list.end(); ++it)
//         cout << *it << " ";

//     // unique operation on list with parameter
//     list.unique(compare);
//     cout << "\nList is: ";
//     // starts from the first element of the list to the last
//     for (auto it = list.begin(); it != list.end(); ++it)
//         cout << *it << " ";

// //list.emplace_back or emplace_front:

//list.splice():
// list<int> l1 = { 1, 2, 3 };
//     list<int> l2 = { 4, 5 };
//     list<int> l3 = { 6, 7, 8 };
//  // transfer all the elements of l2
//     l1.splice(l1.begin(), l2);//{4,5,1,2,3}
//     cout << "list l1 after splice operation" << endl;
//     for (auto x : l1)
//         cout << x << " ";
//     // // transfer all the elements of l1
//     l3.splice(l3.end(), l1);//{6,7,8,4,5,1,2,3}
//     cout << "\nlist l3 after splice operation" << endl;
//     for (auto x : l3)
//         cout << x << " ";

//Transfer single Element:
//   list<int> l1 = { 1, 2, 3 };
    // list<int> l2 = { 4, 5 };
    // list<int>::iterator it;
    // it = l2.begin();
    // l1.splice(l1.end(), l2, it);//{1,2,3,4}
    // cout << "list l1 after splice operation" << endl;
    // for (auto x : l1)
    //     cout << x << " ";

//Transfer Range of Elements:
//    list<int> l1 = { 1, 2, 3, 4, 5 };
//     list<int> l2 = { 6, 7, 8 };
//     list<int>::iterator it;
//     it = l1.begin();
//     //advance the iterator by 2 positions
//     advance(it, 2);
//     l2.splice(l2.begin(), l1, it, l1.end());//{3,4,5,6,7,8}
//     cout << "list l2 after splice operation" << endl;
//     for (auto x : l2)
//         cout << x << " ";

//list.merge():
//very imp list2.merge(list1)-->empties the list1
    // list<int> list1 = { 10, 20, 30 }; 
    // list<int> list2 = { 40, 50, 60 }; 
    // // merge operation 
    // list2.merge(list1); 
    // cout << "List: "; 
    // for (auto it = list2.begin(); it != list2.end(); ++it) 
    //     cout << *it << " ";
    // cout<<"\n";
    // for (auto it = list1.begin(); it != list1.end(); ++it) 
    //     cout << *it << " ";

//merge(list,comparator):
// list<int> list1 = { 1, 70, 80 };
//     list<int> list2 = { 2, 3, 4 };
//     list1.merge(list2, comparator);//{{1,2,3,4,70,80}
//     cout << "List: ";
//     for (auto it = list1.begin(); it != list1.end(); ++it)
//         cout << *it << " ";
// }

// void explainDeque(){
//   deque<int> gquiz;
//     gquiz.push_back(10);//{15,20,10,30}
//     gquiz.push_front(20);
//     gquiz.push_back(30);
//     gquiz.push_front(15);
//     cout << "The deque gquiz is : ";
//     showdq(gquiz);
//     cout << "\ngquiz.size() : " << gquiz.size();
//     cout << "\ngquiz.max_size() : " << gquiz.max_size();
//     cout << "\ngquiz.at(2) : " << gquiz.at(2);
//     cout << "\ngquiz.front() : " << gquiz.front();
//     cout << "\ngquiz.back() : " << gquiz.back();
//     cout << "\ngquiz.pop_front() : ";
//     gquiz.pop_front();
//     showdq(gquiz);
//     cout << "\ngquiz.pop_back() : ";
//     gquiz.pop_back();
//     showdq(gquiz);   
// }

//Stack-->LIFO-->Last in First out
//push + pop +top +swap
//no indexing
//all operations have constant time complexity
// void explainStack(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.emplace(3);//{3,2,1}
//     cout<<st.top();//3
//     st.pop();//removes 3
//     cout<<st.top();//2
//     cout<<st.size();//2
//     cout<<st.empty();//0 i.e. false
// }

//queue-->FIFO-->first in first out
//size+swap+empty
//constant time complexity all operatiobs
// void explainQueue(){
// queue<int> q;
// q.push(1);
// q.push(2);
// q.emplace(4);//{1,2,4}

// //way to acccess elements in queue
// while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
// }
// q.back()+=5;//{1,2,9}
// cout<<q.back();//9
// cout<<q.front();//1
// q.pop();//{2,9}
// cout<<q.front();//2
// }

//greatest element will stay at top 
//in case of string lexcographical order followed
//tree is maintained not linear
// void explainPriority_Queue(){
//max heap
// priority_queue<int>pq;;
// pq.push(5);
// pq.push(2);
// pq.push(8);
// pq.emplace(10);//{10,8,5,2}
// cout<<pq.top();//10
// pq.pop();
// cout<<pq.top();//8

//pq storing mininmum element at top
//min heap
// priority_queue<int,vector<int>,greater<int>>pq;
// pq.push(5);
// pq.push(2);
// pq.push(8);
// pq.emplace(10);
// cout<<pq.top();//2

//value_type functiom
// declare integer value_type for priority queue
    // priority_queue<int>::value_type AnInt;
    // // declare string value_type for priority queue
    // priority_queue<string>::value_type AString;
    // // Declares priority_queues
    // priority_queue<int> q1;
    // priority_queue<string> q2;

    // // Here AnInt acts as a variable of int data type
    // AnInt = 20;
    // cout << "The value_type is AnInt = " << AnInt << endl;
    // q1.push(AnInt);
    // AnInt = 30;
    // q1.push(AnInt);
//     cout << "Top element of the integer priority_queue is: "
//          << q1.top() << endl;
 
//     // here AString acts as a variable of string data type
//     AString = "geek";
//     cout << endl
//          << "The value_type is AString = " << AString
//          << endl;
//     q2.push(AString);
//     AString = "for";
//     q2.push(AString);
//     AString = "geeks";
//     q2.push(AString);
 
//     cout << "Top element of the string priority_queue is: "
//          << q2.top() << endl;
// }

//set is unique + sorted + immutable + unindexed
//Tree is maintained
//all operations in log N complexity
//insert+find+erase+count
//lowerbound+upperbound
// void explainSet(){
// set<char> a;
// a.insert('G');
// a.insert('F');
// a.insert('G');
// a.emplace('L');
// auto s=a.find('G');
// auto pos=a.find('D');
// if(pos==a.end()){
//     cout<<"Element not found and position of pos= "<<distance(a.begin(),pos)<<endl;
// }
// set<char>::iterator it1,it2;
// it1=a.begin();
// it2=a.end();
// a.erase(it1,it2);
// for(auto it:a){
//     cout<<it<<" ";
// }

//emplace_hint:
// set<int>s;
//  auto it = s.emplace_hint(s.begin(), 1); 
    // // stores the position of 2's insertion 
    // it = s.emplace_hint(it, 2); 
    // // fast step as it directly 
    // // starts the search step from 
    // // position where 3 was last inserted 
    // s.emplace_hint(it, 3); 
    // // this is a slower step as 
    // // it starts checking from the 
    // // position where 3 was inserted 
    // // but 0 is to be inserted before 1 
    // s.emplace_hint(it, 0); 
    // // prints the set elements 
    // for (auto it = s.begin(); it != s.end(); it++) 
    //     cout << *it << " "; 

//insert v/s emplace:
//  set<pair<char, int>> ms;  
//     ms.emplace('a', 24);  
//     // ms.insert(make_pair('b', 25));  
//         ms.insert({'b', 25});     
   
//     for (auto it = ms.begin(); it != ms.end(); ++it) 
//         cout << " " << (*it).first << " " 
//              << (*it).second << endl;

//for descending order:
// set<int,greater<int>> s1;

//lower_bound:
//   set<int> s;
//     s.insert(1);
//     s.insert(4);
//     s.insert(2);
//     s.insert(5);
//     s.insert(6);
//     auto it = s.lower_bound(2);
//     if (it != s.end()) {
//         cout << "\nThe lower bound of key 2 is ";
//         cout << (*it) << endl;
//     }
//     else
    //     cout << "The element entered is larger than the greatest element in the set" << endl;
    // it = s.lower_bound(3);
    // if (it != s.end()) {
    //     cout << "The lower bound of key 3 is ";
    //     cout << (*it) << endl;
    // }
    // else
    //     cout << "The element entered is larger than the greatest element in the set"<< endl;
    // it = s.lower_bound(8);
    // if (it != s.end()) {
    //     cout << "The lower bound of key 8 is ";
    //     cout << (*it) << endl;
    // }
    // else
    //     cout << "The element is larger than the greatest element in the set"<< endl;

//upperbound:
//     set<int> s;
//     s.insert(1);
//     s.insert(4);
//     s.insert(2);
//     s.insert(5);
//     s.insert(6); 
//     // when 2 is present points to next element after 2
//     auto it = s.upper_bound(2);
//     cout << "\nThe upper bound of key 2 is ";
//     cout << (*it) << endl;
//     // when 3 is not present points to next greater after 3
//     it = s.upper_bound(3);
//     cout << "The upper bound of key 3 is ";
//     cout << (*it) << endl;
// }

//sorted but unique
// void explainMultiSet(){
// multiset<int>ms={1,1,1};
// ms.erase(ms.begin(),ms.find(1));//erases nothing
// for(auto it:ms){
//     cout<<it<<" ";
// }
// }

// unique but not sorted
//all opeerations ame as set
//lowerbound and upperbound donot work
// void explainUnorderedset(){
// unordered_set<string> stringSet;
//     stringSet.insert("code");
//     stringSet.insert("in");
//     stringSet.insert("c++");
    // stringSet.insert("is");
    // stringSet.insert("fast");
    // string key = "slow";
//as unordered output everytime will vary.....
    // if (stringSet.find(key) == stringSet.end())
    //     cout << key << " not found" << endl << endl;
    // else
    //     cout << "Found " << key << endl << endl;
 
    // key = "c++";
    // if (stringSet.find(key) == stringSet.end())
    //     cout << key << " not found\n";
    // else
    //     cout << "Found " << key << endl;

    // cout << "\nAll elements : ";
    // unordered_set<string>::iterator itr;
    // for (itr = stringSet.begin(); itr != stringSet.end();itr++)
    //     cout << (*itr) << endl;
// }

//key value pairs
//key of any datatype and is unique
//value of any data type
//stores unique keys in sorted order.
// void explainMap(){
// map<int,int> mpp;
// map<int,pair<int,int>> mpp;
// map<pair<int,int>,int> mpp2;
// mpp[1]=2;
// mpp.emplace(3,1);
// mpp.insert({2,4});
// mpp.insert(pair<int,int>(13,40));
// mpp.insert(make_pair(5,9));
// //mpp-->{{1,2},{2,4},{3,1}} in sorted order
// for(auto it:mpp){//here it is pair
//     cout<<"key="<<it.first<<" "<<"value="<<it.second<<" "<<endl;
// }
// cout<<mpp[1]<<"\n";
// cout<<mpp[5]<<"\n";//if key not present then returns 0

// cout<<mpp.size()<<"\n";

//assigning elements from 1 map to another:
// map<int,int> mpp2(mpp.begin(),mpp.end());
// cout<<"all elemenst of mpp2=";
// for(auto it:mpp2){
//         cout<<"key="<<it.first<<" "<<"value="<<it.second<<" "<<endl;
// }

//lowerbound;
//  map<int, int> mp;
//     mp.insert({ 2, 30 });
//     mp.insert({ 1, 10 });
//     mp.insert({ 5, 50 });
//     mp.insert({ 4, 40 });
//     for (auto it = mp.begin(); it != mp.end(); it++) 
//     {
//         cout << (*it).first << " " << 
//                               (*it).second << endl;
//     }
 
//     // when 2 is present
//     auto it = mp.lower_bound(2);
//     cout << "The lower bound of key 2 is ";
//     cout << (*it).first << " " << (*it).second << endl;
 
//     // when 4 is not present
//     it = mp.lower_bound(3);
//     cout << "The lower bound of key 3 is ";
//     cout << (*it).first << " " << (*it).second;
 
//     // when 60 exceeds
//     it = mp.lower_bound(60);
//     cout << "\nThe lower bound of key 6 is ";
//     cout << (*it).first << " " << (*it).second;

// mpp.erase(mpp.begin(),mpp.find(3));
// for(auto it:mpp){//here it is pair
//     cout<<"key="<<it.first<<" "<<"value="<<it.second<<" "<<endl;
// }
// mpp.erase(13);//key=4
// for(auto it:mpp){//here it is pair
//     cout<<"key="<<it.first<<" "<<"value="<<it.second<<" "<<endl;
// }

//upper_bound():
// map<int, int> mp; 
//     mp.insert({ 12, 30 }); 
//     mp.insert({ 11, 10 }); 
//     mp.insert({ 15, 50 }); 
//     mp.insert({ 14, 40 }); 
  
//     // when 11 is present 
//     auto it = mp.upper_bound(11); 
//     cout << "The upper bound of key 11 is "; 
//     cout << (*it).first << " " << (*it).second << endl; 
  
//     // when 13 is not present 
//     it = mp.upper_bound(13); 
//     cout << "The upper bound of key 13 is "; 
//     cout << (*it).first << " " << (*it).second << endl; 
  
//     // when 17 is exceeds the maximum key, so size 
//         // of mp is returned as key and value as 0. 
//     it = mp.upper_bound(17); 
//     cout << "The upper bound of key 17 is "; 
//     cout << (*it).first << " " << (*it).second; 
// }

//multiple keys
// void explainMultimap(){

// }

//key is unique but order is random
// void unorderedmap(){

// }

void explainString(){
    // char s[]="GeeksforGeeks";
    // char s[]={'G','e','e','k','s','\0'};
    // string str="GeeksforGeeks";
    // cout<<str[0];
    // string str("GeeksforGeeks");
    // string str(5,"g");

//getline() :
    // string s;
    // cout<<"Enter string=";
    // getline(cin,s);
    // cout<<"string is:"<<s;

//stringstream class:
// string s="Geeks to moon";
// stringstream obj(s);
// string temp;
// //>> operator will read from stringstream object
// while (obj>>temp){
//     cout<<temp<<endl;
// }

// string str="GeeksforGeeks";
// char *p = &str[0];
// while(*p!='\0'){
//     cout<<*p;
//     p++;

//string functions:
	// Creating and initializing strings 
	string greeting = "Hello, World!"; 
	cout << greeting << endl; 
	string name; 

	// Input from the user 
	cout << "Enter your name: "; 
	cin >> name; 
	cout << name << endl; 

	// String length 
	int length = greeting.length(); 
	cout << length << endl; 

	// Accessing characters 
	char firstChar = greeting[0]; 
	char secondChar = greeting.at(1); 
	cout << firstChar << " " << secondChar << endl; 

	// Appending and concatenating strings 
	string firstName = "Geek"; 
	string lastName = "Geeks"; 
	string fullName = firstName + " " + lastName; 
	cout << fullName << endl; 
	string base = "Hello"; 
	cout << base << endl; 
	base.append(" World!"); 
	cout << base << endl; 

	// String comparison 
	string str1 = "apple"; 
	string str2 = "banana"; 
	if (str1 == str2) { 
		cout << "Strings are equal" << endl; 
	} 
	else { 
		cout << "Strings are not equal" << endl; 
	} 

	int result = str1.compare(str2); 
	if (result == 0) { 
		cout << "Strings are equal" << endl; 
	} 
	else if (result < 0) { 
		cout << "str1 comes before str2" << endl; 
	} 
	else { 
		cout << "str1 comes after str2" << endl; 
	} 

	// Substrings 
	string text = "Hello, World!"; 
	cout << text << endl; 
	string sub = text.substr(7, 5); 
	cout << sub << endl; 

	// Searching 
	string searchIn = "C++ Programming"; 
	size_t position = searchIn.find("Programming"); 
	if (position != string::npos) { 
		cout << "Found at position " << position << endl; 
	} 
	else { 
		cout << "Not found" << endl; 
	} 

	// Modifying strings 
	string modify = "I like dogs."; 
	modify.replace(7, 4, "cats"); 
	cout << modify << endl; 
	modify.insert(6, " black"); 
	cout << modify << endl; 
	modify.erase(6, 6); 
	cout << modify << endl; 
	// Conversion 
	string str = "C++"; 
	const char* cstr = str.c_str(); 
	cout << cstr << endl; 
}


int main(){
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriority_Queue();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedset();
    // explainMap();
//     explainMultimap();
//     unorderedmap();
    // explainExtra();
    explainString();
    return 0;
}
