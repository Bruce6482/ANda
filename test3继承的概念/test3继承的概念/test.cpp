#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include"TShape801.h"
#include"TEllipse801.h"
int main()
{
	TEllipse m_TEllipse;
	cout << "X=" << m_TEllipse.getX() << ",Y=" << m_TEllipse.getY() << endl;
	m_TEllipse.setX(11);
	m_TEllipse.setY(21);
	cout << "X=" << m_TEllipse.getX() << ",Y=" << m_TEllipse.getY() << endl;
	m_TEllipse.Draw();

	return 0;
}