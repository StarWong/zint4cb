//---------------------------------------------------------------------------

#ifndef MainUIH
#define MainUIH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel_leet;
	TPanel *Panel_1_Top;
	TPanel *Panel_1_Bottom;
	TMemo *Memo1;
	TPaintBox *PaintBox1;
	TSpeedButton *BTN_Draw;
	void __fastcall BTN_DrawClick(TObject *Sender);
	void __fastcall PaintBox1Paint(TObject *Sender);
private:
    Graphics::TBitmap *BmpQR;
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
	__fastcall ~TMainForm();
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
