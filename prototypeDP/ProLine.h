#pragma once
#include "ZoomLens.h"
#include "common.h"
enum TypeZoomLens
{
	NM_NM,
	NM_NF,
	NF_NF,
	MF_NF,
	MF_MF
};

typedef vector<ZoomLens *> Lenses;
typedef vector<ZoomLens *>::iterator LIter;

class ProLine
{
	ZoomLens *prototype;
	Lenses soldlenses;

public:
	ProLine(TypeZoomLens typezoomlens);
	~ProLine(void);
	ZoomLens *MakeLens(); //렌즈 주문 메서드

private:
	void DisposeLens();
};