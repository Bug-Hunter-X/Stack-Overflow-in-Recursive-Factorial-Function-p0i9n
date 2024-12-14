function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo(5);
}

//This code will not result in a stack overflow error, even if the input is a large number because of the iterative nature of the function.