//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "bike.h"
#include "Bookingpg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
	TForm6 *form6 = new TForm6(this);
	form6->Show();
}
//---------------------------------------------------------------------------

