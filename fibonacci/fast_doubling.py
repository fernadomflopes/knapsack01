# code from https://www.nayuki.io/page/fast-fibonacci-algorithms
#

def _fib(n):
    if n == 0:
        return (0,1)
    else:
        a,b = _fib(n//2)
        c = a * (b * 2 - a)
        d = a * a + b * b
        if n % 2 == 0:
            return (c, d)
        else:
            return (d, c + d)

def fib(n):
    if n < 0:
        raise("ops")
    else:
        return _fib(n)[0]

print(fib(10))
