#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"TShape801.h"
using namespace std;

TShape::TShape() {
	_x = 10;
	_y = 10;
}
void TShape::Draw()
{
	cout << "This is TShape::Draw()" << endl;
}

