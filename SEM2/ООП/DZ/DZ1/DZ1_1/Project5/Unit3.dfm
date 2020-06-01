object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 552
  ClientWidth = 735
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 8
    Width = 719
    Height = 409
    OnMouseDown = Image1MouseDown
  end
  object Label1: TLabel
    Left = 32
    Top = 517
    Width = 78
    Height = 13
    Caption = #1058#1086#1083#1097#1080#1085#1072' '#1083#1080#1085#1080#1080
  end
  object Label2: TLabel
    Left = 48
    Top = 432
    Width = 55
    Height = 13
    Caption = #1058#1080#1087' '#1083#1080#1085#1080#1080':'
  end
  object Button1: TButton
    Left = 640
    Top = 512
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 128
    Top = 514
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '3'
  end
  object Edit2: TEdit
    Left = 128
    Top = 429
    Width = 121
    Height = 21
    TabOrder = 2
    Text = '1'
  end
end
