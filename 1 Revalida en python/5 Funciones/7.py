#funcion del algoritmo Honer
def honer(a,k):
	y=1
	while (k>0):
		if((k%2)==1):
			y=y*a
		a=a*a
		k=(k/2)
	return y
a=int(input("ingrese el numero de la base:"))
k=int(input("ingrese un numero de la exponete:"))
print honer(a,k)