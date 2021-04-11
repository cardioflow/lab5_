#pragma once
#include <iostream>
using namespace std;
class Deque
{
	int* arr;
	int count;
	int end = 0, size = 0;
public:
	Deque(int count); //инициализация
	Deque(const Deque& other); //копирование
	Deque(Deque&& other); //перемещение
	~Deque(); //деструктор
	int GetSize();
	void PushFront(int element); // Вставка элеманта в начало
	void PopFront();//Удаление начального элемента
	int PeekFront();//Просмотр начального элемента
	void PushBack(int element); // Вставка элемента в конец 
	void PopBack();//Удаление крайнего элемента
	int PeekBack();//Просмотр крайнего элемента
	void GetFirst(int element);//Вписывание 1го элемента
	Deque& operator=(const Deque& other); //присваивание
	Deque& operator=(Deque&& other); //присваивание с перемещением
	friend ostream& operator << (ostream& stream, const Deque& a); //Вывод
};

