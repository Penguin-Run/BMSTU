program project1;

uses
  SysUtils;

var x, y, y1, y2, y3, y4: real;

begin
  writeln('Введите координаты:');
  readln(x, y);
  y1 := sqrt(x);
  y2 := (-1*(sqrt(x)));
  y3 := (x-1);
  y4 := (-1*(x-1));

  if (x >= 0) and (x <= 1) then begin
    if (y <= y1) and (y <= y4) and (y >= y3) and (y >= y2) then
       writeln('Точка принадлежит заштрихованной части плоскости')
    else
       writeln('Точка не принадлежит заштрихованной части плоскости');
  end
  else
    writeln('Точка не принадлежит заштрихованной части плоскости');
end.

