class Cup
  attr_accessor :filled

  def initialize
    filled = false
  end

  def fill
    if filled
      puts "The cup was already filled. Water is spilling everywhere.\n"
    else
      puts "You have filled the cup with water. It looks slightly hazy.\n"
      self.filled = true
    end
  end

  def spill
    if filled
      puts "You have purposely spilled the water from the cup. "\
           "You are a menace to society.\n"
      self.filled = false
    else
      puts "You attempt to spill water from the empty cup. "\
           "Your peers are concerned about your mental health.\n"
    end
  end

end

cup = Cup.new
puts "You have an empty cup."
puts "1. Fill it\n"\
     "2. Spill it\n"\
     "3. Move on.\n"

until (input = gets.chomp) == '3'
  if input == '1'
    cup.fill
  elsif input == '2'
    cup.spill
  else
    puts "Nothing you just did was related to the cup"
  end
end
puts "The cup won't miss you."
