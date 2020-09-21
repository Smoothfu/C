// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include <math.h>
#define Height 10
#define PI 3.14;

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
int MathPower(int x,int n);
long MathPowerL(long x, long y);
void PrintChar();
void PrintFString();
void PrintArea();
void PowerDemo(int x, int y);
void UnitDemo();
void PrintfCH();
void Math2Pow(int x, int y);
void MathIntPow(int x, int y);
void OctalDemo();
void FloatDemo();
void PutCharDemo();
void PrintStringDemo(); 
void ShowSize();
void SignedIntDemo();
void UnsignedIntDemo();
void UnsignedShortDemo();
void LongIntDemo();
void FloatDemo2();
void DoubleDemmo();
void LongDoubleDemo();
void PrintIntChar();
void PrintFChar();
void AutoDemo();
void StaticDemo();
void RegisterDemo();
void ExternDemo();
void PrintMsgString();
void ExpressionDemo();
void AssignmentExpression();
void DisplaySalary();

int main()
{
	DisplaySalary();
	system("pause");
}

void DisplaySalary()
{
	int workedHours = 8;
	int hourPay =13;
	int grossPay = 0;
	
	grossPay = workedHours * hourPay;

	printf("The worked hour is %d\n", workedHours);
	printf("The hour pay is %d\n", hourPay);
	printf("The gross pay is %d\n", grossPay);
}

void AssignmentExpression()
{
	int i = 10 + 10;
	int j = i * 10;
	printf("%d\n,%d\n", i, j);
}

void ExpressionDemo()
{
	int num1, num2, num3;
	num1 = 3;
	num2 = 7;
	printf("The first number is:%d\n", num1);
	printf("The second number is:%d\n", num2);
	num3 = num1 + 10;
	printf("The first number add 10 is :%d\n", num3);
	num3 = num2 + 10;
	printf("The second number add 10 is :%d\n", num3);
	num3 = num1 + num2;
	printf("The result of first add second is :%d\n", num3);

}

void PrintMsgString()
{
	printf("%s\n", "Cherish every second!");
}

void ExternDemo()
{
	extern int iExtern;
	printf("%d\n", iExtern);
	extern char c;
	printf("%c\n", c);
}

void RegisterDemo()
{
	register int i = 10;
	i += 10;
	printf("%d\n", i);
}

void StaticDemo()
{
	static int i = 10;
	i += 10;
	printf("%d\n", i);
}

void AutoDemo()
{
	auto i = 1;
	i = i + 1;
	printf("%d\n", i);
}

void PrintFChar()
{
	int i = 88;
	printf("%d\n", i);
	printf("%c\n", i);
}

void PrintIntChar()
{
	int a = 97;
	putchar(a);
}

void LongDoubleDemo()
{
	long double l = 879245234.34523654;
	printf("%lf", l);
}

void DoubleDemmo()
{
	double d = 6.2835234656;
	printf("%f\n", d);
}

void FloatDemo2()
{
	float f = 3.1415926F;
	printf("%f\n", f);
}

void LongIntDemo()
{
	unsigned long long l = pow(2, 32);
	printf("%llu\n", l);
}

void UnsignedShortDemo()
{
	unsigned short i = pow(2, 16)-1;
	printf("%u\n", i);
}

void UnsignedIntDemo()
{
	unsigned i = pow(2, 32)-1;
	printf("%u\n", i);
}

void SignedIntDemo()
{
	signed int num = pow(2, 15) - 1;
	printf("%i\n", num);
}

void ShowSize()
{
	double fRadius;
	double fResult = 0;
	printf("Please input radius:");
	scanf("%lf", &fRadius);
	fResult = fRadius * fRadius * PI;
	printf("The area of the circle: %lf\n", fResult);
 }

void PrintStringDemo()
{
	char str1[] = "Cherish the present moment and make every second count!";
	printf("%s\n", str1);
	char str2[] = "The wonderful world is fair and everything depend on myself!";
	printf("%s\n", str2);
}

void PutCharDemo()
{
	int i = 97;
	printf("%d\n", i);
	printf("%c\n", i);
	int j = 65;
	printf("%d\n", j);
	printf("%c\n", j);
}

void FloatDemo()
{
	float f = 1.22222F;
	printf("%f\n", f);
	long double d = 11111.3244444444444444444555554346578674L;
	printf("%LF\n", d);
}

void OctalDemo()
{
	int value = 2567;
	printf("Decimal value is:%d\n", value);
	printf("Octal value is:%o\n", value);
	printf("Hexadecimal value is :%x\n", value);
	printf("Hexadecimal value is :%X\n", value);
}

void MathIntPow(int x, int y)
{
	unsigned int i = pow(x, y)-1;
	printf("%u\n", i);
}

void Math2Pow(int x, int y)
{
	unsigned short   i = pow(x, y) - 1;
	printf("%u\n", i);
}

void PrintfCH()
{
	int ch;
	for (ch = 75; ch <= 100; ch++)
	{
		printf("ASCII value=%d,character=%c\n", ch, ch);
	}
}

void UnitDemo()
{
	printf("%c,%c,%c\n", 'a', 'c', 'b');
	printf("%s", "Cherish the current moment and make every second count!\n");
	printf("fu chou bao \n");
	printf("%c\n", 'a');
	int i = 10;
	printf("%d\n", i);
	float f = 1.1111;
	printf("%f\n", f);
	printf("%s", "Cherish the present moment!\n");
}

void PowerDemo(int x, int y)
{
	unsigned long l = pow(x, y);
	printf("%lu\n",l);
}

void PrintArea()
{
	double s = 10.0 * 10.0 * PI;
	printf("%f\n", s);
}

void PrintFString()
{
	printf("Wonderful day!\n");
}

void PrintChar()
{
	putchar('a');
	putchar('\n');
	putchar('b');
	putchar('\n');
	putchar('c');
	putchar('\n');
}

long MathPowerL(long x, long y)
{
	return pow(x, y);
}

int MathPower(int x,int n)
{
	return pow(x, n);
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
	printf("%s\n", sum);
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
