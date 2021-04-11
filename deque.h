#pragma once
#include <iostream>
using namespace std;
class Deque
{
	int* arr;
	int count;
	int end = 0, size = 0;
public:
	Deque(int count); //�������������
	Deque(const Deque& other); //�����������
	Deque(Deque&& other); //�����������
	~Deque(); //����������
	int GetSize();
	void PushFront(int element); // ������� �������� � ������
	void PopFront();//�������� ���������� ��������
	int PeekFront();//�������� ���������� ��������
	void PushBack(int element); // ������� �������� � ����� 
	void PopBack();//�������� �������� ��������
	int PeekBack();//�������� �������� ��������
	void GetFirst(int element);//���������� 1�� ��������
	Deque& operator=(const Deque& other); //������������
	Deque& operator=(Deque&& other); //������������ � ������������
	friend ostream& operator << (ostream& stream, const Deque& a); //�����
};

