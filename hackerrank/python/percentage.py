from __future__ import division

N = int(raw_input())
data = {}

for i in range(N):
	record = raw_input().split()
	data[record[0]] = record[1:]

query = raw_input()
marks = [float(i) for i in data[query]]

avg = sum(marks) / len(marks)
print "{:.2f}".format(avg)