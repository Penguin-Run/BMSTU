program Task1part1;

{$APPTYPE CONSOLE}

uses
    SysUtils;
Var
   y, y0, err_abs, err_ratio:real;
begin
  y := 1;
  y0 := 1;
  WriteLn('До преобразований y=',y:20:16);
  y := y/6000;
  y := exp(y); {y = e x }
  y := sqrt(y); {Квадратный корень}
  y := y/14;
  y := 14*y;
  y := sqr(y); {Y = y 2 }
  y := ln(y);
  y := 6000*y;
  WriteLn('После преобразований =', y:20:16);
  err_abs := abs(y0-y);
  err_ratio := (err_abs/abs(y));
  WriteLn('Абсолютная погрешность =', err_abs:20:16);
  WriteLn('Относительная погрешность =', err_abs:20:16);
                                       //hhh          ///hhss
  readln();
end.
