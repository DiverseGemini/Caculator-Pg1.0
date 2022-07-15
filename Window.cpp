#include "Window.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(10000, Window::OnButtonClicked)
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
EVT_BUTTON(10020, Window::OnButtonClicked)


wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Caculator", wxPoint(0, 200), wxSize(290, 515)) {

	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 10), wxSize(270, 100));
      
	

	ButtonFactory B;
	B.CreateButton(this);

	
}
void Window::OnButtonClicked(wxCommandEvent& evt)
{
	int Gid = evt.GetId();
	switch (Gid)
	{
	case 10000:
		textBox->AppendText("0");
		break;
	case 10001:
		textBox->AppendText("1");
		break;
	case 10002:
		textBox->AppendText("2");
		break;
	case 10003:
		textBox->AppendText("3");
		break;
	case 10004:
		textBox->AppendText("4");
		break;
	case 10005:
		textBox->AppendText("5");
		break;
	case 10006:
		textBox->AppendText("6");
		break;
	case 10007:
		textBox->AppendText("7");
		break;
	case 10008:
		textBox->AppendText("8");
		break;
	case 10009:
		textBox->AppendText("9");
		break;
	case 10010:
		textBox->AppendText("+");
		break;
	case 10011:
		textBox->AppendText("-");
		break;
	case 10012:
		textBox->AppendText("*");
		break;
	case 10013:
		textBox->AppendText("/");
		break;
	case 10014:
		textBox->AppendText("bIn");
		break;
	case 10015:
		textBox->AppendText("Hex");
		break;
	case 10016:
		textBox->AppendText(".");
		break;
	case 10017:
		textBox->AppendText("%");
		break;
	case 10018:
		textBox->AppendText("=");
		break;
	case 10019:
		textBox->Clear();
		break;
	case 10020:
		textBox->AppendText("-");
		break;
	default:
		break;
	}

	evt.Skip();
}
