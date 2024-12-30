//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Wlcmf.h"
#include "selectionpg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
   void __fastcall TForm2::Button1Click(TObject *Sender)
{
 // Create an instance of the next form within the scope of this function
	TForm1 *form1 = new TForm1(this);
		form1->Show(); // Show the next form

}

