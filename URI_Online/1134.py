running = 'yes'

gasoline = 0
diesel = 0
alcool = 0

while running == 'yes':
    fuel = int(input())
    try:
        if fuel == 1:
            alcool += 1
        elif fuel == 2:
            gasoline += 1
        elif fuel == 3:
            diesel += 1
        elif fuel == 4:
            running = 'no'
    except:
        pass

print('MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d' % (alcool, gasoline, diesel))
