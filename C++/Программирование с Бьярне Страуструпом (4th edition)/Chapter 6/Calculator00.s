	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 3
	.globl	__ZN12Token_stream7putbackE5Token ; -- Begin function _ZN12Token_stream7putbackE5Token
	.p2align	2
__ZN12Token_stream7putbackE5Token:      ; @_ZN12Token_stream7putbackE5Token
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
; %bb.0:
	sub	sp, sp, #96
	stp	x29, x30, [sp, #80]             ; 16-byte Folded Spill
	add	x29, sp, #80
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x1, [x29, #-16]
	stur	x2, [x29, #-8]
	stur	x0, [x29, #-24]
	ldur	x8, [x29, #-24]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	ldrb	w8, [x8]
	tbz	w8, #0, LBB0_4
	b	LBB0_1
LBB0_1:
	add	x0, sp, #32
	str	x0, [sp]                        ; 8-byte Folded Spill
	adrp	x1, l_.str@PAGE
	add	x1, x1, l_.str@PAGEOFF
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
Ltmp0:
	bl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp1:
	b	LBB0_2
LBB0_2:
	add	x0, sp, #32
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB0_4
LBB0_3:
Ltmp2:
	mov	x8, x1
	str	x0, [sp, #24]
	str	w8, [sp, #20]
	add	x0, sp, #32
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB0_5
LBB0_4:
	ldr	x9, [sp, #8]                    ; 8-byte Folded Reload
	ldur	q0, [x29, #-16]
	stur	q0, [x9, #8]
	mov	w8, #1
	strb	w8, [x9]
	ldp	x29, x30, [sp, #80]             ; 16-byte Folded Reload
	add	sp, sp, #96
	ret
LBB0_5:
	ldr	x0, [sp, #24]
	bl	__Unwind_Resume
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
Lexception0:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Lfunc_begin0-Lfunc_begin0      ; >> Call Site 1 <<
	.uleb128 Ltmp0-Lfunc_begin0             ;   Call between Lfunc_begin0 and Ltmp0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp0-Lfunc_begin0             ; >> Call Site 2 <<
	.uleb128 Ltmp1-Ltmp0                    ;   Call between Ltmp0 and Ltmp1
	.uleb128 Ltmp2-Lfunc_begin0             ;     jumps to Ltmp2
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp1-Lfunc_begin0             ; >> Call Site 3 <<
	.uleb128 Lfunc_end0-Ltmp1               ;   Call between Ltmp1 and Lfunc_end0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE ; -- Begin function _Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
	.weak_definition	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
	.p2align	2
__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE: ; @_Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	mov	x0, #16
	bl	___cxa_allocate_exception
	str	x0, [sp]                        ; 8-byte Folded Spill
	ldur	x1, [x29, #-8]
Ltmp3:
	bl	__ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
Ltmp4:
	b	LBB1_1
LBB1_1:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	adrp	x1, __ZTISt13runtime_error@GOTPAGE
	ldr	x1, [x1, __ZTISt13runtime_error@GOTPAGEOFF]
	adrp	x2, __ZNSt13runtime_errorD1Ev@GOTPAGE
	ldr	x2, [x2, __ZNSt13runtime_errorD1Ev@GOTPAGEOFF]
	bl	___cxa_throw
LBB1_2:
Ltmp5:
	mov	x9, x0
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	mov	x8, x1
	str	x9, [sp, #16]
	str	w8, [sp, #12]
	bl	___cxa_free_exception
	b	LBB1_3
LBB1_3:
	ldr	x0, [sp, #16]
	bl	__Unwind_Resume
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table1:
Lexception1:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1      ; >> Call Site 1 <<
	.uleb128 Ltmp3-Lfunc_begin1             ;   Call between Lfunc_begin1 and Ltmp3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp3-Lfunc_begin1             ; >> Call Site 2 <<
	.uleb128 Ltmp4-Ltmp3                    ;   Call between Ltmp3 and Ltmp4
	.uleb128 Ltmp5-Lfunc_begin1             ;     jumps to Ltmp5
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp4-Lfunc_begin1             ; >> Call Site 3 <<
	.uleb128 Lfunc_end1-Ltmp4               ;   Call between Ltmp4 and Lfunc_end1
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end1:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x0, [x29, #-8]
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	ldr	x1, [sp, #16]
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN12Token_stream3getEv        ; -- Begin function _ZN12Token_stream3getEv
	.p2align	2
__ZN12Token_stream3getEv:               ; @_ZN12Token_stream3getEv
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
; %bb.0:
	sub	sp, sp, #128
	stp	x29, x30, [sp, #112]            ; 16-byte Folded Spill
	add	x29, sp, #112
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, __ZNSt3__13cinE@GOTPAGE
	ldr	x8, [x8, __ZNSt3__13cinE@GOTPAGEOFF]
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	stur	x0, [x29, #-24]
	ldur	x8, [x29, #-24]
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	ldrb	w8, [x8]
	tbz	w8, #0, LBB3_2
	b	LBB3_1
LBB3_1:
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	strb	wzr, [x8]
	ldur	q0, [x8, #8]
	stur	q0, [x29, #-16]
	b	LBB3_8
LBB3_2:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	sub	x1, x29, #25
	bl	__ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_
	ldursb	w8, [x29, #-25]
	subs	w8, w8, #33
                                        ; kill: def $x8 killed $w8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	subs	x8, x8, #80
	b.hi	LBB3_6
; %bb.3:
	ldr	x11, [sp, #8]                   ; 8-byte Folded Reload
	adrp	x10, lJTI3_0@PAGE
	add	x10, x10, lJTI3_0@PAGEOFF
Ltmp9:
	adr	x8, Ltmp9
	ldrsw	x9, [x10, x11, lsl #2]
	add	x8, x8, x9
	br	x8
LBB3_4:
	ldursb	w1, [x29, #-25]
	sub	x0, x29, #16
	bl	__ZN5TokenC1Ec
	b	LBB3_8
LBB3_5:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	ldursb	w1, [x29, #-25]
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE7putbackEc
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	sub	x1, x29, #40
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd
	ldur	d0, [x29, #-40]
	sub	x0, x29, #16
	mov	w1, #56
	bl	__ZN5TokenC1Ecd
	b	LBB3_8
LBB3_6:
	add	x0, sp, #48
	str	x0, [sp]                        ; 8-byte Folded Spill
	adrp	x1, l_.str.1@PAGE
	add	x1, x1, l_.str.1@PAGEOFF
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
Ltmp6:
	bl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp7:
	b	LBB3_7
LBB3_7:
	add	x0, sp, #48
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB3_8
LBB3_8:
	ldur	x0, [x29, #-16]
	ldur	x1, [x29, #-8]
	ldp	x29, x30, [sp, #112]            ; 16-byte Folded Reload
	add	sp, sp, #128
	ret
LBB3_9:
Ltmp8:
	mov	x8, x1
	str	x0, [sp, #40]
	str	w8, [sp, #36]
	add	x0, sp, #48
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB3_10
LBB3_10:
	ldr	x0, [sp, #40]
	bl	__Unwind_Resume
Lfunc_end2:
	.cfi_endproc
	.p2align	2
lJTI3_0:
	.long	LBB3_4-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_5-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_4-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_6-Ltmp9
	.long	LBB3_4-Ltmp9
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table3:
Lexception2:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Lfunc_begin2-Lfunc_begin2      ; >> Call Site 1 <<
	.uleb128 Ltmp6-Lfunc_begin2             ;   Call between Lfunc_begin2 and Ltmp6
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp6-Lfunc_begin2             ; >> Call Site 2 <<
	.uleb128 Ltmp7-Ltmp6                    ;   Call between Ltmp6 and Ltmp7
	.uleb128 Ltmp8-Lfunc_begin2             ;     jumps to Ltmp8
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp7-Lfunc_begin2             ; >> Call Site 3 <<
	.uleb128 Lfunc_end2-Ltmp7               ;   Call between Ltmp7 and Lfunc_end2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end2:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_ ; -- Begin function _ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_
	.weak_definition	__ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_
	.p2align	2
__ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_: ; @_ZNSt3__1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
; %bb.0:
	sub	sp, sp, #96
	stp	x29, x30, [sp, #80]             ; 16-byte Folded Spill
	add	x29, sp, #80
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	mov	w8, #0
	stur	wzr, [x29, #-20]
	ldur	x1, [x29, #-8]
	sub	x0, x29, #21
	str	x0, [sp, #24]                   ; 8-byte Folded Spill
	and	w2, w8, #0x1
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b
	ldr	x0, [sp, #24]                   ; 8-byte Folded Reload
	bl	__ZNKSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentrycvbEv
	tbz	w0, #0, LBB4_16
	b	LBB4_1
LBB4_1:
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp10:
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
Ltmp11:
	b	LBB4_2
LBB4_2:
Ltmp12:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv
	str	w0, [sp, #12]                   ; 4-byte Folded Spill
Ltmp13:
	b	LBB4_3
LBB4_3:
	ldr	w8, [sp, #12]                   ; 4-byte Folded Reload
	stur	w8, [x29, #-28]
	ldur	w8, [x29, #-28]
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	bl	__ZNSt3__111char_traitsIcE3eofEv
	mov	x1, x0
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	bl	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	tbz	w0, #0, LBB4_10
	b	LBB4_4
LBB4_4:
	ldur	w8, [x29, #-20]
	orr	w8, w8, #0x6
	stur	w8, [x29, #-20]
	b	LBB4_11
LBB4_5:
Ltmp14:
	mov	x8, x1
	str	x0, [sp, #40]
	str	w8, [sp, #36]
	b	LBB4_6
LBB4_6:
	ldr	x0, [sp, #40]
	bl	___cxa_begin_catch
	ldur	w8, [x29, #-20]
	orr	w8, w8, #0x1
	stur	w8, [x29, #-20]
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
	ldur	w1, [x29, #-20]
Ltmp15:
	bl	__ZNSt3__18ios_base18__setstate_nothrowEj
Ltmp16:
	b	LBB4_7
LBB4_7:
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp17:
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE10exceptionsEv
	str	w0, [sp, #4]                    ; 4-byte Folded Spill
Ltmp18:
	b	LBB4_8
LBB4_8:
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	tbz	w8, #0, LBB4_13
	b	LBB4_9
LBB4_9:
Ltmp19:
	bl	___cxa_rethrow
Ltmp20:
	b	LBB4_19
LBB4_10:
	ldur	w0, [x29, #-28]
	bl	__ZNSt3__111char_traitsIcE12to_char_typeEi
	ldur	x8, [x29, #-16]
	strb	w0, [x8]
	b	LBB4_11
LBB4_11:
	b	LBB4_14
LBB4_12:
Ltmp21:
	mov	x8, x1
	str	x0, [sp, #40]
	str	w8, [sp, #36]
Ltmp22:
	bl	___cxa_end_catch
Ltmp23:
	b	LBB4_15
LBB4_13:
	bl	___cxa_end_catch
	b	LBB4_14
LBB4_14:
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
	ldur	w1, [x29, #-20]
	bl	__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
	b	LBB4_16
LBB4_15:
	b	LBB4_17
LBB4_16:
	ldur	x0, [x29, #-8]
	ldp	x29, x30, [sp, #80]             ; 16-byte Folded Reload
	add	sp, sp, #96
	ret
LBB4_17:
	ldr	x0, [sp, #40]
	bl	__Unwind_Resume
LBB4_18:
Ltmp24:
	bl	___clang_call_terminate
LBB4_19:
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table4:
Lexception3:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Lfunc_begin3-Lfunc_begin3      ; >> Call Site 1 <<
	.uleb128 Ltmp10-Lfunc_begin3            ;   Call between Lfunc_begin3 and Ltmp10
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp10-Lfunc_begin3            ; >> Call Site 2 <<
	.uleb128 Ltmp13-Ltmp10                  ;   Call between Ltmp10 and Ltmp13
	.uleb128 Ltmp14-Lfunc_begin3            ;     jumps to Ltmp14
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp13-Lfunc_begin3            ; >> Call Site 3 <<
	.uleb128 Ltmp15-Ltmp13                  ;   Call between Ltmp13 and Ltmp15
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp15-Lfunc_begin3            ; >> Call Site 4 <<
	.uleb128 Ltmp20-Ltmp15                  ;   Call between Ltmp15 and Ltmp20
	.uleb128 Ltmp21-Lfunc_begin3            ;     jumps to Ltmp21
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp22-Lfunc_begin3            ; >> Call Site 5 <<
	.uleb128 Ltmp23-Ltmp22                  ;   Call between Ltmp22 and Ltmp23
	.uleb128 Ltmp24-Lfunc_begin3            ;     jumps to Ltmp24
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp23-Lfunc_begin3            ; >> Call Site 6 <<
	.uleb128 Lfunc_end3-Ltmp23              ;   Call between Ltmp23 and Lfunc_end3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end3:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN5TokenC1Ec                  ; -- Begin function _ZN5TokenC1Ec
	.weak_def_can_be_hidden	__ZN5TokenC1Ec
	.p2align	2
__ZN5TokenC1Ec:                         ; @_ZN5TokenC1Ec
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	sturb	w1, [x29, #-9]
	ldur	x0, [x29, #-8]
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	ldursb	w1, [x29, #-9]
	bl	__ZN5TokenC2Ec
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN5TokenC1Ecd                 ; -- Begin function _ZN5TokenC1Ecd
	.weak_def_can_be_hidden	__ZN5TokenC1Ecd
	.p2align	2
__ZN5TokenC1Ecd:                        ; @_ZN5TokenC1Ecd
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	sturb	w1, [x29, #-9]
	str	d0, [sp, #8]
	ldur	x0, [x29, #-8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	ldursb	w1, [x29, #-9]
	ldr	d0, [sp, #8]
	bl	__ZN5TokenC2Ecd
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.p2align	2                               ; -- Begin function __cxx_global_var_init
___cxx_global_var_init:                 ; @__cxx_global_var_init
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_streamC1Ev
	ldp	x29, x30, [sp], #16             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN12Token_streamC1Ev          ; -- Begin function _ZN12Token_streamC1Ev
	.weak_def_can_be_hidden	__ZN12Token_streamC1Ev
	.p2align	2
__ZN12Token_streamC1Ev:                 ; @_ZN12Token_streamC1Ev
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	bl	__ZN12Token_streamC2Ev
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z7primaryv                    ; -- Begin function _Z7primaryv
	.p2align	2
__Z7primaryv:                           ; @_Z7primaryv
Lfunc_begin4:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception4
; %bb.0:
	sub	sp, sp, #160
	stp	x29, x30, [sp, #144]            ; 16-byte Folded Spill
	add	x29, sp, #144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	stur	x0, [x29, #-32]
	stur	x1, [x29, #-24]
	ldursb	w8, [x29, #-32]
	str	w8, [sp, #20]                   ; 4-byte Folded Spill
	subs	w8, w8, #40
	b.eq	LBB9_2
	b	LBB9_1
LBB9_1:
	ldr	w8, [sp, #20]                   ; 4-byte Folded Reload
	subs	w8, w8, #56
	b.eq	LBB9_7
	b	LBB9_8
LBB9_2:
	bl	__Z10expressionv
	stur	d0, [x29, #-40]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	stur	x0, [x29, #-56]
	stur	x1, [x29, #-48]
	ldur	q0, [x29, #-56]
	stur	q0, [x29, #-32]
	ldursb	w8, [x29, #-32]
	subs	w8, w8, #41
	b.eq	LBB9_6
	b	LBB9_3
LBB9_3:
	add	x0, sp, #64
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	adrp	x1, l_.str.2@PAGE
	add	x1, x1, l_.str.2@PAGEOFF
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
Ltmp25:
	bl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp26:
	b	LBB9_4
LBB9_4:
	add	x0, sp, #64
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB9_6
LBB9_5:
Ltmp27:
	mov	x8, x1
	str	x0, [sp, #56]
	str	w8, [sp, #52]
	add	x0, sp, #64
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB9_12
LBB9_6:
	ldur	d0, [x29, #-40]
	stur	d0, [x29, #-8]
	b	LBB9_10
LBB9_7:
	ldur	d0, [x29, #-24]
	stur	d0, [x29, #-8]
	b	LBB9_10
LBB9_8:
	add	x0, sp, #24
	str	x0, [sp]                        ; 8-byte Folded Spill
	adrp	x1, l_.str.3@PAGE
	add	x1, x1, l_.str.3@PAGEOFF
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
Ltmp28:
	bl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp29:
	b	LBB9_9
LBB9_9:
	add	x0, sp, #24
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB9_10
LBB9_10:
	ldur	d0, [x29, #-8]
	ldp	x29, x30, [sp, #144]            ; 16-byte Folded Reload
	add	sp, sp, #160
	ret
LBB9_11:
Ltmp30:
	mov	x8, x1
	str	x0, [sp, #56]
	str	w8, [sp, #52]
	add	x0, sp, #24
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB9_12
LBB9_12:
	ldr	x0, [sp, #56]
	bl	__Unwind_Resume
Lfunc_end4:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table9:
Lexception4:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end4-Lcst_begin4
Lcst_begin4:
	.uleb128 Lfunc_begin4-Lfunc_begin4      ; >> Call Site 1 <<
	.uleb128 Ltmp25-Lfunc_begin4            ;   Call between Lfunc_begin4 and Ltmp25
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp25-Lfunc_begin4            ; >> Call Site 2 <<
	.uleb128 Ltmp26-Ltmp25                  ;   Call between Ltmp25 and Ltmp26
	.uleb128 Ltmp27-Lfunc_begin4            ;     jumps to Ltmp27
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp26-Lfunc_begin4            ; >> Call Site 3 <<
	.uleb128 Ltmp28-Ltmp26                  ;   Call between Ltmp26 and Ltmp28
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp28-Lfunc_begin4            ; >> Call Site 4 <<
	.uleb128 Ltmp29-Ltmp28                  ;   Call between Ltmp28 and Ltmp29
	.uleb128 Ltmp30-Lfunc_begin4            ;     jumps to Ltmp30
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp29-Lfunc_begin4            ; >> Call Site 5 <<
	.uleb128 Lfunc_end4-Ltmp29              ;   Call between Ltmp29 and Lfunc_end4
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end4:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z10expressionv                ; -- Begin function _Z10expressionv
	.p2align	2
__Z10expressionv:                       ; @_Z10expressionv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #112
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	__Z4termv
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	stur	x0, [x29, #-32]
	stur	x1, [x29, #-24]
	b	LBB10_1
LBB10_1:                                ; =>This Inner Loop Header: Depth=1
	ldursb	w8, [x29, #-32]
	str	w8, [sp, #12]                   ; 4-byte Folded Spill
	subs	w8, w8, #43
	b.eq	LBB10_3
	b	LBB10_2
LBB10_2:                                ;   in Loop: Header=BB10_1 Depth=1
	ldr	w8, [sp, #12]                   ; 4-byte Folded Reload
	subs	w8, w8, #45
	b.eq	LBB10_4
	b	LBB10_5
LBB10_3:                                ;   in Loop: Header=BB10_1 Depth=1
	bl	__Z4termv
	mov.16b	v1, v0
	ldur	d0, [x29, #-8]
	fadd	d0, d0, d1
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	str	x0, [sp, #48]
	str	x1, [sp, #56]
	ldr	q0, [sp, #48]
	stur	q0, [x29, #-32]
	b	LBB10_6
LBB10_4:                                ;   in Loop: Header=BB10_1 Depth=1
	bl	__Z4termv
	mov.16b	v1, v0
	ldur	d0, [x29, #-8]
	fsub	d0, d0, d1
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	str	x0, [sp, #32]
	str	x1, [sp, #40]
	ldr	q0, [sp, #32]
	stur	q0, [x29, #-32]
	b	LBB10_6
LBB10_5:
	ldur	q0, [x29, #-32]
	str	q0, [sp, #16]
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #24]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream7putbackE5Token
	ldur	d0, [x29, #-8]
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	add	sp, sp, #112
	ret
LBB10_6:                                ;   in Loop: Header=BB10_1 Depth=1
	b	LBB10_1
	.cfi_endproc
                                        ; -- End function
	.globl	__Z4termv                       ; -- Begin function _Z4termv
	.p2align	2
__Z4termv:                              ; @_Z4termv
Lfunc_begin5:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception5
; %bb.0:
	sub	sp, sp, #192
	stp	x29, x30, [sp, #176]            ; 16-byte Folded Spill
	add	x29, sp, #176
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	__Z7primaryv
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	stur	x0, [x29, #-32]
	stur	x1, [x29, #-24]
	b	LBB11_1
LBB11_1:                                ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB11_13 Depth 2
	ldursb	w8, [x29, #-32]
	str	w8, [sp, #12]                   ; 4-byte Folded Spill
	subs	w8, w8, #33
	b.eq	LBB11_10
	b	LBB11_2
LBB11_2:                                ;   in Loop: Header=BB11_1 Depth=1
	ldr	w8, [sp, #12]                   ; 4-byte Folded Reload
	subs	w8, w8, #42
	b.eq	LBB11_4
	b	LBB11_3
LBB11_3:                                ;   in Loop: Header=BB11_1 Depth=1
	ldr	w8, [sp, #12]                   ; 4-byte Folded Reload
	subs	w8, w8, #47
	b.eq	LBB11_5
	b	LBB11_17
LBB11_4:                                ;   in Loop: Header=BB11_1 Depth=1
	bl	__Z7primaryv
	mov.16b	v1, v0
	ldur	d0, [x29, #-8]
	fmul	d0, d0, d1
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	stur	x0, [x29, #-48]
	stur	x1, [x29, #-40]
	ldur	q0, [x29, #-48]
	stur	q0, [x29, #-32]
	b	LBB11_18
LBB11_5:                                ;   in Loop: Header=BB11_1 Depth=1
	bl	__Z7primaryv
	stur	d0, [x29, #-56]
	ldur	d0, [x29, #-56]
	fcmp	d0, #0.0
	b.ne	LBB11_9
	b	LBB11_6
LBB11_6:                                ;   in Loop: Header=BB11_1 Depth=1
	sub	x0, x29, #80
	str	x0, [sp]                        ; 8-byte Folded Spill
	adrp	x1, l_.str.4@PAGE
	add	x1, x1, l_.str.4@PAGEOFF
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1IDnEEPKc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
Ltmp31:
	bl	__Z5errorRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
Ltmp32:
	b	LBB11_7
LBB11_7:                                ;   in Loop: Header=BB11_1 Depth=1
	sub	x0, x29, #80
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB11_9
LBB11_8:
Ltmp33:
	mov	x8, x1
	str	x0, [sp, #88]
	str	w8, [sp, #84]
	sub	x0, x29, #80
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB11_19
LBB11_9:                                ;   in Loop: Header=BB11_1 Depth=1
	ldur	d1, [x29, #-56]
	ldur	d0, [x29, #-8]
	fdiv	d0, d0, d1
	stur	d0, [x29, #-8]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	str	x0, [sp, #64]
	str	x1, [sp, #72]
	ldr	q0, [sp, #64]
	stur	q0, [x29, #-32]
	b	LBB11_18
LBB11_10:                               ;   in Loop: Header=BB11_1 Depth=1
	ldur	d0, [x29, #-8]
	fcmp	d0, #0.0
	b.ne	LBB11_12
	b	LBB11_11
LBB11_11:                               ;   in Loop: Header=BB11_1 Depth=1
	fmov	d0, #1.00000000
	stur	d0, [x29, #-8]
	b	LBB11_12
LBB11_12:                               ;   in Loop: Header=BB11_1 Depth=1
	ldur	d0, [x29, #-8]
	fmov	d1, #1.00000000
	fsub	d0, d0, d1
	fcvtzs	w8, d0
	str	w8, [sp, #60]
	b	LBB11_13
LBB11_13:                               ;   Parent Loop BB11_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #60]
	subs	w8, w8, #1
	b.le	LBB11_16
	b	LBB11_14
LBB11_14:                               ;   in Loop: Header=BB11_13 Depth=2
	ldr	s1, [sp, #60]
                                        ; implicit-def: $d0
	mov.16b	v0, v1
	sshll.2d	v0, v0, #0
                                        ; kill: def $d0 killed $d0 killed $q0
	scvtf	d1, d0
	ldur	d0, [x29, #-8]
	fmul	d0, d0, d1
	stur	d0, [x29, #-8]
	b	LBB11_15
LBB11_15:                               ;   in Loop: Header=BB11_13 Depth=2
	ldr	w8, [sp, #60]
	subs	w8, w8, #1
	str	w8, [sp, #60]
	b	LBB11_13
LBB11_16:                               ;   in Loop: Header=BB11_1 Depth=1
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	str	x0, [sp, #40]
	str	x1, [sp, #48]
	ldur	q0, [sp, #40]
	stur	q0, [x29, #-32]
	b	LBB11_18
LBB11_17:
	ldur	q0, [x29, #-32]
	str	q0, [sp, #16]
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #24]
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream7putbackE5Token
	ldur	d0, [x29, #-8]
	ldp	x29, x30, [sp, #176]            ; 16-byte Folded Reload
	add	sp, sp, #192
	ret
LBB11_18:                               ;   in Loop: Header=BB11_1 Depth=1
	b	LBB11_1
LBB11_19:
	ldr	x0, [sp, #88]
	bl	__Unwind_Resume
Lfunc_end5:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table11:
Lexception5:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end5-Lcst_begin5
Lcst_begin5:
	.uleb128 Lfunc_begin5-Lfunc_begin5      ; >> Call Site 1 <<
	.uleb128 Ltmp31-Lfunc_begin5            ;   Call between Lfunc_begin5 and Ltmp31
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp31-Lfunc_begin5            ; >> Call Site 2 <<
	.uleb128 Ltmp32-Ltmp31                  ;   Call between Ltmp31 and Ltmp32
	.uleb128 Ltmp33-Lfunc_begin5            ;     jumps to Ltmp33
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp32-Lfunc_begin5            ; >> Call Site 3 <<
	.uleb128 Lfunc_end5-Ltmp32              ;   Call between Ltmp32 and Lfunc_end5
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end5:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
Lfunc_begin6:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception6
; %bb.0:
	sub	sp, sp, #144
	stp	x29, x30, [sp, #128]            ; 16-byte Folded Spill
	add	x29, sp, #128
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	movi	d0, #0000000000000000
	stur	d0, [x29, #-16]
	b	LBB12_1
LBB12_1:                                ; =>This Inner Loop Header: Depth=1
	adrp	x8, __ZNSt3__13cinE@GOTPAGE
	ldr	x8, [x8, __ZNSt3__13cinE@GOTPAGEOFF]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp34:
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEEcvbEv
	str	w0, [sp, #52]                   ; 4-byte Folded Spill
Ltmp35:
	b	LBB12_2
LBB12_2:                                ;   in Loop: Header=BB12_1 Depth=1
	ldr	w8, [sp, #52]                   ; 4-byte Folded Reload
	tbz	w8, #0, LBB12_22
	b	LBB12_3
LBB12_3:                                ;   in Loop: Header=BB12_1 Depth=1
Ltmp36:
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream3getEv
	str	x0, [sp, #32]                   ; 8-byte Folded Spill
	str	x1, [sp, #40]                   ; 8-byte Folded Spill
Ltmp37:
	b	LBB12_4
LBB12_4:                                ;   in Loop: Header=BB12_1 Depth=1
	ldr	x8, [sp, #40]                   ; 8-byte Folded Reload
	ldr	x9, [sp, #32]                   ; 8-byte Folded Reload
	stur	x9, [x29, #-48]
	stur	x8, [x29, #-40]
	ldursb	w8, [x29, #-48]
	subs	w8, w8, #113
	b.ne	LBB12_13
	b	LBB12_5
LBB12_5:
	b	LBB12_22
LBB12_6:
Ltmp48:
	mov	x8, x1
	stur	x0, [x29, #-24]
	stur	w8, [x29, #-28]
	b	LBB12_7
LBB12_7:
	ldur	w8, [x29, #-28]
	subs	w8, w8, #2
	b.ne	LBB12_11
	b	LBB12_8
LBB12_8:
	ldur	x0, [x29, #-24]
	bl	___cxa_begin_catch
	str	x0, [sp, #56]
	ldr	x0, [sp, #56]
	ldr	x8, [x0]
	ldr	x8, [x8, #16]
	blr	x8
	mov	x1, x0
Ltmp54:
	adrp	x0, __ZNSt3__14cerrE@GOTPAGE
	ldr	x0, [x0, __ZNSt3__14cerrE@GOTPAGEOFF]
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	str	x0, [sp, #24]                   ; 8-byte Folded Spill
Ltmp55:
	b	LBB12_9
LBB12_9:
Ltmp56:
	ldr	x0, [sp, #24]                   ; 8-byte Folded Reload
	mov	w1, #10
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
Ltmp57:
	b	LBB12_10
LBB12_10:
	mov	w8, #1
	stur	w8, [x29, #-4]
	bl	___cxa_end_catch
	b	LBB12_27
LBB12_11:
	ldur	x0, [x29, #-24]
	bl	___cxa_begin_catch
Ltmp49:
	adrp	x0, __ZNSt3__14cerrE@GOTPAGE
	ldr	x0, [x0, __ZNSt3__14cerrE@GOTPAGEOFF]
	adrp	x1, l_.str.6@PAGE
	add	x1, x1, l_.str.6@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
Ltmp50:
	b	LBB12_12
LBB12_12:
	mov	w8, #2
	stur	w8, [x29, #-4]
	bl	___cxa_end_catch
	b	LBB12_27
LBB12_13:                               ;   in Loop: Header=BB12_1 Depth=1
	ldursb	w8, [x29, #-48]
	subs	w8, w8, #59
	b.ne	LBB12_18
	b	LBB12_14
LBB12_14:                               ;   in Loop: Header=BB12_1 Depth=1
Ltmp40:
	adrp	x0, __ZNSt3__14coutE@GOTPAGE
	ldr	x0, [x0, __ZNSt3__14coutE@GOTPAGEOFF]
	adrp	x1, l_.str.5@PAGE
	add	x1, x1, l_.str.5@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
Ltmp41:
	b	LBB12_15
LBB12_15:                               ;   in Loop: Header=BB12_1 Depth=1
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	ldur	d0, [x29, #-16]
Ltmp42:
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
Ltmp43:
	b	LBB12_16
LBB12_16:                               ;   in Loop: Header=BB12_1 Depth=1
Ltmp44:
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	adrp	x1, __ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_@GOTPAGE
	ldr	x1, [x1, __ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_@GOTPAGEOFF]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
Ltmp45:
	b	LBB12_17
LBB12_17:                               ;   in Loop: Header=BB12_1 Depth=1
	b	LBB12_20
LBB12_18:                               ;   in Loop: Header=BB12_1 Depth=1
	ldur	q0, [x29, #-48]
	str	q0, [sp, #64]
	ldr	x1, [sp, #64]
	ldr	x2, [sp, #72]
Ltmp38:
	adrp	x0, _ts@PAGE
	add	x0, x0, _ts@PAGEOFF
	bl	__ZN12Token_stream7putbackE5Token
Ltmp39:
	b	LBB12_19
LBB12_19:                               ;   in Loop: Header=BB12_1 Depth=1
	b	LBB12_20
LBB12_20:                               ;   in Loop: Header=BB12_1 Depth=1
Ltmp46:
	bl	__Z10expressionv
	str	d0, [sp]                        ; 8-byte Folded Spill
Ltmp47:
	b	LBB12_21
LBB12_21:                               ;   in Loop: Header=BB12_1 Depth=1
	ldr	d0, [sp]                        ; 8-byte Folded Reload
	stur	d0, [x29, #-16]
	b	LBB12_1
LBB12_22:
	b	LBB12_27
LBB12_23:
Ltmp51:
	mov	x8, x1
	stur	x0, [x29, #-24]
	stur	w8, [x29, #-28]
Ltmp52:
	bl	___cxa_end_catch
Ltmp53:
	b	LBB12_24
LBB12_24:
	b	LBB12_28
LBB12_25:
Ltmp58:
	mov	x8, x1
	stur	x0, [x29, #-24]
	stur	w8, [x29, #-28]
Ltmp59:
	bl	___cxa_end_catch
Ltmp60:
	b	LBB12_26
LBB12_26:
	b	LBB12_28
LBB12_27:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #128]            ; 16-byte Folded Reload
	add	sp, sp, #144
	ret
LBB12_28:
	ldur	x0, [x29, #-24]
	bl	__Unwind_Resume
LBB12_29:
Ltmp61:
	bl	___clang_call_terminate
Lfunc_end6:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table12:
Lexception6:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase1-Lttbaseref1
Lttbaseref1:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end6-Lcst_begin6
Lcst_begin6:
	.uleb128 Ltmp34-Lfunc_begin6            ; >> Call Site 1 <<
	.uleb128 Ltmp37-Ltmp34                  ;   Call between Ltmp34 and Ltmp37
	.uleb128 Ltmp48-Lfunc_begin6            ;     jumps to Ltmp48
	.byte	3                               ;   On action: 2
	.uleb128 Ltmp37-Lfunc_begin6            ; >> Call Site 2 <<
	.uleb128 Ltmp54-Ltmp37                  ;   Call between Ltmp37 and Ltmp54
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp54-Lfunc_begin6            ; >> Call Site 3 <<
	.uleb128 Ltmp57-Ltmp54                  ;   Call between Ltmp54 and Ltmp57
	.uleb128 Ltmp58-Lfunc_begin6            ;     jumps to Ltmp58
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp57-Lfunc_begin6            ; >> Call Site 4 <<
	.uleb128 Ltmp49-Ltmp57                  ;   Call between Ltmp57 and Ltmp49
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp49-Lfunc_begin6            ; >> Call Site 5 <<
	.uleb128 Ltmp50-Ltmp49                  ;   Call between Ltmp49 and Ltmp50
	.uleb128 Ltmp51-Lfunc_begin6            ;     jumps to Ltmp51
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp50-Lfunc_begin6            ; >> Call Site 6 <<
	.uleb128 Ltmp40-Ltmp50                  ;   Call between Ltmp50 and Ltmp40
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp40-Lfunc_begin6            ; >> Call Site 7 <<
	.uleb128 Ltmp47-Ltmp40                  ;   Call between Ltmp40 and Ltmp47
	.uleb128 Ltmp48-Lfunc_begin6            ;     jumps to Ltmp48
	.byte	3                               ;   On action: 2
	.uleb128 Ltmp52-Lfunc_begin6            ; >> Call Site 8 <<
	.uleb128 Ltmp60-Ltmp52                  ;   Call between Ltmp52 and Ltmp60
	.uleb128 Ltmp61-Lfunc_begin6            ;     jumps to Ltmp61
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp60-Lfunc_begin6            ; >> Call Site 9 <<
	.uleb128 Lfunc_end6-Ltmp60              ;   Call between Ltmp60 and Lfunc_end6
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end6:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.byte	2                               ; >> Action Record 2 <<
                                        ;   Catch TypeInfo 2
	.byte	125                             ;   Continue to action 1
	.p2align	2
                                        ; >> Catch TypeInfos <<
Ltmp62:                                 ; TypeInfo 2
	.long	__ZTISt9exception@GOT-Ltmp62
	.long	0                               ; TypeInfo 1
Lttbase1:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEEcvbEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEEcvbEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEEcvbEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4failEv
	eor	w8, w0, #0x1
	and	w0, w8, #0x1
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc ; -- Begin function _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.p2align	2
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ; @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x8, [x29, #-8]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	ldr	x8, [sp, #16]
	str	x8, [sp]                        ; 8-byte Folded Spill
	ldr	x0, [sp, #16]
	bl	__ZNSt3__111char_traitsIcE6lengthEPKc
	ldr	x1, [sp]                        ; 8-byte Folded Reload
	mov	x2, x0
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E: ; @_ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	x1, [sp]
	ldr	x0, [sp, #8]
	ldr	x8, [sp]
	blr	x8
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_ ; -- Begin function _ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.p2align	2
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ; @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	str	x8, [sp]                        ; 8-byte Folded Spill
	ldr	x8, [sp, #8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
	mov	w1, #10
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
	mov	x8, x0
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	sxtb	w1, w8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	ldr	x0, [sp, #8]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	ldr	x0, [sp, #8]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	___clang_call_terminate ; -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	2
___clang_call_terminate:                ; @__clang_call_terminate
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	bl	___cxa_begin_catch
	bl	__ZSt9terminatev
                                        ; -- End function
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c ; -- Begin function _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.p2align	2
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c: ; @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_c
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	x8, x1
	str	x0, [sp, #8]
	add	x1, sp, #7
	strb	w8, [sp, #7]
	ldr	x0, [sp, #8]
	mov	x2, #1
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN5TokenC2Ec                  ; -- Begin function _ZN5TokenC2Ec
	.weak_def_can_be_hidden	__ZN5TokenC2Ec
	.p2align	2
__ZN5TokenC2Ec:                         ; @_ZN5TokenC2Ec
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	strb	w1, [sp, #7]
	ldr	x0, [sp, #8]
	ldrb	w8, [sp, #7]
	strb	w8, [x0]
	movi	d0, #0000000000000000
	str	d0, [x0, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN5TokenC2Ecd                 ; -- Begin function _ZN5TokenC2Ecd
	.weak_def_can_be_hidden	__ZN5TokenC2Ecd
	.p2align	2
__ZN5TokenC2Ecd:                        ; @_ZN5TokenC2Ecd
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	strb	w1, [sp, #23]
	str	d0, [sp, #8]
	ldr	x0, [sp, #24]
	ldrb	w8, [sp, #23]
	strb	w8, [x0]
	ldr	d0, [sp, #8]
	str	d0, [x0, #8]
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN12Token_streamC2Ev          ; -- Begin function _ZN12Token_streamC2Ev
	.weak_def_can_be_hidden	__ZN12Token_streamC2Ev
	.p2align	2
__ZN12Token_streamC2Ev:                 ; @_ZN12Token_streamC2Ev
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	str	x8, [sp]                        ; 8-byte Folded Spill
	strb	wzr, [x8]
	add	x0, x8, #8
	mov	w1, #48
	bl	__ZN5TokenC1Ec
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2IDnEEPKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	ldur	x0, [x29, #-8]
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	sub	x1, x29, #17
	sub	x2, x29, #18
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
	ldur	x8, [x29, #-16]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	ldur	x0, [x29, #-16]
	bl	__ZNSt3__111char_traitsIcE6lengthEPKc
	ldr	x1, [sp, #8]                    ; 8-byte Folded Reload
	mov	x2, x0
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_: ; @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	str	x2, [sp, #8]
	ldur	x0, [x29, #-8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #8]
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc ; -- Begin function _ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_definition	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	2
__ZNSt3__111char_traitsIcE6lengthEPKc:  ; @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	_strlen
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_: ; @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	str	x2, [sp, #24]
	ldur	x8, [x29, #-8]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	ldur	x0, [x29, #-16]
	bl	__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	bl	__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
	ldr	x0, [sp, #24]
	bl	__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	bl	__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE: ; @_ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE: ; @_ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp]
	ldr	x0, [sp]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE: ; @_ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #16]
	ldr	x0, [sp, #16]
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__19allocatorIcEC2Ev
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19allocatorIcEC2Ev
__ZNSt3__19allocatorIcEC2Ev:            ; @_ZNSt3__19allocatorIcEC2Ev
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__116__non_trivial_ifILb1ENS_9allocatorIcEEEC2Ev
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__116__non_trivial_ifILb1ENS_9allocatorIcEEEC2Ev
__ZNSt3__116__non_trivial_ifILb1ENS_9allocatorIcEEEC2Ev: ; @_ZNSt3__116__non_trivial_ifILb1ENS_9allocatorIcEEEC2Ev
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ; -- Begin function _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_definition	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	2
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ; @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin7:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception7
; %bb.0:
	sub	sp, sp, #160
	stp	x29, x30, [sp, #144]            ; 16-byte Folded Spill
	add	x29, sp, #144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	stur	x2, [x29, #-24]
	ldur	x1, [x29, #-8]
Ltmp68:
	sub	x0, x29, #40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp69:
	b	LBB31_1
LBB31_1:
Ltmp71:
	sub	x0, x29, #40
	bl	__ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
	str	w0, [sp, #68]                   ; 4-byte Folded Spill
Ltmp72:
	b	LBB31_2
LBB31_2:
	ldr	w8, [sp, #68]                   ; 4-byte Folded Reload
	tbz	w8, #0, LBB31_18
	b	LBB31_3
LBB31_3:
	ldur	x1, [x29, #-8]
	add	x0, sp, #72
	bl	__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
	ldur	x8, [x29, #-16]
	str	x8, [sp, #56]                   ; 8-byte Folded Spill
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp73:
	bl	__ZNKSt3__18ios_base5flagsEv
	str	w0, [sp, #64]                   ; 4-byte Folded Spill
Ltmp74:
	b	LBB31_4
LBB31_4:
	ldr	w8, [sp, #64]                   ; 4-byte Folded Reload
	mov	w9, #176
	and	w8, w8, w9
	subs	w8, w8, #32
	b.ne	LBB31_6
	b	LBB31_5
LBB31_5:
	ldur	x8, [x29, #-16]
	ldur	x9, [x29, #-24]
	add	x8, x8, x9
	str	x8, [sp, #48]                   ; 8-byte Folded Spill
	b	LBB31_7
LBB31_6:
	ldur	x8, [x29, #-16]
	str	x8, [sp, #48]                   ; 8-byte Folded Spill
	b	LBB31_7
LBB31_7:
	ldr	x8, [sp, #48]                   ; 8-byte Folded Reload
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	ldur	x8, [x29, #-16]
	ldur	x9, [x29, #-24]
	add	x8, x8, x9
	str	x8, [sp, #24]                   ; 8-byte Folded Spill
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x8, x8, x9
	str	x8, [sp, #32]                   ; 8-byte Folded Spill
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp75:
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
	str	w0, [sp, #44]                   ; 4-byte Folded Spill
Ltmp76:
	b	LBB31_8
LBB31_8:
	ldr	w8, [sp, #44]                   ; 4-byte Folded Reload
	ldr	x4, [sp, #32]                   ; 8-byte Folded Reload
	ldr	x3, [sp, #24]                   ; 8-byte Folded Reload
	ldr	x2, [sp, #16]                   ; 8-byte Folded Reload
	ldr	x1, [sp, #56]                   ; 8-byte Folded Reload
	ldr	x0, [sp, #72]
Ltmp77:
	sxtb	w5, w8
	bl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
Ltmp78:
	b	LBB31_9
LBB31_9:
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	sub	x0, x29, #64
	stur	x8, [x29, #-64]
	bl	__ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
	tbz	w0, #0, LBB31_17
	b	LBB31_10
LBB31_10:
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp79:
	mov	w1, #5
	bl	__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
Ltmp80:
	b	LBB31_11
LBB31_11:
	b	LBB31_17
LBB31_12:
Ltmp70:
	mov	x8, x1
	stur	x0, [x29, #-48]
	stur	w8, [x29, #-52]
	b	LBB31_14
LBB31_13:
Ltmp81:
	mov	x8, x1
	stur	x0, [x29, #-48]
	stur	w8, [x29, #-52]
	sub	x0, x29, #40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	b	LBB31_14
LBB31_14:
	ldur	x0, [x29, #-48]
	bl	___cxa_begin_catch
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp82:
	bl	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp83:
	b	LBB31_15
LBB31_15:
	bl	___cxa_end_catch
	b	LBB31_16
LBB31_16:
	ldur	x0, [x29, #-8]
	ldp	x29, x30, [sp, #144]            ; 16-byte Folded Reload
	add	sp, sp, #160
	ret
LBB31_17:
	b	LBB31_18
LBB31_18:
	sub	x0, x29, #40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	b	LBB31_16
LBB31_19:
Ltmp84:
	mov	x8, x1
	stur	x0, [x29, #-48]
	stur	w8, [x29, #-52]
Ltmp85:
	bl	___cxa_end_catch
Ltmp86:
	b	LBB31_20
LBB31_20:
	b	LBB31_21
LBB31_21:
	ldur	x0, [x29, #-48]
	bl	__Unwind_Resume
LBB31_22:
Ltmp87:
	bl	___clang_call_terminate
Lfunc_end7:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table31:
Lexception7:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase2-Lttbaseref2
Lttbaseref2:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end7-Lcst_begin7
Lcst_begin7:
	.uleb128 Ltmp68-Lfunc_begin7            ; >> Call Site 1 <<
	.uleb128 Ltmp69-Ltmp68                  ;   Call between Ltmp68 and Ltmp69
	.uleb128 Ltmp70-Lfunc_begin7            ;     jumps to Ltmp70
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp71-Lfunc_begin7            ; >> Call Site 2 <<
	.uleb128 Ltmp80-Ltmp71                  ;   Call between Ltmp71 and Ltmp80
	.uleb128 Ltmp81-Lfunc_begin7            ;     jumps to Ltmp81
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp80-Lfunc_begin7            ; >> Call Site 3 <<
	.uleb128 Ltmp82-Ltmp80                  ;   Call between Ltmp80 and Ltmp82
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp82-Lfunc_begin7            ; >> Call Site 4 <<
	.uleb128 Ltmp83-Ltmp82                  ;   Call between Ltmp82 and Ltmp83
	.uleb128 Ltmp84-Lfunc_begin7            ;     jumps to Ltmp84
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp83-Lfunc_begin7            ; >> Call Site 5 <<
	.uleb128 Ltmp85-Ltmp83                  ;   Call between Ltmp83 and Ltmp85
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp85-Lfunc_begin7            ; >> Call Site 6 <<
	.uleb128 Ltmp86-Ltmp85                  ;   Call between Ltmp85 and Ltmp86
	.uleb128 Ltmp87-Lfunc_begin7            ;     jumps to Ltmp87
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp86-Lfunc_begin7            ; >> Call Site 7 <<
	.uleb128 Lfunc_end7-Ltmp86              ;   Call between Ltmp86 and Lfunc_end7
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end7:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase2:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
__ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv: ; @_ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldrb	w8, [x8]
	and	w0, w8, #0x1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ; -- Begin function _ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_definition	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	2
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ; @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin8:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception8
; %bb.0:
	sub	sp, sp, #160
	stp	x29, x30, [sp, #144]            ; 16-byte Folded Spill
	add	x29, sp, #144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-16]
	stur	x1, [x29, #-24]
	stur	x2, [x29, #-32]
	stur	x3, [x29, #-40]
	stur	x4, [x29, #-48]
	sturb	w5, [x29, #-49]
	ldur	x8, [x29, #-16]
	cbnz	x8, LBB33_2
	b	LBB33_1
LBB33_1:
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB33_23
LBB33_2:
	ldur	x8, [x29, #-40]
	ldur	x9, [x29, #-24]
	subs	x8, x8, x9
	stur	x8, [x29, #-64]
	ldur	x0, [x29, #-48]
	bl	__ZNKSt3__18ios_base5widthEv
	str	x0, [sp, #72]
	ldr	x8, [sp, #72]
	ldur	x9, [x29, #-64]
	subs	x8, x8, x9
	b.le	LBB33_4
	b	LBB33_3
LBB33_3:
	ldur	x9, [x29, #-64]
	ldr	x8, [sp, #72]
	subs	x8, x8, x9
	str	x8, [sp, #72]
	b	LBB33_5
LBB33_4:
	str	xzr, [sp, #72]
	b	LBB33_5
LBB33_5:
	ldur	x8, [x29, #-32]
	ldur	x9, [x29, #-24]
	subs	x8, x8, x9
	str	x8, [sp, #64]
	ldr	x8, [sp, #64]
	subs	x8, x8, #0
	b.le	LBB33_9
	b	LBB33_6
LBB33_6:
	ldur	x0, [x29, #-16]
	ldur	x1, [x29, #-24]
	ldr	x2, [sp, #64]
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	ldr	x8, [sp, #64]
	subs	x8, x0, x8
	b.eq	LBB33_8
	b	LBB33_7
LBB33_7:
                                        ; kill: def $x8 killed $xzr
	stur	xzr, [x29, #-16]
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB33_23
LBB33_8:
	b	LBB33_9
LBB33_9:
	ldr	x8, [sp, #72]
	subs	x8, x8, #0
	b.le	LBB33_18
	b	LBB33_10
LBB33_10:
	ldr	x1, [sp, #72]
	ldursb	w2, [x29, #-49]
	add	x0, sp, #40
	str	x0, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldur	x8, [x29, #-16]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
	mov	x1, x0
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldr	x2, [sp, #72]
Ltmp89:
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
Ltmp90:
	b	LBB33_11
LBB33_11:
	ldr	x8, [sp, #16]                   ; 8-byte Folded Reload
	ldr	x9, [sp, #72]
	subs	x8, x8, x9
	b.eq	LBB33_14
	b	LBB33_12
LBB33_12:
                                        ; kill: def $x8 killed $xzr
	stur	xzr, [x29, #-16]
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	mov	w8, #1
	str	w8, [sp, #24]
	b	LBB33_15
LBB33_13:
Ltmp91:
	mov	x8, x1
	str	x0, [sp, #32]
	str	w8, [sp, #28]
	add	x0, sp, #40
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	b	LBB33_24
LBB33_14:
	str	wzr, [sp, #24]
	b	LBB33_15
LBB33_15:
	add	x0, sp, #40
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	ldr	w8, [sp, #24]
	cbz	w8, LBB33_17
	b	LBB33_16
LBB33_16:
	b	LBB33_23
LBB33_17:
	b	LBB33_18
LBB33_18:
	ldur	x8, [x29, #-40]
	ldur	x9, [x29, #-32]
	subs	x8, x8, x9
	str	x8, [sp, #64]
	ldr	x8, [sp, #64]
	subs	x8, x8, #0
	b.le	LBB33_22
	b	LBB33_19
LBB33_19:
	ldur	x0, [x29, #-16]
	ldur	x1, [x29, #-32]
	ldr	x2, [sp, #64]
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	ldr	x8, [sp, #64]
	subs	x8, x0, x8
	b.eq	LBB33_21
	b	LBB33_20
LBB33_20:
                                        ; kill: def $x8 killed $xzr
	stur	xzr, [x29, #-16]
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB33_23
LBB33_21:
	b	LBB33_22
LBB33_22:
	ldur	x0, [x29, #-48]
	mov	x1, #0
	bl	__ZNSt3__18ios_base5widthEl
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB33_23
LBB33_23:
	ldur	x0, [x29, #-8]
	ldp	x29, x30, [sp, #144]            ; 16-byte Folded Reload
	add	sp, sp, #160
	ret
LBB33_24:
	ldr	x0, [sp, #32]
	bl	__Unwind_Resume
; %bb.25:
Lfunc_end8:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table33:
Lexception8:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end8-Lcst_begin8
Lcst_begin8:
	.uleb128 Lfunc_begin8-Lfunc_begin8      ; >> Call Site 1 <<
	.uleb128 Ltmp89-Lfunc_begin8            ;   Call between Lfunc_begin8 and Ltmp89
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp89-Lfunc_begin8            ; >> Call Site 2 <<
	.uleb128 Ltmp90-Ltmp89                  ;   Call between Ltmp89 and Ltmp90
	.uleb128 Ltmp91-Lfunc_begin8            ;     jumps to Ltmp91
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp90-Lfunc_begin8            ; >> Call Site 3 <<
	.uleb128 Lfunc_end8-Ltmp90              ;   Call between Ltmp90 and Lfunc_end8
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end8:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE: ; @_ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x0, [x29, #-8]
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	ldr	x1, [sp, #16]
	bl	__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5flagsEv
__ZNKSt3__18ios_base5flagsEv:           ; @_ZNKSt3__18ios_base5flagsEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w0, [x8, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	str	x8, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__111char_traitsIcE3eofEv
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	ldr	w1, [x8, #144]
	bl	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	tbz	w0, #0, LBB36_2
	b	LBB36_1
LBB36_1:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	mov	w1, #32
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
	ldr	x9, [sp]                        ; 8-byte Folded Reload
	sxtb	w8, w0
	str	w8, [x9, #144]
	b	LBB36_2
LBB36_2:
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	ldr	w8, [x8, #144]
	sxtb	w0, w8
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
__ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv: ; @_ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x8, [x8]
	subs	x8, x8, #0
	cset	w8, eq
	and	w0, w8, #0x1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj: ; @_ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	ldr	x0, [sp, #8]
	ldr	w1, [sp, #4]
	bl	__ZNSt3__18ios_base8setstateEj
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5widthEv
__ZNKSt3__18ios_base5widthEv:           ; @_ZNKSt3__18ios_base5widthEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x0, [x8, #24]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl: ; @_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	str	x2, [sp, #8]
	ldur	x0, [x29, #-8]
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #8]
	ldr	x8, [x0]
	ldr	x8, [x8, #96]
	blr	x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	strb	w2, [sp, #15]
	ldur	x0, [x29, #-8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	ldr	x1, [sp, #16]
	ldrsb	w2, [sp, #15]
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	bl	__ZNSt3__1L12__to_addressIcEEPT_S2_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__18ios_base5widthEl
__ZNSt3__18ios_base5widthEl:            ; @_ZNSt3__18ios_base5widthEl
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	x1, [sp, #16]
	ldr	x9, [sp, #24]
	ldr	x8, [x9, #24]
	str	x8, [sp, #8]
	ldr	x8, [sp, #16]
	str	x8, [x9, #24]
	ldr	x0, [sp, #8]
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	strb	w2, [sp, #15]
	ldur	x0, [x29, #-8]
	str	x0, [sp]                        ; 8-byte Folded Spill
	add	x1, sp, #14
	add	x2, sp, #13
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldr	x1, [sp, #16]
	ldrsb	w2, [sp, #15]
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L12__to_addressIcEEPT_S2_
__ZNSt3__1L12__to_addressIcEEPT_S2_:    ; @_ZNSt3__1L12__to_addressIcEEPT_S2_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	ldur	x0, [x29, #-8]
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	tbz	w0, #0, LBB46_2
	b	LBB46_1
LBB46_1:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB46_3
LBB46_2:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB46_3
LBB46_3:
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	ldrb	w8, [x0, #23]
                                        ; kill: def $x8 killed $w8
	ands	x8, x8, #0x80
	cset	w8, ne
	and	w0, w8, #0x1
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	ldr	x0, [x0]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	bl	__ZNSt3__114pointer_traitsIPcE10pointer_toERc
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv: ; @_ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv: ; @_ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv: ; @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv: ; @_ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__114pointer_traitsIPcE10pointer_toERc
__ZNSt3__114pointer_traitsIPcE10pointer_toERc: ; @_ZNSt3__114pointer_traitsIPcE10pointer_toERc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__1L9addressofIcEEPT_RS1_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L9addressofIcEEPT_RS1_
__ZNSt3__1L9addressofIcEEPT_RS1_:       ; @_ZNSt3__1L9addressofIcEEPT_RS1_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE: ; @_ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
Lfunc_begin9:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception9
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x8, [x29, #-8]
	str	x8, [sp]                        ; 8-byte Folded Spill
	ldr	x8, [sp, #16]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp100:
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
Ltmp101:
	b	LBB56_1
LBB56_1:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	str	x8, [x0]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
LBB56_2:
Ltmp102:
	bl	___clang_call_terminate
Lfunc_end9:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table56:
Lexception9:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase3-Lttbaseref3
Lttbaseref3:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end9-Lcst_begin9
Lcst_begin9:
	.uleb128 Ltmp100-Lfunc_begin9           ; >> Call Site 1 <<
	.uleb128 Ltmp101-Ltmp100                ;   Call between Ltmp100 and Ltmp101
	.uleb128 Ltmp102-Lfunc_begin9           ;     jumps to Ltmp102
	.byte	1                               ;   On action: 1
Lcst_end9:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase3:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__18ios_base5rdbufEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5rdbufEv
__ZNKSt3__18ios_base5rdbufEv:           ; @_ZNKSt3__18ios_base5rdbufEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x0, [x8, #40]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE11eq_int_typeEii ; -- Begin function _ZNSt3__111char_traitsIcE11eq_int_typeEii
	.weak_definition	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.p2align	2
__ZNSt3__111char_traitsIcE11eq_int_typeEii: ; @_ZNSt3__111char_traitsIcE11eq_int_typeEii
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	subs	w8, w8, w9
	cset	w8, eq
	and	w0, w8, #0x1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE3eofEv ; -- Begin function _ZNSt3__111char_traitsIcE3eofEv
	.weak_definition	__ZNSt3__111char_traitsIcE3eofEv
	.p2align	2
__ZNSt3__111char_traitsIcE3eofEv:       ; @_ZNSt3__111char_traitsIcE3eofEv
	.cfi_startproc
; %bb.0:
	mov	w0, #-1
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
Lfunc_begin10:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception10
; %bb.0:
	sub	sp, sp, #80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	sturb	w1, [x29, #-9]
	ldur	x0, [x29, #-8]
	sub	x8, x29, #24
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNKSt3__18ios_base6getlocEv
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
Ltmp105:
	bl	__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
Ltmp106:
	b	LBB61_1
LBB61_1:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	ldursb	w1, [x29, #-9]
Ltmp107:
	bl	__ZNKSt3__15ctypeIcE5widenEc
	str	w0, [sp, #4]                    ; 4-byte Folded Spill
Ltmp108:
	b	LBB61_2
LBB61_2:
	sub	x0, x29, #24
	bl	__ZNSt3__16localeD1Ev
	ldr	w8, [sp, #4]                    ; 4-byte Folded Reload
	sxtb	w0, w8
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	add	sp, sp, #80
	ret
LBB61_3:
Ltmp109:
	mov	x8, x1
	str	x0, [sp, #32]
	str	w8, [sp, #28]
	sub	x0, x29, #24
	bl	__ZNSt3__16localeD1Ev
	b	LBB61_4
LBB61_4:
	ldr	x0, [sp, #32]
	bl	__Unwind_Resume
Lfunc_end10:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table61:
Lexception10:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end10-Lcst_begin10
Lcst_begin10:
	.uleb128 Lfunc_begin10-Lfunc_begin10    ; >> Call Site 1 <<
	.uleb128 Ltmp105-Lfunc_begin10          ;   Call between Lfunc_begin10 and Ltmp105
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp105-Lfunc_begin10          ; >> Call Site 2 <<
	.uleb128 Ltmp108-Ltmp105                ;   Call between Ltmp105 and Ltmp108
	.uleb128 Ltmp109-Lfunc_begin10          ;     jumps to Ltmp109
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp108-Lfunc_begin10          ; >> Call Site 3 <<
	.uleb128 Lfunc_end10-Ltmp108            ;   Call between Ltmp108 and Lfunc_end10
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end10:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE: ; @_ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__15ctypeIcE5widenEc
__ZNKSt3__15ctypeIcE5widenEc:           ; @_ZNKSt3__15ctypeIcE5widenEc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	strb	w1, [sp, #7]
	ldr	x0, [sp, #8]
	ldrsb	w1, [sp, #7]
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
	blr	x8
	sxtb	w0, w0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__18ios_base8setstateEj
__ZNSt3__18ios_base8setstateEj:         ; @_ZNSt3__18ios_base8setstateEj
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	ldr	x0, [sp, #8]
	ldr	w8, [x0, #32]
	ldr	w9, [sp, #4]
	orr	w1, w8, w9
	bl	__ZNSt3__18ios_base5clearEj
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentrycvbEv
__ZNKSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentrycvbEv: ; @_ZNKSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentrycvbEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldrb	w8, [x8]
	and	w0, w8, #0x1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv
__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv: ; @_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #16]
	ldr	x9, [sp, #16]
	str	x9, [sp, #8]                    ; 8-byte Folded Spill
	ldr	x8, [x9, #24]
	ldr	x9, [x9, #32]
	subs	x8, x8, x9
	b.ne	LBB66_2
	b	LBB66_1
LBB66_1:
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	ldr	x8, [x0]
	ldr	x8, [x8, #80]
	blr	x8
	stur	w0, [x29, #-4]
	b	LBB66_3
LBB66_2:
	ldr	x10, [sp, #8]                   ; 8-byte Folded Reload
	ldr	x8, [x10, #24]
	add	x9, x8, #1
	str	x9, [x10, #24]
	ldrsb	w0, [x8]
	bl	__ZNSt3__111char_traitsIcE11to_int_typeEc
	stur	w0, [x29, #-4]
	b	LBB66_3
LBB66_3:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE12to_char_typeEi ; -- Begin function _ZNSt3__111char_traitsIcE12to_char_typeEi
	.weak_definition	__ZNSt3__111char_traitsIcE12to_char_typeEi
	.p2align	2
__ZNSt3__111char_traitsIcE12to_char_typeEi: ; @_ZNSt3__111char_traitsIcE12to_char_typeEi
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	sxtb	w0, w8
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__18ios_base18__setstate_nothrowEj
__ZNSt3__18ios_base18__setstate_nothrowEj: ; @_ZNSt3__18ios_base18__setstate_nothrowEj
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	w1, [sp, #20]
	ldr	x8, [sp, #24]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	ldr	x8, [x8, #40]
	cbz	x8, LBB68_2
	b	LBB68_1
LBB68_1:
	ldr	x9, [sp, #8]                    ; 8-byte Folded Reload
	ldr	w10, [sp, #20]
	ldr	w8, [x9, #32]
	orr	w8, w8, w10
	str	w8, [x9, #32]
	b	LBB68_3
LBB68_2:
	ldr	x9, [sp, #8]                    ; 8-byte Folded Reload
	ldr	w8, [sp, #20]
	orr	w10, w8, #0x1
	ldr	w8, [x9, #32]
	orr	w8, w8, w10
	str	w8, [x9, #32]
	b	LBB68_3
LBB68_3:
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE10exceptionsEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE10exceptionsEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE10exceptionsEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__18ios_base10exceptionsEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE11to_int_typeEc ; -- Begin function _ZNSt3__111char_traitsIcE11to_int_typeEc
	.weak_definition	__ZNSt3__111char_traitsIcE11to_int_typeEc
	.p2align	2
__ZNSt3__111char_traitsIcE11to_int_typeEc: ; @_ZNSt3__111char_traitsIcE11to_int_typeEc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	strb	w0, [sp, #15]
	ldrb	w0, [sp, #15]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base10exceptionsEv
__ZNKSt3__18ios_base10exceptionsEv:     ; @_ZNKSt3__18ios_base10exceptionsEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w0, [x8, #36]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4failEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4failEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4failEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__18ios_base4failEv
	and	w0, w0, #0x1
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base4failEv
__ZNKSt3__18ios_base4failEv:            ; @_ZNKSt3__18ios_base4failEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w8, [x8, #32]
	mov	w9, #5
	ands	w8, w8, w9
	cset	w8, ne
	and	w0, w8, #0x1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.p2align	2                               ; -- Begin function _GLOBAL__sub_I_Calculator00.cpp
__GLOBAL__sub_I_Calculator00.cpp:       ; @_GLOBAL__sub_I_Calculator00.cpp
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	___cxx_global_var_init
	ldp	x29, x30, [sp], #16             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"putback (): \320\261\321\203\321\204\320\265\321\200 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275"

l_.str.1:                               ; @.str.1
	.asciz	"\320\235\320\265\320\262\320\265\321\200\320\275\320\260\321\217 \320\273\320\265\320\272\321\201\320\265\320\274\320\260"

	.globl	_ts                             ; @ts
.zerofill __DATA,__common,_ts,24,3
l_.str.2:                               ; @.str.2
	.asciz	"\321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 ')"

l_.str.3:                               ; @.str.3
	.asciz	"\321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217 \320\277\320\265\321\200\320\262\320\270\321\207\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265"

l_.str.4:                               ; @.str.4
	.asciz	"\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\260 \320\275\321\203\320\273\321\214"

l_.str.5:                               ; @.str.5
	.asciz	"= "

l_.str.6:                               ; @.str.6
	.asciz	"\320\270\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265\n"

	.section	__DATA,__mod_init_func,mod_init_funcs
	.p2align	3
	.quad	__GLOBAL__sub_I_Calculator00.cpp
.subsections_via_symbols
