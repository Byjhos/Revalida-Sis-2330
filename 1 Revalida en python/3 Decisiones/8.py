#encontar el signo el entero y la fraccion
numeros=int (input("ingrese un numero"))
if numeros>0:
	signo='+'
elif numeros==0:
	signo=' '
else:
	signo='+'
magnitud=numeros
entero=magnitud
fraccion=magnitud-entero
print signo,entero,fraccion