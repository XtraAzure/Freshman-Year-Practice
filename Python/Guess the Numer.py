import random #Need for random function

print 'Hello! What is your name?'
name = raw_input()
print 'Well, Albert, I am thinking of a number between 1 and 20.'

number = random.randint(1,20) #Generate random number
countDown = 0 #Create count down number 

while countDown < 6:

    print 'Take a guess.'
    countDown = countDown + 1
    numberGuessed = raw_input() #Guess the number
    numberGuessed = int (numberGuessed) #Convert into int

    if number == numberGuessed:
        break;
    
    if number > numberGuessed:
        print 'Your guess is too low.'

    if number < numberGuessed:
        print 'Your guess is too high.'
        
if numberGuessed == number:
        countDown = str(countDown) #Convert into string
        print 'Good job, ' + name + '! ' + 'You guessed my number in ' + countDown +' ' + 'guesses!'
if numberGuessed != number:
    number = str(number)
    print 'Nope. The number I was thinking of was ' + number
