object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Enter/add new notes'
  ClientHeight = 278
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
    Left = 64
    Top = 37
    Width = 42
    Height = 13
    Caption = 'Surname'
  end
  object Label2: TLabel
    Left = 64
    Top = 85
    Width = 27
    Height = 13
    Caption = 'Name'
  end
  object Label3: TLabel
    Left = 64
    Top = 128
    Width = 69
    Height = 13
    Caption = 'Phone number'
  end
  object Label4: TLabel
    Left = 64
    Top = 176
    Width = 39
    Height = 13
    Caption = 'Address'
  end
  object Edit1: TEdit
    Left = 256
    Top = 34
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 256
    Top = 82
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 256
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 256
    Top = 173
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 64
    Top = 240
    Width = 113
    Height = 25
    Caption = 'Write'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 240
    Width = 121
    Height = 25
    Caption = 'Close'
    TabOrder = 5
    OnClick = Button2Click
  end
end
