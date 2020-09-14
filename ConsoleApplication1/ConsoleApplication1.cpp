// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include <math.h>
#define Height 10

int Calculate(int length, int width);
void CalculateDemo();
int Add(int x, int y);
void PrintTime();
void Bubble();
void PrintMsg();
void Demo();
void LoopDemo();
int Sum100();
int NPower(int x);
int main()
{
	int result = NPower(5);
	printf("%i\n", result);
	system("pause");
}

int NPower(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	return NPower(x - 1) * x;
}

int Sum100()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("%i\n", sum);
	return sum;
}

void LoopDemo()
{
	for (int i = 0; i < 100000; i++)
	{
		printf("i=%d\n", i);
	}
}

void CalculateDemo()
{
	int lengthValue, widthValue, result;
	printf("The height of rectangle:%d\n", Height);
	printf("Please input width \n");
	scanf("%d", &widthValue);
	printf("Enter length\n");
	scanf("%d", &lengthValue);
	result = Calculate(lengthValue, widthValue);
	printf("%d\n", result);
}

int Calculate(int length, int width)
{
	return width * length;
}


void Demo()
{
	/*int dogs;
   printf("How many dogs do you have?\n");
   scanf_s("%d", &dogs);
   printf("So you have %d dogs\n", dogs);
   printf("Concrete contains gravel and cement.\n");
   printf("A.c is used to end a C program filename.\n");*/
	int result = Add(10, 20);
	printf("result:%d \n", result);
	PrintTime();
	Bubble();
	PrintMsg();
}
void PrintMsg()
{
	printf("Hello world!I'm coming!\n");
}

void PrintTime()
{
	time_t t = time(NULL);
	printf("UTC:       %s", asctime(gmtime(&t)));
	printf("local:     %s", asctime(localtime(&t)));
}

void Bubble()
{
	int arr[6] = { 9,7,32,24,2323,2389 };
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);
	}
}
int Add(int x, int y)
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
