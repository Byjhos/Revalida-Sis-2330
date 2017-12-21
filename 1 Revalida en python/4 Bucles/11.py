#para calcular la planilla de una empresa
total=0
contador=0
numero=int(input("ingrese un numero"))
while contador<numero:
	horas=int(input())
	salario=int(input())
	pago=horas*salario
	total=total+pago
	contador=contador+1
	print pago
print total