var n, i, word_count: integer;
    str: string[255]; // figure out why error occurs with [] declaration
    after_b, after_c: shortint;

begin
    readln(n);
    readln(str);
    word_count := 0;
    after_b := 0;
    after_c := 0;

    for i:=1 to n do begin
        if (str[i] <> ' ') then begin

            if (str[i] = 'B') then begin
                after_b := 1;
                after_c := 0;
            end;

            if (str[i] = 'C') and (after_b = 1) then begin
                after_c := 1;
            end;
            
            if (str[i] <> 'B') and (str[i] <> 'C') and (after_c = 1) then 
                after_c := 0;
        end;

        if (str[i] = ' ') and ((after_b = 0) or (after_c = 0)) then begin // try to go with just (str[i] = ' ') and (!after_c) condition
            after_b := 0;
            after_c := 0;
        end;

        if (str[i] = ' ') and (after_b = 1) and (after_c = 1) then begin 
            inc(word_count);
            after_b := 0;
            after_c := 0;
        end;
    end;
    
    if (after_b = 1) and (after_c = 1) then inc(word_count);
    
    writeln(word_count);
end.
