#la suma de cuadrados de los lados de un triangulo rectangulo que es = al cuadrado de la hipotenusa
n=1
m=n+1
for n in [99]:
	for m in [100]:
		a=m^2-n^2
		b=2*m*n
		h=m^2+n^2
		if h<=100:
			print a,b,h
