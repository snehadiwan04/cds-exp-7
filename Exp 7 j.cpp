// Sneha Diwan
// 23070123126
// experiment 7 j

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter a string: ";
    cin>>a;
    int n=a.length(),i,flag=0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]==a[n-1])
        {
            flag=1;
        }
        n--;
    }
    if(flag==1)
    {
        cout<<a<<" is palindrome";
    }
    else
    {
        cout<<a<<" is not palindrome";
    }
}

/*
Output 

Enter a string : sneha
The string is not a palindrome

enter a string: racecar
racecar is palindrome

=== Code Execution Successful ===


*/
