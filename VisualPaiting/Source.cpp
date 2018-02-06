#include <opencv2\opencv.hpp>
#include <Windows.h>
#include "VisualDraw.h"

using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
PaitingValues ptVals;


[System::STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VisualPaiting::VisualDraw mainForm(ptVals);
	Application::Run(%mainForm);
}