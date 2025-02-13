#include<iostream>
#include<vector>

using namespace std;

int main(){

    

     vector<int> vec ;
     
     vec.push_back(0) ;  // size = 1 capacity = 1
     vec.push_back(1) ;   // size = 2 capacity = 2
     vec.push_back(2) ;   // size = 3 capacity = 4
     vec.push_back(3) ;   // size = 4 capacity = 4
     vec.push_back(4) ;  // size = 5 capacity = 8

     cout <<"size = " << vec.size()  << endl ;
     cout << "capacity = " << vec.capacity() << endl ; 

     return 0 ;
    }
