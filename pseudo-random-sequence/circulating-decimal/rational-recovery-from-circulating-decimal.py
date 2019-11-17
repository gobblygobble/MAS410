from sage.all import *

# make sure to delete all the leading 0s of the sequence
given_sequence = 46082949308755760368663594470046082949308755760368663594470046082949308755760368663594470046082949308755760368663594465375822555243513051651888985428797313843221195174023908245700069162681818569917091076567129922969488852937336300209777385882776756
r = continued_fraction(given_sequence / (10^250))
# check every convergent and find the suitable one
candidates = r.convergents()
leading_candidate = 1/1
for candidate in candidates:
    # condition to overwrite the leading candidate
    if ((candidate.denominator() > leading_candidate.denominator()) and (candidate.denominator() <= 2 * (10^125))):
        leading_candidate = candidate
# recovery complete
print("We have recovered:")
print("A = %d" % (leading_candidate.numerator()))
print("P = %d" % (leading_candidate.denominator()))