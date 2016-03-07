theboard={'top-L':' ','top-M':' ','top-R':' ' ,
          'mid-L':' ','mid-M':' ' ,'mid-R':' ' ,
          'low-L': ' ','low-M':' ','low-R':' '}
def printboard(theboard):
    print(theboard['top-L'] + '|'+theboard['top-M']+'|'+theboard['top-R'])
    print('-'+'+'+'-'+'+'+'-')
    print(theboard['mid-L'] + '|'+theboard['mid-M']+'|'+theboard['mid-R'])
    print('-'+'+'+'-'+'+'+'-')
    print(theboard['low-L'] + '|'+theboard['low-M']+'|'+theboard['low-R'])

print('Position map of TIC-TAC-TOE board..')
print()
print('top-L' + '|'+'top-M'+'|'+'top-R')
print('     '+'|'+  '     '+'|'+'     ')
print('-----'+'+'+'-----'+'+'+'-----')
print('mid-L'+ '|'+'mid-M'+'|'+'mid-R')
print('     '+'|'+  '     '+'|'+'     ')
print('-----'+'+'+'-----'+'+'+'-----')
print('low-L' + '|'+'low-M'+'|'+'low-R')
print('     '+'|'+  '     '+'|'+'     ')
print()
print()
print('Who want to start the game...(x or o)?')
turn=input()
print()
print('LETS BEGIN......')
print()
for i in range(0,9,1):
    printboard(theboard)
    print('Turn of '+turn+'. Move on which place....?')
    move=input()
    theboard[move]=turn
    if (theboard['top-L']==theboard['mid-M']==theboard['low-R']!= ' ' or theboard['top-R']==theboard['mid-M']==theboard['low-L']!=' ' or theboard['top-L']==theboard['top-M']==theboard['top-R']!= ' ' or theboard['mid-L']==theboard['mid-R']== theboard['mid-M']!=' ' or theboard['low-R']==theboard['low-M']==theboard['low-L']!=' ' or theboard['top-R']== theboard['mid-R']==theboard['low-R']!=' ' or theboard['top-M']==theboard['mid-M']==theboard['low-M']!=' ' or theboard['top-L']==theboard['mid-L']==theboard['low-L']!=' '):
        printboard(theboard)
        print()
        print(turn + ' WINS the match......')
        ctr=1;
        break;
    if turn =='x':
        turn ='o'
    else:
        turn ='x'
if(ctr!=1):
    printboard(theboard)
