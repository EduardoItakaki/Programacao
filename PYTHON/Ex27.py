

X = int(input('Digite um número para a  tabuada: '))
while(X<=0):
    print("Erro! Somente números positivos")
    X = int(input("Digite um número: "))
A = int(input('Digite o valor inicial do  intervalo : '))
B = int(input('Até: '))
while(B<A):
    print("digite o valor final do intervalo")
    B = int(input('Até: '))
for i in range(B, A-1, -1):
    r = X * i
    print(f'{X} X {i} = {r}')

