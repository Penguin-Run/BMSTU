Var i, j, p, n: integer;
	t: real;
	a: array[1..50] of real;

Begin
    readln(n);
	for i:=1 to n do readln(a[i]);

	p:=1; i:=1;
	while (p <> 0) do begin
		p := 0;
		for j:=1 to (n-i) do begin
			if (abs(a[j+1]) > abs(a[j])) then begin
				t := a[j];
				a[j] := a[j+1];
				a[j+1] := t;
				p := 1;
			end;
		end;
		i:=i+1;
	end;

	for i:=1 to n do writeln(a[i]:5:0);
end.

{TEST EXAMPLE
9
1.0
3.0
3.0
4.0
33.0
6.0
234.0
6.0
34.0
}