// Sneha Diwan
// 23070123126
// experiment 7c
#include<iostream>
using namespace std;

int main() {
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];


    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }

    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) {
        cout<<a1[l];
    }
    cout<<endl;

    for(k=4;k>=0;k--) {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }

    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }
}


/*
Output 
Enter size of array: 5
Enter element-1: 1
Enter element-2: 2
Enter element-3: 3
Enter element-4: 4
Enter element-5: 6

Array given by user: 12346
Reversed array: 64321

=== Code Execution Successful ===


*/
