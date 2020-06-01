 type matrix = array[1..10, 1..10] of real;
var i, j, p, n, m: integer;
	a: matrix;
procedure change_row(var a: matrix; i1:integer; const m: integer);
	var b: array[1..10] of real;
		i: integer;
	begin
		for i:=1 to m do begin
			b[i] := a[i1][i];
			a[i1][i] := a[i1+1][i];
			a[i1+1][i] := b[i];
		end;
	end;


begin
	{matrix filling}
	read(n); readln(m);
	for i:=1 to n do begin
		for j:=1 to m do begin
			read(a[i][j]);
		end;
	end;

	for i:=1 to n do begin
		for j:=1 to m do begin
			write(a[i][j]:5:1);
		end;
		writeln();
	end;
	writeln();


	p:=1; i:=1;
	while (p <> 0) do begin
		p:=0;
		for j:=1 to (n-i) do begin
			if (abs(a[j+1][1]) > abs(a[j][1])) then begin
				change_row(a,j,m);
				p:=1;
			end;
		end;
		i:=i+1;
	end;

	for i:=1 to n do begin
		for j:=1 to m do begin
			write(a[i][j]:5:1);
		end;
		writeln();
	end;
end.

