def collatz_sequence(x):
    if x == 1:
        return 0
    elif x%2 == 0:
        x = x // 2
        print(x, end=' ')
    else:
        x = 3 * x + 1
        print(x, end=' ')
    collatz_sequence(x)

while True:  
    try:
        print('Enter a integer number: ')
        number = int(input('> '))
        break
    except ValueError:
        continue

print(number, end=' ')
collatz_sequence(number)

