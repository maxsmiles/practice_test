def how_many_ways(digitarray):
	num = 1
	digitarray = str(digitarray)
	length = len(digitarray)
	for i in range(length+1):
		if (i>1 and int(digitarray[i-1])<=6 and int(digitarray[i-2])==2) or (i>1 and int(digitarray[i-2])==1):
			num += 1
	print (num)
how_many_ways('0219')
