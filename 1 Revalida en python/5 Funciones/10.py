#Funcion para evaluar la potencia de un numero a, a un exponete b, siendo b un numero entero
def power(a,b):
	n=b
	producto=1
	i=1
	while (i<=n):
		producto=producto*a
		i=i+1
	if(b<0):
		producto=1/producto
	return producto
a=int(input("ingrese el numero de la base:"))
b=int(input("ingrese un numero de la exponete:"))
print power(a,b)