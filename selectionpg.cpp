//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "selectionpg.h"
#include "bike.h"
#include "car.h"
#include "jeep.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	TForm5 *form5 = new TForm5(this);
	form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	TForm3 *form3 = new TForm3(this);
	form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	TForm4 *form4 = new TForm4(this);
	form4->Show();
}
//---------------------------------------------------------------------------

