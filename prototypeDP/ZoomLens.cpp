#include "stdafx.h"
#include "ZoomLens.h"
#include "common.h"

void ZoomLens::Take()
{
	cout << "�� ���� ���� ����:" << min_zoomlevel << "~" << max_zoomlevel << endl;
	cout << "���� �ܷ���:" << zoomlevel << endl;
	cout << "��Ŀ�� ���� ����" << min_focus << "~" << max_focus << endl;
	cout << "���� ��Ŀ��:" << focus << endl;
}

int ZoomLens::ZoomIn()
{
	if (zoomlevel < max_zoomlevel) 
	{ 
		zoomlevel++; 
	}

	return zoomlevel;
}

int ZoomLens::ZoomOut()
{
	if (zoomlevel > min_zoomlevel)
	{
		zoomlevel--;
	}

	return zoomlevel;
}

int ZoomLens::NearFocus()
{
	if (focus > min_focus)
	{
		focus--;
	}

	return focus;
}

int ZoomLens::FarFocus()
{
	if (focus < max_focus)
	{
		focus++;
	}

	return focus;
}

ZoomLens::ZoomLens(int min_zoomlevel, int max_zoomlevel, int min_focus, int max_focus) :min_zoomlevel(min_zoomlevel),
max_zoomlevel(max_zoomlevel), min_focus(min_focus), max_focus(max_focus)
{
	zoomlevel = min_zoomlevel;
	focus = min_focus;
}

ZoomLens *ZoomLens::Clone()
{
	return new ZoomLens(min_zoomlevel, max_zoomlevel, min_focus, max_focus);
}