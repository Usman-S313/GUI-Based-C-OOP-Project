//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "checkoutpg.h"
#include "Bookingpg.h"
#include "Receipt.h"
#include "creditcardcpp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;



//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
{


Form8->Show();

}
//---------------------------------------------------------------------------
  void __fastcall TForm7::Button2Click(TObject *Sender)
{
Form9->Show();

}




