#pragma once
#include "wx/wx.h"

class Window;

class Main : public wxApp
{

	Window* window = nullptr;
public:
	virtual bool OnInit();



};

