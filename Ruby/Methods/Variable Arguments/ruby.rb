def	full_name(first, *rest)
	rest.reduce(first) {|name, segment| name + " " + segment}
end
