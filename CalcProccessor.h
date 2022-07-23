#pragma once
#include <string>
#include "wx/wx.h"

class CalcProccessor
{
private:
	CalcProccessor();
	static CalcProccessor* CP_Instance; //Instance variable
public:
	static CalcProccessor* GetInstance();

	
	CalcProccessor(CalcProccessor& other) = delete;
	void operator=(CalcProccessor& other) = delete;

	//Pemdas and any signs
public:
	
	


	bool addi = false, subf = false, multiplyb = false, divb = false, modb = false;
	bool eq = false , Crit = false;
	
	float _addition, _mult, _subtraction, di , mod,x = 0, y = 0;


	float bob(wxTextCtrl* TBox);
	float add(wxTextCtrl* TBox);
	float sub(wxTextCtrl* TBox);
	float multiply(wxTextCtrl* TBox);
	float Div(wxTextCtrl* TBox);
	float Modd(wxTextCtrl* TBox);
	float clearit(wxTextCtrl* TBox);
	bool equal(wxTextCtrl* TBox);
	std::string ToBinaryString(wxTextCtrl* TBox);
	std::string ToDexString(wxTextCtrl* TBox);


	


};

