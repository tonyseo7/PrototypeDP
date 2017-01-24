#pragma once
#include "ProLine.h"
typedef vector<ProLine *> ProLines;
typedef vector<ProLine *>::iterator PIter;

class LensFactory
{
	ProLines lines;

public:
	LensFactory(void);
	~LensFactory(void);
	int GetMaxLines() const;
	ZoomLens *Order(int n);	//주문한 렌즈를 생산하여 반환하는 메서드

private:
	void InitLines();
};
