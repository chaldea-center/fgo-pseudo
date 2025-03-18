__int64 __fastcall BrotliEncoderCompressStream(
        __int64 a1,
        int a2,
        unsigned __int64 *a3,
        const void **a4,
        unsigned __int64 *a5,
        void **a6,
        unsigned __int64 *a7)
{
  int v14; // w9
  int v15; // w8
  int v16; // w9
  int v17; // w10
  int v18; // w8
  int v19; // w10
  unsigned __int64 v20; // x9
  __int128 v21; // q0
  __int128 v22; // q0
  int v23; // w10
  int v24; // w11
  unsigned int v25; // w8
  int v26; // w13
  int v27; // w10
  int v28; // w12
  int v29; // w10
  unsigned __int64 v30; // x10
  __int16 v31; // w9
  char v32; // w10
  __int16 v33; // w9
  __int16 v34; // w9
  __int64 v35; // x8
  __int64 result; // x0
  __int64 v37; // x8
  int v38; // w9
  int v39; // w8
  _WORD *v40; // x27
  __int16 v41; // w10
  unsigned __int64 v42; // x9
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  unsigned __int64 v45; // x8
  unsigned __int64 v46; // x8
  unsigned __int64 v47; // x28
  __int64 v48; // x28
  int v49; // w8
  unsigned int v50; // w11
  unsigned __int64 v51; // x9
  unsigned int v52; // w8
  unsigned __int64 v53; // x9
  __int64 v54; // x26
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x27
  __int64 v59; // x11
  unsigned __int64 v60; // x8
  unsigned __int64 v61; // x9
  bool v62; // cf
  unsigned __int64 v63; // x8
  bool v64; // cc
  unsigned __int64 v65; // x23
  unsigned int v66; // w8
  char *v67; // x28
  unsigned __int64 v68; // x29
  _BYTE *v69; // x0
  const void *v70; // x1
  __int64 v71; // x23
  _BYTE *v72; // x27
  __int64 v73; // x8
  unsigned int v74; // w8
  int v75; // w8
  unsigned int v76; // w23
  _BYTE *v77; // x0
  const void *v78; // x1
  __int64 v79; // x26
  _BYTE *v80; // x27
  __int64 v81; // x8
  __int64 v82; // x9
  __int64 v83; // x23
  void *v84; // x0
  char *v85; // x1
  size_t v86; // w2
  int v87; // w10
  unsigned int v88; // w10
  _DWORD *v89; // x8
  int v90; // w8
  __int64 v91; // x8
  int v92; // w9
  unsigned __int64 v93; // x8
  bool v94; // w11
  int v95; // w28
  unsigned int v96; // w29
  __int64 v97; // x9
  unsigned __int64 v98; // x10
  __int64 v99; // x8
  __int64 v100; // x9
  bool v101; // zf
  __int64 v102; // x8
  int v103; // w8
  unsigned __int64 v104; // x9
  size_t v105; // w2
  size_t v106; // w2
  __int64 v107; // x8
  unsigned __int64 v108; // x8
  _BOOL4 v109; // w9
  _BOOL4 v110; // w27
  unsigned __int64 v111; // x28
  _BOOL4 v112; // w23
  int v113; // w26
  int v114; // w8
  _BYTE *v115; // x29
  unsigned int v116; // w27
  __int64 v117; // x0
  void *v118; // x1
  char v119; // w8
  unsigned __int64 v120; // x9
  unsigned __int64 v121; // x10
  __int16 v122; // w9
  __int64 v123; // [xsp+28h] [xbp-D8h]
  __int64 v124; // [xsp+30h] [xbp-D0h]
  __int64 v125; // [xsp+58h] [xbp-A8h]
  __int64 v126; // [xsp+60h] [xbp-A0h]
  __int64 v127; // [xsp+68h] [xbp-98h]
  unsigned __int64 v128; // [xsp+78h] [xbp-88h]
  unsigned __int64 v129; // [xsp+80h] [xbp-80h]
  _QWORD *v130; // [xsp+80h] [xbp-80h]
  int v131; // [xsp+8Ch] [xbp-74h]
  int v132[2]; // [xsp+90h] [xbp-70h] BYREF
  unsigned __int64 v133; // [xsp+98h] [xbp-68h] BYREF

  if ( !*(_DWORD *)(a1 + 6556) )
  {
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 352) = -33554432;
    v15 = v14 & ~(v14 >> 31);
    if ( v15 >= 11 )
      v15 = 11;
    *(_DWORD *)(a1 + 6544) = -1;
    *(_DWORD *)(a1 + 4) = v15;
    if ( v15 <= 2 )
      *(_DWORD *)(a1 + 36) = 0;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 >= 10 )
    {
      if ( *(_DWORD *)(a1 + 36) )
        v17 = 30;
      else
        v17 = 24;
      if ( v16 <= v17 )
      {
LABEL_13:
        if ( (unsigned int)v15 >= 2 )
        {
          if ( v15 >= 4 )
          {
            v19 = *(_DWORD *)(a1 + 12);
            if ( v19 )
            {
              if ( v19 <= 16 )
                v18 = 16;
              else
                v18 = *(_DWORD *)(a1 + 12);
              if ( v18 >= 24 )
                v18 = 24;
            }
            else
            {
              v64 = v15 < 9;
              v18 = 16;
              if ( !v64 && v16 >= 17 )
              {
                if ( v16 == 17 )
                  v18 = 17;
                else
                  v18 = 18;
              }
            }
          }
          else
          {
            v18 = 14;
          }
        }
        else
        {
          v18 = v16;
        }
        *(_DWORD *)(a1 + 12) = v18;
        sub_1C363A0(a1);
        v20 = *(_QWORD *)(a1 + 16);
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0xF0000000FLL;
          *((_QWORD *)&v21 + 1) = 0xF0000000FLL;
          *(_OWORD *)(a1 + 272) = v21;
          v22 = *(_OWORD *)(a1 + 272);
          *(_BYTE *)(a1 + 355) = 2;
          *(_OWORD *)(a1 + 336) = v22;
        }
        v24 = *(_DWORD *)(a1 + 8);
        v23 = *(_DWORD *)(a1 + 12);
        v25 = *(_DWORD *)(a1 + 4);
        v26 = 1 << v23;
        if ( v24 > v23 )
          LOBYTE(v23) = *(_DWORD *)(a1 + 8);
        v27 = 1 << (v23 + 1);
        *(_DWORD *)(a1 + 176) = v27;
        *(_DWORD *)(a1 + 180) = v27 - 1;
        if ( v24 <= 18 )
          v28 = 18;
        else
          v28 = v24;
        *(_DWORD *)(a1 + 184) = v26;
        *(_DWORD *)(a1 + 188) = v27 + v26;
        if ( v25 >= 2 )
          v29 = v24;
        else
          v29 = v28;
        if ( v20 )
        {
          v30 = (1LL << v29) - 16;
          if ( v20 >= v30 )
            v20 = v30;
          *(_QWORD *)(a1 + 16) = v20;
          goto LABEL_52;
        }
        if ( *(_DWORD *)(a1 + 36) )
        {
          *(_WORD *)(a1 + 352) = ((v29 & 0x3F) << 8) | 0x11;
          *(_BYTE *)(a1 + 354) = 14;
LABEL_52:
          if ( !v25 )
          {
            memcpy((void *)(a1 + 5584), &unk_10108D2, 0x80u);
            memcpy((void *)(a1 + 5712), &unk_1010952, 0x100u);
            *(_OWORD *)(a1 + 5968) = unk_C1ABA5;
            *(_OWORD *)(a1 + 6009) = *(__int128 *)((char *)&xmmword_C1ABC5 + 9);
            *(_OWORD *)(a1 + 6000) = xmmword_C1ABC5;
            *(_OWORD *)(a1 + 5984) = unk_C1ABB5;
            *(_QWORD *)(a1 + 6480) = 448LL;
          }
          *(_DWORD *)(a1 + 6556) = 1;
          goto LABEL_55;
        }
        if ( v29 == 17 )
        {
          v31 = 1;
          v32 = 7;
        }
        else
        {
          if ( v29 == 16 )
          {
            *(_WORD *)(a1 + 352) = 0;
            *(_BYTE *)(a1 + 354) = 1;
            goto LABEL_52;
          }
          if ( v29 < 18 )
          {
            v34 = 16 * v29;
            v32 = 7;
            v31 = v34 - 127;
          }
          else
          {
            v33 = 2 * v29;
            v32 = 4;
            v31 = v33 - 33;
          }
        }
        *(_WORD *)(a1 + 352) = v31;
        *(_BYTE *)(a1 + 354) = v32;
        goto LABEL_52;
      }
    }
    else
    {
      v17 = 10;
    }
    v16 = v17;
    *(_DWORD *)(a1 + 8) = v17;
    goto LABEL_13;
  }
