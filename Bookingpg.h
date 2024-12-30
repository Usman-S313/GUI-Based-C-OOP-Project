//---------------------------------------------------------------------------

#ifndef BookingpgH
#define BookingpgH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <System.SysUtils.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label5;
	TEdit *Edit4;
	TButton *Button1;
	TLabel *Label6;
	TLabel *Label7;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TLabel *Label4;
	TEdit *Edit5;

	void __fastcall Car(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
 bool IsNumeric(const AnsiString& str);
 bool AreComboBoxesSelected();
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
	void __fastcall SubmitButtonClick(TObject *Sender);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
