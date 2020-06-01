unit Unit4;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, ExtCtrls, Math;

type Line = class
  x: integer;
  y: integer;
  width: integer;
  connect: TImage;

  constructor init(xd, yd, widthd: integer; AImage: TImage);
  procedure draw; {virtual;}
end;

Line_arrow = class(Line)
   procedure DrawArrowHead(Canvas: TCanvas; X,Y: Integer; Angle,LW: Extended);
   procedure draw(x0, y0:integer); {override;}
end;

implementation

constructor Line.init(xd, yd, widthd: Integer; AImage: TImage);
begin
  inherited Create;
  x := xd;
  y := yd;
  width := widthd;
  connect := AImage;
end;

procedure Line.draw;
begin
  self.connect.Canvas.Pen.Width := width;
  self.connect.Canvas.LineTo(x, y);
end;

procedure Line_arrow.DrawArrowHead(Canvas: TCanvas; X: Integer; Y: Integer; Angle: Extended; LW: Extended);
var
  A1,A2: Extended;
  Arrow: array[0..3] of TPoint;
  OldWidth: Integer;
const
  Beta=0.322;
  LineLen=4.74;
  CentLen=3;
begin
  Angle:=Pi+Angle;
  Arrow[0]:=Point(X,Y);
  A1:=Angle-Beta;
  A2:=Angle+Beta;
  Arrow[1]:=Point(X+Round(LineLen*LW*Cos(A1)),Y-Round(LineLen*LW*Sin(A1)));
  Arrow[2]:=Point(X+Round(CentLen*LW*Cos(Angle)),Y-Round(CentLen*LW*Sin(Angle)));
  Arrow[3]:=Point(X+Round(LineLen*LW*Cos(A2)),Y-Round(LineLen*LW*Sin(A2)));
  OldWidth:=Canvas.Pen.Width;
  Canvas.Pen.Width:=1;
  Canvas.Polygon(Arrow);
  Canvas.Pen.Width:=OldWidth
end;


procedure Line_arrow.draw(x0, y0:integer);  // x0, y0 - к-ты начала линии
var
  angle, LW: Extended;
  x1, y1, x2, y2: integer;
begin
  x1 := x0; y1 := y0;
  x2 := x; y2 := y;
  LW := 4; // так было у чувака

  angle:= ArcTan2(Y1 - Y2, X2 - X1);
  connect.Canvas.MoveTo(X1, Y1);
  connect.Canvas.LineTo(X2 - Round(2 * LW * cos(angle)),
    Y2 + Round(2 * LW * sin(angle)));
  DrawArrowHead(connect.Canvas, X2, Y2, angle, LW);
end;

end.
