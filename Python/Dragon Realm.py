import random
import time

def Intro():
    print 'You are in a land full of dragons. In front of you,',
    print 'you see two caves. In onve cave, the dragon is friendly',
    print 'and will share his treasure with you. The other dragon',
    print 'is greedy and hungry, and will eat you on sight.\n'

def chooseCave():
    cave = '' #Create cave argument
    while cave != '1' and cave != '2': #Check if player select 1 or 2 
        print 'Which cave will you go into? (1 or 2)'
        cave = raw_input() #Player choose number here

    return cave

def checkCave(chosenCave): #Get return value from chooseCave function
    print 'You approach the cave...'
    time.sleep(2)
    print 'It is dark and spooky...'
    time.sleep(2)
    print 'A large dragon jumps out in front of you! He opens his jaws and...\n'
    time.sleep(2)
    friendlyCave = random.randint(1,2) #Generate random number between 1 and 2
    if chosenCave == str(friendlyCave): #If number is same, win game
        print 'Gives you his treasure!' 
    else: #Lose game as number isn't same
        print 'Gobbles you down in one bite!'

playAgain = 'yes' #Default as true for continue

while playAgain == 'yes' or playAgain == 'y':
    Intro()
    caveNumber = chooseCave()
    checkCave(caveNumber)
    print 'Do you want to play again? (yes or no)'
    playAgain = raw_input() #Decide if player wants to play again
