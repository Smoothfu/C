// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <process.h>
int add(int x, int y);
int main()
{
    /*int dogs;
    printf("How many dogs do you have?\n");
    scanf_s("%d", &dogs);
    printf("So you have %d dogs\n", dogs);
    printf("Concrete contains gravel and cement.\n");
    printf("A.c is used to end a C program filename.\n");*/
    int result = add(10, 20);
    printf("result:%d \n",result);
    system("pause");
}

int add(int x, int y)
{
    return x + y;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
