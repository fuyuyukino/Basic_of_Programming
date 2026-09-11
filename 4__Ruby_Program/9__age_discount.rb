# Give discount based on age

print "Enter a age: "
age = gets.chomp.to_i

if age > 60
    puts "You get discount up to 40%"
elsif age < 18
    puts "You get discount up to 20%"
else
    puts "You're not applicable for the discount"
end