#include "Window.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(0, 200), wxSize(290, 515)) {

	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 10), wxSize(270, 100));

	//Frist row of numbers
	button0 = new wxButton(this, wxID_ANY, "0", wxPoint(182, 110), wxSize(90, 90));
	button = new wxButton(this, wxID_ANY, "1", wxPoint(2, 200), wxSize(90, 90));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(92, 200), wxSize(90, 90));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(182, 200), wxSize(90, 90));

	//second row of numbers 
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(2, 290), wxSize(90, 90));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(92, 290), wxSize(90, 90));
	button6 = new wxButton(this, wxID_ANY, "6", wxPoint(182, 290), wxSize(90, 90));
	//Third row of numbers 
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(2, 380), wxSize(90, 90));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(92, 380), wxSize(90, 90));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(182, 380), wxSize(90, 90));


	//PemDas
	buttonA = new wxButton(this, wxID_ANY, "+", wxPoint(2, 110), wxSize(45, 30));
	buttonB = new wxButton(this, wxID_ANY, "-", wxPoint(47, 110), wxSize(45, 30));
	button2B = new wxButton(this, wxID_ANY, "(-)", wxPoint(2, 170), wxSize(45, 30));
	buttonC = new wxButton(this, wxID_ANY, "*", wxPoint(92, 110), wxSize(45, 30));
	buttonD = new wxButton(this, wxID_ANY, "/", wxPoint(137, 110), wxSize(45, 30));

	buttonG = new wxButton(this, wxID_ANY, "Binary", wxPoint(2, 140), wxSize(45, 30));
	buttonH = new wxButton(this, wxID_ANY, "Hex", wxPoint(47, 140), wxSize(45, 30));
	buttonI = new wxButton(this, wxID_ANY, "Dec", wxPoint(92, 140), wxSize(45, 30));
	buttonJ = new wxButton(this, wxID_ANY, "Mod", wxPoint(137, 140), wxSize(45, 30));

	//clear and anwser button
	buttonE = new wxButton(this, wxID_ANY, "=", wxPoint(47, 170), wxSize(45, 30));
	buttonF = new wxButton(this, wxID_ANY, "Clear", wxPoint(92, 170), wxSize(45, 30));

}