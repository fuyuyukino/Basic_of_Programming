# Input cm and print m
cm = int(input("Enter length in centimeter: "))

m = int(cm / 100)
leftover_cm = cm % 100
print(f"Cm to m: {m}m and {leftover_cm}cm")