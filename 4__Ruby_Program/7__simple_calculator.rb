# Main Calculator Program

print "Input first number: "
a = gets.chomp.to_f
print "Input second number: "
b = gets.chomp.to_f
print "Enter +, -, *, or /: "
symbol = gets.chomp

if symbol == '+'
    puts "The addition of #{a} and #{b} is #{a + b}"
elsif symbol == '-'
    puts "The subtraction of #{a} and #{b} is #{a - b}"
elsif symbol == '*'
    puts "The multiplication of #{a} and #{b} is #{a * b}"
elsif symbol == '/'
    if b == 0
        puts "Cannot be divided by 0"
    else
        puts "The division of #{a} and #{b} is #{a / b}"
    end
else
    puts "Please use corresponding symbols"
end