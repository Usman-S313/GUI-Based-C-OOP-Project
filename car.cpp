//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "car.h"
#include "Bookingpg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	TForm6 *form6 = new TForm6(this);
	form6->Show();
}
//---------------------------------------------------------------------------
