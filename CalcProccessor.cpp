#include "CalcProccessor.h"
#include <string>

CalcProccessor* CalcProccessor::CP_Instance = nullptr;

float CalcProccessor::bob(wxTextCtrl* TBox)
{
	float txbox = stof((std::string)TBox->GetValue());
	return txbox;
}

void CalcProccessor::add(wxTextCtrl* TBox)
{
	addi = true;
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		float _addition = x + y;

		TBox->SetValue(std::to_string(_addition));

	}

}

void CalcProccessor::sub(wxTextCtrl* TBox)
{
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		float _addition = x + y;

		TBox->SetValue(std::to_string(_addition));

	}
}

void CalcProccessor::multiply(wxTextCtrl* TBox)
{
	x = bob(TBox);

	y = bob(TBox);
	TBox->Clear();
	float mult = x * y;
	
}

void CalcProccessor::Div(wxTextCtrl* TBox)
{
	x = bob(TBox);

	y = bob(TBox);
	TBox->Clear();
	float di = x / y;
	
}

void CalcProccessor::equal(wxTextCtrl* TBox)
{
	eq = true;
	y = bob(TBox);

	if (addi == true)
	{
		add(TBox);
		addi = false;
		eq = false;
	}


}




std::string CalcProccessor::ToBinaryString(wxTextCtrl* TBox)
{
	int number = stoi((std::string)TBox->GetValue());
	std::string results = "";
	for (int i = 0; i < 10; i++)
	{
		//results = std::to_string(number % 2) + results;

		if (number % 2 == 0)
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

std::string CalcProccessor::ToDexString(wxTextCtrl* TBox)
{
	int number = stoi((std::string)TBox->GetValue());
	std::string results = "";

	while (number > 0)
	{
		int remainder = number % 16;
		if (remainder < 10)
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


