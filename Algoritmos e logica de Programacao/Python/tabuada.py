n: int; produto: int

n = int(input("Deseja a tabuada para qual numero? "))

for i in range(1, 11):
	produto = n * i
	print(f"{n} x {i} = {produto}")