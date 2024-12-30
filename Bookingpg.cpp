//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <map>
#include "Bookingpg.h"
#include "checkoutpg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

// Map to store prices for each vehicle model
std::map<String, double> vehiclePrices = {
	{"Yamaha YBR-125", 4500.0},
	{"Yamaha YDR-125G", 4500.0},
	{"Honda CB-150F", 4500.0},
	{"Toyota Corolla", 8000.0},
	{"Honda Civic", 12000.0},
	{"KIA Sportage", 12000.0},
	{"Jeep M151", 5000.0},
	{"Jeep Wrangler", 12000.0},
	{"Jeep Gladiator", 12000.0}
};
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Car(TObject* Sender)
{
	// Implementation of the Car method
	// Add your code logic here
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormCreate(TObject *Sender)
{
	ComboBox1->Items->Add("Bike");
	ComboBox1->Items->Add("Car");
	ComboBox1->Items->Add("Jeep");

}
//---------------------------------------------------------------------------
void __fastcall TForm6::ComboBox1Change(TObject *Sender)
{
	ComboBox2->Clear(); // Clear the sub-options ComboBox for repopulation

	// Populate sub-options based on the selected vehicle type
	if (ComboBox1->Text == "Bike")
	{
		ComboBox2->Items->Add("Yamaha YBR-125");
		ComboBox2->Items->Add("Yamaha YDR-125G");
		ComboBox2->Items->Add("Honda CB-150F");
	}

	else if (ComboBox1->Text == "Car")
	{
		ComboBox2->Items->Add("Toyota Corrolla");
		ComboBox2->Items->Add("Honda Civic");
		ComboBox2->Items->Add("KIA Sportage");
	}

	else if (ComboBox1->Text == "Jeep")
	{
		ComboBox2->Items->Add("Jeep M151");
		ComboBox2->Items->Add("Jeep Wrangler");
		ComboBox2->Items->Add("Jeep Gladiator");

	}
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Button1Click(TObject *Sender)
{
	 if (Edit1->Text.IsEmpty())
	  {
		ShowMessage("Please enter a valid name.");
		return;
	  }

	// Validate phone number
	AnsiString phoneNumber = Edit2->Text.Trim(); // Remove leading and trailing spaces
	 // Validate CNIC number
	AnsiString cnic = Edit3->Text.Trim(); // Remove leading and trailing spaces

	 // Validate rental days
	AnsiString rentalDaysStr = Edit4->Text.Trim(); // Remove leading and trailing spaces

	// Check if the phone number is numeric and of the correct length
	if (phoneNumber.Length() != 11 || !IsNumeric(phoneNumber))
	{
		ShowMessage("Please enter a valid 11-digit phone number without any special characters.");
		return;
	}

	if (cnic.Length() != 13 || !IsNumeric(cnic))
    {
        ShowMessage("Please enter a valid 13-digit CNIC number without any special characters.");
		return;
	}

        try
    {
        int rentalDays = StrToInt(rentalDaysStr);
		if (rentalDays < 1 || rentalDays > 30)
		{
            ShowMessage("Rental days should be a numeric value between 1 and 30.");
            return;
        }
	}
    catch (...)
    {
		ShowMessage("Please enter a valid numeric value for rental days.");
        return;
	}

        // Check if both the vehicle type and model are selected
    if (!AreComboBoxesSelected())
	{
		ShowMessage("Please select both a vehicle type and a model.");
		return;
	}

		double price = vehiclePrices[ComboBox2->Text];
		int rentalDays = StrToInt(Edit4->Text);
		double totalCost = price * rentalDays;

	Form7->Label1->Caption = Edit1->Text;
	Form7->Label2->Caption = Edit2->Text;
	Form7->Label3->Caption = Edit3->Text;
	Form7->Label4->Caption = Edit4->Text;
	Form7->Label5->Caption = Edit5->Text;
	Form7->Label14->Caption = ComboBox1->Text;
	Form7->Label15->Caption = ComboBox2->Text;
	Form7->Label16->Caption = totalCost;
   //---------------------------------------------------------------------------

   String filename = "User Info.txt";
    TStringList *data = new TStringList;

    // Get data from Edit1
	String edit1Data = Edit1->Text;
	String edit2Data = Edit2->Text;
	String edit3Data = Edit3->Text;
	String edit5Data = Edit5->Text;
	String edit4Data = Edit4->Text;
	// Get the selected item from the ComboBox
	String selectedData = ComboBox1->Text;
	String selectedData1 = ComboBox2->Text;
	// Concatenate the default text "Car" with the input text
	String fullText1 = "Name: " + edit1Data;
	String fullText2 = "Phone Number: " + edit2Data;
	String fullText3 = "CNIC: " + edit3Data;
	String fullText4 = "Address: " + edit5Data;
	String fullText5 = "Rental Days: " + edit4Data;
	String fullText6 = "Vehicle: " + selectedData;
	String fullText7 = "Model: " + selectedData1;



	// Add data to the string list
	data->Add(fullText1);
	data->Add(fullText2);
	data->Add(fullText3);
	data->Add(fullText4);
	data->Add(fullText5);
	data->Add(fullText6);
	data->Add(fullText7);


	// Get the current date and time
    TDateTime currentDateTime = Now();
	String dateTimeString = FormatDateTime("dd/mm/yyyy hh:nn:ss", currentDateTime);
	String fullText8 ="Date|Time of Booking:" + dateTimeString;
	data->Add(fullText8);

	// Save data to a file
	try
	{
		data->SaveToFile(filename);
	}
	catch (Exception &e)
	{
		ShowMessage("Error saving data to file: " + e.Message);
	}

	delete data;



   //---------------------------------------------------------------------------




	// Add validation logic for other fields here...

	// If all validations pass, show Form7 and hide the current form
	Form7->Show(); // Show Form7
   // Hide the current form

}

bool TForm6::IsNumeric(const AnsiString& str)
{
	for (int i = 1; i <= str.Length(); i++)
	{
        if (!isdigit(str[i]))
        {
            return false; // If any character is not a digit, return false
        }
    }
	return true; // All characters are digits

}

bool TForm6::AreComboBoxesSelected()
{
    // Check if both ComboBox1 (vehicle type) and ComboBox2 (model) have selections
    if (ComboBox1->Text == "" || ComboBox2->Text == "")
    {
        return false;
	}
	return true;
}

//---------------------------------------------------------------------------


