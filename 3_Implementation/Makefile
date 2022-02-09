
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

INC=-Iheader\
-Iunity\

all : $(SRC)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,*.out)


