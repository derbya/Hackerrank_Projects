def	sum_terms(n)
	(1..n).inject(0) {|sum, val| sum += val * val + 1}
end
