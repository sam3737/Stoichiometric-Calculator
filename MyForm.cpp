#include <map>
#include <string>
#include <list>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>
#include <ctype.h>
#include <cmath>

#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    stoichiometryHonorsContract::MyForm form;

    Application::Run(% form);

}
