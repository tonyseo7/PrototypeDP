#include "stdafx.h"
#include "LensFactory.h"

void main()
{
	LensFactory *factory = new LensFactory();

	int Icnt = factory->GetMaxLines();
	ZoomLens *lens = 0;

	for (int i = 0; i < Icnt; i++)
	{
		lens = factory->Order(i);

		if (lens)
		{
			lens->Take();
			cout << endl;
		}
	}

	delete factory;
}