#pragma once
#include <string>
#include "wx/wx.h"

class CalcProccessor
{
private:
	static CalcProccessor* CP_Instance; //Instance variable
	CalcProccessor() {}
public:

	static CalcProccessor* GetInstance() {
		if (CP_Instance == nullptr)
		{
	
			CP_Instance = new CalcProccessor;

		}
		return CP_Instance;
	}
	CalcProccessor(CalcProccessor& other) = delete;
	void operator=(CalcProccessor& other) = delete;

	//Pemdas and any signs
	public:


		float x;
		float y;

	float bob(wxTextCtrl* TBox);

	
	float add( wxTextCtrl* TBox);
	float sub(wxTextCtrl* TBox);
	float multiply(wxTextCtrl* TBox);
	float Div(wxTextCtrl* TBox);
	void equal(wxTextCtrl* TBox);
	std::string ToBinaryString(wxTextCtrl* TBox);
		std::string ToDecString(wxTextCtrl* TBox);


	 

	
};

