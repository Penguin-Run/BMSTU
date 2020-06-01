unit Unit2;

interface

uses
Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
Dialogs, ExtCtrls;

Type TSymbol = class
text: string;
Image: TImage;
k:integer; // изначальный размер шрифта
r: integer;// коэффициент увеличения
x, y: integer;

constructor Init(x0, y0:integer; r0:integer; AImage: TImage); virtual;
procedure Draw;
procedure Move;
end;

TS_C = class(TSymbol)
constructor Init(x0, y0:integer; r0:integer; AImage: TImage); override;
end;

TS_F = class(TSymbol)
constructor Init(x0, y0:integer; r0:integer; AImage: TImage); override;
end;

TS_O = class(TSymbol)
constructor Init(x0, y0:integer; r0:integer; AImage: TImage); override;
end;

implementation

constructor TSymbol.Init(x0, y0:integer; r0:integer; AImage: TImage);
begin
Image := AImage;
x := x0; y := y0; k := 2; r := r0;
end;

constructor TS_C.Init(x0, y0:integer; r0:integer; AImage: TImage);
begin
inherited Init(x0, y0,r0,AImage);
text := 'С';
end;

constructor TS_F.Init(x0, y0:integer; r0:integer; AImage: TImage);
begin
inherited Init(x0, y0,r0,AImage);
text := 'Ф';
end;

constructor TS_O.Init(x0, y0:integer; r0:integer; AImage: TImage);
begin
inherited Init(x0, y0,r0,AImage);
text := 'О';
end;

procedure TSymbol.Draw;
begin
     Image.Canvas.Font.Size := k; // k - шрифт
     Image.Canvas.TextOut(x, y, text);
end;

procedure TSymbol.Move;
begin
   k := k*r;
   Draw;
end;

end.


