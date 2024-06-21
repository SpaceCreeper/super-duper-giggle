import random
import time

print("Welcome to PyGames!\nPick a game to play:")

choice = input("[1] Scissors, Paper, Stone\n")

if(choice == 1):
    roundCount = 0
    compChoice = 0
    playerChoice = 0

    print("Welcome to Scissors, Paper and Stone!")
    print("1 for Scissors, 2 for Paper, 3 for Stone.")
    print("Round " + roundCount)

    compChoice = random.randint(1, 3)
    playerChoice = input("Pick your choice: ")

#Tie
    if(compChoice == 1 and playerChoice == 1):
        print("It's a tie!")
    elif(compChoice == 2 and playerChoice == 2):
        print("It's a tie!")
    elif(compChoice == 3 and playerChoice == 3):
        print("It's a tie!")

#Player Wins
    if(compChoice == 1 and playerChoice == 3):
        print("Player has won!")
    elif(compChoice == 2 and playerChoice == 1):
        print("Player has won!")
    elif(compChoice == 3 and playerChoice == 2)
        print("Player has won!")
