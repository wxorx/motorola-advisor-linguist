// ADVISOR_3704.c
// Generated by decompiling ADVISOR.EXE
// using Reko decompiler version 0.11.3.0.

#include "ADVISOR.h"

struct seg3704_t * g_ptr37040 = null; // 00037040
// 3704:00C8: void fn3704_00C8(Register (ptr16 Eq_693) es, Register (ptr16 Eq_694) ds)
void fn3704_00C8(struct Eq_693 * es, struct Eq_694 * ds)
{
	Eq_695 fp;
	byte ah_5;
	if (msdos_get_dos_version(out ah_5) >= 0x02)
	{
		cu16 si_12 = ds->w0002;
		cui16 si_13 = si_12 - seg3ADE;
		if (si_12 >= 19166)
			si_13 = 0x1000;
		word16 ax_122;
		__cli();
		__sti();
		if (fp < 0xB08E)
		{
			seg3ADE->wFFFFAF74 = 0x02C1;
			ax_122 = 0x00;
		}
		else
		{
			__align_stack<word16>((word16) fp + 0x0000B08E);
			seg3ADE->tFFFFAF72 = (word16) fp + 0x0000B08E;
			seg3ADE->wFFFFAF70 = (si_13 << 0x04) - 0x01;
			cu16 si_30 = seg3ADE + si_13 /16 0x0000B083;
			ds->w0002 = si_30;
			word16 bx_39;
			msdos_resize_memory_block(es, si_30 - es, out bx_39);
			seg3ADE->ptrFFFFAFE7 = ds;
			seg3ADE->wFFFFB016 = ds->w002C;
			seg3ADE->ptrFFFFB014 = ds;
			seg3ADE->wFFFFB012 = 0x81;
			byte seg3ADE_t::* di_126 = seg3ADE_t::aFFFFB082;
			word16 cx_129;
			for (cx_129 = 0x0E; cx_129 != 0x00; --cx_129)
			{
				seg3ADE->*di_126 = 0x00;
				++di_126;
			}
			seg3ADE->wFFFFAF74 = 606;
			seg3ADE->wFFFFAF76 = seg3ADE->wFFFFB024;
			fn2FCE_3B84(seg3ADE);
			fn3704_017C(seg3ADE);
			struct Eq_784 seg3ADE_t::* sp_105 = &seg3ADE_t::tBADDCAFE;
			(seg3ADE->*sp_105).wFFFFFFFE = fn36EA_00C3(seg3ADE);
			fn3704_025E(seg3ADE, (seg3ADE->*sp_105).wFFFFFFFE);
			seg3ADE->wFFFFAF74 = 606;
			ax_122 = 0x03;
		}
		fn3704_0310((byte) ax_122);
	}
	else
		msdos_terminate_program20();
}

// 3704:017C: void fn3704_017C(Register (ptr16 Eq_36) ds)
// Called from:
//      fn3704_00C8
void fn3704_017C(struct seg3ADE_t * ds)
{
	struct Eq_815 * cs;
	struct seg3ADE_t * ss;
	byte ah_5;
	byte al_6 = msdos_get_dos_version(out ah_5);
	ds->wAFE9 = SEQ(ah_5, al_6);
	word32 es_bx_12 = msdos_get_interrupt_vector(0x00);
	ds->tAFD5 = (word16) es_bx_12;
	ds->ptrAFD7 = SLICE(es_bx_12, selector, 16);
	msdos_set_interrupt_vector(0x00, &cs->t016C);
	struct seg3ADE_t * ds_149 = ss;
	if (ss->wB074 != 0x00)
	{
		struct Eq_858 seg3ADE_t::* sp_40;
		byte SCZO_46;
		ss->ptrB072();
		if (!SLICE(SCZO_46, bool, 1))
		{
			(ss->*sp_40).ptrFFFFFFFE = ss;
			fn3704_0310(0x02);
			return;
		}
		struct Eq_863 seg3ADE_t::* sp_52;
		ss->ptrB072();
		(ss->*sp_52).ptrFFFFFFFE = ss;
		ds_149 = (ss->*sp_52).ptrFFFFFFFE;
	}
	if ((ds_149->bA71C & 0x03) == 0x00)
	{
		struct Eq_875 * cx_69 = ds_149->ptrAFE7->ptr002C;
		if (cx_69 != 0x00)
		{
			byte Eq_875::* di_110 = &Eq_875::b0000;
			do
			{
				bool v29_239 = cx_69->*di_110 == 0x00;
				if (cx_69->*di_110 == 0x00)
					break;
				word16 cx_79 = 0x0C;
				byte seg3ADE_t::* si_80 = &seg3ADE_t::bFFFFAFC8;
				while (cx_79 != 0x00)
				{
					v29_239 = ds_149->*si_303 == cx_69->*di_110;
					si_80 = si_303 + 1;
					++di_110;
					--cx_79;
					si_303 = si_80;
					if (ds_149->*si_303 == cx_69->*di_110)
						break;
				}
				if (v29_239)
				{
					byte seg3ADE_t::* di_112 = seg3ADE_t::aFFFFAFF0;
					byte Eq_875::* si_114 = di_110 + 1;
					int16 cx_118 = (int16) (cx_69->*di_110);
					do
					{
						byte al_123 = cx_69->*si_114;
						++si_114;
						byte al_125 = al_123 + 0x01;
						if (al_123 != 0x01)
							al_125 = al_123;
						ds_149->*di_112 = al_125;
						++di_112;
						--cx_118;
					} while (cx_118 != 0x00);
					ds_149 = ss;
					break;
				}
				word16 cx_151 = 0x7FFF;
				bool v33_243 = false;
				while (cx_151 != 0x00)
				{
					v33_243 = cx_69->*di_110 != 0x00;
					++di_110;
					--cx_151;
					if (cx_69->*di_110 != 0x00)
						break;
				}
			} while (!v33_243);
		}
		Eq_888 bx_167;
		for (bx_167 = 0x04; bx_167 >= 0x00; --bx_167)
		{
			ds_149->*((word16) bx_167 + 0x0000AFF0) &= 191;
			byte dl_177 = (byte) dx_175;
			word16 dx_175;
			if (!msdos_ioctl_get_device_info(bx_167, out dx_175) && (dl_177 & 0x80) != 0x00)
				ds_149->*((word16) bx_167 + 0x0000AFF0) |= 0x40;
		}
		fn3704_02F2(~0x4F81, ~0x4F81, ds_149);
		fn3704_02F2(44838, ~0x5099, ds_149);
	}
	else
		ds_149->bA71C = 0x00;
}

