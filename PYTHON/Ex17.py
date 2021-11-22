

a=float(input ('digite o valor do cateto oposto:     '))
b=float(input ('digite o valor do cateto adjcente:   '))
c=float(input ('digite o valor da hipotenusa:        '))

if((c*c)==(a*a)+(b*b)):
    print(f" é tringulo retangulo")
else:
    print(f"não é trinagulo retangulo")
