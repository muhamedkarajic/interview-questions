def inputNumbers(numbers):
    print("Enter your numbers: ")
    while True:
        numbers.append(int(input()))
        if(numbers[-1] == 0):
            del numbers[-1]
            break

def separateNumbers(numbers, numbersOdd): 
    length = len(numbers)-1
    while(length>0):
        if(numbers[length]%2!=0):
            numbersOdd.append(numbers[length])
            del numbers[length]
        length-=1

numbers = []
numbersOdd = []

inputNumbers(numbers)
separateNumbers(numbers, numbersOdd)

print("Even numbers:", numbers)
print("Odd numbers:", numbersOdd)
