object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Calculator'
  ClientHeight = 378
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
  object Edit1: TEdit
    Left = 96
    Top = 8
    Width = 265
    Height = 45
    TabOrder = 0
  end
  object Button1: TButton
    Left = 96
    Top = 80
    Width = 105
    Height = 57
    Caption = 'C'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 80
    Width = 105
    Height = 57
    Caption = '='
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 96
    Top = 160
    Width = 105
    Height = 57
    Caption = '+'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 256
    Top = 160
    Width = 105
    Height = 57
    Caption = '-'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 96
    Top = 240
    Width = 105
    Height = 57
    Caption = '*'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 256
    Top = 240
    Width = 105
    Height = 57
    Caption = '/'
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 96
    Top = 328
    Width = 265
    Height = 41
    Caption = 'EXIT'
    TabOrder = 7
    OnClick = Button7Click
  end
end