#include <iostream> 
using namespace std; 

//Call by V
int square1(int n){

    cout << "address of n1 in square1(): " << &n << "\n";   
      
    n *= n; 
    return n; 
} 

//Call by P
void square2(int *n){ 

    cout << "address of n2 in square2(): " << n << "\n"; 
      
    *n *= *n; 
} 

//Call by R
void square3(int &n){ 

    cout << "address of n3 in square3(): " << &n << "\n"; 
      
    n *= n; 
} 

int main() 
{ 
    //Call by V
    cout << endl;
    int n1=8; 
    cout << "address of n1 in main(): " << &n1 << "\n"; 
    cout << "Square of n1: " << square1(n1) << "\n"; 
    cout << "No change in n1: " << n1 << "\n"; 
      
    //Call by P
    cout << endl;
    int n2=8; 
    cout << "address of n2 in main(): " << &n2 << "\n"; 
    square2(&n2); 
    cout << "Square of n2: " << n2 << "\n"; 
    cout << "Change reflected in n2: " << n2 << "\n"; 
      
    //Call by R
    cout << endl;
    int n3=8; 
    cout << "address of n3 in main(): " << &n3 << "\n"; 
    square3(n3); 
    cout << "Square of n3: " << n3 << "\n"; 
    cout << "Change reflected in n3: " << n3 << "\n"; 
      
      return 0;
      
} 