object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'QR_Test'
  ClientHeight = 451
  ClientWidth = 258
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel_leet: TPanel
    Left = 0
    Top = 0
    Width = 258
    Height = 451
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 248
    ExplicitHeight = 382
    object Panel_1_Top: TPanel
      Left = 1
      Top = 1
      Width = 256
      Height = 256
      Align = alTop
      TabOrder = 0
      ExplicitWidth = 270
      object PaintBox1: TPaintBox
        Left = 1
        Top = 1
        Width = 254
        Height = 254
        Align = alClient
        OnPaint = PaintBox1Paint
        ExplicitLeft = 72
        ExplicitTop = 72
        ExplicitWidth = 105
        ExplicitHeight = 105
      end
    end
    object Memo1: TMemo
      Left = 1
      Top = 257
      Width = 256
      Height = 151
      Align = alClient
      Lines.Strings = (
        #20108#32500#30721#28436#31034#31243#24207#8594#20013#25991
        'Fran'#231'ais'#54620#44397#50612'\r\nCopyright '#169' Victor '
        'Chen\r\nhttp://www.cppfans.com/')
      TabOrder = 1
      ExplicitTop = 263
      ExplicitWidth = 185
      ExplicitHeight = 89
    end
    object Panel_1_Bottom: TPanel
      Left = 1
      Top = 408
      Width = 256
      Height = 42
      Align = alBottom
      TabOrder = 2
      object BTN_Draw: TSpeedButton
        Left = 1
        Top = 1
        Width = 254
        Height = 40
        Align = alClient
        Caption = 'Generate QR'
        OnClick = BTN_DrawClick
        ExplicitLeft = 24
        ExplicitTop = 6
        ExplicitWidth = 129
        ExplicitHeight = 22
      end
    end
  end
end
