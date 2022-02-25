#include <iostream>

#include "Queue.h"

using namespace std;

parQueue::parQueue() //����������� - �������������� ������ � ��������� ��������

{

	size = 0;

	last = nullptr;

}

parQueue::~parQueue() //����������

{

	while (size > 0) //���� ������ ������ ����

	{

		Unit* temp = last; //��������� ���������� ����������� �������� ����������

		last = temp->prev; //��������� ���������� "����������"

		delete temp; //������� ���������

		size--; //��������� ������

	}

}

Unit* parQueue::get_last()

{

	return last;

}

int parQueue::pop()

{

	setlocale(LC_ALL, "Rus");

	Unit* tmp = last;

	int deldata = 0;

	if (tmp->prev == nullptr) //���� � ������� ���� ������� (��������� �� ���������� ������� �������), ��

	{

		deldata = tmp->data;

		delete last; //������� "���������" �������

		last = nullptr; //� ����������� ��� ����

		size--; //��������� ������

	}

	else

	{ //���������: ��, ��� ������� "���������" - �� ������, ��� �� �� ����� �����; � ��� ���������� ��������� �� "��������" ������� �������, �� �� �� ���������

		while (tmp->prev->prev != nullptr) //������� ���� �� ��������� �� "�������" � �������

		{

			tmp = tmp->prev;

		}

		deldata = tmp->prev->data;

		delete tmp->prev;

		tmp->prev = nullptr;

		size--;

	}

	return deldata;

}

void parQueue::push(int el)

{

	Unit* new_unit = new Unit; //�������� ������ ��� ����� �������

	new_unit->prev = last; //��������� ������ �������� ��������� �� ��������� � �������

	last = new_unit; //������ ����� ������� ���� ���������

	last->data = el; //����������� ������

	size++;

}

void parQueue::print()

{

	Unit* tmp = last;

	while (tmp->prev != nullptr)

	{

		cout << tmp->data << " --> "; //������� �������� (� �����), ���� ��������� �� ��������� ������� �� ����� �������

		tmp = tmp->prev;

	}

	cout << tmp->data << endl; //������ ��������� �������

}

void parQueue::copy(parQueue& Q) //����� ����������� �������

{

	int* buff = new int[Q.size]; //������� �������� ������

	Unit* el_queue = Q.last; //������� ���������� �������

	for (int i = Q.size - 1; i >= 0; i--)

	{

		buff[i] = el_queue->data; //�� ��������� ������ ������� ������ �� "�����" ������� �������

		el_queue = el_queue->prev; //��������� ������ �� �������

	}

	for (int i = 0; i < Q.size; i++)

	{

		this->push(buff[i]);

	}

	delete[] buff;

	//cout << "����������� ���������!" << endl;

}

void parQueue::merge(parQueue& Q1)

{

	int* buff1 = new int[Q1.size];

	Unit* el_queue1 = Q1.last;

	for (int i = Q1.size - 1; i >= 0; i--)

	{

		buff1[i] = el_queue1->data;

		el_queue1 = el_queue1->prev;

	}

	for (int i = 0; i < Q1.size; i++)

	{

		this->push(buff1[i]);

	}

	delete[] buff1;

	cout << "success!" << endl;

}

bool parQueue::isEmpty()

{

	if (size == 0)

	{

		return true;

	}

	else

	{

		return false;

	}

}