def calc():
	h, l = input().split(' ')

	mapa = []

	for i_row in range(int(h)):
		mapa.append(input().split(' '))

	maior_num = 0

	

	for row in mapa:
		for col in row:
			n = int(col)
			if (n > maior_num):
				maior_num = n
			
			

	qtd = [0 for i in range(maior_num + 1)]

	for row in mapa:
		for col in row:
			n = int(col)	

			qtd[n] = qtd[n] + 1
	
	menor = 1
	for i in range(1, len(qtd)):
		if (qtd[i] <= qtd[menor]):	
			menor = i	

	

	print(menor)
	

calc()
