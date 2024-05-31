/*
 Problem Statement
    Zara needs a program to process three integers a, b, and c using assignment operators.

 Write a program to update these values:

    Subtract the value of a by 2 using "-=" and store it back to a.
    Double the value of b using "+=" and store it back to b.
    Square the value of c using "*=" and store it to c.
    Display the final values of a, b, and c.
 Can you assist Zara in efficiently completing this numerical processing task?

 Input format :
    The input consists of three space-separated integers a, b, and c representing the initial values.

Output format :
    The first line displays the updated value of a, after subtracting it by 2.
    The second line displays the updated value of b, after adding twice its original value.
    The third line displays the squared value of c.

 Refer to the sample output for the formatting specifications.
 Code constraints :
    In the given scenario, the test cases fall under the following constraints:
    1 ≤ a, b, c ≤ 100
 */

#include<stdio.h>
//Clang-12.0.0
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a-=2;
    b+=b;
    c*=c;
    printf("%d\n%d\n%d",a,b,c);
}
// Created on 31-05-2024.

