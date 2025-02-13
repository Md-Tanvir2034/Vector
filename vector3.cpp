#include<iostream>
#include<vector>

using namespace std;

int main(){

     vector<char> vec = {'a' , 'b' ,'c'}; 
     cout << "size = " << vec.size() << endl ;
     cout << endl ;
     

     //push back add at last

     vector<int> vec1 ;
     cout << "size = " << vec1.size() << endl ;
     vec1.push_back(1) ;
     vec1.push_back(25) ;
     vec1.push_back(150) ; 
     cout << "size after push back = " << vec1.size() << endl ;

    
     for(int i : vec1){
        cout << i << endl ;
     }
    

    
    return 0;
}