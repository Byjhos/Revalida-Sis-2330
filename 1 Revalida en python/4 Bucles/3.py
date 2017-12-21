#otro programa para halla el maximo comun divisor
a=int(input("ingrese un numero"))
b=int(input("ingrese un numero"))
while a%b!=0:
	r=a%b
	a=b
	b=r
print b