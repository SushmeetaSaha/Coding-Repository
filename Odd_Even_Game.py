# Modules
import random
import time

# Funtion to return who win the toss
def toss():
	# Variables for doing the toss
	com = random.randint(1,10)
	userW = False
	user1 = input("Odd Ya Even ").lower()
	user = int(input("Enter the number between 1-10 "))
	if user > 10:
		print("Invalid number was given")
		quit()
	userWW = False	
	# If User decide Even
	if user1 == 'even' and user < 10 and user > 0 :
		if (user+com)%2 == 0:
			
			time.sleep(2)
			print("You win the toss")
			print(f"Computer was {com}")
			time.sleep(1)
			return not userWW
		else:
			print("You Loose the toss")
			print(f"Computer gives {com}")
			time.sleep(2)
			print("Computer Win")
			return userWW
	# If user choose Odd
	elif user1=="odd" and user<10 and user>0:
		if (user+com)%2 != 0:
			
			time.sleep(2)
			print("You win the toss")
			print("Computer was {}".format(com))
			time.sleep(1)	
			return not userWW
		else:
			print("You Loose the toss")
			time.sleep(2)
			print("Computer Win")
			return userWW
	else:
		print("You Choice Nothing ")

# For Batting
def Batting():
	run = 0
	while True:
		user = int(input("Bat "))
		if user >10:
				print("Invalid range of number was given ")
				quit()
		computer = random.randint(1,10)
		if computer == user:
			print("Out")
			print(f"You score {run}")
			break
		else:
			print(f"computer was {computer}")
			run = run + user
	return run+1
	
#Batting for a particular target
def Batting2(tar):
	run = 0
	while True:
		user = int(input("Bat "))
		if user >10:
				print("Invalid range of number was given ")
				quit()
		computer = random.randint(1,10)
		if run == tar:
			print("User Win")
			break
		if computer == user:
			print("Out")
			print(f"You score {run}")
			break
		else:
			print(f"computer was {computer}")
			run = run + user
	return run

			
			
def Bowling():
		run = 0
		while True:
			ran = random.randint(1,10)
			user = int(input("Throw the bowl "))
			if user >10:
				print("Invalid number was given ")
				quit()
			if user == ran and user<=10:
				print("Out")
				print(run)
				return run
				break
			else:
				print(f"computer was {ran}")
				run = run + ran
				
def bowling2(tar):
	runs = 0
	while True:
		user = int(input("Bowl "))
		if user > 10:
			print("Invalid number was given ")
			quit()
		com = random.randint(1,10)
		print(f"Computer was {com}")
		if user == com:
			print("Duck")
			time.sleep(1)
			print(f"Computer not able to completed the target of {tar}")
			print("User Win")
			print("Congratulations !")
			break	
		else:
			runs = runs + com
			
if __name__ == "__main__":			
	t = toss()
	if t == True:
		h = input("Batting or Bowling ")
		h = h.lower()
		if h == "batting":
			score = Batting()
			print(f"Computer has to score {score} runs")
			h = bowling2(score)
		elif  h == "bowling":
			b = Bowling()
			time.sleep(1.67)
			print(f"You have to make {b}")
			h = Batting2(b)
	elif t == False:
		hello = ["batting","bowling"]
		h = random.choice(hello)
		print(f"Computer will do {h}")
		if h == "batting":
			score = Batting()
			score = score +1
			print(f"Computer has to score {score}        runs")
			h = b2(score)
		elif h == "bowling" :
			b = Bowling()
			time.sleep(1.67)
			print(f"You have to make {b}")
			h = Batting2(b)
