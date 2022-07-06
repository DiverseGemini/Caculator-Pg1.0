#include "Window.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(200, 200), wxSize(500, 600)) {

	textBox = new wxTextCtrl(this, wxID_ANY,"",wxPoint(10,10),wxSize(473,100));

	button = new wxButton(this, wxID_ANY, "1", wxPoint(10, 110), wxSize(90, 90));
	button2 = new wxButton(this, wxID_ANY, "2", wxPoint(10, 210), wxSize(90, 90));
	button3 = new wxButton(this, wxID_ANY, "3", wxPoint(10, 310), wxSize(90, 90));
	button4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 410), wxSize(90, 90));
	button5 = new wxButton(this, wxID_ANY, "5", wxPoint(100, 110),  wxSize(90, 90));
	button7 = new wxButton(this, wxID_ANY, "7", wxPoint(100, 210), wxSize(90, 90));
	button8 = new wxButton(this, wxID_ANY, "8", wxPoint(100, 310), wxSize(90, 90));
	button9 = new wxButton(this, wxID_ANY, "9", wxPoint(100, 410), wxSize(90, 90));
	buttonA = new wxButton(this, wxID_ANY, "dem  ", wxPoint(10, 10), wxSize(90, 90));
	buttonB = new wxButton(this, wxID_ANY, "1", wxPoint(10, 10), wxSize(90, 90));
}