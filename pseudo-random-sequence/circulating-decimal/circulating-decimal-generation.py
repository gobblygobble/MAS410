from sage.all import *

p = random_prime(10^120, False, 10^99)
# check if prime
print(is_prime(p))
# find its circulating period

dummy = 10
while True:
    dummy = mod(10 * dummy, p)
    if (dummy == 1):
        print("Period is way to short for this prime...")
        break
    if (i >= 250):
        print("Denominator prime: %d" % (p))
        break
    i+=1
'''
if ((1/p).period() > 250):
    print("This prime works! It has period %d" % ((1/p).period()))
'''
a = (p/217).round()
print("nominator A: %d" % (a))
dec = ((10^250) * (a/p)).round('down')
print(dec)