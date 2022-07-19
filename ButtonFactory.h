#pragma once
#include"wx/wx.h"

class ButtonFactory : wxFrame
{

public:
	ButtonFactory();
	~ButtonFactory();
	
	

public:
	void CreateButton(wxWindow* tis);
	
	
	int bsizeW = 5;
	int bsizeH = 6;


};



