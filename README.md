# Experiment 6: - To study and implement C++ decision making statements Loops

## Aim
To learn how to implement decision making statement loops like for, while and do while in C++

## Theory
Decision-making loops are beneficial for running a block of code repeatedly for conditions that may range from 1 to infinity.
In this experiment we learn about 3 decsion making statement loops which are as follows: -
1. for() loop
2. while() loop
3. do while() loop

### 1. for() loop

A for loop is a statement that executes a part of code repeatedly for a specific number of iterations. It continues to run the code until a predefined condition is met.


### 2. while() loop

A while loop is a statement that repeatedly executes a part of code as long as a condition remains true. It continues to run the code until the condition evaluates to false.


### do while() loop

A do-while loop is a statement that executes a part of code at least once, and then repeatedly executes the code as long as a specified condition remains true. The condition is evaluated after the execution of the code block, making sure that the code runs at least one time.

## CODE
```
//sumit pandey
//23070123133
#include <iostream>
using namespace std;

int main() {
    int s[100][100];
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            s[i][j] = i * 100 + j;
        }
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }


    int x = 0;
    cout << "While loop" << endl;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    int y = 0;
    cout << "Do-while loop" << endl;
    do {
        y++;
        cout << y << endl;
    } while (y < 4);


    int a = 0, b = 0;
    cout << "Nested for loop" << endl;
    for (int i = 0; i < 4; i++) {
        a++;
        for (int j = 0; j < 4; j++) {
            b++;
            cout << s[a][b] << " ";
        }
        cout << endl;
    }

    int k=0,l=0;
    while(k<5)
    {
        while(l<5)
        {
            k++;
            l++;
            cout<<k<<endl;
            cout<<l<<endl;
        }
    }

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }   

    return 0;
}
```

## OUTPUT

![WhatsApp Image 2024-08-06 at 13 18 16_4f627361](https://github.com/user-attachments/assets/12924e5b-a9aa-48a7-8a47-d64646ab9d61)
![WhatsApp Image 2024-08-06 at 13 19 00_ed48b1a0](https://github.com/user-attachments/assets/90a6b0bf-394a-42a6-a249-f469496d1c69)

## CONCLUSION 

Learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
