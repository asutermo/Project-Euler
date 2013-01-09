#!/usr/bin/ruby
#a = (m^2-n^2)
#b = (2mn)
#c = (m^2 + n^2)
foundMaxTriple = false;
for c in 5 ... 500
	for b in 4 ... c
		for a in 3 ... b
			if (a * a) + (b * b) == (c * c)
				if (a + b + c) == 1000
					foundMaxTriple = true
				end
			end
			if (foundMaxTriple)
				puts a.to_s + " " + b.to_s + " " + c.to_s
				break
			end
		end
		if (foundMaxTriple)
			break
		end
	end
	if (foundMaxTriple)
		break
	end
end
solution = a * b * c
puts solution