﻿#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



void coin(vector<int>&c, int& m, int& k,int& i)
{
	k += m / c[i];
	m -= (m / c[i])*c[i];
	i++;

	if (m>0)
		coin(c, m, k, i);
}

void insert_sort(vector<int>&a)
{	
	int min;
	int k;
	for (int i = 0; i < a.size(); i++)
	{
		min = a[i];
		for (int j = i + 1; j < a.size(); j++)
			if (min > a[j])
			{
				min = a[j];
				k = j;
			}
		swap(a[i], a[k]);
		for (int k = 0; k < a.size(); k++)
			cout << a[k] << " ";
		cout << endl;
	}
}


void recursive_insert_sort(vector<int>&a, int& i)
{
	int Min = a[i];
	int k;
	for (int j = i; j < a.size(); j++)
	{
		if (Min > a[j])
			Min = a[j];
		k = j;
	}
	swap(a[i], a[k]);
	i++;
	for (int j = 0; j < a.size(); j++)
		cout << a[j] << " ";
	cout << endl;
	if (i < a.size())
		recursive_insert_sort(a, i);
}

void Insert_Sort(vector<int>& a) {
	a.insert(a.begin(),-1);
	for (int i = 2; i < a.size(); i++)
	{
		int min = a[i];
		a.erase(a.begin()+i);
		for (int j = 0; j < i; j++)
		{
			if (min >= a[j] && min < a[j + 1])
			{
				a.insert(a.begin() + j + 1, min);
				break;
			}
		}
	}
	a.erase(a.begin());
}


int main()
{

	vector<int> c = { 25,20,15,10,5,1 };
	int m = 40;
	int k = 0;
	int i = 0;
	Insert_Sort(c);
	for (int i = 0; i < c.size(); i++)
		cout << c[i] << " ";
	//coin(c,m,k,i);
	//cout << k << endl;
	//vector<int> a = { 30,20,40,10,5,10,30,15 };
	recursive_insert_sort(a,i);
	
}
