
#include <iostream>
using namespace std;
// 1
//MULTIDIMENSIONAL LOOPING ARRAY, INT DECLARED DURING INITIALIZATION
// int main()
// {
//     int i;
//     int j;
//     string cars[3] = {"Ca", "Cb", "Cd"};
//     string Car [3] = {"CA", "CB", "CD"};
//     for ( i = 0; i <= 3; i++)
//     {
//         for ( j = 0; j <= i; j++)
//         {
//             cout << cars[j]<<" ";
//     }
//     cout << Car[i]<<" "<<endl;
//     }
//     return 0;
// }


// 2
// int main (){
// int i;
// int j;
// int a[5][5];
//  int index;
// for (int i=0; i<5; i++) {
//     for (int j=0; j<5; j++)
    
//     a[i][j]=a[i-1][j-1]+5;
     
//     cout<<"enter values "<<endl;
//     cin>>a[i][j];
//     cout<<a[index];
// }
// }

// 3
//prince's code to get loop
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
   
//     for (int i = 0; i < 5; i++) {
      
//         for (int j = 0; j < 5; j++) {
//             cout << num << " ";  
//         }
//         cout << endl;  
//     }

//     return 0;
// }

// 4

// FOR MULTIPLICATION USER INPUT

// int main() {
//     int num;
//     cout << "Enter a random number: ";
//     cin >> num;
//     cout << "Multiplication table of " << num << ":" << endl;
//     for (int i = 1; i <= 10; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }

//     return 0;
// }


// 5
//GETTING VALUE FROM USERS TO PRINT THE SELECTED ARRAY
// int main (){
// string random[] = { "apple", "car", "sanjeev", "subject"};
// int index;

// cout<<"select the String Numer to be Printed (0-3):- ";
// cin>>index;
// cout<<random[index];

// return 0;

// }

//SIMPLE 1D ARRAY TO PRINT VALUES OF 0-9
// int main(){
//      int i;
//     int myArray [10] = {1,2,3,4,5,6,7,8,9,10};

    
//         for (int i = 0; i <10; i++){
//             cout<<myArray[i]<<" ";
//         }
        
    

//     return 0 ;
// }
 

//1D ARRAY
// int main()
// {
//     int marks[5] = {85, 90, 78, 92, 88};  // 1D Array
    
//     cout<<"Student Marks:"<<endl;
//     for(int i = 0; i < 5; i++)
//     {
//         cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
//     }
    
//     return 0;
// }

//2D ARRAYS
// int main()
// {
//     int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};  // 2D Array
    
//     cout<<"Matrix:"<<endl;
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



// INDEX USER INPUT TAKE FIRST ELEMENT THEN INCREMENT

// int main()
// {
//     int index[100];
//     int element;
//  cout<<"enter the Index Value=  "<<endl;
//  cin>>index;
//  cout<<"enter the initial element=  "<<endl;
//  cin>>element;
//     int array [index]={element};
//     for(int i=1; i<100; i++)
    
//     {

//  cout<<"array"<<"["<<index<<"]"<<"= "<<"{"<<element;
//     }
    
    
//     return 0;
// }   



// int main() {
//     int index;    // size of array
//     int element;  // element to fill

//     cout << "Enter the size of the array: ";
//     cin >> index;

//     cout << "Enter the initial element: ";
//     cin >> element;

//     int array[index]; // Variable Length Array (allowed in some compilers)

//     // Fill array with the element
//     for (int i = 0; i < index; i++) {
//         array[i] = element;
//     }

//     // Print array
//     for (int i = 0; i < index; i++) {
//         cout << "array[" << i << "] = " << array[i] << endl;
//     }

//     return 0;
// }


