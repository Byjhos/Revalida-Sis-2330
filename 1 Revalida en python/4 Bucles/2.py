#encontrar el maximo comun divisor
a=int(input("ingrese un numero"))
b=int(input("ingrese un numero"))
while a!=b:
	if a>b:
		a=a-b
else:
	b=b-a
print b
