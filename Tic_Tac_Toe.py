"""
1 |  2 |  3 | 

4 |  5 |  6 | 

7 |  8 |  9 | 
"""
main_table = [["1","2","3"],["4","5","6"],["7","8","9"]]
turn = 0
def check(sign):
    global main_table
    b = -1
    # Horizontal check
    for a in range(0,3):
        if main_table[a][b+1] == sign and main_table[a][b+2] == sign and main_table[a][b+3] == sign:
            print(f"{sign} won the game")
            return 0
    answer = 0
    # Vertical check
    for a in range(0,3):
        if main_table[a][0] == sign:
            answer = answer + 1
    if answer == 3:
        print(f"{sign} won the game")
        return 0
    answer = 0
    for a in range(0,3):
        if main_table[a][1] == sign:
            answer = answer + 1
    if answer == 3:
        print(f"{sign} won the game")
        return 0
    answer = 0
    
    for a in range(0,3):
        if main_table[a][2] == sign:
            answer = answer + 1
    if answer == 3:
        print(f"{sign} won the game")
        return 0
    answer = 0
    # Slanted check
    if main_table[0][0] == sign and main_table[1][1] == sign and main_table[2][2] == sign:
        print(f"{sign} won the game")
        return 0
    if main_table[0][2] == sign and main_table[1][1] == sign and main_table[2][0]:
        print(f"{sign} won the game")
        return 0
def iterator():
    for a in range(0,3):
        for b in range(0,3):
            if main_table[a][b] == '0' or main_table[a][b] == 'X':
                pass
            else:
                return 0
    return 1
def check_tie():
    answer = iterator()
    if answer == 0:
        return 0
    else:
        a = check('0')
        if a == 0:
            return 0
        a = check('X')
        if a == 0:
            return 0
        print("Game Tie")
        return 1
def take_input():
    global main_table
    global turn
    if turn == 0:
        print("X's chance")
        row = int(input("Enter the row\n"))
        column = int(input("Enter the column\n"))
        a = check("0")
        if a == 0:
            return 1
        a = check("X")
        if a == 0: 
            return 1
        if main_table[row-1][column-1] == "X" or main_table[row-1][column-1] == "0":
            print("Value is already assigned!")
            return 0
        main_table[row-1][column-1] = "X";
        a = check("0")
        if a == 0:
            return 1
        a = check("X")
        if a == 0:
            return 1
        turn = 1
    else:
        print("0's chance")
        row = int(input("Enter the row\n"))
        column = int(input("Enter the column\n"))
        check("0")
        check("X")
        main_table[row-1][column-1] = "0";
        check_tie()
        a = check("0")
        if a == 0:
            return 1
        a = check("X")
        if a == 0:
            return 1
        turn = 0
def print_board(main_table):
    for a in range(0,3):
        for b in range(0,3):
            if b == 2:
                 print(f"{main_table[a][b]} | ")
            else:
                print(f"{main_table[a][b]} | ",end=" ")

if __name__ == "__main__":
    print_board(main_table)
    while True:
        chk = check_tie()
        if chk == 1:
            break
        b = take_input()
        if b == 1:
            break
        print()
        print_board(main_table)
