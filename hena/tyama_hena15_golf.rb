#!/usr/bin/env ruby
puts$<.map{|e|a=e.split('/').map{|e|e.to_i(16)};31.downto(0).map{|e|a[0][e]|a[1][e]*2}.join.gsub('12','102').gsub('21','201').split('0').map{|e|{'32'=>'L','31'=>'R','23'=>'J','131'=>'T','323'=>'U','313'=>'N','231'=>'S','132'=>'Z'}[e]}*''}