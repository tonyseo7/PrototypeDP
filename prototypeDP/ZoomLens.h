#pragma once

class ZoomLens
{
	const int min_zoomlevel;
	const int max_zoomlevel;
	int zoomlevel;
	const int min_focus;
	const int max_focus;
	int focus;

public:
	ZoomLens(int min_zoomlevel, int max_zoomlevel, int min_focus, int max_focus);
	void Take();
	int ZoomIn();
	int ZoomOut();
	int NearFocus();
	int FarFocus();
	ZoomLens *Clone();		//자신 복제 메서드
};
