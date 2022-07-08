#include "Window.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(200, 200), wxSize(300, 520)) {

	textBox = new wxTextCtrl(this, wxID_ANY,"",wxPoint(10,10),wxSize(270,100));
	
	//Frist row of numbers
	button = new wxButton(this, wxID_ANY, "1", wxPoint(10, 200), wxSize(90, 90));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(100, 200),  wxSize(90, 90));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(190, 200), wxSize(90, 90));
	
	//second row of numbers 
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 290), wxSize(90, 90));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(100, 290), wxSize(90, 90));
	button6 = new wxButton(this, wxID_ANY, "6", wxPoint(190, 290), wxSize(90, 90));
	//Third row of numbers 
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 380), wxSize(90, 90));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(100, 380), wxSize(90, 90));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(190, 380), wxSize(90, 90));
	


	buttonA = new wxButton(this, wxID_ANY, "dem  ", wxPoint(10, 10), wxSize(90, 90));
	buttonB = new wxButton(this, wxID_ANY, "mod     ", wxPoint(10, 10), wxSize(90, 90));
}