LABEL_55:
  v35 = *(unsigned int *)(a1 + 6544);
  if ( (_DWORD)v35 != -1 )
  {
    result = 0LL;
    if ( a2 != 3 || *a3 != v35 )
      return result;
LABEL_60:
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v37 = 0x40000000LL;
      if ( !((*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 264)) >> 30) )
        v37 = (unsigned int)(*(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 264));
      *(_QWORD *)(a1 + 24) = v37;
    }
    if ( *a3 <= 0x1000000 )
    {
      v38 = *(_DWORD *)(a1 + 6548);
      if ( !v38 )
      {
        *(_DWORD *)(a1 + 6544) = *a3;
        *(_DWORD *)(a1 + 6548) = 3;
LABEL_73:
        v40 = (_WORD *)(a1 + 6528);
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( (unsigned int)sub_1C3375C(a1, a5, a6, a7) )
                ;
              if ( *(_QWORD *)(a1 + 6512) )
                return 1LL;
              if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 256) )
                break;
              result = sub_1C33884(a1, 0LL, 1LL, a1 + 6512, a1 + 6504);
              if ( !(_DWORD)result )
                return result;
            }
            if ( *(_DWORD *)(a1 + 6548) == 3 )
              break;
            v46 = *(unsigned int *)(a1 + 6544);
            if ( !(_DWORD)v46 )
            {
              *(_QWORD *)(a1 + 6544) = 0xFFFFFFFFLL;
              return 1LL;
            }
            if ( *a5 )
            {
              if ( *a5 <= v46 )
                v47 = *a5;
              else
                v47 = *(unsigned int *)(a1 + 6544);
              memcpy(*a6, *a4, v47);
              *a4 = (char *)*a4 + v47;
              *a3 -= v47;
              *(_DWORD *)(a1 + 6544) -= v47;
              *a6 = (char *)*a6 + v47;
              *a5 -= v47;
            }
            else
            {
              *(_QWORD *)(a1 + 6504) = v40;
              if ( (unsigned int)v46 >= 0x10 )
                v48 = 16LL;
              else
                v48 = (unsigned int)v46;
              memcpy((void *)(a1 + 6528), *a4, v48);
              *a4 = (char *)*a4 + v48;
              *a3 -= v48;
              v49 = *(_DWORD *)(a1 + 6544);
              *(_QWORD *)(a1 + 6512) = v48;
              *(_DWORD *)(a1 + 6544) = v49 - v48;
            }
          }
          v41 = *(_WORD *)(a1 + 352);
          v42 = *(unsigned __int8 *)(a1 + 354);
          *(_QWORD *)(a1 + 6504) = v40;
          v43 = *(unsigned int *)(a1 + 6544);
          *v40 = v41;
          *(_WORD *)(a1 + 352) = 0;
          *(_BYTE *)(a1 + 354) = 0;
          *(_QWORD *)((char *)v40 + (v42 >> 3)) = *((unsigned __int8 *)v40 + (v42 >> 3));
          *(_QWORD *)((char *)v40 + ((v42 + 1) >> 3)) = (3LL << ((v42 + 1) & 7)) | *((unsigned __int8 *)v40
                                                                                   + ((v42 + 1) >> 3));
          *(_QWORD *)((char *)v40 + ((v42 + 3) >> 3)) = *((unsigned __int8 *)v40 + ((v42 + 3) >> 3));
          v44 = v42 + 4;
          if ( (_DWORD)v43 == 1 )
          {
            v50 = 0;
          }
          else
          {
            if ( !(_DWORD)v43 )
            {
              *(_QWORD *)((char *)v40 + (v44 >> 3)) = *((unsigned __int8 *)v40 + (v44 >> 3));
              v45 = v42 + 6;
              goto LABEL_96;
            }
            v50 = ((__clz(v43 - 1) ^ 0x1F) + 8) >> 3;
          }
          v51 = v42 + 6;
          *(_QWORD *)((char *)v40 + (v44 >> 3)) = ((unsigned __int64)v50 << (v44 & 7)) | *((unsigned __int8 *)v40
                                                                                         + (v44 >> 3));
          *(_QWORD *)((char *)v40 + (v51 >> 3)) = ((v43 - 1) << (v51 & 7)) | *((unsigned __int8 *)v40 + (v51 >> 3));
          v45 = v51 + 8 * v50;
