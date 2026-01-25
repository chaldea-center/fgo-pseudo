__int64 __fastcall BrotliDecoderDecompressStream(
        __int64 a1,
        _QWORD *a2,
        _BYTE **a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _QWORD *v6; // x22
  _QWORD *v7; // x24
  _QWORD *v8; // x26
  _BYTE *v13; // x8
  __int64 v14; // x1
  unsigned __int64 *v15; // x29
  __int64 v16; // x27
  _QWORD *v17; // x25
  __int64 v18; // x23
  unsigned int v19; // w0
  __int64 v20; // x8
  __int64 v21; // x8
  unsigned int v22; // w0
  int v23; // w8
  int v24; // w0
  __int16 v25; // w8
  int v26; // w11
  unsigned __int64 v27; // x10
  char v28; // w9
  char v29; // w12
  bool v30; // zf
  __int64 v31; // x13
  char v32; // w12
  int v33; // w8
  int v34; // w8
  unsigned int v35; // w9
  __int64 v36; // x10
  unsigned __int64 v37; // x11
  unsigned __int8 *v38; // x12
  __int64 v39; // x13
  unsigned __int64 v40; // x11
  __int128 v41; // t2
  __int64 v42; // x8
  int v43; // w8
  unsigned int v44; // w9
  __int64 v45; // x10
  unsigned __int64 v46; // x11
  unsigned __int8 *v47; // x12
  __int64 v48; // x13
  unsigned __int64 v49; // x11
  __int128 v50; // t2
  __int64 v51; // x8
  unsigned int v52; // w0
  int v53; // w8
  int v54; // w9
  int v55; // w10
  __int64 v56; // x11
  unsigned __int64 v57; // x12
  unsigned __int8 *v58; // x13
  bool v59; // cf
  __int64 v60; // x14
  __int128 v61; // t2
  bool v62; // vf
  int v63; // w8
  __int64 v64; // x8
  unsigned int v65; // w9
  __int64 v66; // x9
  int v67; // w8
  _QWORD *v68; // x22
  __int64 v69; // x24
  _QWORD *v70; // x27
  __int64 v71; // x26
  int v72; // w10
  __int64 (__fastcall *v73)(__int64, __int64); // x9
  __int64 v74; // x0
  __int64 v75; // x0
  unsigned int v76; // w0
  __int16 v77; // w8
  int v78; // w9
  int v79; // w10
  int v80; // w12
  int v81; // w10
  __int64 v82; // x9
  unsigned int v83; // w0
  __int64 (__fastcall *v84)(__int64, __int64); // x10
  __int64 v85; // x0
  __int64 v86; // x1
  unsigned __int64 v87; // x9
  int v88; // w8
  __int64 v89; // x0
  int v90; // w9
  unsigned int v91; // w10
  __int64 v92; // x11
  unsigned __int64 v93; // x12
  unsigned __int8 *v94; // x13
  __int64 v95; // x14
  unsigned __int64 v96; // x12
  __int128 v97; // t2
  __int64 v98; // x11
  unsigned int v99; // w0
  unsigned __int64 v100; // x8
  unsigned __int64 v101; // x9
  __int64 v102; // x10
  __int64 v103; // x11
  unsigned __int64 v104; // x13
  __int64 v105; // x14
  unsigned __int64 v106; // x15
  char v107; // w16
  char v108; // w17
  int v109; // w11
  unsigned int v110; // w10
  char v111; // w9
  unsigned int v112; // w8
  unsigned int v113; // w28
  int v114; // w10
  unsigned int v115; // w12
  unsigned int v116; // w13
  int v117; // w12
  unsigned int v118; // w0
  int v119; // w29
  int v120; // w29
  unsigned int v121; // w0
  unsigned int v122; // w0
  _QWORD *v123; // x28
  __int64 v124; // x26
  unsigned int v125; // w11
  int v126; // w8
  unsigned int v127; // w9
  __int64 v128; // x0
  __int64 v129; // x10
  unsigned __int64 v130; // x11
  unsigned __int8 *v131; // x12
  __int64 v132; // x13
  unsigned __int64 v133; // x11
  __int128 v134; // t2
  unsigned __int64 v135; // x11
  unsigned __int8 *v136; // x9
  unsigned int v137; // w10
  unsigned __int16 *v138; // x10
  int v139; // w8
  unsigned int v140; // w9
  unsigned int v141; // w12
  __int64 v142; // x13
  unsigned __int64 v143; // x14
  unsigned __int8 *v144; // x15
  __int64 v145; // x16
  unsigned __int64 v146; // x14
  __int128 v147; // t2
  int v148; // w10
  int v149; // w8
  int v150; // w9
  __int64 v151; // x10
  void *v152; // x2
  unsigned int v153; // w0
  __int64 v154; // x10
  __int64 v155; // x8
  __int64 v156; // x9
  int v157; // w8
  unsigned __int64 v158; // x8
  __int64 v159; // x9
  __int64 v160; // x10
  __int64 v161; // x9
  __int64 v162; // x10
  _QWORD *v163; // x10
  int v164; // w0
  int v165; // w8
  int i; // w9
  unsigned int v167; // w10
  unsigned int v168; // w9
  unsigned int v169; // w10
  int v170; // w12
  int v171; // w11
  char v172; // w13
  unsigned int v173; // w14
  unsigned int v174; // w17
  unsigned int v175; // w0
  unsigned int v176; // w16
  unsigned int v177; // w0
  int v178; // w8
  int v179; // w9
  __int64 v180; // x10
  __int64 v181; // x13
  unsigned int v182; // w10
  __int64 v183; // x11
  _BYTE *v184; // x9
  unsigned __int64 v185; // x12
  __int64 v186; // x13
  unsigned int v187; // w0
  _BYTE *v188; // x8
  __int64 v189; // x9
  unsigned int v190; // w9
  int v191; // w8
  __int64 v192; // x13
  unsigned int v193; // w11
  __int64 v194; // x10
  _BYTE *v195; // x9
  unsigned __int64 v196; // x12
  unsigned int v197; // [xsp+4h] [xbp-DCh]
  _OWORD *v198; // [xsp+8h] [xbp-D8h]
  _QWORD *v199; // [xsp+10h] [xbp-D0h]
  unsigned __int64 *v200; // [xsp+18h] [xbp-C8h]
  __int64 v201; // [xsp+20h] [xbp-C0h]
  __int64 v202; // [xsp+28h] [xbp-B8h]
  __int64 v203; // [xsp+30h] [xbp-B0h]
  __int64 v204; // [xsp+38h] [xbp-A8h]
  __int64 v205; // [xsp+40h] [xbp-A0h]
  __int64 v206; // [xsp+48h] [xbp-98h]
  __int64 v207; // [xsp+50h] [xbp-90h]
  __int64 *v208; // [xsp+58h] [xbp-88h]
  _DWORD v209[2]; // [xsp+68h] [xbp-78h] BYREF

  v6 = a6;
  v7 = a5;
  v8 = a4;
  if ( a6 )
    *a6 = *(_QWORD *)(a1 + 376);
  if ( (*(_DWORD *)(a1 + 116) & 0x80000000) != 0 )
    return 0;
  if ( *a4 )
  {
    if ( !a5 || !*a5 )
      return sub_1CBE068(a1, 4294967276LL);
  }
  else
  {
    v7 = 0;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    v13 = (_BYTE *)(a1 + 64);
    v14 = 2;
  }
  else
  {
    v14 = 1;
    *(_QWORD *)(a1 + 32) = *a2;
    v13 = *a3;
  }
  *(_QWORD *)(a1 + 24) = v13;
  v198 = (_OWORD *)(a1 + 712);
  v207 = a1 + 328;
  v208 = (__int64 *)(a1 + 680);
  v205 = a1 + 676;
  v206 = a1 + 336;
  v203 = a1 + 168;
  v204 = a1 + 192;
  v201 = a1 + 952;
  v202 = a1 + 216;
  v15 = (unsigned __int64 *)(a1 + 8);
  v16 = a1 + 64;
  v17 = (_QWORD *)(a1 + 744);
  v18 = a1 + 1288;
  while ( 1 )
  {
    while ( (_DWORD)v14 == 1 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 0:
          v24 = sub_1CBCE68(v15);
          v14 = 2;
          if ( !v24 )
            continue;
          v25 = *(_WORD *)(a1 + 664);
          v26 = *(_DWORD *)(a1 + 16);
          v27 = *(_QWORD *)(a1 + 8);
          v28 = v25 & 0xDF;
          v29 = v26 + 1;
          *(_WORD *)(a1 + 664) = v25 & 0xFFDF;
          *(_DWORD *)(a1 + 16) = v26 + 1;
          if ( ((v27 >> v26) & 1) == 0 )
          {
            v33 = 16;
            goto LABEL_184;
          }
          v31 = (v27 >> v29) & 7;
          v30 = ((v27 >> v29) & 7) == 0;
          v32 = v26 + 4;
          *(_DWORD *)(a1 + 16) = v26 + 4;
          if ( !v30 )
          {
            v33 = v31 + 17;
            goto LABEL_184;
          }
          v186 = (v27 >> v32) & 7;
          *(_DWORD *)(a1 + 16) = v26 + 7;
          if ( ((v27 >> v32) & 7) == 0 )
          {
            v33 = 17;
LABEL_184:
            *(_DWORD *)(a1 + 668) = v33;
            if ( (v28 & 0x20) == 0 )
            {
              v23 = 2;
              goto LABEL_189;
            }
            goto LABEL_199;
          }
          if ( (_DWORD)v186 != 1 )
          {
            v33 = v186 | 8;
            goto LABEL_184;
          }
          v14 = 4294967283LL;
          if ( (v25 & 0x20) != 0 )
          {
            v14 = 4294967283LL;
            *(_DWORD *)(a1 + 16) = v26 + 8;
            if ( ((v27 >> ((unsigned __int8)v26 + 7)) & 1) == 0 )
            {
              *(_WORD *)(a1 + 664) = v25 | 0x20;
LABEL_199:
              v14 = 1;
              *(_DWORD *)a1 = 1;
              continue;
            }
          }
          continue;
        case 1:
          v34 = *(_DWORD *)(a1 + 16);
          v35 = 64 - v34;
          if ( (unsigned int)(64 - v34) >= 6 )
          {
            v40 = *v15;
          }
          else
          {
            v36 = *(_QWORD *)(a1 + 32) - 1LL;
            do
            {
              if ( v36 == -1 )
                goto LABEL_118;
              v37 = *(_QWORD *)(a1 + 8);
              v38 = *(unsigned __int8 **)(a1 + 24);
              v35 += 8;
              v34 -= 8;
              *(_QWORD *)(a1 + 8) = v37 >> 8;
              v39 = *v38;
              *(_DWORD *)(a1 + 16) = v34;
              *((_QWORD *)&v41 + 1) = v39;
              *(_QWORD *)&v41 = v37;
              v40 = v41 >> 8;
              *(_QWORD *)(a1 + 24) = v38 + 1;
              *(_QWORD *)(a1 + 32) = v36--;
              *(_QWORD *)(a1 + 8) = v40;
            }
            while ( v35 < 6 );
          }
          v72 = v34 + 6;
          v42 = (v40 >> v34) & 0x3F;
          v14 = 4294967283LL;
          *(_DWORD *)(a1 + 16) = v72;
          *(_DWORD *)(a1 + 668) = v42;
          if ( (unsigned int)(v42 - 10) > 0x14 )
            continue;
          *(_DWORD *)a1 = 2;
LABEL_75:
          v73 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 40);
          v74 = *(_QWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 80) = (1 << v42) - 16;
          v75 = v73(v74, 12336);
          v14 = 4294967266LL;
          *(_QWORD *)(a1 + 240) = v75;
          if ( !v75 )
            continue;
          *(_QWORD *)(a1 + 248) = v75 + 7584;
          *(_DWORD *)a1 = 3;
LABEL_77:
          sub_1CDB2BC(a1);
          *(_DWORD *)a1 = 4;
LABEL_78:
          v76 = sub_1CBE1C4(a1, v15);
          v14 = v76;
          if ( v76 != 1 )
            continue;
          v77 = *(_WORD *)(a1 + 664);
          if ( (v77 & 6) != 0 )
          {
            v78 = *(_DWORD *)(a1 + 16);
            v79 = -v78 & 7;
            if ( v79 )
            {
              v80 = -1 << v79;
              v81 = v79 + v78;
              v82 = *(_QWORD *)(a1 + 8) >> v78;
              v14 = 4294967282LL;
              *(_DWORD *)(a1 + 16) = v81;
              if ( ((unsigned int)v82 & ~v80) != 0 )
                continue;
            }
          }
          if ( (v77 & 4) != 0 )
          {
            v23 = 12;
            goto LABEL_189;
          }
          if ( !*(_DWORD *)(a1 + 264) )
            goto LABEL_188;
          sub_1CBE6E8(a1, v14);
          if ( (*(_BYTE *)(a1 + 664) & 2) != 0 )
          {
            v23 = 11;
            goto LABEL_189;
          }
LABEL_85:
          v63 = 0;
          *(_QWORD *)(a1 + 912) = v201;
          *v17 = 0;
          *(_QWORD *)(a1 + 752) = 0;
          *(_QWORD *)a1 = 18;
LABEL_86:
          v83 = sub_1CBE754(a1, v15, a1 + 4LL * v63 + 284);
          v14 = v83;
          if ( v83 == 1 )
          {
            ++*(_DWORD *)(a1 + 284 + 4LL * *(int *)(a1 + 4));
            v64 = *(int *)(a1 + 4);
            v65 = *(_DWORD *)(a1 + 284 + 4 * v64);
            if ( v65 <= 1 )
            {
              *(_DWORD *)(a1 + 4) = v64 + 1;
              v14 = 1;
              continue;
            }
            *(_DWORD *)a1 = 19;
LABEL_127:
            v121 = sub_1CBE920(v65 + 2, v65 + 2, (void *)(*(_QWORD *)(a1 + 240) + 2528LL * (_DWORD)v64));
            v14 = v121;
            if ( v121 == 1 )
            {
              *(_DWORD *)a1 = 20;
LABEL_129:
              v122 = sub_1CBE920(26, 26, (void *)(*(_QWORD *)(a1 + 248) + 1584LL * *(_DWORD *)(a1 + 4)));
              v14 = v122;
              if ( v122 == 1 )
              {
                *(_DWORD *)a1 = 21;
LABEL_131:
                v123 = v8;
                v124 = *(int *)(a1 + 4);
                if ( *(_DWORD *)(a1 + 660) )
                {
                  v125 = *(_DWORD *)(a1 + 268);
                  goto LABEL_142;
                }
                v126 = *(_DWORD *)(a1 + 16);
                v127 = 64 - v126;
                v128 = *(_QWORD *)(a1 + 248) + 1584LL * (_DWORD)v124;
                if ( (unsigned int)(64 - v126) >= 0xF )
                {
                  v133 = *v15;
LABEL_139:
                  v135 = v133 >> v126;
                  v136 = (unsigned __int8 *)(v128 + 4LL * (unsigned __int8)v135);
                  v137 = *v136;
                  if ( v137 >= 9 )
                  {
                    v136 += 4 * (((unsigned int)v135 >> 8) & 0x7F & (unsigned __int64)(unsigned int)~(-1 << (v137 - 8)))
                          + 4 * *(unsigned __int16 *)(v128 + 4LL * (unsigned __int8)v135 + 2);
                    v137 = *v136;
                    v126 += 8;
                  }
                  *(_DWORD *)(a1 + 16) = v126 + v137;
                  v125 = *((unsigned __int16 *)v136 + 1);
LABEL_142:
                  v138 = (unsigned __int16 *)((char *)&unk_10FDA66 + 4 * v125);
                  v139 = *(_DWORD *)(a1 + 16);
                  v140 = *((unsigned __int8 *)v138 + 2);
                  v141 = 64 - v139;
                  if ( 64 - v139 >= v140 )
                  {
                    v146 = *v15;
LABEL_148:
                    v148 = *v138;
                    *(_DWORD *)(a1 + 16) = v139 + v140;
                    *(_DWORD *)(a1 + 4 * v124 + 272) = ((v146 >> v139) & ~(-1 << v140)) + v148;
                    v149 = *(_DWORD *)(a1 + 4);
                    *(_DWORD *)(a1 + 660) = 0;
                    v14 = 1;
                    v8 = v123;
                    *(_DWORD *)a1 = 18;
                    *(_DWORD *)(a1 + 4) = v149 + 1;
                    continue;
                  }
                  v142 = *(_QWORD *)(a1 + 32) - 1LL;
                  while ( v142 != -1 )
                  {
                    v143 = *(_QWORD *)(a1 + 8);
                    v144 = *(unsigned __int8 **)(a1 + 24);
                    v141 += 8;
                    v139 -= 8;
                    *(_QWORD *)(a1 + 8) = v143 >> 8;
                    v145 = *v144;
                    *(_DWORD *)(a1 + 16) = v139;
                    *((_QWORD *)&v147 + 1) = v145;
                    *(_QWORD *)&v147 = v143;
                    v146 = v147 >> 8;
                    *(_QWORD *)(a1 + 24) = v144 + 1;
                    *(_QWORD *)(a1 + 32) = v142--;
                    *(_QWORD *)(a1 + 8) = v146;
                    if ( v141 >= v140 )
                      goto LABEL_148;
                  }
                  *(_DWORD *)(a1 + 268) = v125;
                  *(_DWORD *)(a1 + 660) = 1;
                }
                else
                {
                  v129 = *(_QWORD *)(a1 + 32) - 1LL;
                  while ( v129 != -1 )
                  {
                    v130 = *(_QWORD *)(a1 + 8);
                    v131 = *(unsigned __int8 **)(a1 + 24);
                    v127 += 8;
                    v126 -= 8;
                    *(_QWORD *)(a1 + 8) = v130 >> 8;
                    v132 = *v131;
                    *(_DWORD *)(a1 + 16) = v126;
                    *((_QWORD *)&v134 + 1) = v132;
                    *(_QWORD *)&v134 = v130;
                    v133 = v134 >> 8;
                    *(_QWORD *)(a1 + 24) = v131 + 1;
                    *(_QWORD *)(a1 + 32) = v129--;
                    *(_QWORD *)(a1 + 8) = v133;
                    if ( v127 >= 0xF )
                      goto LABEL_139;
                  }
                  if ( (unsigned int)sub_1CC0DAC(v128, v15, v209) )
                  {
                    v125 = v209[0];
                    goto LABEL_142;
                  }
                }
                v14 = 2;
                v8 = v123;
                continue;
              }
            }
          }
          continue;
        case 2:
          LODWORD(v42) = *(_DWORD *)(a1 + 668);
          goto LABEL_75;
        case 3:
          goto LABEL_77;
        case 4:
          goto LABEL_78;
        case 5:
          v43 = *(_DWORD *)(a1 + 16);
          v44 = 64 - v43;
          if ( (unsigned int)(64 - v43) < 6 )
          {
            v45 = *(_QWORD *)(a1 + 32) - 1LL;
            while ( v45 != -1 )
            {
              v46 = *(_QWORD *)(a1 + 8);
              v47 = *(unsigned __int8 **)(a1 + 24);
              v44 += 8;
              v43 -= 8;
              *(_QWORD *)(a1 + 8) = v46 >> 8;
              v48 = *v47;
              *(_DWORD *)(a1 + 16) = v43;
              *((_QWORD *)&v50 + 1) = v48;
              *(_QWORD *)&v50 = v46;
              v49 = v50 >> 8;
              *(_QWORD *)(a1 + 24) = v47 + 1;
              *(_QWORD *)(a1 + 32) = v45--;
              *(_QWORD *)(a1 + 8) = v49;
              if ( v44 >= 6 )
                goto LABEL_91;
            }
            goto LABEL_118;
          }
          v49 = *v15;
LABEL_91:
          v84 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 40);
          v85 = *(_QWORD *)(a1 + 56);
          v86 = *(unsigned int *)(a1 + 284);
          v87 = v49 >> v43;
          *(_DWORD *)(a1 + 16) = v43 + 6;
          v88 = (v49 >> v43) & 3;
          *(_DWORD *)(a1 + 320) = v88;
          *(_DWORD *)(a1 + 324) = (((unsigned int)v87 >> 2) & 0xF) << v88;
          v89 = v84(v85, v86);
          v14 = 4294967275LL;
          *(_QWORD *)(a1 + 688) = v89;
          if ( !v89 )
            continue;
          LODWORD(v51) = 0;
          *(_QWORD *)a1 = 6;
LABEL_93:
          LODWORD(v66) = *(_DWORD *)(a1 + 284);
          if ( (int)v51 < (int)v66 )
          {
            v51 = (int)v51;
            while ( 1 )
            {
              v90 = *(_DWORD *)(a1 + 16);
              v91 = 64 - v90;
              if ( (unsigned int)(64 - v90) < 2 )
                break;
              v96 = *(_QWORD *)(a1 + 8);
LABEL_101:
              v98 = *(_QWORD *)(a1 + 688);
              *(_DWORD *)(a1 + 16) = v90 + 2;
              *(_BYTE *)(v98 + v51) = (v96 >> v90) & 3;
              v66 = *(int *)(a1 + 284);
              if ( ++v51 >= v66 )
                goto LABEL_102;
            }
            v92 = *(_QWORD *)(a1 + 32) - 1LL;
            while ( v92 != -1 )
            {
              v93 = *(_QWORD *)(a1 + 8);
              v94 = *(unsigned __int8 **)(a1 + 24);
              v91 += 8;
              v90 -= 8;
              *(_QWORD *)(a1 + 8) = v93 >> 8;
              v95 = *v94;
              *(_DWORD *)(a1 + 16) = v90;
              *((_QWORD *)&v97 + 1) = v95;
              *(_QWORD *)&v97 = v93;
              v96 = v97 >> 8;
              *(_QWORD *)(a1 + 24) = v94 + 1;
              *(_QWORD *)(a1 + 32) = v92--;
              *(_QWORD *)(a1 + 8) = v96;
              if ( v91 >= 2 )
                goto LABEL_101;
            }
            *(_DWORD *)(a1 + 4) = v51;
LABEL_118:
            v14 = 2;
            continue;
          }
LABEL_102:
          *(_DWORD *)a1 = 22;
LABEL_103:
          v99 = sub_1CBF46C((unsigned int)((_DWORD)v66 << 6), v205, v208, a1);
          v14 = v99;
          if ( v99 != 1 )
            continue;
          *v198 = 0u;
          v198[1] = 0u;
          v100 = *(unsigned int *)(a1 + 284);
          if ( (_DWORD)v100 )
          {
            v101 = 0;
            v102 = *v208;
            v103 = *v208 + 1;
            do
            {
              v104 = 0;
              v105 = 0;
              do
              {
                v106 = v103 + v104;
                v107 = *(_BYTE *)(v103 + v104 - 1);
                v108 = *(_BYTE *)(v103 + v104);
                v59 = v104 >= 0x3C;
                v104 += 4LL;
                v105 |= (unsigned __int8)(v107 ^ *(_BYTE *)(v102 + (v101 << 6)))
                      | (unsigned __int64)(unsigned __int8)(v108 ^ *(_BYTE *)(v102 + (v101 << 6)))
                      | (unsigned __int8)(*(_BYTE *)(v106 + 1) ^ *(_BYTE *)(v102 + (v101 << 6)))
                      | (unsigned __int8)(*(_BYTE *)(v106 + 2) ^ *(_BYTE *)(v102 + (v101 << 6)));
              }
              while ( !v59 );
              if ( !v105 )
                *(_DWORD *)(a1 + ((v101 >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 712) |= 1 << v101;
              ++v101;
              v103 += 64;
            }
            while ( v101 < v100 );
          }
          *(_DWORD *)a1 = 23;
LABEL_113:
          v109 = *(_DWORD *)(a1 + 320);
          v110 = *(_DWORD *)(a1 + 324);
          v111 = v109 + 1;
          v112 = v110 + 16;
          if ( (*(_BYTE *)(a1 + 664) & 0x20) == 0 )
          {
            v113 = v112 + (24 << v111);
            v197 = v113;
            goto LABEL_123;
          }
          if ( v110 > 0x7FFFFFFB )
          {
            v114 = -2147483636;
LABEL_121:
            v197 = v114;
            goto LABEL_122;
          }
          v115 = ((2147483644 - v110) >> v109) + 4;
          v116 = __clz(v115 >> 1);
          v117 = ((v115 >> (31 - v116)) & 1) - 2 * v116 + 60;
          if ( v117 )
          {
            v114 = v110 + (((v117 - 1) << v109) | ~(-1 << v109)) + 17;
            goto LABEL_121;
          }
          v197 = v110 + 16;
LABEL_122:
          v113 = v112 + (62 << v111);
LABEL_123:
          v118 = sub_1CBF46C((unsigned int)(4 * *(_DWORD *)(a1 + 292)), v207, v206, a1);
          v14 = v118;
          if ( v118 == 1 )
          {
            v199 = v6;
            v200 = v15;
            v68 = v7;
            v69 = v16;
            v70 = v8;
            v71 = v203;
            v119 = sub_1CDB3AC(a1, v203, 256, 256, *(unsigned int *)(a1 + 676));
            v120 = v119 & sub_1CDB3AC(a1, v204, 704, 704, *(unsigned int *)(a1 + 288));
            if ( (v120 & (unsigned int)sub_1CDB3AC(a1, v202, v113, v197, *(unsigned int *)(a1 + 328)) & 1) == 0 )
            {
              v14 = 4294967274LL;
              return sub_1CBE068(a1, v14);
            }
            v67 = 0;
            *(_QWORD *)a1 = 24;
LABEL_153:
            if ( *(_DWORD *)v17 == 1 )
            {
              v150 = *(_DWORD *)(a1 + 2540);
            }
            else
            {
              v151 = *(_QWORD *)(v71 + 8);
              v150 = 0;
              *(_DWORD *)(a1 + 2540) = 0;
              *(_QWORD *)(a1 + 2544) = v151;
              *(_DWORD *)(a1 + 744) = 1;
            }
            if ( v150 >= *(unsigned __int16 *)(v71 + 20) )
            {
LABEL_161:
              v8 = v70;
              v16 = v69;
              v7 = v68;
              v6 = v199;
              v15 = v200;
              v157 = v67 + 1;
              v14 = 1;
              *(_DWORD *)(a1 + 744) = 0;
              *(_DWORD *)(a1 + 4) = v157;
              if ( v157 >= 3 )
              {
                *(_DWORD *)a1 = 25;
LABEL_163:
                v158 = *(unsigned int *)(a1 + 300);
                v159 = *(_QWORD *)(a1 + 680);
                v160 = (unsigned int)((_DWORD)v158 << 6);
                *(_QWORD *)(a1 + 152) = v159 + v160;
                *(_DWORD *)(a1 + 256) = (*(_DWORD *)(a1 + ((v158 >> 3) & 0x1FFFFFFC) + 712) >> v158) & 1;
                v161 = *(unsigned __int8 *)(v159 + (unsigned int)v160);
                v162 = *(_QWORD *)(a1 + 688);
                *(_QWORD *)(a1 + 344) = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v161);
                LOBYTE(v158) = *(_BYTE *)(v162 + v158);
                v163 = *(_QWORD **)(a1 + 192);
                *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 336);
                *(_QWORD *)(a1 + 144) = (char *)&unk_10BB17B + 512 * (v158 & 3);
                *(_QWORD *)(a1 + 136) = *v163;
                v164 = sub_1CBF8AC(a1);
                v14 = 4294967269LL;
                if ( v164 )
                {
                  v165 = *(_DWORD *)(a1 + 324);
                  if ( v165 )
                  {
                    for ( i = 0; i != v165; *(_DWORD *)(v18 + 4LL * v167) = i )
                    {
                      v167 = i + 16;
                      ++i;
                      *((_BYTE *)v17 + v167) = 0;
                    }
                    v168 = i + 16;
                  }
                  else
                  {
                    v168 = 16;
                  }
                  v169 = *(unsigned __int16 *)(a1 + 234);
                  if ( v168 < v169 )
                  {
                    v170 = *(_DWORD *)(a1 + 320);
                    v171 = 0;
                    v172 = 1;
                    do
                    {
                      v173 = 1;
                      do
                      {
                        v174 = v165 + ((((v171 + 2) << v172) - 4) << v170) + v173;
                        v175 = v173 >> v170;
                        v176 = v168 + v173++ - 1;
                        *((_BYTE *)v17 + v176) = v172;
                        *(_DWORD *)(v18 + 4LL * v176) = v174;
                      }
                      while ( !v175 );
                      v168 = v168 + v173 - 1;
                      v172 += v171;
                      v171 ^= 1u;
                    }
                    while ( v168 < v169 );
                  }
                  *(_DWORD *)a1 = 7;
LABEL_176:
                  v177 = sub_1CBF950(a1);
                  v14 = v177;
                  if ( v177 == 2 )
                    v14 = (unsigned int)sub_1CC02AC(a1, 2);
                }
              }
            }
            else
            {
              v152 = *(void **)(a1 + 2544);
              while ( 1 )
              {
                v153 = sub_1CBE920(*(unsigned __int16 *)(v71 + 16), *(unsigned __int16 *)(v71 + 18), v152);
                if ( v153 != 1 )
                  break;
                v154 = *(int *)(a1 + 2540);
                *(_QWORD *)(*(_QWORD *)v71 + 8 * v154) = *(_QWORD *)(a1 + 2544);
                v155 = v209[1];
                v156 = *(_QWORD *)(a1 + 2544);
                LODWORD(v154) = v154 + 1;
                *(_DWORD *)(a1 + 2540) = v154;
                v152 = (void *)(v156 + 4 * v155);
                *(_QWORD *)(a1 + 2544) = v152;
                if ( (int)v154 >= *(unsigned __int16 *)(v71 + 20) )
                {
                  v67 = *(_DWORD *)(a1 + 4);
                  goto LABEL_161;
                }
              }
              v8 = v70;
              v16 = v69;
              v7 = v68;
              v6 = v199;
              v15 = v200;
              v14 = v153;
            }
          }
          break;
        case 6:
          LODWORD(v51) = *(_DWORD *)(a1 + 4);
          goto LABEL_93;
        case 7:
        case 8:
        case 9:
        case 0xA:
          goto LABEL_176;
        case 0xB:
          v52 = sub_1CBF2CC(v8, v7, v6, a1);
          v14 = v52;
          if ( v52 == 1 )
            *(_DWORD *)a1 = 14;
          continue;
        case 0xC:
          v53 = *(_DWORD *)(a1 + 264);
          if ( v53 < 1 )
            goto LABEL_188;
          v54 = *(_DWORD *)(a1 + 16);
          while ( 1 )
          {
            v55 = 64 - v54;
            if ( (unsigned int)(64 - v54) <= 7 )
              break;
LABEL_55:
            v54 += 8;
            v62 = __OFSUB__(v53--, 1);
            *(_DWORD *)(a1 + 16) = v54;
            *(_DWORD *)(a1 + 264) = v53;
            if ( (v53 < 0) ^ v62 | (v53 == 0) )
            {
LABEL_188:
              v23 = 14;
              goto LABEL_189;
            }
          }
          v56 = *(_QWORD *)(a1 + 32) - 1LL;
          while ( v56 != -1 )
          {
            v57 = *(_QWORD *)(a1 + 8);
            v58 = *(unsigned __int8 **)(a1 + 24);
            v54 -= 8;
            v59 = __CFADD__(v55, 8);
            v55 += 8;
            *(_QWORD *)(a1 + 8) = v57 >> 8;
            v60 = *v58;
            *(_DWORD *)(a1 + 16) = v54;
            *((_QWORD *)&v61 + 1) = v60;
            *(_QWORD *)&v61 = v57;
            *(_QWORD *)(a1 + 24) = v58 + 1;
            *(_QWORD *)(a1 + 32) = v56--;
            *(_QWORD *)(a1 + 8) = v61 >> 8;
            if ( !v59 )
              goto LABEL_55;
          }
          goto LABEL_118;
        case 0xD:
        case 0xF:
        case 0x10:
          v22 = sub_1CBE080(a1, v8, v7, v6, 0);
          v14 = v22;
          if ( v22 != 1 )
            continue;
          sub_1CC0D2C(a1, 1);
          if ( *(_DWORD *)(a1 + 88) == 1 << *(_DWORD *)(a1 + 668) )
            *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 80);
          if ( *(_DWORD *)a1 == 16 )
          {
            v23 = 10;
            goto LABEL_189;
          }
          if ( *(_DWORD *)a1 == 15 )
          {
            if ( !*(_DWORD *)(a1 + 264) )
              goto LABEL_188;
            v23 = 7;
            goto LABEL_189;
          }
          if ( *(_DWORD *)(a1 + 4) )
          {
            v23 = 8;
            goto LABEL_189;
          }
          if ( *(_DWORD *)(a1 + 264) )
          {
            v23 = 9;
            goto LABEL_189;
          }
          goto LABEL_188;
        case 0xE:
          v14 = 4294967286LL;
          if ( (*(_DWORD *)(a1 + 264) & 0x80000000) != 0 )
            continue;
          sub_1CDB308(a1, 4294967286LL);
          if ( (*(_BYTE *)(a1 + 664) & 1) != 0 )
          {
            v178 = *(_DWORD *)(a1 + 16);
            v179 = -v178 & 7;
            if ( !v179
              || (v14 = 4294967281LL,
                  v180 = *(_QWORD *)(a1 + 8) >> v178,
                  v178 += v179,
                  *(_DWORD *)(a1 + 16) = v178,
                  ((unsigned int)v180 & ~(-1 << v179)) == 0) )
            {
              if ( !*(_DWORD *)(a1 + 72) )
              {
                v181 = (unsigned int)(64 - v178) >> 3;
                v182 = (64 - v178) & 0xFFFFFFF8;
                v183 = *(_QWORD *)(a1 + 32) + v181;
                v184 = (_BYTE *)(*(_QWORD *)(a1 + 24) - v181);
                *(_QWORD *)(a1 + 24) = v184;
                *(_QWORD *)(a1 + 32) = v183;
                if ( v182 == 64 )
                  v185 = 0;
                else
                  v185 = *v15 << v182;
                *(_QWORD *)(a1 + 8) = v185;
                *(_DWORD *)(a1 + 16) = v182 + v178;
                *a2 = v183;
                *a3 = v184;
              }
              *(_DWORD *)a1 = 26;
LABEL_205:
              if ( !*(_QWORD *)(a1 + 120) || (v187 = sub_1CBE080(a1, v8, v7, v6, 1), v14 = v187, v187 == 1) )
              {
                v14 = 1;
                return sub_1CBE068(a1, v14);
              }
            }
          }
          else
          {
            v23 = 3;
LABEL_189:
            *(_DWORD *)a1 = v23;
            v14 = 1;
          }
          continue;
        case 0x11:
          goto LABEL_85;
        case 0x12:
          v63 = *(_DWORD *)(a1 + 4);
          if ( v63 < 3 )
            goto LABEL_86;
          v23 = 5;
          goto LABEL_189;
        case 0x13:
          v64 = *(int *)(a1 + 4);
          v65 = *(_DWORD *)(a1 + 4 * v64 + 284);
          goto LABEL_127;
        case 0x14:
          goto LABEL_129;
        case 0x15:
          goto LABEL_131;
        case 0x16:
          LODWORD(v66) = *(_DWORD *)(a1 + 284);
          goto LABEL_103;
        case 0x17:
          goto LABEL_113;
        case 0x18:
          v67 = *(_DWORD *)(a1 + 4);
          v199 = v6;
          v200 = v15;
          v68 = v7;
          v69 = v16;
          if ( v67 )
          {
            v70 = v8;
            if ( v67 == 2 )
            {
              v71 = v202;
            }
            else
            {
              v71 = v204;
              if ( v67 != 1 )
              {
                v14 = 4294967265LL;
                return sub_1CBE068(a1, v14);
              }
            }
          }
          else
          {
            v70 = v8;
            v71 = v203;
          }
          goto LABEL_153;
        case 0x19:
          goto LABEL_163;
        case 0x1A:
          goto LABEL_205;
        default:
          continue;
      }
    }
    if ( (_DWORD)v14 != 2 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        *(_DWORD *)(a1 + 72) = 0;
      }
      else
      {
        v191 = *(_DWORD *)(a1 + 16);
        v192 = (unsigned int)(64 - v191) >> 3;
        v193 = (64 - v191) & 0xFFFFFFF8;
        v194 = *(_QWORD *)(a1 + 32) + v192;
        v195 = (_BYTE *)(*(_QWORD *)(a1 + 24) - v192);
        *(_QWORD *)(a1 + 24) = v195;
        *(_QWORD *)(a1 + 32) = v194;
        if ( v193 == 64 )
          v196 = 0;
        else
          v196 = *v15 << v193;
        *(_QWORD *)(a1 + 8) = v196;
        *(_DWORD *)(a1 + 16) = v193 + v191;
        *a2 = v194;
        *a3 = v195;
      }
      return sub_1CBE068(a1, v14);
    }
    if ( *(_QWORD *)(a1 + 120) )
    {
      v19 = sub_1CBE080(a1, v8, v7, v6, 1);
      if ( (v19 & 0x80000000) != 0 )
      {
        v14 = v19;
        return sub_1CBE068(a1, v14);
      }
    }
    v20 = *(unsigned int *)(a1 + 72);
    if ( !(_DWORD)v20 )
      break;
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( !*a2 )
        goto LABEL_214;
      v14 = 1;
      *(_BYTE *)(v16 + v20) = **a3;
      v21 = (unsigned int)(*(_DWORD *)(a1 + 72) + 1);
      *(_DWORD *)(a1 + 72) = v21;
      *(_QWORD *)(a1 + 32) = v21;
      ++*a3;
      --*a2;
    }
    else
    {
      *(_DWORD *)(a1 + 72) = 0;
      v14 = 1;
      *(_QWORD *)(a1 + 32) = *a2;
      *(_QWORD *)(a1 + 24) = *a3;
    }
  }
  v188 = *(_BYTE **)(a1 + 24);
  *a3 = v188;
  v189 = *(_QWORD *)(a1 + 32);
  *a2 = v189;
  if ( v189 )
  {
    v190 = 0;
    do
    {
      *(_BYTE *)(v16 + v190) = *v188;
      v190 = *(_DWORD *)(a1 + 72) + 1;
      *(_DWORD *)(a1 + 72) = v190;
      v188 = *a3 + 1;
      *a3 = v188;
      v30 = (*a2)-- == 1;
    }
    while ( !v30 );
  }
LABEL_214:
  v14 = 2;
  return sub_1CBE068(a1, v14);
}