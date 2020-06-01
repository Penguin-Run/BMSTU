Unit Unit1;
Interface 
type fx = function(x: real):real;
procedure MASSHTAB(b: integer; f: fx; var M: real);

Implementation
procedure MASSHTAB;
	var i, max: real;
	begin
	i := 1.0;
	max := -1000.0;
	while (i < 2) do begin
		if (f(i) > max) then max := f(i);
		i := i + 0.1;
	end;

	M := b/max;
	end;
end.
