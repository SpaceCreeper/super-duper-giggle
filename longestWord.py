import re

words = open("words/words.txt")

longestAcceptableWord = ""

for word in words:
    testWord = str(word)

    if re.search("[bgijklmqtvwxz]", word) == None and len(str(testWord)) < len(longestAcceptableWord):
        continue
    elif re.search("[bgijklmqtvwxz]", word) != None and len(str(testWord)) > len(longestAcceptableWord):
        longestAcceptableWord = word

print(longestAcceptableWord)
