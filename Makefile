
edit : main.o  \
       opcode.o error.o symbols.o directives.o
        cc -o edit main.o kbd.o command.o display.o \
                   insert.o search.o files.o utils.o

main.o : main.c defs.h
        cc -c main.c
opcodes.o : opcodes.c headers.h
        cc -c opcodes.c
error.o : error.c headers.h
        cc -c error.c
directives.o : directives.c headers.h
        cc -c directives.c
symbols.o : symbols.c defs.h  headers.h
        cc -c symbols.c
clean :
        rm edit main.o kbd.o command.o display.o \
           insert.o search.o files.o utils.o




# output: 
#  g++ main.o 


#  main.o: main.c
#     g++ -c main.c


# message.o: 
# 		g++ -c message.

# clean:

