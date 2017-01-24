#include "stdafx.h"
#include "LensFactory.h"

LensFactory::LensFactory(void)
{
	InitLines();
}

LensFactory::~LensFactory(void)
{
	PIter iter = lines.begin();
	PIter end = lines.end();
	ProLine *proline = 0;

	for (; iter != end; ++iter)
	{
		proline = *iter;
		delete proline;
	}
}

int LensFactory::GetMaxLines() const
{
	return lines.size();
}

ZoomLens *LensFactory::Order(int index)
{
	if ((index >= 0) && (index < GetMaxLines()))
	{
		ProLine *pline = lines[index];
		return pline->MakeLens();
	}

	return 0;
}

void LensFactory::InitLines()
{
	lines.push_back(new ProLine(NM_NM));
	lines.push_back(new ProLine(NM_NF));
	lines.push_back(new ProLine(NF_NF));
	lines.push_back(new ProLine(MF_NF));
	lines.push_back(new ProLine(MF_MF));
	
}