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
	std::vector<float>Pemdas;


	bool addi, subf, multiplyb, divb, modb = false;
	
	bool eq = false;
	float x = 0, y = 0;


	float bob(wxTextCtrl* TBox);
	void add(wxTextCtrl* TBox);
	void sub(wxTextCtrl* TBox);
	void multiply(wxTextCtrl* TBox);
	void Div(wxTextCtrl* TBox);
	void Modd(wxTextCtrl* TBox);
	void cleear(wxTextCtrl* TBox);
	void equal(wxTextCtrl* TBox);
	std::string ToBinaryString(wxTextCtrl* TBox);
	std::string ToDexString(wxTextCtrl* TBox);





};

