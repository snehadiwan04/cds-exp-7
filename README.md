# Experiment 7

## Aim -
To study and implement C++ arrays and strings

## Apparatus -
Online compiler (programiz)

## Theory -

 ### *Array* :
An array is a fixed-size sequential collection of elements of the same type stored in contiguous memory locations. 
The lowest address corresponds to the first element, and the highest address corresponds to the last element. Array indices start at 0.

## Declaring an Array:

Specifies the type of the elements and the number of elements.To declare an array, specify the type of elements and the number of elements required. array_size must be an integer constant greater than zero. Accesses the 10th element of the array. type can be any valid C++ data type.
  
      type arrayName[array_size];
- Type is the data type of the elements (e.g., int, float, double, char).
- arrayName is the name you want to give to the array.
- arraySize is the number of elements in the array.

### *key point about declaring an array* :
- The size of the array (array_size) must be an integer constant greater than zero.
- Once the size of the array is defined, it cannot be changed

## Initializing an Array:
Arrays can be initialized element by element or using a single statement. Provides initial values to the elements of the array. The number of values in {} should not exceed array_size.

      int arr[5] = {1000, 2, 3, 17, 50};
- The number of values between braces { } cannot be larger than the number of elements we declare for the array between square brackets [ ]. 

### *key point about initializing an array* :
- The number of elements in the initializer list cannot exceed the array size.
- If you initialize an array without specifying the size, C++ will automatically determine the size based on the number of elements in the initializer list

## Accessing Array Elements:
An element can be accessed by indexing the array name. This is done by placing the index of the element within square brackets after the array name.
  
       int num = arr[9];
- The above statement accesses the 10th element of the array

### *key point about accessing array elements* :
- Array indices start from 0. Therefore, the first element of the array has an index of 0, the second element has an index of 1, and so on.
- Accessing an index outside the array's bounds (e.g., using an index greater than or equal to the array's size) results in undefined behavior

## *Key Points about arrays* :

- *Definition* : An array is a variable that can store multiple values of the same type.

- *Use of Arrays* : Regular variables (e.g., v1, v2, v3) are manageable for a few objects, but arrays are needed for  a large number of instances.

- *Indexing* : Array indexes start at 0, with the first item at index x[0].

- *Last Element* : The last element in an array of size n is at index (n-1), e.g., x[5] for an array of size 6.

- *Sequential Addresses* : Array elements have sequential memory addresses. For example, if x[0] is at address 2120, then x[1] is at 2124, x[2] at 2128, etc.

- *Element Size* : Each element's address increases based on its size; if an int is 4 bytes, addresses increment by 4 for each element

## String:
A string is a sequence of characters used as an object of the class. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte 
character. A string is different from an array of characters.

## Comparison Table between arrays and strings 

