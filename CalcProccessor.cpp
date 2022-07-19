#include "CalcProccessor.h"
#include <string>

CalcProccessor* CalcProccessor::CP_Instance = nullptr;

float CalcProccessor::bob(wxTextCtrl* TBox)
{
	float txbox = stof((std::string)TBox->GetValue());
	return txbox;
}

float CalcProccessor::add(wxTextCtrl* TBox)
{

	x = bob(TBox);

	y = bob(TBox);
	TBox->Clear();
	float _addition = x + y;

	return  _addition;
}

float CalcProccessor::sub(wxTextCtrl* TBox)
{
	float ssub = x - y;
	return ssub;
}

float CalcProccessor::multiply(wxTextCtrl* TBox)
{
	float mult = x * y;
	return mult;
}

float CalcProccessor::Div(wxTextCtrl* TBox)
{
	float di = x / y;
	return di;
}

void CalcProccessor::equal(wxTextCtrl* TBox)
{
	
}



std::string CalcProccessor::ToBinaryString(wxTextCtrl* TBox)
{
	int number = stof((std::string)TBox->GetValue());
	std::string results = "";
	for (int i = 0; i < 10; i++)
	{
		//results = std::to_string(number % 2) + results;

		if (number%2 == 0)
		{
			results = "0" + results;
		}
		else
		{
			results = "1" + results;
		}
		number = number / 2;
	}
	return results;
}


std::string CalcProccessor::ToDecString(wxTextCtrl* TBox)
{
	int number = stof((std::string)TBox->GetValue());
	std::string results = "";

	while (number > 0)
	{
		int remainder = number % 16;
		if (remainder< 10)
		{
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10)
		{
			results = "A" + remainder;
		}
		else if (remainder == 11)
		{
			results = "B" + remainder;
		}
		else if (remainder == 12)
		{
			results = "C" + remainder;
		}
		else if (remainder == 13)
		{
			results = "D" + remainder;
		}
		else if (remainder == 14)
		{
			results = "E" + remainder;
		}
		else if (remainder == 15)
		{
			results = "F" + remainder;
		}
		number = number / 16;

	}
	return "0x" + results;
}


