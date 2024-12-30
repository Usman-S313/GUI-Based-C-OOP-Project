//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "creditcardcpp.h"
#include "Receipt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
bool IsNumericString(String str)
{
    for (int i = 1; i <= str.Length(); i++)
    {
		if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}

void __fastcall TForm9::Button1Click(TObject *Sender)
{
	// Get the values entered by the user in the TEdit controls
	String cardNumber = Edit2->Text.Trim();
    String expiryMonth = Edit3->Text.Trim();
	String expiryYear = Edit4->Text.Trim();
	String cvc = Edit5->Text.Trim();

    // Validate the card number
    if (cardNumber.IsEmpty()) {
        ShowMessage("Please enter a valid card number.");
        return;
    }


    // Validate the expiry year
    if (expiryYear.Length() != 2 || !IsNumericString(expiryYear)) {
        ShowMessage("Please enter a valid 2-digit expiry year.");
        return;
    }

    // Obtain the CVC from the appropriate control (e.g., EditCVC)
 // Trim any leading or trailing spaces

    // Validate the CVC
    if (cvc.Length() != 3 || !IsNumericString(cvc)) {
        ShowMessage("Please enter a valid 3-digit CVC.");
        return;
	}

   //---------------------------------------------------------------------------



	Form8->Show();

}
//---------------------------------------------------------------------------
