#include "Dimensions.h"

Dimensions::Dimensions()
{
	this->height = 0;
	this->width = 0;
	this->depth = 0;
	this->max;
	this->min;
	this->figure;
	this->number;
}
Dimensions::Dimensions(int a, int b, int c)
{
	this->height = a;
	this->width = b;
	this->depth = c;
	this->max;
	this->min;
	this->figure;
	this->number;

	max = height;
	if (width > max) max = width;
	if (depth > max) max = depth;

	min = height;
	if (width < min) min = width;
	if (depth < min) min = depth;
}

int Dimensions::GetHeight()
{
	return height;
}
int Dimensions::GetWidth()
{
	return width;
}
int Dimensions::GetDepth()
{
	return depth;
}

void Dimensions::SetHeight(int a)
{
	this->height = a;
}
void Dimensions::SetWidth(int b)
{
	this->width = b;
}
void Dimensions::SetDepth(int c)
{
	this->depth = c;
}

void Dimensions::PrintA()
{
	cout << "\tВысота = " << GetHeight();
}
void Dimensions::PrintB()
{
	cout << "\tШирина = " << GetWidth();
}
void Dimensions::PrintC()
{
	cout << "\tГлубина = " << GetDepth();
}

Dimensions& Dimensions:: operator ++()
{
	this->height += max;
	this->width += max;
	this->depth += max;

	return *this;
}
Dimensions& Dimensions:: operator ++(int a)
{
	Dimensions temp(*this);

	cout << "Выберите одну из величин для его увеличения" << endl;
	cout << " 1. Высота.\n 2. Ширина.\n 3. Глубина." << endl;

	cin >> this->figure;
	cout << "\n===================================================" << endl;

	cout << "Введите целое число на которое хотите увеличить: ";
	cin >> this->number;
	cout << "\n===================================================" << endl << endl;

	switch (this->figure)
	{
	case 1:
		this->height += this->number;
		break;

	case 2:
		this->width += this->number;
		break;

	case 3:
		this->depth += this->number;
		break;
	}
	return temp;
}
Dimensions& Dimensions:: operator --()
{
	this->height -= min;
	this->width -= min;
	this->depth -= min;

	return *this;
}
Dimensions& Dimensions:: operator --(int a)
{
	Dimensions temp(*this);

	cout << "Выберите одну из величин для его увеличения" << endl;
	cout << " 1. Высота.\n 2. Ширина.\n 3. Глубина." << endl;

	cin >> this->figure;
	cout << "\n===================================================" << endl;

	cout << "Введите целое число на которое хотите уменьшить: ";
	cin >> this->number;
	cout << "\n===================================================" << endl << endl;

	switch (this->figure)
	{
	case 1:
		this->height -= this->number;
		break;

	case 2:
		this->width -= this->number;
		break;

	case 3:
		this->depth -= this->number;
		break;
	}
	return temp;
}

int FOO_1(Dimensions& a, Dimensions& b)
{
	b = ++a;
	return 0;
}
int FOO_2(Dimensions& a, Dimensions& b)
{
	b = a++;
	return 0;
}
int FOO_3(Dimensions& a, Dimensions& b)
{
	b = --a;
	return 0;
}
int FOO_4(Dimensions& a, Dimensions& b)
{
	b = a--;
	return 0;
}
void Print(Dimensions& a, Dimensions& b)
{
	cout << "\n\t\ta\t\tb" << endl;
	a.PrintA();
	b.PrintA();
	cout << endl;
	a.PrintB();
	b.PrintB();
	cout << endl;
	a.PrintC();
	b.PrintC();

	cout << endl << endl;
}
