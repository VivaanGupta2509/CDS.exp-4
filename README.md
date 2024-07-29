# Experiment 4

## Aim - 
To write C++ programs that demonstrate the use of bitwise operators.
## Theory - 
Bitwise operators are used to perform operations on individual bits of data. They are essential for tasks that involve low-level programming, such as manipulating binary data and performing bitwise arithmetic.
The common bitwise operators in C++ include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).
## Code - 
```
#include<iostream>
using namespace std;

int main()
{
    int a = 2, b = 8;
    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;
    int NOT = ~a;
    int LEFT_SHIFT = a<<b;
    int RIGHT_SHIFT = a>>b;
    
    cout<<"AND:"<<AND<<endl;
    cout<<"OR:"<<OR<<endl;
    cout<<"XOR:"<<XOR<<endl;
    cout<<"NOT:"<<NOT<<endl;
    cout<<"LEFT_SHIFT:"<<LEFT_SHIFT<<endl;
    cout<<"RIGHT_SHIFT:"<<RIGHT_SHIFT<<endl;
}
```
## Explanation - 
Bitwise operators perform operations on the individual bits of data. They include:

AND (&): Sets each bit to 1 if both bits are 1.

OR (|): Sets each bit to 1 if at least one bit is 1.

XOR (^): Sets each bit to 1 if only one bit is 1.

NOT (~): Inverts all the bits.

Left Shift (<<): Shifts bits to the left, filling with 0s.

Right Shift (>>): Shifts bits to the right, filling with 0s (logical shift).

## Conclusion - 
Bitwise operators provide low-level data manipulation capabilities. 
They are essential for optimizing algorithms and are commonly used in areas such as graphics, cryptography, and systems programming.

