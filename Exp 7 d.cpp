// Sneha Diwan
// 23070123126
// experiment 7c
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}


/*
Output 
Enter element-1: 98
Enter element-2: 99
Enter element-3: 100
Enter element-4: 101
Enter element-5: 102
Enter element to be searched: 100
Position of 100: 3
Element is present: 1 times

=== Code Execution Successful ===


*/
