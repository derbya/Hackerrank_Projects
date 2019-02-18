def	mask_article(str, arr)
	arr.each do |word|
		str.gsub!(word, strike(word))
	end
	return str
end

def	strike(str)
	return "<strike>#{str}</strike>"
end
