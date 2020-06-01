program LR5_a;
{a}
var i, j: integer;
    C: array[1..7] of string[10];

begin
       for i:=1 to 7 do
           readln(C[i]);

       for i:=1 to 10 do begin
           for j:=1 to 7 do begin
               write(C[j][i]);
               write(' ');
           end;
           writeln();
       end;
readln(); {for lazarus}
end.
