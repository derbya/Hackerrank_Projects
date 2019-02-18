def	serial_average(string)
	values = string.split('-')
	average = (values[1].to_f + values[2].to_f) / 2
	"#{values[0]}-#{average.round}"
end
