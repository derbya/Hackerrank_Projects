def	process_text(arr)
	string = ""
	arr.each do |str|
		string.concat(str.strip).concat(" ")
	end
	return string.strip
end
