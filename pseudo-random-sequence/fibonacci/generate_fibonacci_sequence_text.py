# Generates a Fibonacci sequence and writes to a specified textfile without spaces. (1123581321...)

size = 0
MAXSIZE = 1000000 # 1MB
filename = "1mbseq"
a_n_minus_2 = 1
a_n_minus_1 = 1
# since we have 1 and 1 already, write 1 and 1 to opened file and enter loop
f = open(filename, "w")
f.write("11")
size += 2

while size < MAXSIZE:
    a_n = a_n_minus_1 + a_n_minus_2
    f.write(str(a_n))
    # update values
    a_n_minus_2 = a_n_minus_1
    a_n_minus_1 = a_n
    size += len(str(a_n))

f.close()
