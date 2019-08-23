//James Trevithick							jtrevithick2@cnm.edu							TrevithickP8

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	TrevithickP8::MyForm form;

	Application::Run(%form);

}

