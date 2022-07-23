#include "CalcProccessor.h"
#include <string>

CalcProccessor* CalcProccessor::CP_Instance = nullptr;

CalcProccessor* CalcProccessor::GetInstance() {
	if (CP_Instance == nullptr)
	{

		CP_Instance = new CalcProccessor;

	}
	return CP_Instance;
}

CalcProccessor::CalcProccessor()
{
}

float CalcProccessor::bob(wxTextCtrl* TBox)
{
	float txbox = stof((std::string)TBox->GetValue());
	return txbox;
}

float CalcProccessor::add(wxTextCtrl* TBox)
{
	addi = true;
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		_addition = x + y;

		TBox->SetValue(std::to_string(_addition));

	}
	return _addition;
}

float CalcProccessor::sub(wxTextCtrl* TBox)
{
	subf = true;
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		_subtraction = x - y;

		TBox->SetValue(std::to_string(_subtraction));

	}
	return _subtraction;
}


float CalcProccessor::multiply(wxTextCtrl* TBox)
{
	multiplyb = true;
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		_mult = x * y;


		TBox->SetValue(std::to_string(_mult));

	}
	return _mult;
}

float CalcProccessor::Div(wxTextCtrl* TBox)
{
	divb = true;

	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{

		di = x / y;

		TBox->SetValue(std::to_string(di));

	}
	return di;

}
float CalcProccessor::Modd(wxTextCtrl* TBox)
{

	modb = true;
	if (x == 0)
	{
		x = bob(TBox);
		TBox->Clear();

	}

	if (eq == true)
	{
		mod = (int)x % (int)y;


		TBox->SetValue(std::to_string(mod));

	}
	return mod;
}
float CalcProccessor::clearit(wxTextCtrl* TBox)
{
	Crit = true;
	if (x != 0)
	{

		TBox->Clear();
		x = 0;
		y = 0;
	}
	return x && y;
}

bool CalcProccessor::equal(wxTextCtrl* TBox)
{
	eq = true;

	y = bob(TBox);

	if (addi == true)
	{
		add(TBox);
		addi = false;
		eq = false;
	}


	if (subf == true)
	{
		sub(TBox);
		subf = false;
		eq = false;
	}
	if (multiplyb == true)
	{
		multiply(TBox);
		multiplyb = false;
		eq = false;
	}
	if (divb == true)
	{
		Div(TBox);
		divb = false;
		eq = false;
	}
	if (modb == true)
	{
		Div(TBox);
		modb = false;
		eq = false;
	}
	return eq;
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
			results = "A" + results;
		}
		else if (remainder == 11)
		{
			results = "B" + results;
		}
		else if (remainder == 12)
		{
			results = "C" + remainder;
		}
		else if (remainder == 13)
		{
			results = "D" + results;
		}
		else if (remainder == 14)
		{
			results = "E" + results;
		}
		else if (remainder == 15)
		{
			results = "F" + results;
		}
		number = number / 16;

	}
	return "0x" + results;
}


