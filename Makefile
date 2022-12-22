build:
	@gcc main.c -o owlybench
clean:
	@rm -rf owlybench
all:
	clean build