# Quiz Game Project

score = 0

print("Welcome to the Python Quiz Game!\n")

# Question 1
print("1) Global college kaha hai")
print("a) Mumbai")
print("b) Jabalpur")
print("c) Kolkata")
answer = input("Enter your answer (a/b/c): ")

if answer.lower() == "b":
    print("Correct!\n")
    score += 1
else:
    print("Wrong! The correct answer is b) Jabalpur\n")

# Question 2
print("2) India ka prime minister kon hai")
print("a) Narendra modi")
print("b) Dropti murmu ")
print("c)Mohan yadav")
answer = input("Enter your answer (a/b/c): ")

if answer.lower() == "a":
    print("Correct!\n")
    score += 1
else:
    print("Wrong! The correct answer is c)Narendra modi\n")

# Question 3
print("3) Jabalpur kiske liye famous hai ")
print("a) bhedaghat")
print("b) Gwarighat")
print("c) Both a and b")
answer = input("Enter your answer (a/b/c): ")

if answer.lower() == "c":
    print("Correct!\n")
    score += 1
else:
    print("Wrong! The correct answer is c) Both a and b\n")
     
# Question 4
print("4) 2+2 = ?")
print("a) 6")
print("b) 4")
print("c) 8")
answer = input("enter your answer (a/b/c): ")

if anwer.lower() == "b":
    print(" correct\n")
    score += 1
else:
    print("Wrong! The correct answer is b) 4\n")    

# Final Score
print("Your final score is:", score, "/ 4")

if score == 4:
    print("🎉 Excellent! You are a Python Genius!")
elif score == 2:
    print("😊 Good Job! Keep Learning.")
else:
    print("😅 Keep Practicing! You’ll get better.")
