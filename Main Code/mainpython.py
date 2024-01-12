question = input("Which do you prefer: Platformers or Shooter games? ")

if question.lower() == "platformers":
    question2 = input(
        "Nice! Would you want the bad guys to be aliens or mushrooms? ")
    if question2.lower() == "aliens":
        print("I suggest playing Metroid")
    elif question2.lower() == "mushrooms":
        print("I suggest playing Mario Bros")
elif question.lower() == "shooter":
    question3 = input(
        "Nice! Would you want the bad guys to be aliens or mushrooms? ")
    if question3.lower() == "aliens":
        print("I suggest playing Halo")
    elif question3.lower() == "mushrooms":
        print("I suggest playing The Last of Us")