LABEL_96:
          *(_QWORD *)(a1 + 6512) = (v45 + 7) >> 3;
          *(_DWORD *)(a1 + 6548) = 4;
        }
      }
      if ( (unsigned int)(v38 - 3) <= 1 )
        goto LABEL_73;
    }
    return 0LL;
  }
  if ( a2 == 3 )
    goto LABEL_60;
  v39 = *(_DWORD *)(a1 + 6548);
  if ( (unsigned int)(v39 - 3) < 2 || v39 && *a3 )
    return 0LL;
  v52 = *(_DWORD *)(a1 + 4);
  v131 = a2;
  if ( v52 < 2 )
  {
    v53 = 1LL << *(_DWORD *)(a1 + 8);
    v129 = v53;
    if ( *a3 < v53 )
      v53 = *a3;
    if ( v53 >= 0x20000 )
      v54 = 0x20000LL;
    else
      v54 = v53;
    v127 = a1 + 144;
    if ( v52 == 1 )
    {
      v55 = *(_QWORD *)(a1 + 6488);
      if ( v53 >= 0x20000 && !v55 )
      {
        *(_QWORD *)(a1 + 6488) = sub_1C4A718(v127, 0x80000LL);
        v56 = sub_1C4A718(v127, 0x20000LL);
        v57 = *(_QWORD *)(a1 + 6488);
        LODWORD(v126) = v56;
        *(_QWORD *)(a1 + 6496) = v56;
        if ( v57 )
        {
          LODWORD(v125) = v57;
LABEL_187:
          v123 = 0LL;
          v124 = 0LL;
          while ( 1 )
          {
LABEL_188:
            while ( (unsigned int)sub_1C3375C(a1, a5, a6, a7) )
              ;
            if ( *(_QWORD *)(a1 + 6512) || *(_DWORD *)(a1 + 6548) || (v108 = *a3, !a2) && !v108 )
            {
              sub_1C4A73C(v127, v123);
              sub_1C4A73C(v127, v124);
              if ( *(_DWORD *)(a1 + 6548) == 1 && !*(_QWORD *)(a1 + 6512) )
                goto LABEL_218;
              return 1LL;
            }
            v109 = a2 == 1;
            v110 = a2 == 2;
            v111 = v129 >= v108 ? *a3 : v129;
            v112 = v108 <= v129;
            v113 = v109 && v112;
            v133 = *(unsigned __int8 *)(a1 + 354);
            if ( v109 && v112 && !v111 )
              break;
            v128 = *a5;
            if ( 2 * v111 + 503 > *a5 )
              v115 = (_BYTE *)sub_1C36690(a1);
            else
              v115 = *a6;
            *v115 = *(_BYTE *)(a1 + 352);
            v116 = v110 && v112;
            v115[1] = *(_BYTE *)(a1 + 353);
            v117 = sub_1C366E4(a1, *(unsigned int *)(a1 + 4), v111, v132);
            v118 = (void *)*a4;
            if ( *(_DWORD *)(a1 + 4) )
              sub_1C0E570(v127, v118, v111, v116, v125, v126, v117, v132[0], (__int64)&v133);
            else
              sub_1C19B00(
                v127,
                v118,
                v111,
                v116,
                v117,
                *(_QWORD *)v132,
                a1 + 5584,
                a1 + 5712,
                a1 + 6480,
                a1 + 5968,
                &v133,
                v115);
            if ( v111 )
            {
              *a4 = (char *)*a4 + v111;
              *a3 -= v111;
            }
            v119 = v133;
            v120 = v133 >> 3;
            if ( 2 * v111 + 503 <= v128 )
            {
              *a6 = (char *)*a6 + v120;
              *a5 -= v120;
              v121 = *(_QWORD *)(a1 + 6520) + v120;
              *(_QWORD *)(a1 + 6520) = v121;
              if ( a7 )
                *a7 = v121;
            }
            else
            {
              *(_QWORD *)(a1 + 6504) = v115;
              *(_QWORD *)(a1 + 6512) = v120;
            }
            v122 = (unsigned __int8)v115[v120];
            a2 = v131;
            *(_WORD *)(a1 + 352) = v122;
            *(_BYTE *)(a1 + 354) = v119 & 7;
            if ( (v113 | v116) == 1 )
            {
              if ( v116 )
                v114 = 2;
              else
                v114 = 1;
LABEL_215:
              *(_DWORD *)(a1 + 6548) = v114;
            }
          }
          v114 = 1;
          goto LABEL_215;
        }
LABEL_185:
        v125 = sub_1C4A718(v127, 4 * v54);
        v126 = sub_1C4A718(v127, v54);
        v123 = v125;
        v124 = v126;
        goto LABEL_188;
      }
      if ( v55 )
      {
        v125 = *(_QWORD *)(a1 + 6488);
        v123 = 0LL;
        v124 = 0LL;
        v126 = *(_QWORD *)(a1 + 6496);
        goto LABEL_188;
      }
      if ( v54 )
        goto LABEL_185;
    }
    LODWORD(v125) = 0;
    LODWORD(v126) = 0;
    goto LABEL_187;
  }
  v58 = a1 + 144;
  v130 = (_QWORD *)(a1 + 6512);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v59 = *(char *)(a1 + 355);
        v60 = *(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 264);
        v61 = 1LL << *(_DWORD *)(a1 + 12);
        v62 = v61 >= v60;
        v63 = v61 - v60;
        if ( !v62 )
          v63 = 0LL;
        v64 = v63 <= v59 || v59 <= -1;
        v65 = v64 ? v63 : *(char *)(a1 + 355);
        if ( !v65 || !*a3 )
          break;
        v66 = *(_DWORD *)(a1 + 196);
        v67 = (char *)*a4;
        if ( v65 >= *a3 )
          v68 = *a3;
        else
          v68 = v65;
        if ( v66 || v68 >= *(unsigned int *)(a1 + 184) )
        {
          v76 = *(_DWORD *)(a1 + 188);
          if ( *(_DWORD *)(a1 + 192) < v76 )
          {
            v77 = (_BYTE *)sub_1C4A718(v58, v76 + 2 + 7LL);
            v78 = *(const void **)(a1 + 200);
            v79 = v58;
            v80 = v77;
            if ( v78 )
            {
              memcpy(v77, v78, *(_DWORD *)(a1 + 192) + 9);
              sub_1C4A73C(v79, *(_QWORD *)(a1 + 200));
            }
            *(_DWORD *)(a1 + 192) = v76;
            *(_QWORD *)(a1 + 200) = v80;
            *(_QWORD *)(a1 + 208) = v80 + 2;
            v80[1] = 0;
            v81 = 0LL;
            *(_BYTE *)(*(_QWORD *)(a1 + 208) - 2LL) = 0;
            do
              *(_BYTE *)(*(_QWORD *)(a1 + 208) + *(unsigned int *)(a1 + 192) + v81++) = 0;
            while ( v81 != 7 );
            v58 = a1 + 144;
            *(_BYTE *)(*(_QWORD *)(a1 + 208) + (unsigned int)(*(_DWORD *)(a1 + 176) - 2)) = 0;
            *(_BYTE *)(*(_QWORD *)(a1 + 208) + (unsigned int)(*(_DWORD *)(a1 + 176) - 1)) = 0;
            *(_BYTE *)(*(_QWORD *)(a1 + 208) + *(unsigned int *)(a1 + 176)) = -15;
            v66 = *(_DWORD *)(a1 + 196);
          }
          v82 = *(unsigned int *)(a1 + 184);
          v83 = *(_DWORD *)(a1 + 180) & v66;
          if ( (unsigned int)v82 > (unsigned int)v83 )
          {
            v104 = v82 - v83;
            if ( v104 <= v68 )
              v105 = v104;
            else
              v105 = v68;
            memcpy((void *)(*(_QWORD *)(a1 + 208) + *(unsigned int *)(a1 + 176) + v83), v67, v105);
          }
          v84 = (void *)(*(_QWORD *)(a1 + 208) + v83);
          if ( v68 + v83 > *(unsigned int *)(a1 + 176) )
          {
            if ( (unsigned __int64)*(unsigned int *)(a1 + 188) - v83 <= v68 )
              v106 = *(_DWORD *)(a1 + 188) - v83;
            else
              v106 = v68;
            memcpy(v84, v67, v106);
            v84 = *(void **)(a1 + 208);
            v107 = *(unsigned int *)(a1 + 176) - v83;
            v85 = &v67[v107];
            v86 = v68 - v107;
          }
          else
          {
            v85 = v67;
            v86 = v68;
          }
          memcpy(v84, v85, v86);
          v87 = *(_DWORD *)(a1 + 196);
          *(_BYTE *)(*(_QWORD *)(a1 + 208) - 2LL) = *(_BYTE *)(*(_QWORD *)(a1 + 208)
                                                             + (unsigned int)(*(_DWORD *)(a1 + 176) - 2));
          *(_BYTE *)(*(_QWORD *)(a1 + 208) - 1LL) = *(_BYTE *)(*(_QWORD *)(a1 + 208)
                                                             + (unsigned int)(*(_DWORD *)(a1 + 176) - 1));
          v74 = (*(_DWORD *)(a1 + 196) & 0x7FFFFFFF) + (v68 & 0x7FFFFFFF);
          if ( v87 < 0 )
            v74 |= 0x80000000;
          *(_DWORD *)(a1 + 196) = v74;
        }
        else
        {
          *(_DWORD *)(a1 + 196) = v68;
          v69 = (_BYTE *)sub_1C4A718(v58, (unsigned int)(v68 + 2) + 7LL);
          v70 = *(const void **)(a1 + 200);
          v71 = v58;
          v72 = v69;
          if ( v70 )
          {
            memcpy(v69, v70, *(_DWORD *)(a1 + 192) + 9);
            sub_1C4A73C(v71, *(_QWORD *)(a1 + 200));
          }
          *(_DWORD *)(a1 + 192) = v68;
          *(_QWORD *)(a1 + 200) = v72;
          *(_QWORD *)(a1 + 208) = v72 + 2;
          v72[1] = 0;
          v73 = 0LL;
          *(_BYTE *)(*(_QWORD *)(a1 + 208) - 2LL) = 0;
          do
            *(_BYTE *)(*(_QWORD *)(a1 + 208) + *(unsigned int *)(a1 + 192) + v73++) = 0;
          while ( v73 != 7 );
          memcpy(*(void **)(a1 + 208), v67, v68);
          v74 = *(_DWORD *)(a1 + 196);
          v58 = a1 + 144;
        }
        v88 = *(_DWORD *)(a1 + 180);
        *(_QWORD *)(a1 + 168) += v68;
        if ( v74 <= v88 )
        {
          v89 = (_DWORD *)(*(_QWORD *)(a1 + 208) + v74);
          *(_DWORD *)((char *)v89 + 3) = 0;
          *v89 = 0;
        }
        *a4 = (char *)*a4 + v68;
        *a3 -= v68;
        v90 = *(char *)(a1 + 355);
        if ( v90 >= 1 )
          *(_BYTE *)(a1 + 355) = v90 - v68;
      }
      if ( !(unsigned int)sub_1C3375C(a1, a5, a6, a7) )
        break;
      if ( *(unsigned __int8 *)(a1 + 355) == 255 )
      {
        v75 = *(_DWORD *)(a1 + 6548);
        if ( !v75 )
          goto LABEL_135;
        if ( v75 == 1 && !*v130 )
        {
          *(_DWORD *)(a1 + 6548) = 0;
          *(_QWORD *)(a1 + 6504) = 0LL;
LABEL_135:
          *(_BYTE *)(a1 + 355) = -2;
        }
      }
    }
    v91 = *(_QWORD *)(a1 + 6512);
    v92 = *(_DWORD *)(a1 + 6548);
    if ( v91 || v92 )
    {
      result = 1LL;
      if ( v92 == 1 && !v91 )
      {
LABEL_218:
        *(_DWORD *)(a1 + 6548) = 0;
        *(_QWORD *)(a1 + 6504) = 0LL;
        return 1LL;
      }
      return result;
    }
    if ( !v131 && v65 )
      return 1LL;
    v93 = *a3;
    v94 = *a3 == 0;
    v95 = v131 == 2 && v94;
    v96 = v131 == 1 && v94;
    if ( (v131 != 2 || !v94) && !*(_BYTE *)(a1 + 355) )
    {
      v96 = 1;
      *(_BYTE *)(a1 + 355) = -1;
    }
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v97 = *(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 264);
      v98 = v97 | v93;
      v99 = v97 + v93;
      v100 = (unsigned int)v99;
      v101 = (v98 | v99) >> 30 == 0;
      v102 = 0x40000000LL;
      if ( v101 )
        v102 = v100;
      *(_QWORD *)(a1 + 24) = v102;
    }
    result = sub_1C33884(a1, (v131 == 2) & (unsigned __int8)v94, v96, v130, a1 + 6504);
    if ( !(_DWORD)result )
      return result;
    if ( (v95 & 1) != 0 || v96 )
    {
      if ( v95 )
        v103 = 2;
      else
        v103 = 1;
      *(_DWORD *)(a1 + 6548) = v103;
    }
  }
}