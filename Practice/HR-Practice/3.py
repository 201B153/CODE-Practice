#Day 8: Dictionaries and Maps
x = int(input())
dict = {}
for i in range(x):
    text = input().split()
    dict[text[0]] = text[1]
while True:
    try:
        text = input()
        if text in dict:
            print(text+"="+dict[text])
        else:
            print("Not found")
    except EOFError:
        break