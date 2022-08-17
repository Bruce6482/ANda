#pragma once

typedef unsigned int uint;
class TShape
{
private:
	uint _x, _y;
public:
	TShape();
	uint getX() { 
		return _x; 
	};
	uint getY() { 
		return _y;
	};
	void setX(uint x) { _x = x; };
	void setY(uint y) { _y = y; };
	void Draw();
};
