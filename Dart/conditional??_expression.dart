import 'dart:io';

void main() {
  String urinput = null;
  String a = urinput ?? 'hello world!';
  print(a);
  urinput = 'random string';
  String b = urinput ?? 'hello world!';
  print(b);
  }

/* Just a simple snippet to illustrate the use of '??' operator in dart.
 * It is similar to the ternary operator.
 * It is of the form 
 * a = b ?? c 
 * which assigns 'b' to 'a' if it is not null; else 'a' is set to 'c'*/
