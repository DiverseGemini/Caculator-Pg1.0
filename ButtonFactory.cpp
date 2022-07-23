#include "ButtonFactory.h"
#include "Window.h"

	wxButton* ButtonFactory::ButtonM(wxWindow * tis) {

		wxButton* button = new wxButton(tis, 10000, "0", wxPoint(182, 110), wxSize(90, 90));
		return button;
	}

	wxButton* ButtonFactory::ButtonM1(wxWindow * tis) {

		wxButton* button1 = new wxButton(tis, 10001, "1", wxPoint(2, 200), wxSize(90, 90));
		return button1;
	}
	wxButton* ButtonFactory::ButtonM2(wxWindow * tis) {

		wxButton* button2 = new wxButton(tis, 10002, "2", wxPoint(92, 200), wxSize(90, 90));
		return button2;

	}



	wxButton* ButtonFactory::ButtonM3(wxWindow * tis) {

		wxButton* button3 = new wxButton(tis, 10003, "3", wxPoint(182, 200), wxSize(90, 90));


		return button3;


	}
	wxButton* ButtonFactory::ButtonM4(wxWindow * tis) {

		wxButton* button4 = new wxButton(tis, 10004, "4", wxPoint(2, 290), wxSize(90, 90));
		return button4;
	}
	wxButton* ButtonFactory::ButtonM5(wxWindow * tis) {

		wxButton* button5 = new wxButton(tis, 10005, "5", wxPoint(92, 290), wxSize(90, 90));
		return button5;
	}
	wxButton* ButtonFactory::ButtonM6(wxWindow * tis) {

		wxButton* button6 = new wxButton(tis, 10006, "6", wxPoint(182, 290), wxSize(90, 90));
		return button6;


	}
	wxButton* ButtonFactory::ButtonM7(wxWindow * tis) {
		wxButton* button7 = new wxButton(tis, 10007, "7", wxPoint(2, 380), wxSize(90, 90));
		return button7;
	}
	wxButton* ButtonFactory::ButtonM8(wxWindow * tis) {


		wxButton* button8 = new wxButton(tis, 10008, "8", wxPoint(92, 380), wxSize(90, 90));

		return button8;
	}
	wxButton* ButtonFactory::ButtonM9(wxWindow * tis) {
		wxButton* button9 = new wxButton(tis, 10009, "9", wxPoint(182, 380), wxSize(90, 90));
		return button9;
	}
ButtonFactory::ButtonFactory()
{
}

ButtonFactory::~ButtonFactory()
{
}

void ButtonFactory::CreateButton(wxWindow* tis)
{
	//Making the buttons  
	ButtonM(tis);
	ButtonM1(tis); 
	ButtonM2(tis);
	ButtonM3(tis);
	ButtonM4(tis);
	ButtonM5(tis);
	ButtonM6(tis);
	ButtonM7(tis);
	ButtonM8(tis);
	ButtonM9(tis);
	
	


	//PemDas
	wxButton* buttonA = new wxButton(tis, 10010, "+", wxPoint(2, 110), wxSize(45, 30));
	wxButton* buttonB = new wxButton(tis, 10011, "-", wxPoint(47, 110), wxSize(45, 30));
	wxButton* button2B = new wxButton(tis, 10020, "(-)", wxPoint(2, 170), wxSize(45, 30));
	wxButton* buttonC = new wxButton(tis, 10012, "*", wxPoint(92, 110), wxSize(45, 30));
	wxButton* buttonD = new wxButton(tis, 10013, "/", wxPoint(137, 110), wxSize(45, 30));

	wxButton* buttonG = new wxButton(tis, 10014, "Binary", wxPoint(2, 140), wxSize(45, 30));
	wxButton* buttonH = new wxButton(tis, 10015, "Hex", wxPoint(47, 140), wxSize(45, 30));
	wxButton* buttonI = new wxButton(tis, 10016, "Dec", wxPoint(92, 140), wxSize(45, 30));
	wxButton* buttonJ = new wxButton(tis, 10017, "Mod", wxPoint(137, 140), wxSize(45, 30));

	//clear and anwser button
	wxButton* buttonE = new wxButton(tis, 10018, "=", wxPoint(47, 170), wxSize(45, 30));
	wxButton* buttonF = new wxButton(tis, 10019, "Clear", wxPoint(92, 170), wxSize(45, 30));



}





