# PROJ_NAME = project.c
# SRC = project.c main.c 

# ifdef OS
#    RM = del /q
#    FixPath = $(subst /,\,$1)
#    EXEC = exe
# else
#    ifeq ($(shell uname), Linux)
#       RM = rm -rf
#       FixPath = $1
# 	  EXEC = out
#    endif
# endif

# build : project.c main.c 
# 	gcc main.c project.c -lm -o project.out
# run : build
# 	./project.out
# clean :
# 	rm -rf *.o *.out *.i *.s


PROJ_NAME = project.c
SRC= main.c project.c

# We use this because different terminals work differently and windows and linux have different delete commands
# if the os is windows use below 
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else # else the os is Linux use below
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build : $(SRC)
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)