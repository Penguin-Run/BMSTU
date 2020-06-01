program Task1Part3;

uses
  SysUtils;

var eps, s, s0, wid, a, b: real;
    i, n: longint;

begin
    readln(eps);
    s := 0; s0 := 14/9;
    a := 0; b := 1;
    n := 1;

    while (abs(s - s0) > eps) do begin
        s := 0;
        a := 0;
        wid := (abs(a-b))/n; {определяем ширину при текущем n}
        s := s + wid*(Sqrt(1+3*a)); {вычисляем площадь 1го прямоугольника, где f(a) - значение функции/высота в точке a}
        for i := 2 to n do begin {вычисляем площадь остальных прямоугольников}
            a := a + wid;
            s := s + wid*(Sqrt(1+3*a));
        end;
        n := n*2;
    end;

    writeln(n);
    writeln(s);
    readln();

end.
