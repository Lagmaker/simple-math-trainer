#include <iostream>            // вкл всегда
#include <Windows.h>           // вкл всегда
#include <math.h>              // для мат рассчёта
#include <ctime>			   // для работы функции time(NULL);

// не библиотека

using namespace std;          // вводить всегда


// мои личные сокращения

const char TAB = '\t';              // const константа, обычное её название пишут БОЛЬШИМИ БУКВАМИ
const char NL = '\n';
const char SP = ' ';

//==============================================================================================================================================================================//






//==============================================================================================================================================================================//
// тут начинается MAIN
//
//
//
void main()
{

	setlocale(LC_ALL, "RUS");             // позволяет писать кирилицой 

	srand(time(NULL));					  // позволяет получать случайное число от функции rand();    если закоментировать то все числа будут фиксированы 
	



	int c = 0;
	int d = 0;
	cout << "1 = Additions " << endl;
	cout << "2 = Subtraction " << endl;
	cout << "3 = Add + Subt " << endl;
	cout << "4 = Multiply (easy)" << endl;
	cout << "5 = Multiply (medium) " << endl;
	cout << "6 = Multiply (hard) " << endl;
	cout << "7 = Divide " << endl;
	cin >> d;



	switch (d)
	{

	case 1:					// плюс

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 99;
			int b = rand() % 99;

			cout << "Find a + b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a + b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a + b << endl << endl;
			}
			
		}

		break;



	case 2:				// минус


		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 99;
			int b = rand() % 99;


			cout << "Find a - b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a - b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a - b << endl << endl;
			}

		}


		break;

	case 3:			// плюс + минус

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 198 - 99;
			int b = rand() % 198 - 99;


			cout << "Find a + b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a + b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a + b << endl << endl;
			}

		}


		break;



	case 4:				// множить

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 18 - 9;
			int b = rand() % 18 - 9;


			cout << "Find a * b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a * b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a * b << endl << endl;
			}

		}

		break;

	case 5:				// множить медиум

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 198 - 99;
			int b = rand() % 18 - 9;


			cout << "Find a * b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a * b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a * b << endl << endl;
			}

		}

		break;

	case 6:				// множить хард

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{

			int a = rand() % 198 - 99;
			int b = rand() % 198 - 99;


			cout << "Find a * b" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;

			cin >> c;

			if (a * b == c)
			{
				cout << "congrats" << endl << endl;
			}
			else if (c == 1337)
			{
				cout << "ok, exit" << endl;
			}
			else
			{
				cout << "U wrong, answer was = " << a * b << endl << endl;
			}

		}

		break;

	case 7:							// деление
		

		cout << "Type: 1337 to exit" << endl << endl;

		while (c != 1337)
		{


			int a = rand() % 99;		
			int b = rand() % 8 + 1;


			if (a % b != 0)
			{
				for (int i = 0; i < 1;)
				{
					
					if (a % b == 0)
					{
						i++;
					}
					else if(a % b != 0)
					{	
						a = rand() % 99;
					}
					
				}

			}

				cout << "Find a / b" << endl;
				cout << "a = " << a << endl;
				cout << "b = " << b << endl;


				cin >> c;

				if (a / b == c)
				{
					cout << "congrats" << endl << endl;
				}
				else if (c == 1337)
				{
					cout << "ok, exit" << endl;
				}
				else
				{
					cout << "U wrong, answer was = " << a / b << endl << endl;
				}

		}
		break;


	default:

		cout << "No command found, write number from the list" << endl;
		system("pause");
		break;

	}


}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



