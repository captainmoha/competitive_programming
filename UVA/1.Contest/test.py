def sumDigits (n):
	if (n%10 == n):
		return n
	else:
		return sumDigits(n % 10 + sumDigits(n / 10))

print sumDigits(47) 