# Multiplication Table

print "Enter a number: "
number = gets.chomp.to_i

sum = 0
for i in 1..10
    result = number * i
    puts "#{number} x #{i} = #{result}"
    sum += result
end

puts "Summary of the table is #{sum}"