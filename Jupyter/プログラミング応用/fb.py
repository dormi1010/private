print("\n".join("Fizz" * (n % 3 == 0) + "Buzz" * (n % 5 == 0) or str(n) for n in range(1,31)))
