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
//class  SingleTon
//{
//public:
//	static SingleTon& Get() {
//		return s_Instance;
//	}
//private:
//	 SingleTon();
//	~ SingleTon();
//	static SingleTon s_Instance;
//};
//
//SingleTon SingleTon::s_Instance;
//int main()
//{
//	SingleTon::Get();
//}
// SingleTon:: SingleTon()
//{
//}
//
// SingleTon::~ SingleTon()
//{
//}


