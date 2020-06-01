program Task1Part13;

{$mode objfpc}{$H+}

uses
  SysUtils;

var x, y1, y2, yt1, yt2, y, y0, eps: real;
begin
  y0 := 1;

  readln(x);
  y1 := sin(x);
  y2 := cos(x);
  yt1 := sqr(y1);
  yt2 := sqr(y2);
  y := yt1 + yt2;


  {Проверка погрешности результата}
  eps := 0.00001;
  if (abs((y - y0)) <= eps) then
     writeln('Погрешность достаточно мала', abs(y - y0))
  else writeln('Погрешность превышает допустимую норму', abs(y - y0));

  readln();

end.

