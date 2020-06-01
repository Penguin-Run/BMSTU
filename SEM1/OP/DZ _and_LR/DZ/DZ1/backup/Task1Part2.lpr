program Task1Part2;

uses
  SysUtils;

var eps, s, s0, wid, a, b: real;
    i, n: longint;

function f (x:real):real;
begin
    f := Sqrt(1+3*x);
end;

begin
    readln(eps);
    s := 0; s0 := 14/9;
    a := 0; b := 1;
    n := 1;

    while (abs(s - s0) > eps) do begin
        s := 0;
        wid := (a-b)/n; {определяем ширину при текущем n}
        s := s + wid*(f(a)); {вычисляем площадь 1го прямоугольника, где f(a) - значение функции/высота в точке a}
        for i := 2 to n do begin
            s := s + wid*(f(a+wid));
        end;
        n := n*2;
    end;

    writeln(n);
    writeln(s);
    readln();

end.

