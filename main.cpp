#include <iostream>

#include <locale>

#include "Queue.h"

#include "Queue1.h"

using namespace std;

//9 = ���������� ���������� ��������, �������� �������� ��������������

template <class T>

void chosen_class(T* q, int n_q) //��������� ������� ��� ���������� ������ � �������

{

	setlocale(LC_ALL, "Rus");

	int c;

	int flag = 1;

	int value; //��������� �������� �������������

	int index = 0; //����� �������, � ������� ��������

	int count = 1; //���-�� ��������, � �������� �������� ������������

	int res4 = 0; //���������� ��� ���������� ������ �������

	int chosen_q; //����� ��������� �������

	while (flag == 1)

	{

		cout << "1 - add queue element" << endl;

		cout << "2 - get queue element" << endl;

		cout << "3 - print queue" << endl;

		cout << "4 - task #9" << endl;

		cout << "5 - create copy" << endl;

		cout << "6 - merge" << endl;

		cout << "7 - select another queue" << endl;

		cout << "8 - current queue?" << endl;

		cout << "0 - return to start " << endl;

		cout << "-> ";

		cin >> c;

		switch (c)

		{

		case 1: //���������� �������� �������

			system("cls");

			cout << "input value: ";

			cin >> value;

			q[index].push(value);

			cout << "success.\n " << endl;

			break;

		case 2: //���������� �������� �������

			if (q[index].isEmpty())

			{

				cout << "queue is empty\n " << endl;

				system("pause");

				break;

			}

			else

			{

				system("cls");

				value = q[index].pop();

				cout << "value: " << value << endl;

				cout << "\n";

			}

			break;

		case 3: //����� ������� �� �����

			if (q[index].isEmpty())

			{

				cout << "queue is empty\n" << endl;

				system("pause");

				break;

			}

			else

			{

				system("cls");

				q[index].print();

				cout << "\n";

			}

			break;

		case 4: //���������� �������� �������� �������

			if (q[index].isEmpty())

			{

				cout << "queue is empty\n" << endl;

				system("pause");

				break;

			}

			else

			{

				system("cls");

				res4 = q[index].function9();

				cout << "result: " << res4 << endl;

				cout << "\n";

			}

			break;

		case 5: //�������� ����� �������

			if (q[index].isEmpty())

			{

				cout << "queue is empty\n" << endl;

				system("pause");

				break;

			}

			else

			{

				if (count == n_q)

				{

					cout << "impossible create queue copy, maximum count of queues.\n" << endl;

					system("pause");

					break;

				}

				system("cls");

				q[count].copy(q[index]);

				cout << "success.\n" << endl;

				count++; //������ � ��� ���� ��� ������� ��� ������� � ��������� 0 � 1...

			}

			break;

		case 6: //������� ���� ��������

			if (count == 1)

			{

				cout << "impossible.\n" << endl;

				system("pause");

				break;

			}

			else

			{

				cout << "what queue to merge with? " << endl;

				cin >> chosen_q;

				if ((chosen_q < 0) || (chosen_q >= n_q) || (chosen_q == index))

				{

					cout << "incorrect value \n" << endl;

					system("pause");

					break;

				}

				if (q[chosen_q].isEmpty())

				{

					cout << "impossible\n" << endl;

					system("pause");

					break;

				}

				system("cls");

				q[index].merge(q[chosen_q]);

				//count++; //������ ���������� ��� ������� ��� ������� � ��������� 0, 1, 2...

				cout << "\n";

			}

			break;

		case 7: //����� ���� �������

			system("cls");

			cout << "currently queue is �" << index << endl;

			cout << "Enter queue number (0..." << n_q - 1 << "): ";

			cin >> chosen_q;

			if ((chosen_q < 0) || (chosen_q >= n_q) || (chosen_q == index))

			{

				cout << "Invalid value or number of queues exceeded \n" << endl;

				system("pause");

			}

			else

			{

				index = chosen_q;

				count++;

				system("cls");

				cout << "currently queue is �" << index << endl;

				cout << "\n";

			}

			break;

		case 8:

			system("cls");

			cout << "currently queue is �" << index << endl;

			cout << "\n";

			break;

		case 0:

			cout << "\n";

			flag = 0;

			break;

		}

	}

}

int main()

{

	setlocale(LC_ALL, "Rus");

	//int choose_class; //���������� ������ ������ �������

	int num_q; //���������� ���������� ��������

	int c;

	int flag = 1;

	sonQueue_private* q1 = NULL;

	sonQueue_protected* q2 = NULL;

	sonQueue_public* q3 = NULL;

	cout << "queue number: ";

	cin >> num_q;

	system("cls");

	cout << "choice inheritance class : " << endl;

	while (flag == 1)

	{

		cout << "1 - private" << endl;

		cout << "2 - protected" << endl;

		cout << "3 - public" << endl;

		cout << "0 - exit" << endl;

		cout << "-> ";

		cin >> c;

		switch (c)

		{

		case 1:

			q1 = new sonQueue_private[num_q];

			system("cls");

			chosen_class(q1, num_q);

			delete[] q1;

			break;

		case 2:

			q2 = new sonQueue_protected[num_q];

			system("cls");

			chosen_class(q2, num_q);

			delete[] q2;

			break;

		case 3:

			q3 = new sonQueue_public[num_q];

			system("cls");

			chosen_class(q3, num_q);

			delete[] q3;

			break;

		case 0:

			flag = 0;

			break;

		default:

			system("cls");

			cout << "incorrect input!" << endl;

			break;

		}

	}

	return 0;

}