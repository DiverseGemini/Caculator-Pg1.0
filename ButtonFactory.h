#pragma once
#include"wx/wx.h"

class ButtonFactory : wxFrame
{

public:
	ButtonFactory();
	~ButtonFactory();



	void CreateButton(wxWindow* tis);
public:

	wxButton* ButtonM(wxWindow* tis);
	wxButton* ButtonM1(wxWindow* tis);
	wxButton* ButtonM2(wxWindow* tis);
	wxButton* ButtonM3(wxWindow* tis);
	wxButton* ButtonM4(wxWindow* tis);
	wxButton* ButtonM5(wxWindow* tis);
	wxButton* ButtonM6(wxWindow* tis);
	wxButton* ButtonM7(wxWindow* tis);
	wxButton* ButtonM8(wxWindow* tis);
	wxButton* ButtonM9(wxWindow* tis);
	


	int bsizeW = 5;
	int bsizeH = 6;


};



