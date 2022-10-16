#include "MyForm.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Proyecto::MyForm
        form; Application::Run(% form);
    return 0;
}