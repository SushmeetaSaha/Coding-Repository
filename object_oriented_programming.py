# Prgram 1
"""
class library:
    list_of_books = ["Harry Potter","Visual Studio Code Guide","Python Tutorial by Guido van rossum","Java Tutorial for beginners"]
    number_of_books = len(list_of_books)

    @classmethod
    def donate_book(cls,name_of_the_book):
        global list_of_books
        cls.list_of_books.append(name_of_the_book)
        cls.number_of_books = cls.number_of_books + 1

    def borrow_book(self,name_of_book):
        import time
        try:
            library.list_of_books.index(name_of_book)
            library.list_of_books.pop(library.list_of_books.index(name_of_book))
            library.number_of_books = library.number_of_books - 1
            print("You can borrow this book from the library of shauary")
            time.sleep(2)
            print("This book is now yours")
        except Exception as a:
            print("We don't have this book in our labrary")
        
        
shauary = library()
print("We have books ")
for a in library.list_of_books:
    print(a)
print()
shauary.borrow_book(input("Enter The book name from the above list "))

"""
# Program 2
"""

class CarShowRoom:
    cars = {
        "Mercidise" : 10000000,
        "BMW" : 7000000,
        "Maruti 800": 100000
    }
    company = "Tata"
class Selling(CarShowRoom):
    @classmethod
    def sell(cls,name):
        print(f"Car Name {name}")
        try:
            time.sleep(2)
            print("We checking the rate of the car")
            time.sleep(1)
            print(f"Price {cls.cars[name]}")
        except KeyError as a :
            print(f"We do not have car {name}")
buyer = Selling()
buyer.sell(input(">>> "))

"""

"""
# Program 3
class domino:
    pizza = {
        "Onion Pizza":150,
        "Cheese Pizza":200,
        "Veg Pizza":99
    }
    total_cost = []
    def buyer(self,name):
        try:
            domino.total_cost.append(domino.pizza[name])
            print(f"Your total bill is of {sum(domino.total_cost)}")
        except Exception as exception:
            print(f"We don't have the pizza {name}")
shauary = domino()
shauary.buyer("Onion Pizza")

"""
"""
# Program 4
class school:
    students = {
        "Shauary":230,
        "Deepak":200,
        "Pawan":300,
        "Sohan":700,
        "Ravi":780,
    }
    @classmethod
    def change_fee(cls,name,fees):
        cls.students[name] = fees

    def show_details(self,name):
        print(f"Name of the student {name}")
        print(f"Fees {school.students[name]}")
    
    @classmethod
    def increase_fees(cls,name,fees):
        cls.students[name] = fees
        print(f"The fees of the {name} is now {fees}")
        
    def give_fee(self,name,fee):
        if fee > school.students[name]:
            print("The amount is more the fees of the child")
        elif fee < school.students[name]:
            print("The amount is less the fees of the child")
        else:
            print(f"Thank You for submiting the fee on time")

h = school()
h.increase_fees("Shauary",8000)
h.show_details("Shauary")

"""
"""

def hello(number):
    if number == 1 or number == 0:
        return 1
    else:
        h = number * hello(number-1) 
        return h
def trailing_zero(h):
    a = str(h)
    count = 0
    for b in a:
        if int(b) == 0:
            count = count + 1
    return count
user = int(input("Enter the number "))
h = hello(user)
b = trailing_zero(h)
print(f"The factorial of {user} is {h} and number of zeros in the factorial is {b} ")

"""
"""
class number_typing:
    game_over = False
    @staticmethod
    def generator():
        import random
        _score = 0
        while not number_typing.game_over:
            number = random.randint(1,10)
            print(number)
            user = int(input(">>> "))
            if user!=number:
                print("Wrong")
                number_typing.game_over = True
            else:
                _score = _score + 1   

h = number_typing()
h.generator()
"""
"""
class List_formating:
    def square(self,a):
        if True:
            index = 0
            while True:
                try:
                    a[index] = a[index] * a[index]
                    index = index + 1
                except Exception as b:
                    print(a)
                    break

    def add_this(self,number,list_):
        if True:
            index = 0
            while True:
                try:
                    list_[index] = list_[index] + number
                    index = index + 1
                except Exception as b:
                    print(list_)
                    break
    def subtract_this(self,number,list_):
        if True:
            index = 0
            while True:
                try:
                    list_[index] = list_[index] - number
                    index = index + 1
                except Exception as b:
                    print(list_)
                    break
    def multiply_this(self,number,list_):
        if True:
            index = 0
            while True:
                try:
                    list_[index] = list_[index] * number
                    index = index + 1
                except Exception as b:
                    print(list_)
                    break
    def Length_of(self,list_):
        index = 0
        for a in list_:
            index = index + 1
        print(f"The Length of the list is {index}")    
    
a = List_formating()
a.add_this(1,[0,1,2])
a.subtract_this(1,[1, 2, 3])
a.square([1,2,3,4])
a.multiply_this(2,[1, 2, 3])
a.Length_of([1,2,3])
"""
"""
import random
class Game:
    @staticmethod
    def Guess():
        while True:
            user = input("Enter >>> ")
            r = random.randint(1,9)
            if user == str(r):
                print("Correct")
                break
            elif user == 'quit':
                print("Game Over")
                break
Game.Guess()
"""

# class A(object):
#     def __new__(cls):
#         while True:
#             import random
#             user = input("Enter >>> ")
#             r = random.randint(1,9)
#             if user == str(r):
#                 print("Correct")
#                 break
#             elif user == 'quit':
#                 print("Game Over")
#                 break
# A()
print("Hello World")


