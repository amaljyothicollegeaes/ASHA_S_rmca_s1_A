stringA = "Hii how are you"
print("Given String: \n",stringA)
vowels = "AaEeIiOoUu"
res = set([each for each in stringA if each in vowels])
print("The vlowels present in the string:\n ",res)
