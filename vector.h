#pragma once
#include "stdio.h"
#include <locale.h>
#include <iomanip>
#include <iostream>
#include <typeinfo> 
using namespace std;

template <class T> class vector
{
	T* ms;	
	int size, ind;	
public:
	vector() :size(0), ind(0), ms(NULL) {} vector(int);
	~vector() { delete[] ms; }
	T* get_vect();
	void set(const T&);
	void set_size(int);
	int get_size();	
	T& operator[](int);	
};


template <class T>
vector<T>::vector(int SIZE) : size(SIZE), ind(0)
{
	ms = new T[size];
	const type_info& t = typeid(T);	
	const char* s = t.name();		 
	for (int i = 0; i < size; i++)	
		if (!strcmp(s, "char")) *(ms + i) = ' '; 
		else *(ms + i) = 0;		
}

template <class T>
void vector<T>::set(const T& t) 
{
	T* tmp = NULL;
	if (++ind >= size)
	{
		tmp = ms;
		ms = new T[size + 1];	
	}
	if (tmp) memcpy(ms, tmp, sizeof(T) * size); 
	ms[size++] = t;	
	if (tmp) delete[] tmp;	
}


template <class T>
T* vector<T>::get_vect()
{
	return ms;
}

template <class T>
int vector<T>::get_size()
{
	return size;
}

template <class T>
void vector<T>::set_size(int n)
{
	size = n;
}

template <class T>
T& vector<T>::operator[](int n) 
{
	if (n < 0 || (n >= size)) n = 0;	
	return ms[n];
}
