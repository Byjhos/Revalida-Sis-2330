#para saber si tres lados formanun triangulo
a=int(input("ingrese un numero"))
b=int(input("ingrese un numero"))
c=int(input("ingrese un numero"))
if a>b:
	max=a
else:
	max=b
if max<c:
	max=c
s=(a+b+c)/2
if s>max:
	print"forman triangulo"
else:
	print"no forman triangulo"