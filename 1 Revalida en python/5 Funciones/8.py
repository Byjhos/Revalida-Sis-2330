#funcion para hallar l invversa de un numero tal como 1234
def inversa(n):
	result=0
	while(n>0):
		digito=n%10
		result=result*10+digito
		n=(n/10)
	return result
n=int(input("ingrese el numero"))
print inversa(n)