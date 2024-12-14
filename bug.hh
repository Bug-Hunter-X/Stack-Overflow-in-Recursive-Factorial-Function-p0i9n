function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

//This code will result in a stack overflow error if the input is a large number because of the recursive nature of the function.
//The maximum recursion depth is limited by the system. This limit depends on the system architecture and the amount of memory available.