// 3704:025E: Register mp16 fn3704_025E(Register (ptr16 Eq_36) ds, Stack word16 wArg04)
// Called from:
//      fn2FCE_52F8
//      fn3704_00C8
mp16 fn3704_025E(struct seg3ADE_t * ds, word16 wArg04)
{
	mp16 fp;
	word16 wLoc04;
	fn3704_02F2(0xB082, 0xB082, ds);
	fn3704_02F2(~0x4F81, ~0x4F81, ds);
	if (ds->wB064 == ~0x2929)
		(seg3704->*ds->ptrB06A)();
	fn3704_02F2(~0x4F81, 0xB082, ds);
	fn3704_02F2(0xB082, 0xB082, ds);
	if (fn3704_031A() != 0x00 && wArg04 == 0x00)
		wArg04 = 0xFF;
	fn3704_02C5(ds);
	if ((ds->bA71C & 0x04) == 0x00)
		msdos_terminate((byte) wArg04);
	else
	{
		ds->bA71C = 0x00;
		return fp - 2;
	}
}

// 3704:02C5: void fn3704_02C5(Register (ptr16 Eq_36) ds)
// Called from:
//      fn3704_025E
void fn3704_02C5(struct seg3ADE_t * ds)
{
	if (ds->wB074 != 0x00)
		ds->ptrB072();
	msdos_set_interrupt_vector(0x00, ds->tAFD5);
	if (ds->bB018 != 0x00)
		msdos_set_interrupt_vector(ds->bB019, ds->ptrB01A);
}

// 3704:02F2: void fn3704_02F2(Register Eq_1014 si, Register Eq_1014 di, Register (ptr16 Eq_36) ds)
// Called from:
//      fn3704_017C
//      fn3704_025E
void fn3704_02F2(Eq_1014 si, Eq_1014 di, struct seg3ADE_t * ds)
{
	while (si < di)
	{
		di -= 0x04;
		if ((ds->*di | ds->*((word16) di + 2)) != 0x00)
		{
			word16 ax_19;
			(ds->*di)();
		}
	}
}

// 3704:0310: void fn3704_0310(Register byte al)
// Called from:
//      fn3704_00C8
//      fn3704_017C
void fn3704_0310(byte al)
{
	word16 ax;
	cu16 bx_17 = SEQ(0x9A, (byte) ax);
	fn2FCE_3E33(~0x6500);
	fn2FCE_3E33(bx_17);
}

// 3704:031A: Register word16 fn3704_031A()
// Called from:
//      fn3704_025E
word16 fn3704_031A()
{
	return 0x00;
}

// 3704:0352: Register word16 fn3704_0352(Stack cu16 wArg04, Register out (ptr16 Eq_34) dxOut)
// Called from:
//      fn2FCE_52F0
word16 fn3704_0352(cu16 wArg04, struct seg3A61_t & dxOut)
{
	struct Eq_1134 seg3A61_t::* si_28 = &seg3A61_t::t0010;
	while (true)
	{
		cu16 ax_32 = (seg3A61->*si_28).t0000;
		struct Eq_1134 seg3A61_t::* si_33 = si_28 + 2;
		if (ax_32 == wArg04)
			break;
		si_33 = ax_32 + 0x01;
		if (ax_32 == 0x01)
			break;
		struct Eq_1134 seg3A61_t::* di_162 = si_33;
		word16 cx_84 = ~0x00;
		while (cx_84 != 0x00)
		{
			++di_162;
			--cx_84;
			if ((seg3A61->*di_162).t0000 != 0x00)
				break;
		}
		si_28 = di_162;
	}
	int32 dx_ax_48 = (int32) si_33;
	word16 ax_49 = (word16) dx_ax_48;
	struct seg3A61_t * dx_149 = SLICE(dx_ax_48, word16, 16);
	if (ax_49 != 0x00)
		dx_149 = seg3A61;
	dxOut = dx_149;
	return ax_49;
}

// 3704:038E: Register word16 fn3704_038E(Register (ptr16 Eq_36) ds)
// Called from:
//      fn2FCE_3A5D
//      fn2FCE_3BFF
word16 fn3704_038E(struct seg3ADE_t * ds)
{
	word16 ax;
	if (ds->wB074 != 0x00)
	{
		ds->ptrB072();
		ds->ptrB072();
	}
	return ax;
}
