unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, unit2;

type
  TForm1 = class(TForm)
    Image1: TImage;
    Edit1: TEdit;
    Edit2: TEdit;
    Button1: TButton;
    Timer1: TTimer;
    Label1: TLabel;
    Label2: TLabel;
    procedure Image1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure Button1Click(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
   t : integer;

implementation


var Tc: TS_C;
    Tf: TS_F;
    To1: TS_O;

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
begin

      Close;
end;

procedure TForm1.FormActivate(Sender: TObject);
begin
image1.Canvas.brush.Color := clwhite;
end;

procedure TForm1.Image1MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
  var r: integer; // коэффициент
  p: string; // буква
begin
t:=0;

r := strtoint(Edit2.Text); // poluchenye koeficienta
p := Edit1.Text; // получение буквы

if p = 'С' then Tc := TS_C.Init(x, y, r, image1);
if p = 'Ф' then Tf := TS_F.Init(x, y, r, image1);
if p = 'О' then To1 := TS_O.Init(x, y, r, image1);

Timer1.Enabled:=true;
end;

procedure TForm1.Timer1Timer(Sender: TObject);
var p: string;
begin
p := Edit1.Text; // получение буквы

if p = 'С' then begin
if Tc.k > 33 then Timer1.Enabled := false;
t:=t+Timer1.Interval;
Tc.Move;
end;

if p = 'Ф' then begin
if Tf.k > 33 then Timer1.Enabled := false;
t:=t+Timer1.Interval;
Tf.Move;
end;

if p = 'О' then begin
if To1.k > 33 then Timer1.Enabled := false;
t:=t+Timer1.Interval;
To1.Move;
end;

end;

end.
