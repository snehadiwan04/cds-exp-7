// Sneha Diwan
// 23070123126
// experiment 7b
#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    int array1[SIZE];

     cout << "Enter " << SIZE << " elements of array: ";
    for (int index = 0; index < SIZE; index++) {
        cin >> array1[index];
    }
    cout << endl;
     for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}

/*
Output 
Enter 5 elements of array: 60 61 62 63 64 

60  61  62  63  64  


=== Code Execution Successful ===


*/
