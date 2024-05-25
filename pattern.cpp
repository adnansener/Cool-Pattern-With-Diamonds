#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

class myClass
{
private:
	int diamondLength = 4, patternLength = 2;
public:
	myClass();
	int getPatternLength();
	void flatPyramid(), invertedPyramid(), halfPyramid();
};

int main()
{
	system("color 0D");

	myClass* Obj = new myClass;
	system("CLS");

	for (int i = 1; i <= Obj->getPatternLength() - 1; i++)
	{
		if (i == 1)
			Obj->flatPyramid();

		Obj->invertedPyramid();
		Obj->halfPyramid();

		if (i == Obj->getPatternLength() - 1)
			Obj->invertedPyramid();
	}

	delete Obj;
	Obj = NULL;
	
	_getch();

	return 0;
}

myClass::myClass()
{
	cout << "Enter Length for Equilateral: ";
	do
	{
		if (diamondLength < 3)
		{
			cout << "Try Again by Entering the Minimum Value of 3: ";
		}

		cin >> diamondLength;
	} while (diamondLength < 3);

	cout << "Enter Length for Pattern: ";
	do
	{
		if (patternLength < 2)
		{
			cout << "Try Again by Entering the Minimum Value of 2: ";
		}

		cin >> patternLength;
	} while (patternLength < 2);
}

int myClass::getPatternLength()
{
	return patternLength;
}

void myClass::flatPyramid()
{
	cout << "				";

	for (int i = 1; i <= diamondLength; i++)
	{
		for (int j = 1; j <= patternLength; j++)
		{
			if (j == 1)
			{
				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if ((k == 1) || (k == 2 * i - 1))
						cout << "* ";
					else
						cout << "  ";
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
			else
			{
				for (int k = 1; k < diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if (i == diamondLength)
					{
						if (k == 2 * i - j)
							cout << "* ";
						else
							cout << "  ";
					}
					else
					{
						if ((k == 1) || (k == 2 * i - 1))
							cout << "* ";
						else
							cout << "  ";
					}
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
		}
		cout << endl << "				";
	}
}

void myClass::invertedPyramid()
{
	for (int i = diamondLength - 1; 1 <= i; i--)
	{
		for (int j = 1; j <= patternLength; j++)
		{
			if (j == 1)
			{
				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if ((k == 1) || (k == 2 * i - 1))
						cout << "* ";
					else
						cout << "  ";
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
			else
			{
				for (int k = 1; k < diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if (i == diamondLength)
					{
						if (k == 2 * i - j)
							cout << "* ";
						else
							cout << "  ";
					}
					else
					{
						if ((k == 1) || (k == 2 * i - 1))
							cout << "* ";
						else
							cout << "  ";
					}
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
		}
		cout << endl << "				";
	}
}

void myClass::halfPyramid()
{
	for (int i = 2; i <= diamondLength; i++)
	{
		for (int j = 1; j <= patternLength; j++)
		{
			if (j == 1)
			{
				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if ((k == 1) || (k == 2 * i - 1))
						cout << "* ";
					else
						cout << "  ";
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
			else
			{
				for (int k = 1; k < diamondLength - i; k++)
					cout << "  ";

				for (int k = 1; k <= 2 * i - 1; k++)
				{
					if (i == diamondLength)
					{
						if (k == 2 * i - j)
							cout << "* ";
						else
							cout << "  ";
					}
					else
					{
						if ((k == 1) || (k == 2 * i - 1))
							cout << "* ";
						else
							cout << "  ";
					}
				}

				for (int k = 1; k <= diamondLength - i; k++)
					cout << "  ";
			}
		}
		cout << endl << "				";
	}
}

