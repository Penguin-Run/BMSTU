object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Notes'
  ClientHeight = 242
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 80
    Top = 32
    Width = 49
    Height = 13
    Caption = 'Notes app'
  end
  object Button1: TButton
    Left = 256
    Top = 27
    Width = 185
    Height = 25
    Caption = 'Enter/add new notes'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 80
    Width = 185
    Height = 25
    Caption = 'Search by surname'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 256
    Top = 136
    Width = 185
    Height = 25
    Caption = 'Shut down'
    TabOrder = 2
    OnClick = Button3Click
  end
end
