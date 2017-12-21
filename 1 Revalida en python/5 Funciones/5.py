#funcion factorial
def factorial(n):
	producto=1
	i=1
	for i in range(1,n):
		producto=producto*i
	return producto
#programa que evalue el factorial
n=int(input("ingrese un numero:"))
f=factorial(n)
print f