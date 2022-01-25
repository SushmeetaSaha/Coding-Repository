import random
def batting(target):
    run = 0
    while True:
        user = int(input("Throw the ball "))
        com = random.randint(1,10)
        if com == user :
            print("Computer Out! ")
            print("User Win")
            break
        if run == target:
            print("Computer wins")
            break
        print(f"Computer was {com}")
        run = run + com
batting(120)