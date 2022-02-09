
PROJ_NAME = project.c
SRC= src/main.c\
src/project.c\

TEST_SRC=src/project.c\
src/test_project.c\
unity/unity.c
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	   EXEC = out
   endif
endif

INC=-Idocumentation/inc\#this means .h file contains in documentation/inc
-Iunity\

Build : $(SRC) #remember to use this in .github/workflow
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))



clean:
	$(RM) $(call FixPath,*.out)


