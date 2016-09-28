
example-O1.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <remdiv>:
   0:	49 89 d0             	mov    %rdx,%r8
   3:	48 89 f8             	mov    %rdi,%rax
   6:	48 99                	cqto   
   8:	48 f7 fe             	idiv   %rsi
   b:	49 89 00             	mov    %rax,(%r8)
   e:	48 89 11             	mov    %rdx,(%rcx)
  11:	c3                   	retq   
