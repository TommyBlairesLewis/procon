#!/usr/bin/ruby
#wget -O - https://projecteuler.net/project/resources/p081_matrix.txt
a=[]
while l=gets do a<<l.split(',').map(&:to_i) end
1.step(79){|i|a[0][i]+=a[0][i-1];a[i][0]+=a[i-1][0]}
1.step(79){|i|
	1.step(79){|j|
		a[i][j]+=[a[i-1][j],a[i][j-1]].min
	}
}
p a[79][79]