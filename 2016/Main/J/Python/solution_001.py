def solution():
	number_of_players = input()

	players = []

	for _ in range(0, number_of_players):
		stats = list(map(lambda x: abs(int(x)), raw_input().split(' ')))
		players.append(stats)

	return len(filter(lambda x: (x[0] * x[1]) > (x[2] * x[3]), players))


print(solution())