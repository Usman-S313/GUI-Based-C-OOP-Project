//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "jeep.h"
#include "Bookingpg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	TForm6 *form6 = new TForm6(this);
	form6->Show();
}
//---------------------------------------------------------------------------

