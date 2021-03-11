//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "zint.h"
#include "MainUI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
BmpQR = new Graphics::TBitmap;
BmpQR->PixelFormat = pf24bit;
}

//---------------------------------------------------------------------------
__fastcall TMainForm::~TMainForm()
{
  delete BmpQR;
}

//---------------------------------------------------------------------------
void __fastcall TMainForm::BTN_DrawClick(TObject *Sender)
{
  UTF8String source = Memo1->Text;
  zint_symbol *my_symbol = ZBarcode_Create();
  my_symbol->input_mode = DATA_MODE; // UNICODE_MODE
  my_symbol->symbology = BARCODE_QRCODE;
  ZBarcode_Encode_and_Buffer(my_symbol, (unsigned char *)source.c_str(), source.Length(), 0);

  BmpQR->Width = my_symbol->bitmap_width;
  BmpQR->Height = my_symbol->bitmap_height;
  int iRowBits = BmpQR->Width * 3; // 24 bits
  int iRowCount = BmpQR->Height;
  char *pBmpLineData = my_symbol->bitmap;
  for(int row=0; row<iRowCount; row++)
   {
     memcpy(BmpQR->ScanLine[row], pBmpLineData, iRowBits);
     pBmpLineData += iRowBits;
   }

  ZBarcode_Delete(my_symbol);

  // BmpQR->SaveToFile(L"d:\\abcd.bmp"); // 生成的位图可以保存为 bmp 文件
  PaintBox1->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::PaintBox1Paint(TObject *Sender)
{
int iWidth = PaintBox1->Width < PaintBox1->Height ? PaintBox1->Width : PaintBox1->Height;
  int iHeight = iWidth;
  int iLeft = (PaintBox1->Width - iWidth) / 2;
  int iTop = (PaintBox1->Height - iHeight) / 2;
  PaintBox1->Canvas->StretchDraw(TRect(iLeft,iTop,iLeft+iWidth,iTop+iHeight),BmpQR);
}
//---------------------------------------------------------------------------
