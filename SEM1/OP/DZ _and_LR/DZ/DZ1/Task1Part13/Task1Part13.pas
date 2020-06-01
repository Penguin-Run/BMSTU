program Task1Part13;

uses
  SysUtils;

var x, y1, y2, y, y0, eps: single;
begin
  y0 := 1;

  readln(x);
  y1 := sin(x);
  y2 := cos(x);
  y := sqr(y1) + sqr(y2);


  {Проверка погрешности результата}
  {пусть} eps := 0.00001;
  if (abs((y - y0)) <= eps) then
     writeln('Погрешность достаточно мала:', abs(y - y0))
  else writeln('Погрешность превышает допустимую норму:', abs(y - y0));

  writeln(y1);
  writeln(y2);
  writeln(y);
  readln();
end.

