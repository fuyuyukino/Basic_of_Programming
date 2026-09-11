# Input grade and calculate with if statements

print "Enter a grade: "
grade = gets.chomp.to_i

if grade >= 90 and grade <= 100
    cls = 'A'
elsif grade >= 80 and grade <= 100
    cls = 'B'
elsif grade >= 70 and grade <= 100
    cls = 'C'
elsif grade >= 60 and grade <= 100
    cls = 'D'
elsif grade >= 0 and grade <= 100
    cls = 'F'
else
    puts "Please enter correct grade score"
    exit
end

puts "The grade classification is #{cls}"