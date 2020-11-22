# Get the test case text.
text = input()

# Make all letters in the text lower case.
text = text.lower()

# Make a tuple with all lower case vowels.
vowels = ('a', 'e', 'i', 'o', 'u', 'y')

# Remove all vowels from the text string.
text = ''.join([letter for letter in text if letter not in vowels])

# Add a . before each letter in the string.
text = ''.join([f'.{letter}' for letter in text])

print(text)