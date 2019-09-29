

output:	main.o helpers.o core.o config.o
	cc main.o -o output.out

# helpers.o:	helpers.c
# 	cc -c helpers.c


# core.o:	core.c
# 	cc -c core.c


# config.o:	config.c
# 	cc -c config.c

# main.o:	main.c
# 	cc -c main.c

clear:
	rm *.o output.out

run:
	./output.out