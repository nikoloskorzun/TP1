#pragma once

#include "Queue.h"

class sonQueue_private : private parQueue

{

public:

	int function9();

	int pop(); //�������� �������� �������

	void push(int el); //���������� �������� �������

	void print(); //����� �� ������� �������

	void merge(sonQueue_private& Q1); //������� ���� ��������

	void copy(sonQueue_private& Q); //����������� �������

	bool isEmpty(); //�������� �� �������������

};

class sonQueue_protected : protected parQueue

{

public:

	int function9();

	int pop(); //�������� �������� �������

	void push(int el); //���������� �������� �������

	void print(); //����� �� ������� �������

	void merge(sonQueue_protected& Q1); //������� ���� ��������

	void copy(sonQueue_protected& Q); //����������� �������

	bool isEmpty(); //�������� �� �������������

};

class sonQueue_public : public parQueue

{

public:

	int function9();

};