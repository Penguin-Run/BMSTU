program LR5_b;

{б}
var i: integer;
    st: string[8];
    C: array[1..7] of string[10];

 Begin
       st := ' ';
       for i:=1 to 7 do
           readln(C[i]);

       for i:=1 to 7 do begin
           write(C[i]);
           writeln();
           write(st);
           st := st + ' ';
       end;
end.

