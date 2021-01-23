let rec factorize n i =
  if n == 1 then
    [1]
  else if n >= (i * i) then
    if n mod i == 0 then
      i :: (factorize (n / i) i)
    else
      factorize n (i + if i == 2 then 1 else 2)
  else
    [n]

let rec print_list l =
  match l with
    | [] -> ()
    | [e] -> print_int e ; print_newline ()
    | e::t -> print_int e ; print_string " " ; print_list t;;

let rec read_loop () =
  print_list (factorize (int_of_string (read_line ())) 2);
  read_loop ();
in
  try read_loop () with End_of_file -> ();;
