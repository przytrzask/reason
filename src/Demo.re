
 
let sum = 1 + 1
let float = 1.1 +. 1.2
let smaller = 3 < 4
let bigger = 4 > 3
let bool = bool_of_string("true")
let and_ = bool_of_string("true") && true
/* let or_ = bool_of_string("false") || false */

/* if is an expression not a statement */
if (true) {
    print_endline("endlne")
}

/* shadowing let binding  */
let home = "Vienna"
print_endline(home)

/* home = "Warsaw" doesnt work */

/* this works and it is called shadowing */
let home = "Warsaw"      

print_endline(home)

/* Js.log(sum);
Js.log(float);
Js.log(smaller);
Js.log(bigger);
Js.log(bool);
Js.log(and_); */
/* Js.log(or_); */
/* Js.log(print); */





 