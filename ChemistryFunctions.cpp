#include <list>
#include <string>
#include <map>

using namespace std;

// split string at capital letters
list<string> splitString(string inputString) {

	// initilize variables
	list<string> output;
	string holder = "";

	// for every char in the input
	for (char charIteration : inputString)
	{
		// if the char is uppercase
		if (isupper(charIteration))
		{
			// if holder has letters in it
			if (holder.length() != 0)
			{
				// add holder to output and reset holder
				output.push_back(holder);
				holder = "";
			}
		}
		// add the char to holder
		holder += charIteration;
	}
	// add holder to output
	output.push_back(holder);

	// return output
	return output;
}

// determine molar mass from string
double calcMolarMass(list<string> inputList)
{
	// map of symbols to molar masses
	map<string, double> molarMassDict =
	{
		{ "H", 1.008},
		{ "He", 4.0026},
		{ "Li", 6.94},
		{ "Be", 9.0122},
		{ "B", 10.81},
		{ "C", 12.011},
		{ "N", 14.007},
		{ "O", 15.999},
		{ "F", 18.998},
		{ "Ne", 20.180},
		{ "Na", 22.990},
		{ "Mg", 24.305},
		{ "Al", 26.982},
		{ "Si", 28.085},
		{ "P", 30.974},
		{ "S", 32.06},
		{ "Cl", 35.45},
		{ "Ar", 39.948},
		{ "K", 39.098},
		{ "Ca", 40.078},
		{ "Sc", 44.956},
		{ "Ti", 47.867},
		{ "V", 50.942},
		{ "Cr", 51.996},
		{ "Mn", 54.938},
		{ "Fe", 55.845},
		{ "Co", 58.933},
		{ "Ni", 58.693},
		{ "Cu", 63.546},
		{ "Zn", 65.38},
		{ "Ga", 69.723},
		{ "Ge", 72.630},
		{ "As", 74.922},
		{ "Se", 78.971},
		{ "Br", 79.904},
		{ "Kr", 83.798},
		{ "Rb", 85.468},
		{ "Sr", 87.62},
		{ "Y", 88.906},
		{ "Zr", 91.224},
		{ "Nb", 92.906},
		{ "Mo", 95.95},
		{ "Tc", 98.0},
		{ "Ru", 101.07},
		{ "Rh", 102.91},
		{ "Pd", 106.42},
		{ "Ag", 107.87},
		{ "Cd", 112.41},
		{ "In", 114.82},
		{ "Sn", 118.71},
		{ "Sb", 121.76},
		{ "Te", 127.60},
		{ "I", 126.90},
		{ "Xe", 131.29},
		{ "Cs", 132.91},
		{ "Ba", 137.33},
		{ "La", 138.91},
		{ "Ce", 140.12},
		{ "Pr", 140.91},
		{ "Nd", 144.24},
		{ "Pm", 145.0},
		{ "Sm", 150.36},
		{ "Eu", 151.96},
		{ "Gd", 157.25},
		{ "Tb", 158.93},
		{ "Dy", 162.50},
		{ "Ho", 164.93},
		{ "Er", 167.26},
		{ "Tm", 168.93},
		{ "Yb", 173.05},
		{ "Lu", 174.97},
		{ "Ac", 227.0},
		{ "Th", 232.04},
		{ "Pa", 231.04},
		{ "U", 238.03},
		{ "Np", 237.0},
		{ "Pu", 244.0},
		{ "Am", 243.0},
		{ "Cm", 247.0},
		{ "Bk", 247.0},
		{ "Cf", 251.0},
		{ "Es", 252.0},
		{ "Fm", 257.0},
		{ "Md", 258.0},
		{ "No", 259.0},
		{ "Lr", 266.0},
		{ "Hf", 178.49},
		{ "Ta", 180.95},
		{ "W", 183.84},
		{ "Re", 186.21},
		{ "Os", 190.23},
		{ "Ir", 192.22},
		{ "Pt", 195.08},
		{ "Au", 196.97},
		{ "Hg", 200.59},
		{ "Tl", 204.38},
		{ "Pb", 207.2},
		{ "Bi", 208.98},
		{ "Po", 209.0},
		{ "At", 210.0},
		{ "Rn", 222.0},
		{ "Rf", 267.0},
		{ "Db", 268.0},
		{ "Sg", 269.0},
		{ "Bh", 270.0},
		{ "Hs", 277.0},
		{ "Mt", 278.0},
		{ "Ds", 281.0},
		{ "Rg", 282.0},
		{ "Cn", 285.0},
		{ "Nh", 286.0},
		{ "Fl", 289.0},
		{ "Mc", 290.0},
		{ "Lv", 293.0},
		{ "Ts", 294.0},
		{ "Og", 294.0},
	};

	// default molar mass to 0
	double molarMass = 0;

	// for each string in the input
	for (string str : inputList)
	{
		// create empty strings for letters and numbers
		string letters = "";
		string numbers = "";
		bool cont = true;

		// for each char in each string
		for (char charIter : str)
		{
			// if the char is a digit
			if (isdigit(charIter))
			{
				// add it to numbers
				numbers += charIter;
			}
			else
			{
				// otherwise, add it to characters
				letters += charIter;
			}
		}
		// if no error has occurred
		if (cont == true && (molarMassDict.count(letters) || letters == "")) {
			// if numbers contains characters
			if (numbers.length() != 0)
			{
				// calc molar massbased on letters and numbers
				molarMass += molarMassDict[letters] * stoi(numbers);
			}
			else
			{
				// otherwise, calc molar mass based on letters
				molarMass += molarMassDict[letters];
			}
		}
		// if there is an error
		else {
			// don't continue and set molar mass to -1
			cont = false;
			molarMass = -1.0;
		}
	}
	// return molar mass
	return molarMass;
}

// combine calcMolarMass and splitString
double getMolarMass(string inputString) {
	return calcMolarMass(splitString(inputString));
}

// get int from front of string
int getMol(string inputString)
{
	// intilize vars
	string output = "";
	bool endLoop = false;
	int toReturn = 1;

	// for each char in the string
	for (char charIter : inputString)
	{
		// if the character is a letter, set endLoop to true
		if (isalpha(charIter) == true)
		{
			endLoop = true;
		}
		// while the loop hasn't ended, add char to ouput
		if (endLoop == false)
		{
			output += charIter;
		}
	}
	// if output has chars
	if (output.length() != 0)
	{
		// return the chars converted to an int
		toReturn = stoi(output);
	}
	// otherwise, it will return 1
	return toReturn;
}