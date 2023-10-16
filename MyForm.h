#pragma once

namespace stoichiometryHonorsContract {

	#include "ChemistryFunctions.cpp"

	using namespace std;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		// Define function to initialize components of the Windows Form
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	// Define components
	private: System::Windows::Forms::TextBox^ input1Mass;
	protected:
	private: System::Windows::Forms::ComboBox^ input1MassUnit;
	private: System::Windows::Forms::TextBox^ input1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ input2;
	private: System::Windows::Forms::ComboBox^ input2MassUnit;
	private: System::Windows::Forms::TextBox^ input2Mass;
	private: System::Windows::Forms::TextBox^ output1;
	private: System::Windows::Forms::ComboBox^ output1MassUnit;
	private: System::Windows::Forms::TextBox^ output1Mass;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::ComboBox^ selectedOperation;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::CheckBox^ percentYieldCheckBox;
	private: System::Windows::Forms::TextBox^ percentYieldInput;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;




	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		// Initialize components
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->input1Mass = (gcnew System::Windows::Forms::TextBox());
			this->input1MassUnit = (gcnew System::Windows::Forms::ComboBox());
			this->input1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->input2 = (gcnew System::Windows::Forms::TextBox());
			this->input2MassUnit = (gcnew System::Windows::Forms::ComboBox());
			this->input2Mass = (gcnew System::Windows::Forms::TextBox());
			this->output1 = (gcnew System::Windows::Forms::TextBox());
			this->output1MassUnit = (gcnew System::Windows::Forms::ComboBox());
			this->output1Mass = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->selectedOperation = (gcnew System::Windows::Forms::ComboBox());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->percentYieldCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->percentYieldInput = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// input1Mass
			// 
			this->input1Mass->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->input1Mass->Location = System::Drawing::Point(15, 15);
			this->input1Mass->Name = L"input1Mass";
			this->input1Mass->Size = System::Drawing::Size(100, 26);
			this->input1Mass->TabIndex = 0;
			this->input1Mass->TextChanged += gcnew System::EventHandler(this, &MyForm::input1Mass_TextChanged);
			// 
			// input1MassUnit
			// 
			this->input1MassUnit->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->input1MassUnit->FormattingEnabled = true;
			this->input1MassUnit->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"g", L"kg", L"mg", L"ug", L"oz", L"lbs" });
			this->input1MassUnit->Location = System::Drawing::Point(132, 15);
			this->input1MassUnit->Name = L"input1MassUnit";
			this->input1MassUnit->Size = System::Drawing::Size(53, 28);
			this->input1MassUnit->TabIndex = 18;
			// 
			// input1
			// 
			this->input1->Location = System::Drawing::Point(202, 15);
			this->input1->Name = L"input1";
			this->input1->Size = System::Drawing::Size(100, 26);
			this->input1->TabIndex = 2;
			this->input1->TextChanged += gcnew System::EventHandler(this, &MyForm::input1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(313, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"+";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(308, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"->";
			// 
			// input2
			// 
			this->input2->Location = System::Drawing::Point(202, 60);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(100, 26);
			this->input2->TabIndex = 6;
			this->input2->TextChanged += gcnew System::EventHandler(this, &MyForm::input2_TextChanged);
			// 
			// input2MassUnit
			// 
			this->input2MassUnit->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->input2MassUnit->FormattingEnabled = true;
			this->input2MassUnit->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"g", L"kg", L"mg", L"ug", L"oz", L"lbs" });
			this->input2MassUnit->Location = System::Drawing::Point(132, 60);
			this->input2MassUnit->Name = L"input2MassUnit";
			this->input2MassUnit->Size = System::Drawing::Size(53, 28);
			this->input2MassUnit->TabIndex = 17;
			// 
			// input2Mass
			// 
			this->input2Mass->Location = System::Drawing::Point(15, 60);
			this->input2Mass->Name = L"input2Mass";
			this->input2Mass->Size = System::Drawing::Size(100, 26);
			this->input2Mass->TabIndex = 4;
			this->input2Mass->TextChanged += gcnew System::EventHandler(this, &MyForm::input2Mass_TextChanged);
			// 
			// output1
			// 
			this->output1->Location = System::Drawing::Point(202, 104);
			this->output1->Name = L"output1";
			this->output1->Size = System::Drawing::Size(100, 26);
			this->output1->TabIndex = 10;
			this->output1->TextChanged += gcnew System::EventHandler(this, &MyForm::output1_TextChanged);
			// 
			// output1MassUnit
			// 
			this->output1MassUnit->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->output1MassUnit->FormattingEnabled = true;
			this->output1MassUnit->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"g", L"kg", L"mg", L"ug", L"oz", L"lbs" });
			this->output1MassUnit->Location = System::Drawing::Point(132, 104);
			this->output1MassUnit->Name = L"output1MassUnit";
			this->output1MassUnit->Size = System::Drawing::Size(53, 28);
			this->output1MassUnit->TabIndex = 16;
			// 
			// output1Mass
			// 
			this->output1Mass->Location = System::Drawing::Point(15, 104);
			this->output1Mass->Name = L"output1Mass";
			this->output1Mass->Size = System::Drawing::Size(100, 26);
			this->output1Mass->TabIndex = 8;
			this->output1Mass->TextChanged += gcnew System::EventHandler(this, &MyForm::output1Mass_TextChanged);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(16, 12);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(100, 38);
			this->calculateButton->TabIndex = 11;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->result->Location = System::Drawing::Point(19, 224);
			this->result->MaximumSize = System::Drawing::Size(300, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(63, 20);
			this->result->TabIndex = 12;
			this->result->Text = L"[Result]";
			// 
			// selectedOperation
			// 
			this->selectedOperation->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->selectedOperation->FormattingEnabled = true;
			this->selectedOperation->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Product Produced", L"Excess Reactant (With Product)",
					L"Excess Reactant (No Product)", L"Required Reactant (For Product)", L"Required Reactant (For Reactant)"
			});
			this->selectedOperation->Location = System::Drawing::Point(23, 21);
			this->selectedOperation->Name = L"selectedOperation";
			this->selectedOperation->Size = System::Drawing::Size(345, 28);
			this->selectedOperation->TabIndex = 20;
			this->selectedOperation->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::selectedOperation_SelectedIndexChanged);
			// 
			// clearButton
			// 
			this->clearButton->BackColor = System::Drawing::Color::Red;
			this->clearButton->ForeColor = System::Drawing::Color::White;
			this->clearButton->Location = System::Drawing::Point(16, 52);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(100, 38);
			this->clearButton->TabIndex = 21;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// percentYieldCheckBox
			// 
			this->percentYieldCheckBox->AutoSize = true;
			this->percentYieldCheckBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->percentYieldCheckBox->Location = System::Drawing::Point(383, 137);
			this->percentYieldCheckBox->Name = L"percentYieldCheckBox";
			this->percentYieldCheckBox->Size = System::Drawing::Size(88, 24);
			this->percentYieldCheckBox->TabIndex = 22;
			this->percentYieldCheckBox->Text = L"% Yield";
			this->percentYieldCheckBox->UseVisualStyleBackColor = true;
			this->percentYieldCheckBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::percentYieldCheckBox_CheckedChanged);
			// 
			// percentYieldInput
			// 
			this->percentYieldInput->Location = System::Drawing::Point(474, 135);
			this->percentYieldInput->Name = L"percentYieldInput";
			this->percentYieldInput->Size = System::Drawing::Size(44, 26);
			this->percentYieldInput->TabIndex = 23;
			this->percentYieldInput->TextChanged += gcnew System::EventHandler(this, &MyForm::percentYieldInput_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->input2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->input1Mass);
			this->panel1->Controls->Add(this->output1Mass);
			this->panel1->Controls->Add(this->input1MassUnit);
			this->panel1->Controls->Add(this->output1MassUnit);
			this->panel1->Controls->Add(this->input1);
			this->panel1->Controls->Add(this->input2MassUnit);
			this->panel1->Controls->Add(this->input2Mass);
			this->panel1->Controls->Add(this->output1);
			this->panel1->Location = System::Drawing::Point(23, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(345, 145);
			this->panel1->TabIndex = 26;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->calculateButton);
			this->panel2->Controls->Add(this->clearButton);
			this->panel2->Location = System::Drawing::Point(378, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(140, 100);
			this->panel2->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(541, 445);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->percentYieldInput);
			this->Controls->Add(this->percentYieldCheckBox);
			this->Controls->Add(this->selectedOperation);
			this->Controls->Add(this->result);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Stoichiometry Calculator";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//
	// FUNCTIONS

	// enable all text boxes
	void enableAll() {
		input1->ReadOnly = false;
		input2->ReadOnly = false;
		output1->ReadOnly = false;

		input1Mass->ReadOnly = false;
		input2Mass->ReadOnly = false;
		output1Mass->ReadOnly = false;

		input1->Enabled = true;
		input2->Enabled = true;
		output1->Enabled = true;

		input1->BackColor = enabledColor;
		input2->BackColor = enabledColor;
		output1->BackColor = enabledColor;

		input1Mass->Enabled = true;
		input2Mass->Enabled = true;
		output1Mass->Enabled = true;

		input1Mass->BackColor = enabledColor;
		input2Mass->BackColor = enabledColor;
		output1Mass->BackColor = enabledColor;
	}

	// is mass input non-errorous (0=error, 1=disabled, 2=filled)
	int checkMassInput(TextBox^ tb) {
		int toReturn = 0;
		string tbText = msclr::interop::marshal_as<std::string>(tb->Text);
		if (tb->ReadOnly == false
			&& tb->Enabled == true
			&& msclr::interop::marshal_as<std::string>(tb->Text) != "."
			&& msclr::interop::marshal_as<std::string>(tb->Text).length() > 0) {
			toReturn = 2;
		}
		else if (tb->ReadOnly == true || tb->Enabled == false) {
			toReturn = 1;
		}
		return toReturn;
	}

	// is equation text box non-errorous (0=error, 1=disabled, 2=filled)
	int checkEquationInput(TextBox^ tb) {
		int toReturn = 0;
		if (tb->ReadOnly == false
			&& tb->Enabled == true
			&& calcMolarMass(splitString(msclr::interop::marshal_as<std::string>(tb->Text))) != -1.0
			&& msclr::interop::marshal_as<std::string>(tb->Text).length() > 0) {
			toReturn = 2;
		}
		else if (tb->ReadOnly == true || tb->Enabled == false) {
			toReturn = 1;
		}
		return toReturn;
	}

	//
	// MAIN ACTION

	// calculate button
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {

		// map of unit abbreviations and conversion factors
		map<string, double> unitMassMap = {
			{"g", 1.0},
			{"kg", 1000.0},
			{"mg", 0.001},
			{"ug", 0.000001},
			{"lbs", 453.592},
			{"oz", 28.3495}
		};

		// control variables
		string output = "";
		bool errorOut = false;

		// calculation variables
		double input1MassGrams;
		double input2MassGrams;
		double output1MassGrams;

		double input1MolarMass;
		double input2MolarMass;
		double output1MolarMass;

		int input1MolRatio;
		int input2MolRatio;
		int output1MolRatio;

		double input1Mol;
		double input2Mol;
		double output1Mol;

		double input1MassVar;
		double input2MassVar;
		double output1MassVar;

		double percentYield;

		//
		// CHECK TEXT BOXES FOR ERRORS

		// if input 1 is non-errorous
		if (checkEquationInput(input1) == 2) {
			input1MolarMass = calcMolarMass(splitString(msclr::interop::marshal_as<std::string>(input1->Text)));
			input1MolRatio = getMol(msclr::interop::marshal_as<std::string>(input1->Text));
		}
		else if (checkEquationInput(input1) == 0) {
			errorOut = true;
			output += "Error with input 1.\n";
		}

		// if input 1 mass non-errorous
		if (checkMassInput(input1Mass) == 2) {
			input1MassGrams = stod(msclr::interop::marshal_as<std::string>(input1Mass->Text)) * unitMassMap[msclr::interop::marshal_as<std::string>(input1MassUnit->Text)];
		}
		else if (checkMassInput(input1Mass) == 0) {
			errorOut = true;
			output += "Error with input 1 mass.\n";
		}

		// if input 2 is non-errorous
		if (checkEquationInput(input2) == 2) {
			input2MolarMass = calcMolarMass(splitString(msclr::interop::marshal_as<std::string>(input2->Text)));
			input2MolRatio = getMol(msclr::interop::marshal_as<std::string>(input2->Text));
		}
		else if(checkEquationInput(input2) == 0) {
			errorOut = true;
			output += "Error with input 2.\n";
		}

		// if input 2 mass non-errorous
		if (checkMassInput(input2Mass) == 2) {
			input2MassGrams = stod(msclr::interop::marshal_as<std::string>(input2Mass->Text)) * unitMassMap[msclr::interop::marshal_as<std::string>(input2MassUnit->Text)];
		}
		else if (checkMassInput(input2Mass) == 0) {
			errorOut = true;
			output += "Error with input 2 mass.\n";
		}

		// if output 1 is non-errorous
		if (checkEquationInput(output1) == 2) {
			output1MolarMass = calcMolarMass(splitString(msclr::interop::marshal_as<std::string>(output1->Text)));
			output1MolRatio = getMol(msclr::interop::marshal_as<std::string>(output1->Text));
		}
		else if (checkEquationInput(output1) == 0) {
			errorOut = true;
			output += "Error with output.\n";
		}

		// if output 1 mass is non-errorous
		if (checkMassInput(output1Mass) == 2) {
			output1MassGrams = stod(msclr::interop::marshal_as<std::string>(output1Mass->Text)) * unitMassMap[msclr::interop::marshal_as<std::string>(output1MassUnit->Text)];
		}
		else if (checkMassInput(output1Mass) == 0) {
			errorOut = true;
			output += "Error with output mass.\n";
		}

		// if there are no errors
		if (errorOut == false) {

			// calculate excess reactant with product
			if (selectedOperation->Text == "Excess Reactant (With Product)") {

				// calc mols of input
				input1Mol = input1MassGrams / input1MolarMass;
				input2Mol = input2MassGrams / input2MolarMass;

				// determine excess and output
				if (input1Mol - (input2Mol * (input1MolRatio / static_cast<double>(input2MolRatio))) > 0) {

					// disp limiting
					output = msclr::interop::marshal_as<std::string>(input2->Text);
					output += " is the limiting reactant.\n";

					// disp remaining
					output += to_string(input1Mol - (input2Mol * (static_cast<double>(input1MolRatio) / input2MolRatio)));
					output += "mol (" + to_string((input1Mol - (input2Mol * (input1MolRatio / static_cast<double>(input2MolRatio)))) * input1MolarMass);
					output += " g) of" + msclr::interop::marshal_as<std::string>(input1->Text) + " remaining.\n";

					// disp produced
					output += to_string(input2Mol * (static_cast<double>(output1MolRatio) / input2MolRatio));
					output += " mol (" + to_string((input2Mol * (static_cast<double>(output1MolRatio) / input2MolRatio)) * output1MolarMass);
					output += " g) " + msclr::interop::marshal_as<std::string>(output1->Text) + " produced.\n";

					// convert value by unt and add value to textbox
					output1Mass->Text = gcnew String(to_string(((input2Mol * (static_cast<double>(output1MolRatio) / input2MolRatio)) * output1MolarMass) / unitMassMap[msclr::interop::marshal_as<std::string>(output1MassUnit->Text)]).data());
				}
				else if (input1Mol - (input2Mol * (input1MolRatio / static_cast<double>(input2MolRatio))) < 0) {

					// disp limiting
					output = msclr::interop::marshal_as<std::string>(input1->Text);
					output += " is the limiting reactant.\n";

					// disp remaining reactant
					output += to_string(input2Mol - (input1Mol * (static_cast<double>(input2MolRatio) / input1MolRatio)));
					output += " mol (" + to_string((input2Mol - (input1Mol * (input2MolRatio / static_cast<double>(input1MolRatio)))) * input2MolarMass);
					output += " g) of" + msclr::interop::marshal_as<std::string>(input2->Text) + " remaining.\n";

					// disp produced
					output += to_string(input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio));
					output += " mol (" + to_string((input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio)) * output1MolarMass);
					output += " g) " + msclr::interop::marshal_as<std::string>(output1->Text) + " produced.\n";

					// convert value and add to text box
					output1Mass->Text = gcnew String(to_string(((input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio)) * output1MolarMass) / unitMassMap[msclr::interop::marshal_as<std::string>(output1MassUnit->Text)]).data());
				}
				else {

					// disp no limiting reactant
					output = "There is no limiting reactant.\n";

					// disp output produced
					output += to_string(input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio));
					output += " mol (" + to_string((input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio)) * output1MolarMass);
					output += " g) " + msclr::interop::marshal_as<std::string>(output1->Text) + " produced.\n";

					// calculate value and add to text box
					output1Mass->Text = gcnew String(to_string(((input1Mol * (static_cast<double>(output1MolRatio) / input1MolRatio)) * output1MolarMass) / unitMassMap[msclr::interop::marshal_as<std::string>(output1MassUnit->Text)]).data());
				}
			}
			else if (selectedOperation->Text == "Product Produced") {

				// get mols
				input1Mol = input1MassGrams / input1MolarMass;
				output1Mol = input1Mol * (output1MolRatio / static_cast<double>(input1MolRatio));
				
				// calculate mass of output
				output1MassGrams = output1Mol * output1MolarMass;
				output1MassVar = output1MassGrams / unitMassMap[msclr::interop::marshal_as<std::string>(output1MassUnit->Text)];

				// add results to output
				output += to_string(output1Mol) + " mol (";
				output += to_string(output1MassGrams) + " g) created.\n";

				// display output in text box
				output1Mass->Text = gcnew String(to_string(output1MassVar).data());
			}
			else if (selectedOperation->Text == "Excess Reactant (No Product)") {

				// calc mols of input
				input1Mol = input1MassGrams / input1MolarMass;
				input2Mol = input2MassGrams / input2MolarMass;

				// determine excess and output
				if (input1Mol - (input2Mol * (input1MolRatio / static_cast<double>(input2MolRatio))) > 0) {

					// disp limiting
					output = msclr::interop::marshal_as<std::string>(input2->Text);
					output += " is the limiting reactant.\n";

					// disp remaining
					output += to_string(input1Mol - (input2Mol * (static_cast<double>(input1MolRatio) / input2MolRatio)));
					output += "mol (" + to_string((input1Mol - (input2Mol * (static_cast<double>(input1MolRatio) / input2MolRatio))) * input1MolarMass);
					output += " g) of" + msclr::interop::marshal_as<std::string>(input1->Text) + " remaining.\n";

				}
				else if (input1Mol - (input2Mol * (input1MolRatio / static_cast<double>(input2MolRatio))) < 0) {

					// disp limiting
					output = msclr::interop::marshal_as<std::string>(input1->Text);
					output += " is the limiting reactant.\n";

					// disp remaining reactant
					output += to_string(input2Mol - (input1Mol * (static_cast<double>(input2MolRatio) / input1MolRatio)));
					output += " mol (" + to_string((input2Mol - (input1Mol * (static_cast<double>(input2MolRatio) / input1MolRatio))) * input2MolarMass);
					output += " g) of" + msclr::interop::marshal_as<std::string>(input2->Text) + " remaining.\n";
				}
				else {

					// disp no limiting reactant
					output = "There is no limiting reactant.\n";
				}
			}
			else if (selectedOperation->Text == "Required Reactant (For Product)") {
				
				// calc mols of output
				output1Mol = output1MassGrams / output1MolarMass;

				// calc results
				input1Mol = output1Mol * (input1MolRatio / static_cast<double>(output1MolRatio));
				input1MassGrams = input1Mol * input1MolarMass;
				input1MassVar = input1MassGrams / unitMassMap[msclr::interop::marshal_as<std::string>(input1MassUnit->Text)];

				// output results
				output += to_string(input1Mol) + " mol (";
				output += to_string(input1MassGrams) + " g) of ";
				output += msclr::interop::marshal_as<std::string>(input1->Text) + " needed to react with ";
				output += to_string(output1Mol) + " mol (";
				output += to_string(output1MassGrams) + " g) of ";
				output += msclr::interop::marshal_as<std::string>(output1->Text) + ".\n";

				// add results to text box
				input1Mass->Text = gcnew String(to_string(input1MassVar).data());
			}
			else if (selectedOperation->Text == "Required Reactant (For Reactant)") {
				
				// calc mols of output
				input1Mol = input1MassGrams / input1MolarMass;

				// calc results
				input2Mol = input1Mol * (input2MolRatio / static_cast<double>(input1MolRatio));
				input2MassGrams = input2Mol * input2MolarMass;
				input2MassVar = input2MassGrams / unitMassMap[msclr::interop::marshal_as<std::string>(input2MassUnit->Text)];

				// add results to output
				output += to_string(input2Mol) + " mol (";
				output += to_string(input2MassGrams) + " g) of ";
				output += msclr::interop::marshal_as<std::string>(input2->Text) + " needed to react with ";
				output += to_string(input1Mol) + " mol (";
				output += to_string(input1MassGrams) + " g) of ";
				output += msclr::interop::marshal_as<std::string>(input1->Text) + ".\n";

				// disp results in text box
				input2Mass->Text = gcnew String(to_string(input2MassVar).data());
			}
			// percent yield
			if (percentYieldCheckBox->Checked == true) {
				if (msclr::interop::marshal_as<std::string>(output1Mass->Text) != ""
					&& msclr::interop::marshal_as<std::string>(percentYieldInput->Text) != "") {

					percentYield = stod(msclr::interop::marshal_as<std::string>(percentYieldInput->Text));

					output += "The actual yield is " + to_string(output1Mol * percentYield / 100.0);
					output += " mol (" + to_string(output1MassGrams * percentYield / 100.0);
					output += " g).\n";
				}
				else {
					output += "Error with percent yield\n";
				}
			}
		}
		// write output to result text
		result->Text = gcnew String(output.data());
	}

	//
	// OTHER FORM COMPONENTS

	// form initilization
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		// select grams for all units
		input1MassUnit->SelectedIndex = 0;
		input2MassUnit->SelectedIndex = 0;
		output1MassUnit->SelectedIndex = 0;

		// select product calculation as the default operation
		selectedOperation->SelectedIndex = 0;
		output1Mass->ReadOnly = true;

		percentYieldInput->Enabled = false;
	}

	Color disabledColor = System::Drawing::Color::Red;
	Color enabledColor = System::Drawing::Color::Green;
	Color readOnlyColor = System::Drawing::Color::Blue;

	// operation selection drop down
	private: System::Void selectedOperation_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// set ReadOnly to false and Enabled to true for all text boxes
		enableAll();
		// if "Product Produced" selected, disable appropriate boxes
		if (selectedOperation->Text == "Product Produced") {
			input2->Enabled = false;
			input2->BackColor = disabledColor;
			input2Mass->Enabled = false;
			input2Mass->BackColor = disabledColor;
			output1Mass->ReadOnly = true;
			output1Mass->BackColor = readOnlyColor;

			input2->Text = "";
			input2Mass->Text = "";
			output1Mass->Text = "";
		}
		// if "Excess Reactant (With Product)" selected, disable appropriate boxes
		if (selectedOperation->Text == "Excess Reactant (With Product)") {
			output1Mass->ReadOnly = true;
			output1Mass->BackColor = readOnlyColor;

			output1Mass->Text = "";
		}
		// if "Excess Reactnt (No Product)" selected, disable appropriate boxes
		if (selectedOperation->Text == "Excess Reactant (No Product)") {
			output1->Enabled = false;
			output1->BackColor = disabledColor;
			output1Mass->Enabled = false;
			output1Mass->BackColor = disabledColor;

			output1->Text = "";
			output1Mass->Text = "";
		}
		// if "Required Reactant (For Product)" selected, disable appropriate boxes
		if (selectedOperation->Text == "Required Reactant (For Product)") {
			input1Mass->ReadOnly = true;
			input1Mass->BackColor = readOnlyColor;
			input2->Enabled = false;
			input2->BackColor = disabledColor;
			input2Mass->Enabled = false;
			input2Mass->BackColor = disabledColor;

			input1Mass->Text = "";
			input2->Text = "";
			input2Mass->Text = "";
		}
		// if "Required Reactant (For Reactant)" selected, disable appropriate boxes
		if (selectedOperation->Text == "Required Reactant (For Reactant)") {
			input2Mass->ReadOnly = true;
			input2Mass->BackColor = readOnlyColor;
			output1->Enabled = false;
			output1->BackColor = disabledColor;
			output1Mass->Enabled = false;
			output1Mass->BackColor = disabledColor;

			input2Mass->Text = "";
			output1->Text = "";
			output1Mass->Text = "";
		}
	}

	// clear button
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		input1->Text = "";
		input2->Text = "";
		output1->Text = "";

		input1Mass->Text = "";
		input2Mass->Text = "";
		output1Mass->Text = "";

		input1MassUnit->SelectedIndex = 0;
		input2MassUnit->SelectedIndex = 0;
		output1MassUnit->SelectedIndex = 0;

		result->Text = "";
	}

	// percent yield check box
	private: System::Void percentYieldCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (percentYieldCheckBox->Checked == true) {
			percentYieldInput->Enabled = true;
		}
		else {
			percentYieldInput->Text = "";
			percentYieldInput->Enabled = false;
		}
	}

	// percent yield text box
	private: System::Void percentYieldInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		disallowNonDigit(percentYieldInput);
	}

	//
	// TEXT BOX CONTROL FUNCTIONS

	// don't allow non alphnumeric characters to be typed in a text box
	void disallowNonAlnum(TextBox^ tb) {
		// take the new text in the text box
		string holdString = msclr::interop::marshal_as<std::string>(tb->Text);

		// if there is more than 1 character in holdString
		if (holdString.length() > 1) {
			// for each char in that string
			for (string::iterator i = holdString.begin(); i != holdString.end(); i++)
			{
				// if it's not alphanumeric
				if (!isalnum(holdString.at(i - holdString.begin())))
				{
					// erease it
					holdString.erase(i);
					// if one is erased and i is at the end, readjust iterator
					if (i == holdString.end())
						i--;
				}
			}
		}
		// otherwise, remove the one character if it isn't alphanumeric
		else if (!isalnum(holdString[0])) {
			holdString = "";
		}

		// set text to adjusted text
		tb->Text = gcnew String(holdString.data());
	}

	// don't allow chars other than numbers and '.'
	void disallowNonDigit(TextBox^ tb) {
		// take the new text in the text box
		string holdString = msclr::interop::marshal_as<std::string>(tb->Text);

		// if there is more than 1 character in holdString
		if (holdString.length() > 1) {
			// for each char in that string
			for (string::iterator i = holdString.begin(); i != holdString.end(); i++)
			{
				// if it's not alphanumeric
				if (!isdigit(holdString.at(i - holdString.begin()))
					&& holdString.at(i - holdString.begin()) != '.') {
					// erease it
					holdString.erase(i);
					// if one is erased and i is at the end, readjust iterator
					if (i == holdString.end())
						i--;
				}
			}
			// only allow one decimal
			if (count(holdString.begin(), holdString.end(), '.') > 1) {
				holdString.erase(tb->SelectionStart-1, 1);
			}
		}
		// otherwise, remove the one character if it isn't alphanumeric
		else if (!isdigit(holdString[0]) && holdString[0] != '.') {
			holdString = "";
		}

		// set text to adjusted text
		tb->Text = gcnew String(holdString.data());
	}

	//
	// MASS TEXT BOXES

	// input 1 mass text box
	private: System::Void input1Mass_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		disallowNonDigit(input1Mass);
	}

	// input 2 mass text box
	private: System::Void input2Mass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		disallowNonDigit(input2Mass);
	}

	// output 1 mass text box
	private: System::Void output1Mass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		disallowNonDigit(output1Mass);
	}

	//
	// EQUATION TEXT BOXES

	// input 1 text box
	private: System::Void input1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		disallowNonAlnum(input1);
	}

	// input 2 text box
	private: System::Void input2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		disallowNonAlnum(input2);
	}

	// output 1 text box
	private: System::Void output1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		disallowNonAlnum(output1);
	}

};

}
