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
void ConvertFloatToInt();
void ExplicitltConvert();
void ExplicitlyConvert();
void ConvertFahreheitToCelsius();
void OperatorDemo();
void IncrementDemo();
void CompareOperatorDemo();
void CharPutDemo();
void CharGetDemo();
void PutsDemo();
void GetsDemo();
void FormatPutsDemo();
void FormatPrintfDemo();
void FormatPrintFDemo();
void ScanfDemo();
void AddTo100();
void SciencePresent();
void PutCharDemo2();
void PrintString();
void ConstantDemo();
void PrintArea2();
void PrintFNum();
void PrintDoubleNum();
void PrintLDNum();
void PrintChar2();
void PrintInt32Max();
void AddOne();
void RegisterDemo2();
void MixedCompute();

int main()
{
	MixedCompute();
	getchar();
}

void MixedCompute()
{
	int i = 1;
	char c = 'A';
	float f = 2.2f;	
	double result = i + c + f;
	printf("%f\n", result);
}

void RegisterDemo2()
{
	register int i = 10;
	printf("%d\n", i);
}

void AddOne()
{
	static int i = 1;
	i++;
	printf("%d\n", i);
}

void PrintInt32Max()
{
	int i = INT32_MAX;
	printf("%d\n", i); 
	printf("%d\n", INT64_MAX);
	printf("%d\n", INT32_MAX);
}

void PrintChar2()
{
	char ch1 = 'a';
	printf("%c\n", ch1);
	char ch2 = 97;
	printf("%c\n", ch2);
}

void PrintLDNum()
{
	long double ld = 46.257;
	printf("%f\n", ld);
}

void PrintDoubleNum()
{
	double d = 61.458;
	printf("%f\n", d);
}

void PrintFNum()
{
	float f = 1.23f;
	printf("%f\n", f);
	getchar();
}

void PrintArea2()
{
	double radius;
	double size;
	printf("Input radius:");
	scanf("%lf", &radius);
	size = radius * radius * 3.14;
	printf("size is %lf\n", size);
}

void ConstantDemo()
{
	signed int num;
	num = 10;
	printf("%d\n", num);
}

void PrintString()
{
	printf("What a nice day!\n");
}

void PutCharDemo2()
{
	putchar('I');
	putchar('\n');
	putchar('D');
	putchar('\n');
	putchar('E');
	putchar('\n');
	putchar('V');
	putchar('\n');
	putchar('O');
	putchar('\n');
	putchar('T');
	putchar('\n');
	putchar('E');
	putchar('\n');
	putchar('D');
	putchar('\n');
}

void SciencePresent()
{
	int i = 4.5e13;
	printf("%d\n", i);
}

void AddTo100()
{
	int sum = 0;
	int i;
	printf("the sum from 1 to 100 is :");
	for(int i=0;i<100;i++)
	{
		sum+= i;
	}
	printf("%d\n", sum);
}

void ScanfDemo()
{
	int i1, i2;
	puts("Please enter two numbers:");
	scanf("%d%d", &i1, &i2);
	printf("The first is %d\n", i1);
	printf("The second is:%d\n", i2);
}

void FormatPrintFDemo()
{
	long l = 100000;
	printf("The long is %ld\n", l);
	printf("The string is:%s\n", "Cherish");
	printf("The string is %10s\n", "Cherish");
	printf("The string is %-10s\n", "Cherish");
	printf("The string is %10.3s\n", "Cherish");
	printf("The string is %-10.3s\n", "Cherish");
}

void FormatPutsDemo()
{
	int i = 10;
	char ch = 'a';
	printf("This is %d,the char is %c\n", i,ch);
}

void FormatPrintfDemo()
{
	int i = 10;
	char ch = 'A';
	float f = 12.34f;
	printf("The int is %d\n", i);
	printf("The char is %c\n", ch);
	printf("The float is %f\n", f);
	printf("The string is %s\n", "Cherish the present moment!!");
}

void GetsDemo()
{
	char ch[30];
	fgets(ch,30, stdin);
	puts(ch);
}

void PutsDemo()
{
	const	char* ch = "Cherish the present moment!";
	puts(ch);
	puts("Cherish\0 the present moment!");
	puts(ch);
	ch = "Chrish the\0Present moment!";
	puts(ch);
}

void CharGetDemo()
{
	char ch = getchar();
	putchar(ch);
}

void CharPutDemo()
{
	char ch1, ch2, ch3, ch4;
	ch1 = 'H';
	ch2 = 'e';
	ch3 = 'l';
	ch4 = 'o';
	putchar(ch1);
	putchar(ch2);
	putchar(ch3);
	putchar(ch3);
	putchar(ch4);
	putchar('\n');
}

void CompareOperatorDemo()
{
	int cnScore, engScore;
	printf("Enter Chinses score:");
	scanf("%d", &cnScore);
	printf("Enter English score:");
	scanf("%d", &engScore);

	if (cnScore > engScore)
	{
		printf("Chinese is better than english!\n");
	}
	else if (engScore > cnScore)
	{
		printf("English is better than Chinese!\n");
	}
	else if (cnScore == engScore)
	{
		printf("English is good as Chinese!\n");
	}
}

void IncrementDemo()
{
	int num1 = 3;
	int num2 = 3;
	int preResultA, postResultA, preResultD, postResultD;
	preResultA = ++num1;
	postResultA = num2++;
	
	printf("The num1 is:%d\n", num1);
	printf("The preResultA is:%d\n", preResultA);
	printf("The num2 is:%d\n", num2);
	printf("The postResultA is:%d\n", postResultA);

	num1 = 3;
	num2 = 3;
	preResultD = -num1;
	postResultD = num2--;
	printf("The delete self...\n");
	printf("The num is:%d\n", num1);
	printf("The preResultD is:%d\n", preResultD);

	printf("The num2 is:%d\n", num2);
	printf("The postResultD is:%d\n", postResultD);
}

void OperatorDemo()
{
	int num1, num2, num3, result = 0;
	num1 = 20;
	num2 = 5;
	num3 = 2;
	result = num1 + num2 + num3;
	printf("The result is:%d\n", result);

	result = num1 - num2 + num3;
	printf("The result is:%d\n", result);

	result = num1 + num2 + num3;
	printf("The result is:%d\n", result);

	result = num1 / num2 * num3;
	printf("The result is:%d\n", result);

	result = (num1 + num2) * num3;
	printf("The result is:%d\n", result);


}

void ConvertFahreheitToCelsius()
{
	int celsiusNum, fahrenheitNum;
	printf("Please enter temperature :\n");
	scanf("%d", &fahrenheitNum);
	celsiusNum = 5 * (fahrenheitNum - 32) / 9;
	printf("Temperature is:");
	printf("%d ", celsiusNum);
	printf("Degree celsius\n");
}

void ExplicitlyConvert()
{
	char ch;
	short int iShort;
	int iNum;
	float fNum = 70000000;

	ch = (char)fNum;
	iShort = (short)fNum;
	iNum = (int)fNum;
	printf("The char is :%d\n", ch);
	printf("The long is :%ld\n", iShort);
	printf("The int is :%d\n", iNum);
	printf("The float is:%f\n", fNum);
}

void ExplicitltConvert()
{
	float f = 89.8888f;
	int i = (int)f;
	printf("%d\n", i);
}

void ConvertFloatToInt()
{
	float f = 10.1f;
	int j = f;
	printf("%d\n", j);
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