| Feature           | Array                                           | String                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A collection of elements of the same type stored in contiguous memory locations. | Sequences of characters used to represent text. Designed for textual data. |
| *Size*          |Size can be fixed or dynamic based on the language (e.g., static in C, dynamic in Python).         | Size is dynamic and adjusts with the length of the text. |
| *Mutability*    | Usually mutable; elements can be changed after the array is created.| Generally immutable; modifying a string creates a new one rather than altering the original. |
| *Access*        | Accessed via indices.                          | Characters accessed via indices; includes built-in methods for manipulation. |
| *Operations*    | Support various operations like sorting, searching, and element manipulation.  |Support operations like concatenation, substring extraction, and text formatting.|
| *Memory Allocation* |Typically allocated with a fixed size and contiguous memory.|Memory allocation can be variable and managed dynamically based on string length and encoding. |
| *Indexing* | Elements are accessed via numerical indices (e.g., arr[0]). | Characters are accessed via numerical indices (e.g., str[0]). |
| *Data Type* | Can hold multiple data types depending on the language (e.g., integers, floats, objects). |Specifically hold text data (characters).|
| *Use Cases* | Used for storing and processing collections of related data (e.g., lists of numbers, objects). |used for handling and manipulating textual data(e.g., user imput, file content|


## Code -
### For arrays
### 1. *Array declarations* -
To declare an array, specify the type of elements and the number of elements required. 
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include <iostream>
using namespace std;
int main()
{
    int array1[2] = {1, 2}; 
    int array2[2] = {2, 4}; 
    int array3[2] = {1, 3};

    // Printing array1
    for (int i = 0; i < 2; i++) 
    { 
        cout << array1[i] << " ";
    }
    cout << endl; 

    // Calling out array1[1]
    cout << "array1[1]: " << array1[1] << endl;

    // Printing array2
    for (int value : array2) 
    { 
        cout << value << " "; 
    }
    cout << endl;

    return 0;
}

```

### 2. *Input output array* -
In C++, prompt the user for the array size and declare the array.
Use a loop to input elements into the array and another loop to output them. 
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0,k,l,temp;
    cout<<"enter size of array";
    cin>>n;
    int a1[n],a2[n];
    for (i=0;i<n;i++)
    {
        cout<<"enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
}
```

### 3. *Reversing array* -
This function takes an array and its size as parameters
It uses two pointers, start and end, initialized to the beginning and end of the array, respectively.
It swaps the elements at these positions and moves the pointers towards the center until they meet.
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
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
```

### 4. *Search elements in Array* -
*Input Array*: Collect array size and elements from the user.

*Search Element*: Use a loop to check if the target element exists in the array.

*Output Result*: Print the index if found; otherwise, indicate that the element was not found.
 ```
//sneha diwan
//entc B2
//23070123126
//experiment 7
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
```

### 5. *Sum and Average of Array* -
*Calculate Sum*: Add each element to a running total.

*Calculate Average*: Divide the sum by the number of elements.

*Output*: Print the sum and average of the array elements.
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include<iostream>
using namespace std;
int main() {
int a1[5], i, j;
float sum=0, avg;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<":";
cin>>a1[i];
}
for(j=0;j<5;j++) {
sum = sum + a1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/5;
cout<<"Average = "<<avg;
}
```

### 6. *Max and Min element of Array* -
*Initialize*: Set the first element as both the initial maximum and minimum.

*Iterate*: Compare each element to update the maximum and minimum values.

*Output*: Print the maximum and minimum values found.
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include<iostream>
using namespace std;
int main() {
int n, i, max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
```

### For strings
### 1. *Prining String Input*
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"enter any word: ";
    cin>>a;
    cout<<" entered string is "<<a<<endl;
    return 0;
}
```

### 2. *Concatenation Of Strings*
```
//sneha diwan
//entc B2
//23070123126
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter strings: ";
    cin>>a>>b;
    cout<<"CONCATENATION: "<<a+b;
    return 0;
}
```

### 3. *Reverse In String*
```
//sneha diwan
//entc B2
//23070123126
//experiment 7

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter string: ";
    cin>>a;
    int i;
    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
```

### 4. *Palindrome Checking In String*
A palindrome is a string that reads the same forward and backward, ignoring spaces, punctuation, and capitalization.
```

  
```

## Output -
### For arrays
### 1.
![Screenshot 2024-08-06 224540](https://github.com/user-attachments/assets/0277beb2-a7c2-41ec-a103-3cdaa144c77c)
### 2.
![Screenshot 2024-08-06 225404](https://github.com/user-attachments/assets/8b63592e-21d9-436a-805c-3971631e04b6)
### 3.
![Screenshot 2024-08-06 225814](https://github.com/user-attachments/assets/a8d59670-bdcd-4641-84b7-d39e78b15fd6)
### 4.
![WhatsApp Image 2024-08-07 at 00 02 47](https://github.com/user-attachments/assets/98c82c4d-a3ab-4087-bb2b-1c603fed1984)
### 5.
![WhatsApp Image 2024-08-07 at 00 03 01](https://github.com/user-attachments/assets/2ccd8705-213a-427a-8943-b45afea1fcca)



### For Strings


### 1.
![Screenshot 2024-08-09 093928](https://github.com/user-attachments/assets/45d74d91-b49d-4074-a340-7188bb70b101)
### 2.
![Screenshot 2024-08-09 094052](https://github.com/user-attachments/assets/0aed85f0-f7d6-4598-a10a-ad5a2d688e45)
### 3.
![Screenshot 2024-08-09 094400](https://github.com/user-attachments/assets/9db1548b-5e42-49d2-9c5b-c725ed6a9285)
### 4.
![Screenshot 2024-08-09 102928](https://github.com/user-attachments/assets/a7067f12-7439-48f2-a74b-51b81adc024f)
![Screenshot 2024-08-09 103116](https://github.com/user-attachments/assets/67a72f4d-ea46-4251-9b7b-d9a391b3a89b)

## Conclusion -
Arrays are a fundamental data structure in programming, used to store a collection of elements of the same type in contiguous memory locations.
Arrays provide efficient storage and access for a fixed number of elements but are limited in flexibility compared to dynamic data structures.

The `string` class allows you to handle text easily, using double quotes for initialization and the `+` operator for concatenation. You can access individual characters, check the length with `length()`, and extract parts of the string using `substr()`. Additionally, you can compare strings and read user input with `getline()`, making string manipulation straightforward.
