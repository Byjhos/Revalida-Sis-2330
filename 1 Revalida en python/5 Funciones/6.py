#funcion de la serie de fibonacci
def fibonacci(n):
	if((n==0)or(n==1)):
		return n
	else:
		x=0
		y=1
		i=1
		for i in range(i,n):
			y=y+x
			x=y-x
		valor=y
		return valor
n=int(input("ingrese un numero:"))
print fibonacci(n)