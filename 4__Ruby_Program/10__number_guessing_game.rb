# Number Guessing Game

puts "=== Number Guessing Game ==="

play = 10
win = false

random_number = rand(1..100)

for i in 1..play
    print "[Turn #{i} / #{play}] Choose random number from 0 - 100: "
    choose_number = gets.chomp.to_i
    
    if choose_number > random_number
        puts "The number is smaller than this!"
    elsif choose_number < random_number
        puts "The number is bigger than this!"
    else
        puts "You win! The number is #{random_number}"
        win = true
        break
    end
end

unless win
    puts "You lose! The number is #{random_number}"
end