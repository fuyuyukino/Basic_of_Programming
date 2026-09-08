# Input width, length and print area, perimeter
print "Enter width of a rectangle: "
width = gets.chomp.to_i

print "Enter length of a rectangle: "
length = gets.chomp.to_i

area = width * length
perimeter = 2*(width + length)

print "The area of a rectangle is: #{area}\n"
print "The perimeter of a rectangle is: #{perimeter}"