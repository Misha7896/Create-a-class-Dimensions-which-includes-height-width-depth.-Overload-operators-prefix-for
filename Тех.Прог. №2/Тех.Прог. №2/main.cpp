#include <iostream>
#include "Dimensions.h"
#include "List.h"
using namespace std;

int main()
{
	setlocale(0, "ru");

	while (true)
	{
		char c;
		Dimensions a(100, 43, 75);
		Dimensions b;
		List<float> lis;
		lis.push_back(5);
		lis.push_back(7);
		lis.push_back(2);
		lis.push_back(1);

		List<float> lis2;
		lis2.push_back(3);
		lis2.push_back(9);
		lis2.push_back(2);
		lis2.push_back(5);

		cout << "\n 1. ���������� ����������� ���������� b = ++a"
			<< "\n 2. ���������� ������������ ���������� b = a++"
			<< "\n 3. ���������� ����������� ���������� b = --a"
			<< "\n 4. ���������� ������������ ���������� b = a--"
			<< "\n 5. ���������� ��������� +"
			<< "\n 6. ���������� ��������� -"
			<< "\n 7. ���������� ��������� /"
			<< "\n 8. ���������� ��������� *"
			<< "\n 9. ���������� ��������� =="
			<< "\n +. ���������� ��������� !="
			<< "\n 0. �����."
			<< endl << endl;
		cin >> c;
		cout << "\n===================================================" << endl;
		{
			switch (c)
			{
			case '1':
				Print(a, b);
				FOO_1(a, b);
				Print(a, b);
				break;

			case '2':
				Print(a, b);
				FOO_2(a, b);
				Print(a, b);
				break;

			case '3':
				Print(a, b);
				FOO_3(a, b);
				Print(a, b);
				break;

			case '4':
				Print(a, b);
				FOO_4(a, b);
				Print(a, b);
				break;

			case '5':

				(lis + lis2);
				break;

			case '6':
				(lis - lis2);
				break;

			case '7':
				(lis / lis2);
				break;

			case '8':
				(lis * lis2);
				break;

			case '9':
				(lis == lis2);
				break;

			case '+':
				(lis != lis2);
				break;
			case '0':
				return 0;
			}
		}
	}
}
