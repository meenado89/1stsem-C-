#include<iostream>
using namespace std;
// CALL BY FUNCTION
// int way (int a, int b) {

// return a+b;

// } 

// int main () {
// int x=10;
// int y=20;

// int s = way(x,y);

// cout<<s;
//  return 0;
// }

// CALL BY VALUE 
// int swapping (int a, int b){
//     int temp = a ;
//      a = b;      a=20  ,b=10 ,  c=10
//      b = temp;   c=a,a=b,b=c
//      return 0;     
// }

// int main(){

//     int x = 20;
//      int y = 30; 
//      swapping(x,y);
//      cout<<"x=" <<x <<"y="<<y;
     
//      return 0;

// }

// CALL BY REFERENCE
// & USED AS REFERENCE ACCESS
void changeMarks(int &x) {
    x = 100;  // ORIGINAL/ EX.FRIEND WRITES IN YOUR REAL NOTEBOOK
}

int main() {
    int marks = 50;
    changeMarks(marks);  // PROVIDING REAL NOTEBOOK
    cout << marks;  // OUTPUT WILL BE SAME AS THE ONE WERE FRIEND WROTE IN YOUR BOOK
}
