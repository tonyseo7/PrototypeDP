#include "stdafx.h"
#include "ProLine.h"

ProLine::ProLine(TypeZoomLens typezoomlens)
{
	switch (typezoomlens)
	{
		case NM_NM:
		{
			prototype = new ZoomLens(20, 70, 1, 100);
			break;
		}
		case NM_NF:
		{
			prototype = new ZoomLens(20, 70, 1, 200);
			break;
		}
		case NF_NF:
		{
			prototype = new ZoomLens(20, 300, 1, 200);
			break;
		}
		case MF_NF:
		{
			prototype = new ZoomLens(70, 300, 1, 200);
			break;
		}
		case MF_MF:
		{
			prototype = new ZoomLens(70, 300, 10, 200);
			break;
		}
	}
}

ProLine::~ProLine(void)
{
	DisposeLens();

	delete prototype;
}

void ProLine::DisposeLens()
{
	LIter iter = soldlenses.begin();
	LIter end = soldlenses.end();

	ZoomLens *lens = 0;

	for( ; iter != end; ++iter)
	{
		lens = *iter;
		delete lens;
	}
}

ZoomLens *ProLine::MakeLens()
{
	ZoomLens *product = prototype->Clone();
	soldlenses.push_back(product);
	return product;
}