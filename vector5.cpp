#include<iostream>
#include<vector>

using namespace std;

int main(){

    // pop back remove from last

     vector<int> vec1 ;
     cout << "size = " << vec1.size() << endl ;
     vec1.push_back(1) ;
     vec1.push_back(25) ;
     vec1.push_back(150) ; 
     cout << "size after push back = " << vec1.size() << endl ;
     
     vec1.pop_back(); //150 is removed
    
     cout << "first element = "  << vec1.front() << endl ;
     cout << "last element = "  << vec1.back() << endl ;

    // at function

    cout << "element at index 1 = " << vec1.at(1) << endl ;

    
    return 0;
}