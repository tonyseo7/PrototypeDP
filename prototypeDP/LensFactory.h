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
	ZoomLens *Order(int n);	//�ֹ��� ��� �����Ͽ� ��ȯ�ϴ� �޼���

private:
	void InitLines();
};
