type low_case_letter = set of 'a'..'z';
var i: integer;
	j: char;
	vowels, text: low_case_letter;
	st: string[255];

begin
	read(st);
	vowels := ['a', 'e', 'i', 'o', 'u'];
	text := [];

	for i:=1 to length(st) do begin
		if (st[i] in vowels) then 
			text := text + [st[i]];
	end;

	for j:='a' to 'z' do begin
		if (j in text) then write(j, ' ');
	end;
end.
