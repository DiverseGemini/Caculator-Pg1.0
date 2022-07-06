#include "Main.h"
#include "Window.h"

wxIMPLEMENT_APP(Main);
bool Main::OnInit() {

	window = new Window();
	window->Show();
	return true;
}