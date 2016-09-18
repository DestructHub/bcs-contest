def solve():
	original = input()
	vogais = [c for c in original if c in ["a", "e", "i", "o", "u"]]
	reverso = vogais[::-1]

	for i in range(len(vogais)):
		if (vogais[i] != reverso[i]):
			return False

	return True


resp = solve()

if resp:
	print("S")
else:
	print("N")
