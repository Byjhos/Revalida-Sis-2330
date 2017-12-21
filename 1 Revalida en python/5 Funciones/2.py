 #funcion para saber si un numero es perfecto
def es_perfecto(n):
	suma=0
	i=1
	for i in (1,(n/2)):
		if ((n%i)==0):
			suma=suma+1
	if (suma==n):
		return True
	else:
		return False
#numeros perfectos entre el 1 al 100
n=1
for n in [100]:
	if(es_perfecto(n)):
		print (n)