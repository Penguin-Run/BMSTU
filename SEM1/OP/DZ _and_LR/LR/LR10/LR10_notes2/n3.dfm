object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Notes search'
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
    Left = 64
    Top = 24
    Width = 42
    Height = 13
    Caption = 'Surname'
  end
  object Label2: TLabel
    Left = 64
    Top = 64
    Width = 27
    Height = 13
    Caption = 'Name'
  end
  object Label3: TLabel
    Left = 64
    Top = 104
    Width = 69
    Height = 13
    Caption = 'Phone number'
  end
  object Label4: TLabel
    Left = 64
    Top = 144
    Width = 39
    Height = 13
    Caption = 'Address'
  end
  object Edit1: TEdit
    Left = 256
    Top = 21
    Width = 169
    Height = 21
    TabOrder = 0
    OnClick = Edit1Click
  end
  object Edit2: TEdit
    Left = 256
    Top = 61
    Width = 169
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 256
    Top = 101
    Width = 169
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 256
    Top = 141
    Width = 169
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 64
    Top = 192
    Width = 169
    Height = 25
    Caption = 'Search'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 192
    Width = 169
    Height = 25
    Caption = 'Close'
    TabOrder = 5
    OnClick = Button2Click
  end
end
