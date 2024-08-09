// sneha diwan
// 23070123126
// entc b2
// experiment 7a
#include <iostream>
using namespace std;

int main() {
    int array1[5] = {19, 10, 8, 17, 9}; 
    int array2[] = {19, 10, 8, 17, 9}; 
    int array3[5] = {19, 10, 8}; 


  cout << "\n Old Method: ";
  for (int i = 0; i < 5; ++i) {
    cout << array1[i] << "  ";
  }
  cout << endl;


  cout << "\n New Method: ";
  for (int j : array1) {
    cout << j << "  ";
  }

   return 0;
}

/*
Output 

 Old Method: 19  10  8  17  9  

 New Method: 19  10  8  17  9  

=== Code Execution Successful ===


*/
