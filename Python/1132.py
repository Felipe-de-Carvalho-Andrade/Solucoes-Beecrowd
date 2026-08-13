x = int(input())
y = int(input())

menor = min(x, y)
maior = max(x, y)

soma = 0

for i in range(menor, maior+1):
    if i % 13 != 0:
        soma += i

print(soma) 