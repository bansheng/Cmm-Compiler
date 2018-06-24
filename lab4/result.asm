ori $sp, $0, 1024
ori $fp, $0, 1024
jal main
ori $v0, $0, 10
syscall

main:
sw $ra, 0($sp)
sw $fp, -4($sp)
addu $fp, $sp, $0
ori $1, $0, 36
sw $1, -32($sp)
sub $sp, $sp, $1
lw $t0, -28($fp)
ori $t0, $0, 100
sw $t0, -28($fp)
lw $t1, -12($fp)
ori $t1, $0, 10
sw $t1, -12($fp)
addu $a1, $t1, $0
sw $t0, -28($fp)
sw $t1, -12($fp)
jal Crash
lw $t0, -24($fp)
addu $t0, $v0, $0
lw $t1, -8($fp)
addu $t1, $t0, $0
sw $t1, -8($fp)
addu $a0, $t1, $0
ori $v0, $0, 34
syscall
lw $1, 4($sp)
add $sp, $sp, $1
lw $ra, 0($sp)
lw $fp, -4($sp)
addu $v0, $zero, $0
jr $ra

Crash:
sw $ra, 0($sp)
sw $fp, -4($sp)
addu $fp, $sp, $0
ori $1, $0, 52
sw $1, -48($sp)
sub $sp, $sp, $1
lw $t0, -44($fp)
ori $t0, $0, 0
sw $t0, -44($fp)
lw $t1, -40($fp)
ori $t1, $0, 0
sw $t1, -40($fp)
label0:
lw $t2, -24($fp)
addu $t2, $t1, $0
sw $t2, -24($fp)
lw $t3, -20($fp)
addu $t3, $a1, $0
sw $t3, -20($fp)
slt $1, $t2, $t3
addi, $1, $1, -1
beq $1, $0, label1
j label2
label1:
lw $t4, -36($fp)
addu $t4, $t0, $0
sw $t4, -36($fp)
lw $t5, -32($fp)
addu $t5, $t1, $0
sw $t5, -32($fp)
add $t0, $t4, $t5
sw $t0, -44($fp)
lw $t6, -28($fp)
addu $t6, $t0, $0
sw $t6, -28($fp)
addu $a0, $t6, $0
ori $v0, $0, 34
syscall
lw $t7, -16($fp)
addu $t7, $t1, $0
sw $t7, -16($fp)
lw $s0, -12($fp)
ori $s0, $0, 1
sw $s0, -12($fp)
add $t1, $t7, $s0
sw $t1, -40($fp)
j label0
label2:
lw $s1, -8($fp)
addu $s1, $t0, $0
sw $s1, -8($fp)
lw $1, 4($sp)
add $sp, $sp, $1
lw $ra, 0($sp)
lw $fp, -4($sp)
addu $v0, $s1, $0
jr $ra
