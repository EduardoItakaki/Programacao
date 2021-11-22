

a=float(input ('digite o valor do primeiro lado:  '))
b=float(input ('digite o valor do segundo lado:   '))
c=float(input ('digite o valor do terceiro lado:  '))

if ((a+b)>c and (a+c)>b and (b+c)>a):
             

      if ((a==b) and (a==c) and (b==c)):
         print ("triangulo equilatero")

      elif ( a!=b and a!=c and b!=c):
         print("triangulo escaleno")

      else:
         print("triangulo isosceles")

else:
 print ("não é triangulo")

