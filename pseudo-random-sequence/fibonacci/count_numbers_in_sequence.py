# Checks the number of 0 to 9 in a given textfile of numbers and no linebreaks
import math

count = [0] * 10
filename = "1mbseq"

f = open(filename, "r")

long_line = f.readline()
totalcount = len(long_line)

for i in range(totalcount):
    count[int(long_line[i])] += 1

print("Finished reading file.")
for i in range(len(count)):
    print("%d appears %d times." % (i, count[i]))

f.close()

# Calculate entropy of the sequence
sums = []
for num in count:
    p = float(num)/float(totalcount)
    sums.append(-p * math.log(p, 2))
entropy = sum(sums)
print("Entropy of this sequence is %g" % (entropy))
