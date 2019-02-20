#!/bin/ruby

require 'json'
require 'stringio'



N = gets.to_i
lessThanSix = proc {|x| (2..5).each do |n|
    if n == x
        puts "Not Werid"
    end
end
}
moreThanSix = proc {|x| (6..20).each do |n|
    if n == x
        puts "Weird"
    end
end
}
lessThanTwenty = proc {|x| x >= 6 ? moreThanSix : lessThanSix.(x)}
iseven = proc {|x| x > 20 ? (puts "Not Weird") : lessThanTwenty.(x)}

if N.odd? then
    puts "Weird"
else
    iseven.(N)
end
