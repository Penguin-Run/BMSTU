object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 568
  ClientWidth = 632
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 24
    Top = 16
    Width = 457
    Height = 521
    OnMouseDown = Image1MouseDown
  end
  object Label1: TLabel
    Left = 487
    Top = 173
    Width = 80
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1073#1091#1082#1074#1091':'
  end
  object Label2: TLabel
    Left = 487
    Top = 245
    Width = 119
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1082#1086#1101#1092#1092#1080#1094#1080#1077#1085#1090':'
  end
  object Edit1: TEdit
    Left = 487
    Top = 192
    Width = 121
    Height = 21
    TabOrder = 0
    Text = #1060
  end
  object Edit2: TEdit
    Left = 487
    Top = 264
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '2'
  end
  object Button1: TButton
    Left = 512
    Top = 480
    Width = 91
    Height = 49
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 2
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 500
    OnTimer = Timer1Timer
    Left = 536
    Top = 376
  end
end
