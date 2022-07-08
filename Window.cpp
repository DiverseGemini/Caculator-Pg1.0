#include "Window.h"
wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(10001, Window::OnButtonClicked)
EVT_BUTTON(10002, Window::OnButtonClicked)
EVT_BUTTON(10003, Window::OnButtonClicked)
EVT_BUTTON(10004, Window::OnButtonClicked)
EVT_BUTTON(10005, Window::OnButtonClicked)
EVT_BUTTON(10006, Window::OnButtonClicked)
EVT_BUTTON(10007, Window::OnButtonClicked)
EVT_BUTTON(10008, Window::OnButtonClicked)
EVT_BUTTON(10009, Window::OnButtonClicked)

EVT_BUTTON(10010, Window::OnButtonClicked)
EVT_BUTTON(10011, Window::OnButtonClicked)
EVT_BUTTON(10012, Window::OnButtonClicked)
EVT_BUTTON(10013, Window::OnButtonClicked)
EVT_BUTTON(10014, Window::OnButtonClicked)
EVT_BUTTON(10015, Window::OnButtonClicked)
EVT_BUTTON(10016, Window::OnButtonClicked)
EVT_BUTTON(10017, Window::OnButtonClicked)
EVT_BUTTON(10018, Window::OnButtonClicked)
EVT_BUTTON(10019, Window::OnButtonClicked)


wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(0, 200), wxSize(290, 515)) {

	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 10), wxSize(270, 100));

	//Frist row of numbers
	button0 = new wxButton(this, 10000, "0", wxPoint(2, 200), wxSize(90, 90));
	button = new wxButton(this, 10001, "1", wxPoint(2, 200), wxSize(90, 90));
	button2 = new wxButton(this, 10002, "2", wxPoint(92, 200), wxSize(90, 90));
	button3 = new wxButton(this, 10003, "3", wxPoint(182, 200), wxSize(90, 90));

	//second row of numbers 
	button4 = new wxButton(this, 10004, "4", wxPoint(2, 290), wxSize(90, 90));
	button5 = new wxButton(this, 10005, "5", wxPoint(92, 290), wxSize(90, 90));
	button6 = new wxButton(this, 10006, "6", wxPoint(182, 290), wxSize(90, 90));
	//Third row of numbers 
	button7 = new wxButton(this, 10007, "7", wxPoint(2, 380), wxSize(90, 90));
	button8 = new wxButton(this, 10008, "8", wxPoint(92, 380), wxSize(90, 90));
	button9 = new wxButton(this, 10009, "9", wxPoint(182, 380), wxSize(90, 90));


	//PemDas
	buttonA = new wxButton(this, 10010, "+", wxPoint(2, 110), wxSize(45, 30));
	buttonB = new wxButton(this, 10011, "-", wxPoint(47, 110), wxSize(45, 30));
	buttonC = new wxButton(this, 10012, "*", wxPoint(92, 110), wxSize(45, 30));
	buttonD = new wxButton(this, 10013, "/", wxPoint(137, 110), wxSize(45, 30));

	buttonG = new wxButton(this, 10014, "Binary", wxPoint(2, 140), wxSize(45, 30));
	buttonH = new wxButton(this, 10015, "Hex", wxPoint(47, 140), wxSize(45, 30));
	buttonI = new wxButton(this, 10016, "Dec", wxPoint(92, 140), wxSize(45, 30));
	buttonJ = new wxButton(this, 10017, "Mod", wxPoint(137, 140), wxSize(45, 30));

	//clear and anwser button
	buttonE = new wxButton(this, 10018, "=", wxPoint(183, 110), wxSize(45, 30));
	buttonF = new wxButton(this, 10019, "Clear", wxPoint(183, 140), wxSize(45, 30));

}
	void Window::OnButtonClicked(wxCommandEvent& evt)
	{
		int Gid = evt.GetId();
		switch (Gid)
		{
		case 10001:
			textBox->AppendText("1");
		case 10002:
			textBox->AppendText("2");
		case 10003:
			textBox->AppendText("3");
		case 10004:
			textBox->AppendText("4");
		case 10005:
			textBox->AppendText("5");
		case 10006:
			textBox->AppendText("6");
		case 10007:
			textBox->AppendText("7");
		case 10008:
			textBox->AppendText("8");
		case 10009:
			textBox->AppendText("9");
		case 10010:
			textBox->AppendText("10");
		case 10011:
			textBox->AppendText("11");
		case 10012:
			textBox->AppendText("12");
		case 10013:
			textBox->AppendText("13");
		case 10014:
			textBox->AppendText("14");
		case 10015:
			textBox->AppendText("15");
		case 10016:
			textBox->AppendText("16");
		case 10017:
			textBox->AppendText("17");
		case 10018:
			textBox->AppendText("18");
		case 10019:
			textBox->AppendText("19");

		default:
			break;
		}
		
		evt.Skip();
	}

