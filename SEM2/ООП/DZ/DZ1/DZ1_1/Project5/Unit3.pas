unit Unit3;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, ExtCtrls, Unit4, StdCtrls, Math;

type
  TForm3 = class(TForm)
    Image1: TImage;
    Button1: TButton;
    Edit1: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Edit2: TEdit;
    procedure Button1Click(Sender: TObject);
    procedure Image1MouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form3: TForm3;
  x1,y1,x2,y2:integer; //координаты начальной и конечной точек текущей линии

implementation
var
  line1: Line;
  line2: Line_arrow;

{$R *.dfm}

procedure TForm3.Button1Click(Sender: TObject);
begin
Close;
end;


procedure TForm3.Image1MouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
var r, l: word;
begin
  Image1.Canvas.Brush.Color := clWhite;

  r := strtoint(edit1.Text); // получение толщины линии
  l := strtoint(edit2.Text); // получение типа линии (1 или 2)

if l = 1 then begin
  if button = mbLeft then begin
      line1 := line.init(x, y, r, Image1);
      line1.draw;
  end;
  if button = mbRight then begin
      Image1.Canvas.MoveTo(x,y);
  end;

end;

if l = 2 then begin
   if button = mbLeft then begin
      x1 := x2; y1 := y2;
      x2 := x; y2 := y;

      line2 := line_arrow.init(x, y, r, Image1);
      line2.draw(x1, y1);
   end;

   if button = mbRight then begin
      Image1.Canvas.MoveTo(x, y);
      x1 := x; y1 := y;
      x2 := x; y2 := y;
   end;



end;


end;

end.
