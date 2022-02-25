
#include <iostream>

#include "Queue1.h"

using namespace std;

int sonQueue_private::function9()

{

	Unit* last = get_last();

	int n = 0;

	double result = 0;

	int ret = 0;

	if (size == 0)
	{
		cout << "queue empty!" << endl;
	}

	else

	{

		while (last != nullptr)

		{
			result += (1 / (double)(last->data));
		
			n++;
			last = last->prev;

		}

		result = (double)n / result;

		last = get_last();

		while (last != nullptr)

		{

			if (last->data < result)
			{
				ret = last->data;

			}

			last = last->prev;

		}

	}

	return ret;

}

int sonQueue_private::pop() { return parQueue::pop(); }

void sonQueue_private::push(int el) { return parQueue::push(el); }

void sonQueue_private::print() { return parQueue::print(); }

void sonQueue_private::merge(sonQueue_private& Q1) { return parQueue::merge(Q1); }

void sonQueue_private::copy(sonQueue_private& Q1) { return parQueue::copy(Q1); }

bool sonQueue_private::isEmpty() { return parQueue::isEmpty(); }

int sonQueue_protected::function9()

{

	Unit* last = get_last();

	int n = 0;

	double result = 0;

	int ret = 0;

	if (size == 0)
	{
		cout << "queue empty!" << endl;
	}

	else

	{

		while (last != nullptr)

		{
			result += (1 / (double)(last->data));

			n++;
			last = last->prev;

		}

		result = (double)n / result;

		last = get_last();

		while (last != nullptr)

		{

			if (last->data < result)
			{
				ret = last->data;

			}

			last = last->prev;

		}

	}

	return ret;

}

int sonQueue_protected::pop() { return parQueue::pop(); }

void sonQueue_protected::push(int el) { return parQueue::push(el); }

void sonQueue_protected::print() { return parQueue::print(); }

void sonQueue_protected::merge(sonQueue_protected& Q1) { return parQueue::merge(Q1); }

void sonQueue_protected::copy(sonQueue_protected& Q1) { return parQueue::copy(Q1); }

bool sonQueue_protected::isEmpty() { return parQueue::isEmpty(); }

int sonQueue_public::function9()

{

	Unit* last = get_last();

	int n = 0;

	double result = 0;

	int ret = 0;

	if (size == 0)
	{
		cout << "queue empty!" << endl;
	}

	else

	{

		while (last != nullptr)

		{
			result += (1 / (double)(last->data));

			n++;
			last = last->prev;

		}

		result = (double)n / result;

		last = get_last();

		while (last != nullptr)

		{

			if (last->data < result)
			{
				ret = last->data;

			}

			last = last->prev;

		}

	}

	return ret;

}

