
import hashlib
from z3 import *

a = Int('a')
b = Int('b')
c = Int('c')
d = Int('d')


solver = Solver()

solver.add(a > 400000)
solver.add(a % 30 == 5)
solver.add(b > 30000000000000000)
solver.add(a**2 < b)
solver.add(b % 2400000000000000 == 3)
solver.add(2*(a+b) == c+(d*100))
solver.add(d > 40000000000)
solver.add((d*25)% 4 == 1)
solver.add(d % 99 == 3)
solver.add(d % 5 == 1)

print(solver.check())
print(solver.model())


'''
[b = 31200000000000003,
 a = 400025,
 d = 40000001781,
 c = 62396000000621956]
 '''