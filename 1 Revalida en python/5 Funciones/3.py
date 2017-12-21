#funcion para saber que es bisiesto
def es_bisiesto(n):
	if(((n%4)==0)and((n%100)!=0)or((n%400)==0)):
		return True
	else:
		return False
#se quiere saber los anios bisiestos de los 2000 primeros anios
n=1
for n in range(1,2000):
	if  (es_bisiesto(n)):
		print (n)