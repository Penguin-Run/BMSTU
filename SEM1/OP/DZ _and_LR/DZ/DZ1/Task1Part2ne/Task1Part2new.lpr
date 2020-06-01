program Task1Part2new;
uses
  SysUtils;

var x, y: real;

begin
  readln(x);
  if (x < -1) then
     y := -1/(cos(x)+2)
  else if ((x >= -1) and (x < 2)) then
     y := (sin(x))*(x*x)
  else if (x >= 2) then
     y := 0;

  writeln(y);
  readln();
end.
