def	count_multibyte_char(str)
	count = 0
	str.each_char do |x|
		count += 1 if x.bytesize > 1
	end
	return count
end
