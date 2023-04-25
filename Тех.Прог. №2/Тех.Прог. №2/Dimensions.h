#pragma once
#include <iostream>
using namespace std;

class Dimensions
{
private:
	int height;
	int width;
	int depth;

	int max;
	int min;
	int figure;
	int number;

public:
	Dimensions();
	Dimensions(int a, int b, int c);

	int GetHeight();
	int GetWidth();
	int GetDepth();

	void SetHeight(int a);
	void SetWidth(int b);
	void SetDepth(int c);

	void PrintA();
	void PrintB();
	void PrintC();

	Dimensions& operator ++();
	Dimensions& operator ++(int a);
	Dimensions& operator --();
	Dimensions& operator --(int a);

	friend int FOO_1(Dimensions& a, Dimensions& b);
	friend int FOO_2(Dimensions& a, Dimensions& b);
	friend int FOO_3(Dimensions& a, Dimensions& b);
	friend int FOO_4(Dimensions& a, Dimensions& b);
	friend void Print(Dimensions& a, Dimensions& b);

};
