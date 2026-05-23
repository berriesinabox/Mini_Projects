import random

print("WELCOME TO THE GAME")
print( "Rules:\n"
    "1. Guess the correct word.\n"
    "2. You have 6 wrong guesses before you lose.")
print("Best of Luck!\n")

word_bank = {
    "e": ["apple", "book", "cake", "door", "fish", "girl", "hand", "jump", "kite", "lamp"],
    "m": ["banana", "castle", "desert", "engine", "garden", "hammer", "insect", "jungle", "mirror", "planet"],
    "h": ["astronaut", "butterfly", "chocolate", "dinosaur", "lightning", "mountain", "orchestra", "pancake", "telescope", "volcano"],
}
hangman_pics = [
    """
     +---+
     |   |
         |
         |
         |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
         |
         |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
     |   |
         |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
    /|   |
         |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
    /|\\  |
         |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
    /|\\  |
    /    |
         |
    =========
    """,
    """
     +---+
     |   |
     O   |
    /|\\  |
    / \\  |
         |
    =========
    """
]

mode = input("Select mode — easy (e), medium (m), hard (h): ").strip().lower()

if mode in word_bank:
    words = word_bank[mode]
    secret_word = random.choice(words)
    print(f"\nGreat! I’ve picked a {len(secret_word)}‑letter word. Let’s play!")
    
    box=[]
    for i in range(len(secret_word)):
        box.append("_")
    print(box)
    guessed_letters = set()
    wrong_guesses = 0
    max_wrong = 6

    print(hangman_pics[0])
    print("Word so far: " + " ".join(box))

    while wrong_guesses < max_wrong and '_' in box: #box.count("_")>0
        guess=input("\nGuess a letter: ").strip().lower()

        if len(guess) != 1 or not guess.isalpha():
            print("please enter a single alphabet")
            continue
        if guess in guessed_letters:
            print(" you have already guessed this letter.")
            continue

        guessed_letters.add(guess)

        if guess in secret_word:
            for i in range(len(secret_word)):
                ch = secret_word[i]
                if ch == guess:
                    box[i]=guess
            print("good job")
        else:
            wrong_guesses += 1
            print(f"Wrong! {max_wrong - wrong_guesses} guesses left.")
            print(hangman_pics[wrong_guesses])

        print("Word so far: " + " ".join(box))
        print("Guessed letters: " + " ".join(sorted(guessed_letters)))

    if "_" not in box:
        print("congratulations you guessed the word", secret_word)
    else:
        print("you are out of guesses . the word was ",secret_word)

else:
    print("Sorry, invalid mode selected.")
