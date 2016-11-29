# algoritmo bolha em Ruby:



#def bolha(vetor)
	
#	begin
#		trocado = false
#		for i in (0..4)
#			if vetor[i] > vetor[i+1]
#				a = vetor[i]
#				b = vetor[i+1]
#				vetor[i] = b
#				vetor[i+1] = a
#				trocado = true
#				puts vetor[i], vetor[i+1]
#			end
#		end
#	end while($trocado==false)
#	return vetor
#end

#puts bolha([8,7,6,3,2,1])



vetor = [8,71,0.6,15,4,32,1,120]

begin
	trocado = false
		for i in (0..6)
			#puts vetor[i],vetor[i+1]
			if vetor[i] > vetor[i+1]
				#puts "Aha"
				a = vetor[i]
				b = vetor[i+1]
				vetor[i] = b
				vetor[i+1] = a
				#puts vetor[i], vetor[i+1]
			end
	end
end while trocado==true

puts vetor

vetor[0] = a
puts vetor
