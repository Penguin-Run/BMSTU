program DZ4_P4_main;

{$mode objfpc}{$H+}

uses
    SysUtils,
    DZ2_P4_unit in 'DZ2_P4_unit.pas';


var M1, M2: real;
	b: integer;

function f1(x: real):real;
begin
	f1 := sin(x*x);
end;

function f2(x: real):real;
begin
	f2 := (cos(x))/(sin(x));
end;

begin
  	read(b);

	MASSHTAB(b, f1, M1);
	MASSHTAB(b, f2, M2);

	writeln(M1);
	writeln(M2);
        readln();
end.

