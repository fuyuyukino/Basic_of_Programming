# Input cm and print m
print "Enter length in centimeter: "
cm = gets.chomp.to_i

m = cm / 100
leftover_cm = cm % 100
print "Cm to m: #{m}m and #{leftover_cm}cm"