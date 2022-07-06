#include "Window.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(200, 200), wxSize(500, 600)) {

	button = new wxButton(this, wxID_ANY, "1", wxPoint(10, 10), wxSize(100, 100));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(10, 10), wxSize(100, 100));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(10, 10), wxSize(100, 100));
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 10), wxSize(100, 100));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(10, 10), wxSize(100, 100));
	button6 = new wxButton(this, wxID_ANY, "6", wxPoint(10, 10), wxSize(100, 100));
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 10), wxSize(100, 100));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(10, 10), wxSize(100, 100));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(10, 10), wxSize(100, 100));
	buttonA = new wxButton(this, wxID_ANY, "dem  ", wxPoint(10, 10), wxSize(100, 100));
	buttonB = new wxButton(this, wxID_ANY, "1", wxPoint(10, 10), wxSize(100, 100));
	textBox = new wxTextCtrl(this, wxID_ANY,"",wxPoint(10,10),wxSize(600,100) ) ;
}