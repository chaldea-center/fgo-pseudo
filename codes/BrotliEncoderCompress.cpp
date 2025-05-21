char *__fastcall BrotliEncoderCompress(
        int a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        _BYTE *a7)
{
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x25
  _WORD *v9; // x26
  __int64 *v10; // x22
  unsigned __int64 v11; // x29
  int v15; // w22
  int v16; // w23
  unsigned __int64 v17; // x26
  char v18; // w19
  char *result; // x0
  __int64 v21; // x8
  char *v22; // x20
  int v23; // w0
  int v24; // w19
  int v25; // w8
  char v26; // w28
  char v27; // w24
  char v28; // w27
  __int64 v29; // x8
  __int16 v30; // kr00_2
  int v31; // w8
  __int128 *v32; // x0
  __int64 v33; // x1
  int v34; // w10
  __int64 v35; // x8
  int v36; // w10
  int v37; // w8
  int v38; // w10
  int v39; // w9
  void *v40; // x19
  _DWORD *v41; // x0
  __int64 *v42; // x9
  unsigned __int64 v43; // x10
  __int64 v44; // t1
  int v45; // w8
  int v46; // w10
  unsigned __int64 v47; // x22
  int v48; // w8
  _WORD *v49; // x19
  __int64 *v50; // x9
  unsigned __int64 v51; // x10
  __int64 v52; // t1
  unsigned __int64 v53; // x11
  __int64 v54; // x8
  int v55; // w10
  unsigned __int64 v56; // x11
  int v57; // w12
  int v58; // w8
  char v59; // w8
  int *v60; // x9
  unsigned __int64 v61; // x10
  int v62; // t1
  size_t v63; // w2
  char *v64; // x9
  __int64 v65; // x8
  int32x4_t v66; // q0
  _DWORD *v67; // x19
  char *v68; // x20
  int *v69; // x10
  unsigned __int64 v70; // x11
  int v71; // t1
  unsigned int v72; // w12
  int *v73; // x10
  unsigned __int64 v74; // x11
  int v75; // t1
  unsigned int v76; // w12
  _DWORD *v77; // x20
  char *v78; // x23
  int *v79; // x10
  unsigned __int64 v80; // x11
  int v81; // t1
  unsigned int v82; // w12
  __int64 v83; // x8
  int v84; // w10
  unsigned __int64 v85; // x11
  int v86; // w12
  void *v87; // x19
  __int64 v88; // x8
  char v89; // w9
  __int64 *v90; // x11
  unsigned __int64 v91; // x12
  __int64 v92; // t1
  __int64 *v93; // x9
  unsigned __int64 v94; // x10
  __int64 v95; // t1
  unsigned __int64 v96; // x11
  int v97; // w8
  unsigned __int64 v98; // x10
  int v99; // w11
  bool v100; // cf
  __int64 v101; // x8
  char v102; // w9
  __int64 *v103; // x11
  unsigned __int64 v104; // x12
  __int64 v105; // t1
  int v106; // w8
  __int64 i; // x10
  int v108; // w11
  __int64 v109; // x8
  int v110; // w10
  unsigned __int64 v111; // x11
  int v112; // w12
  unsigned __int64 v113; // x10
  int v114; // w11
  int v115; // w8
  unsigned __int64 v116; // x10
  int v117; // w11
  int v118; // w8
  __int64 j; // x10
  int v120; // w11
  __int128 **v121; // x8
  unsigned __int64 v122; // x10
  int v123; // w11
  unsigned __int64 v124; // x26
  unsigned __int64 v125; // x8
  unsigned __int64 v126; // x19
  int v127; // w9
  __int64 v128; // x20
  __int64 v129; // x10
  unsigned __int64 v130; // x29
  unsigned __int64 v131; // x26
  __int64 v132; // x23
  unsigned __int64 v133; // x8
  unsigned __int64 v134; // x9
  unsigned __int64 v135; // x10
  _DWORD *v136; // x11
  __int64 v137; // x12
  int v138; // w13
  __int64 v139; // x16
  __int64 v140; // x17
  unsigned int v141; // w0
  __int64 v142; // x3
  __int64 v143; // x15
  __int64 v144; // x14
  unsigned __int64 v145; // x5
  unsigned __int64 v146; // x1
  unsigned __int64 v147; // x2
  unsigned __int64 v148; // x17
  __int64 v149; // x0
  __int64 v150; // x4
  unsigned __int64 v151; // x5
  unsigned __int64 v152; // x24
  unsigned __int64 v153; // x28
  unsigned __int8 *v154; // x7
  unsigned __int64 v155; // x6
  __int64 v156; // x25
  __int64 v157; // x20
  __int64 v158; // x27
  unsigned __int64 v159; // x5
  __int64 v160; // x3
  __int64 v161; // x24
  unsigned __int64 v162; // x25
  int v163; // w15
  __int64 v164; // x0
  __int64 v165; // x10
  unsigned __int64 v166; // x24
  unsigned __int64 v167; // x25
  unsigned __int64 v168; // x19
  char *v169; // x28
  __int64 v170; // x0
  unsigned __int64 v171; // x8
  char *v172; // x9
  unsigned int v173; // w9
  unsigned int v174; // w10
  char *v175; // x19
  unsigned __int64 v176; // x9
  int v177; // w8
  char v178; // w23
  unsigned __int64 v179; // x20
  __int64 v180; // x20
  __int64 v181; // x8
  __int64 v182; // x19
  int v183; // w11
  unsigned int v184; // w9
  unsigned int v185; // w12
  int v186; // w9
  _BYTE *v187; // x10
  int v188; // w9
  __int64 v189; // x25
  int v190; // w11
  int v191; // w8
  int v192; // w11
  unsigned __int64 v193; // [xsp+40h] [xbp-7E0h]
  __int64 v196; // [xsp+70h] [xbp-7B0h]
  char *v197; // [xsp+78h] [xbp-7A8h]
  unsigned __int64 v198; // [xsp+80h] [xbp-7A0h]
  unsigned __int64 v199; // [xsp+88h] [xbp-798h]
  int v200; // [xsp+94h] [xbp-78Ch]
  unsigned __int64 v201; // [xsp+98h] [xbp-788h]
  int v202; // [xsp+A0h] [xbp-780h]
  unsigned __int64 v203; // [xsp+A8h] [xbp-778h]
  char v204; // [xsp+B0h] [xbp-770h]
  unsigned __int64 v205; // [xsp+B8h] [xbp-768h]
  char v206; // [xsp+C4h] [xbp-75Ch]
  unsigned __int64 v207; // [xsp+C8h] [xbp-758h]
  unsigned __int64 v208; // [xsp+D8h] [xbp-748h]
  char *v209; // [xsp+E0h] [xbp-740h]
  unsigned __int64 v210; // [xsp+E8h] [xbp-738h]
  unsigned __int64 v211; // [xsp+F0h] [xbp-730h]
  unsigned __int64 v212; // [xsp+F8h] [xbp-728h]
  __int64 v213; // [xsp+100h] [xbp-720h]
  char *src; // [xsp+108h] [xbp-718h]
  __int64 dest[9]; // [xsp+110h] [xbp-710h] BYREF
  int v216; // [xsp+15Ch] [xbp-6C4h]
  __int64 v217[6]; // [xsp+1A0h] [xbp-680h] BYREF
  _BYTE v218[48]; // [xsp+1D0h] [xbp-650h] BYREF
  _BYTE v219[48]; // [xsp+200h] [xbp-620h] BYREF
  __int128 v220; // [xsp+230h] [xbp-5F0h]
  __int128 v221; // [xsp+240h] [xbp-5E0h]
  __int128 v222; // [xsp+250h] [xbp-5D0h]
  __int128 v223; // [xsp+260h] [xbp-5C0h]
  __int128 v224; // [xsp+270h] [xbp-5B0h]
  unsigned __int64 v225; // [xsp+280h] [xbp-5A0h] BYREF
  unsigned __int64 v226; // [xsp+288h] [xbp-598h] BYREF
  unsigned __int64 v227; // [xsp+290h] [xbp-590h] BYREF
  __int128 v228; // [xsp+298h] [xbp-588h] BYREF
  _BYTE v229[32]; // [xsp+2A8h] [xbp-578h]
  unsigned __int64 v230; // [xsp+2C8h] [xbp-558h] BYREF
  void *v231; // [xsp+2D0h] [xbp-550h]
  void *s; // [xsp+2D8h] [xbp-548h]
  __int128 *v233; // [xsp+2E0h] [xbp-540h]
  __int128 *v234; // [xsp+2E8h] [xbp-538h] BYREF
  __int128 v235; // [xsp+2F0h] [xbp-530h]
  __int128 v236; // [xsp+300h] [xbp-520h]
  __int128 v237; // [xsp+310h] [xbp-510h]
  _BYTE v238[24]; // [xsp+320h] [xbp-500h] BYREF
  __int128 v239; // [xsp+338h] [xbp-4E8h]
  __int128 v240; // [xsp+348h] [xbp-4D8h]
  __int128 v241; // [xsp+358h] [xbp-4C8h]
  __int128 *v242; // [xsp+368h] [xbp-4B8h]
  __int128 *v243; // [xsp+370h] [xbp-4B0h]
  int v244; // [xsp+378h] [xbp-4A8h]
  __int64 *v245; // [xsp+380h] [xbp-4A0h]
  __int64 v246; // [xsp+6C8h] [xbp-158h]
  void *v247; // [xsp+6D0h] [xbp-150h]
  __int128 *v248; // [xsp+6D8h] [xbp-148h]
  __int64 v249; // [xsp+6E0h] [xbp-140h] BYREF
  int v250; // [xsp+6E8h] [xbp-138h]
  __int64 v251; // [xsp+6ECh] [xbp-134h]
  __int128 v252; // [xsp+6F4h] [xbp-12Ch]
  int v253; // [xsp+704h] [xbp-11Ch]
  __int128 v254; // [xsp+708h] [xbp-118h]
  int v255; // [xsp+718h] [xbp-108h]
  __int128 v256; // [xsp+720h] [xbp-100h]
  __int64 v257; // [xsp+730h] [xbp-F0h]
  __int64 v258; // [xsp+738h] [xbp-E8h] BYREF
  __int128 v259; // [xsp+770h] [xbp-B0h]
  __int128 v260; // [xsp+780h] [xbp-A0h] BYREF
  __int64 v261[3]; // [xsp+798h] [xbp-88h] BYREF
  __int64 v262; // [xsp+7B8h] [xbp-68h]

  v7 = a4 + ((a4 >> 12) & 0xFFFFFFFFFFFFCLL) + 6;
  if ( v7 < a4 )
    v7 = 0LL;
  if ( a4 )
    v8 = v7;
  else
    v8 = 2LL;
  v199 = *a6;
  if ( *a6 )
  {
    v9 = a7;
    v10 = (__int64 *)a6;
    v11 = a4;
    if ( !a4 )
    {
      result = (_BYTE *)(&dword_0 + 1);
      *a6 = 1LL;
      *a7 = 6;
      return result;
    }
    if ( a1 != 10 )
    {
      result = BrotliEncoderCreateInstance(0LL, 0LL, 0LL);
      if ( !result )
        return result;
      *(_QWORD *)&v228 = v11;
      v217[0] = a5;
      v21 = *v10;
      dest[0] = (__int64)v9;
      v261[0] = 0LL;
      v22 = result;
      v249 = v21;
      if ( !*((_DWORD *)result + 1639) )
      {
        *((_DWORD *)result + 1) = a1;
        *((_DWORD *)result + 2) = a2;
        *(_DWORD *)result = a3;
        *((_QWORD *)result + 3) = (unsigned int)v11;
        if ( a2 >= 25 )
          *((_DWORD *)result + 9) = 1;
      }
      v23 = BrotliEncoderCompressStream(result, 2LL, &v228, v217, &v249, dest, v261);
      if ( *((_DWORD *)v22 + 1637) == 2 && !*((_QWORD *)v22 + 814) )
        v24 = v23;
      else
        v24 = 0;
      *v10 = v261[0];
      BrotliEncoderDestroyInstance(v22);
      if ( !v24 )
        goto LABEL_328;
      goto LABEL_326;
    }
    v193 = v8;
    if ( a2 <= 16 )
      v15 = 16;
    else
      v15 = a2;
    v260 = xmmword_BEA8F0;
    v259 = xmmword_BEA8F0;
    if ( v15 >= 30 )
      v16 = 30;
    else
      v16 = v15;
    if ( 1LL << v16 <= a4 )
      v17 = 1LL << v16;
    else
      v17 = a4;
    *(_QWORD *)&v228 = 0LL;
    v253 = 0;
    v250 = 22;
    v249 = 0xB00000000LL;
    v251 = 0LL;
    *((_QWORD *)&v252 + 1) = 0LL;
    if ( (unsigned int)v16 >= 0x17 )
      v18 = 23;
    else
      v18 = v16;
    *(_QWORD *)&v252 = 0LL;
    sub_1C4F688(&v258);
    v257 = 67108860LL;
    v256 = xmmword_BEAC40;
    v250 = v16;
    if ( v16 < 25 )
    {
      HIDWORD(v249) = 10;
    }
    else
    {
      v253 = 1;
      HIDWORD(v249) = 10;
      v15 = v16;
    }
    if ( v15 < 17 )
    {
      v25 = 16;
    }
    else if ( v15 == 17 )
    {
      v25 = 17;
    }
    else
    {
      v25 = 18;
    }
    v26 = v18 + 1;
    LODWORD(v251) = v25;
    sub_1BD64B4(&v249);
    v27 = v251;
    sub_1BE987C(v261, 0LL, 0LL, 0LL);
    if ( v253 )
    {
      v28 = 17;
      v29 = 14LL;
    }
    else if ( v16 == 16 )
    {
      v28 = 0;
      LOBYTE(v16) = 0;
      v29 = 1LL;
    }
    else if ( v16 == 17 )
    {
      LOBYTE(v16) = 0;
      v28 = 1;
      v29 = 7LL;
    }
    else
    {
      v30 = 2 * v16 - 33;
      LOBYTE(v16) = HIBYTE(v30);
      v28 = v30;
      v29 = 4LL;
    }
    v207 = v29;
    v204 = v16;
    v31 = HIDWORD(v249);
    if ( SHIDWORD(v249) < 10 )
    {
      if ( HIDWORD(v249) == 4 )
      {
        if ( *(_QWORD *)((char *)&v252 + 4) >= 0x100000uLL )
          v31 = 54;
      }
      else if ( SHIDWORD(v249) > 4 )
      {
        if ( v250 > 16 )
        {
          if ( v250 < 19 || *(_QWORD *)((char *)&v252 + 4) < 0x100000uLL )
          {
            if ( SHIDWORD(v249) >= 9 )
              v190 = 16;
            else
              v190 = 10;
            if ( SHIDWORD(v249) >= 7 )
              v191 = v190;
            else
              v191 = 4;
            if ( SHIDWORD(v249) < 7 )
              v192 = 14;
            else
              v192 = 15;
            v255 = v191;
            v31 = 5;
            LODWORD(v254) = 5;
            DWORD1(v254) = v192;
            DWORD2(v254) = HIDWORD(v249) - 1;
          }
          else
          {
            DWORD2(v254) = HIDWORD(v249) - 1;
            if ( SHIDWORD(v249) >= 9 )
              v36 = 16;
            else
              v36 = 10;
            if ( SHIDWORD(v249) >= 7 )
              v37 = v36;
            else
              v37 = 4;
            HIDWORD(v254) = 5;
            v255 = v37;
            *(_QWORD *)&v254 = 0xF00000006LL;
            v31 = 6;
          }
LABEL_50:
          if ( v250 < 25 )
          {
            v32 = 0LL;
            v33 = 0x40000LL;
            switch ( v31 )
            {
              case 2:
              case 3:
                goto LABEL_89;
              case 4:
LABEL_68:
                v33 = 0x80000LL;
                goto LABEL_89;
              case 5:
              case 6:
LABEL_57:
                v33 = ((4 * (1LL << SBYTE4(v254))) << SBYTE8(v254)) + 2 * (1LL << SBYTE4(v254));
                goto LABEL_88;
              case 7:
              case 8:
              case 9:
                break;
              case 10:
LABEL_70:
                v35 = 1LL << v250;
                if ( 1LL << v250 > v17 )
                  v35 = v17;
                v33 = 8 * v35 + 0x80000;
LABEL_88:
                if ( v33 )
                  goto LABEL_89;
                v32 = 0LL;
                break;
              default:
                switch ( v31 )
                {
                  case '#':
LABEL_69:
                    v33 = 67371008LL;
                    break;
                  case '$':
                  case '%':
                  case '&':
                  case '\'':
                    goto LABEL_90;
                  case '(':
                  case ')':
                    goto LABEL_68;
                  case '*':
LABEL_73:
                    v33 = 1310720LL;
                    break;
                  default:
                    if ( v31 != 54 )
                      goto LABEL_90;
                    v33 = 0x400000LL;
                    break;
                }
LABEL_89:
                v32 = (__int128 *)sub_1BE98A8(v261, v33);
                break;
            }
          }
          else
          {
            v32 = 0LL;
            v33 = 0x40000LL;
            switch ( v31 )
            {
              case 2:
                goto LABEL_89;
              case 3:
                LODWORD(v254) = 35;
                goto LABEL_69;
              case 4:
                goto LABEL_68;
              case 5:
                goto LABEL_57;
              case 6:
                LODWORD(v254) = 65;
                v33 = ((4 * (1LL << SBYTE4(v254))) << SBYTE8(v254)) + 2 * (1LL << SBYTE4(v254)) + 0x4000000;
                goto LABEL_88;
              case 7:
              case 8:
              case 9:
                break;
              case 10:
                goto LABEL_70;
              default:
                switch ( v31 )
                {
                  case '#':
                    goto LABEL_69;
                  case '$':
                  case '%':
                  case '&':
                  case '\'':
                    goto LABEL_90;
                  case '(':
                  case ')':
                    goto LABEL_68;
                  case '*':
                    goto LABEL_73;
                  default:
                    if ( v31 != 54 )
                      goto LABEL_90;
                    LODWORD(v254) = 55;
                    v33 = 71303168LL;
                    break;
                }
                goto LABEL_89;
            }
          }
LABEL_90:
          *(_QWORD *)&v228 = v32;
          *(_OWORD *)&v229[8] = v254;
          *(_DWORD *)&v229[24] = v255;
          if ( (int)v254 <= 34 )
          {
            switch ( (int)v254 )
            {
              case 2:
              case 3:
              case 4:
                goto LABEL_103;
              case 5:
                v234 = &v228;
                v230 = 1LL << v229[12];
                *(_QWORD *)&v235 = v32;
                v231 = (void *)(1LL << v229[16]);
                LODWORD(s) = 32 - *(_DWORD *)&v229[12];
                HIDWORD(s) = (1LL << v229[16]) - 1;
                *((_QWORD *)&v235 + 1) = (char *)v32 + 2 * (1LL << v229[12]);
                v233 = (__int128 *)__PAIR64__(*(unsigned int *)&v229[24], *(unsigned int *)&v229[16]);
                break;
              case 6:
                LODWORD(v235) = *(_DWORD *)&v229[24];
                LODWORD(s) = 64 - *(_DWORD *)&v229[12];
                *((_QWORD *)&v235 + 1) = &v228;
                v230 = 1LL << v229[12];
                *(_QWORD *)&v236 = v32;
                v231 = (void *)(1LL << v229[16]);
                HIDWORD(v234) = *(_DWORD *)&v229[16];
                LODWORD(v234) = (1LL << v229[16]) - 1;
                v233 = (__int128 *)(0xFFFFFFFFFFFFFFFFLL >> (-8 * v229[20]));
                *((_QWORD *)&v236 + 1) = (char *)v32 + 2 * (1LL << v229[12]);
                break;
              case 10:
                v233 = v32 + 0x8000;
                v231 = v32;
                v230 = (unsigned int)~(-1 << v250);
                LODWORD(s) = (-1 << v250) + 1;
                break;
              default:
                break;
            }
          }
          else if ( (int)v254 > 53 )
          {
            switch ( (_DWORD)v254 )
            {
              case '6':
LABEL_103:
                v230 = (unsigned __int64)&v228;
                v231 = v32;
                break;
              case '7':
LABEL_104:
                *(_QWORD *)&v239 = &v228;
                *(_QWORD *)&v238[16] = v32;
                v236 = v228;
                v237 = *(_OWORD *)v229;
                *(_OWORD *)v238 = *(_OWORD *)&v229[16];
                DWORD2(v239) = 1;
                *(_QWORD *)&v240 = &v249;
                break;
              case 'A':
                v243 = &v228;
                v242 = v32;
                v239 = v228;
                v240 = *(_OWORD *)v229;
                v241 = *(_OWORD *)&v229[16];
                v244 = 1;
                v245 = &v249;
                break;
            }
          }
          else
          {
            switch ( (int)v254 )
            {
              case '#':
                goto LABEL_104;
              case '(':
              case ')':
                v233 = &v228;
                if ( SHIDWORD(v249) >= 7 )
                  v38 = 7;
                else
                  v38 = 8;
                s = v32;
                v231 = (void *)(unsigned int)(v38 << (BYTE4(v249) - 4));
                break;
              case '*':
                v248 = &v228;
                if ( SHIDWORD(v249) >= 7 )
                  v39 = 7;
                else
                  v39 = 8;
                v247 = v32;
                v246 = (unsigned int)(v39 << (BYTE4(v249) - 4));
                break;
              default:
                break;
            }
          }
          *(_DWORD *)&v229[28] = 0;
          if ( (int)v254 <= 34 )
          {
            switch ( (int)v254 )
            {
              case 2:
                v41 = v231;
                if ( v17 > 0x800 )
                  goto LABEL_146;
                v42 = (__int64 *)a5;
                v43 = v17;
                do
                {
                  v44 = *v42;
                  v42 = (__int64 *)((char *)v42 + 1);
                  --v43;
                  *(_DWORD *)((char *)v41 + (((0xBD1E35A7BD000000LL * v44) >> 46) & 0x3FFFC)) = 0;
                }
                while ( v43 );
                break;
              case 3:
                v41 = v231;
                if ( v17 > 0x800 )
                {
LABEL_146:
                  v63 = 0x40000;
                  goto LABEL_176;
                }
                v50 = (__int64 *)a5;
                v51 = v17;
                do
                {
                  v52 = *v50;
                  v50 = (__int64 *)((char *)v50 + 1);
                  --v51;
                  v53 = (0xBD1E35A7BD000000LL * v52) >> 48;
                  v41[v53] = 0;
                  v41[(unsigned __int16)(v53 + 8)] = 0;
                }
                while ( v51 );
                break;
              case 4:
                v41 = v231;
                if ( v17 > 0x1000 )
                {
                  v63 = 0x80000;
                  goto LABEL_176;
                }
                v54 = 0LL;
                do
                {
                  v55 = 0;
                  v56 = (0xBD1E35A7BD000000LL * *(_QWORD *)(a5 + v54)) >> 47;
                  do
                  {
                    v57 = v56 + v55;
                    v55 += 8;
                    v41[v57 & 0x1FFFF] = 0;
                  }
                  while ( v55 != 32 );
                  ++v54;
                }
                while ( v54 != v17 );
                break;
              case 5:
                v58 = v230;
                v41 = (_DWORD *)v235;
                if ( v17 > v230 >> 6 )
                  goto LABEL_142;
                v59 = (char)s;
                v60 = (int *)a5;
                v61 = v17;
                do
                {
                  v62 = *v60;
                  v60 = (int *)((char *)v60 + 1);
                  --v61;
                  *((_WORD *)v41 + ((unsigned __int64)(unsigned int)(506832829 * v62) >> v59)) = 0;
                }
                while ( v61 );
                break;
              case 6:
                v58 = v230;
                v41 = (_DWORD *)v236;
                if ( v17 > v230 >> 6 )
                {
LABEL_142:
                  v63 = 2 * v58;
                  goto LABEL_176;
                }
                v88 = (__int64)v233;
                v89 = (char)s;
                v90 = (__int64 *)a5;
                v91 = v17;
                do
                {
                  v92 = *v90;
                  v90 = (__int64 *)((char *)v90 + 1);
                  --v91;
                  *((_WORD *)v41 + (unsigned int)((0x1FE35A7BD3579BD3LL * (v92 & (unsigned __int64)v88)) >> v89)) = 0;
                }
                while ( v91 );
                break;
              case 10:
                v64 = (char *)v231;
                v65 = 0LL;
                v66 = vdupq_lane_s32((int32x2_t)s, 0);
                do
                {
                  *(int32x4_t *)&v64[v65] = v66;
                  v65 += 16LL;
                }
                while ( v65 != 0x80000 );
                break;
              default:
                break;
            }
          }
          else
          {
            if ( (int)v254 <= 53 )
            {
              switch ( (int)v254 )
              {
                case '#':
                  if ( DWORD2(v239) )
                  {
                    DWORD2(v239) = 0;
                    *(_QWORD *)&v236 = *(_QWORD *)&v238[16] + 0x40000LL;
                    v230 = v239;
                    v40 = *(void **)v239;
                    LODWORD(s) = 0;
                    v234 = 0LL;
                    v231 = v40;
                    *(_QWORD *)((char *)&v235 + 4) = 0x16C4362100010DCDLL;
                    v233 = (__int128 *)(*(_QWORD *)&v238[16] + 0x40000LL);
                    memset((void *)(*(_QWORD *)&v238[16] + 0x40000LL), 255, 0x4000000u);
                  }
                  else
                  {
                    v40 = v231;
                  }
                  if ( v17 > 0x800 )
                  {
                    memset(v40, 0, 0x40000u);
                  }
                  else
                  {
                    v93 = (__int64 *)a5;
                    v94 = v17;
                    do
                    {
                      v95 = *v93;
                      v93 = (__int64 *)((char *)v93 + 1);
                      --v94;
                      v96 = (0xBD1E35A7BD000000LL * v95) >> 48;
                      *((_DWORD *)v40 + v96) = 0;
                      *((_DWORD *)v40 + (unsigned __int16)(v96 + 8)) = 0;
                    }
                    while ( v94 );
                    if ( v17 < 0x20 )
                      goto LABEL_210;
                  }
                  v97 = 0;
                  v98 = 0LL;
                  do
                  {
                    v99 = *(unsigned __int8 *)(a5 + v98);
                    v100 = v98 >= 0x1C;
                    v98 += 4LL;
                    v97 = v99 + v97 * DWORD1(v235) + 1;
                  }
                  while ( !v100 );
                  goto LABEL_209;
                case '(':
                  v67 = s;
                  v68 = (char *)s + 0x20000;
                  if ( v17 > 0x200 )
                    goto LABEL_159;
                  v69 = (int *)a5;
                  v70 = v17;
                  do
                  {
                    v71 = *v69;
                    v69 = (int *)((char *)v69 + 1);
                    --v70;
                    v72 = (unsigned int)(506832829 * v71) >> 17;
                    v67[v72] = -858993460;
                    *(_WORD *)&v68[2 * v72] = -13108;
                  }
                  while ( v70 );
                  goto LABEL_160;
                case ')':
                  v67 = s;
                  v68 = (char *)s + 0x20000;
                  if ( v17 > 0x200 )
                  {
LABEL_159:
                    memset(v67, 204, 0x20000u);
                    memset(v68, 0, 0x10000u);
                  }
                  else
                  {
                    v73 = (int *)a5;
                    v74 = v17;
                    do
                    {
                      v75 = *v73;
                      v73 = (int *)((char *)v73 + 1);
                      --v74;
                      v76 = (unsigned int)(506832829 * v75) >> 17;
                      v67[v76] = -858993460;
                      *(_WORD *)&v68[2 * v76] = -13108;
                    }
                    while ( v74 );
                  }
LABEL_160:
                  memset(v67 + 49152, 0, 0x10000u);
                  LOWORD(v230) = 0;
                  goto LABEL_210;
                case '*':
                  v77 = v247;
                  v78 = (char *)v247 + 0x20000;
                  if ( v17 > 0x200 )
                  {
                    memset(v247, 204, 0x20000u);
                    memset(v78, 0, 0x10000u);
                  }
                  else
                  {
                    v79 = (int *)a5;
                    v80 = v17;
                    do
                    {
                      v81 = *v79;
                      v79 = (int *)((char *)v79 + 1);
                      --v80;
                      v82 = (unsigned int)(506832829 * v81) >> 17;
                      v77[v82] = -858993460;
                      *(_WORD *)&v78[2 * v82] = -13108;
                    }
                    while ( v80 );
                  }
                  memset(v77 + 49152, 0, 0x10000u);
                  memset(&v230, 0, 0x400u);
                  goto LABEL_210;
                default:
                  goto LABEL_210;
              }
            }
            switch ( (_DWORD)v254 )
            {
              case '6':
                v41 = v231;
                if ( v17 > 0x8000 )
                {
                  v63 = 0x400000;
LABEL_176:
                  memset(v41, 0, v63);
                }
                else
                {
                  v83 = 0LL;
                  do
                  {
                    v84 = 0;
                    v85 = (unsigned __int64)(0x35A7BD1E35A7BD00LL * *(_QWORD *)(a5 + v83)) >> 44;
                    do
                    {
                      v86 = v85 + v84;
                      v84 += 8;
                      v41[v86 & 0xFFFFF] = 0;
                    }
                    while ( v84 != 32 );
                    ++v83;
                  }
                  while ( v83 != v17 );
                }
                break;
              case '7':
                if ( DWORD2(v239) )
                {
                  DWORD2(v239) = 0;
                  *(_QWORD *)&v236 = *(_QWORD *)&v238[16] + 0x400000LL;
                  v230 = v239;
                  v87 = *(void **)v239;
                  LODWORD(s) = 0;
                  v234 = 0LL;
                  v231 = v87;
                  *(_QWORD *)((char *)&v235 + 4) = 0x16C4362100010DCDLL;
                  v233 = (__int128 *)(*(_QWORD *)&v238[16] + 0x400000LL);
                  memset((void *)(*(_QWORD *)&v238[16] + 0x400000LL), 255, 0x4000000u);
                }
                else
                {
                  v87 = v231;
                }
                if ( v17 > 0x8000 )
                {
                  memset(v87, 0, 0x400000u);
                }
                else
                {
                  v109 = 0LL;
                  do
                  {
                    v110 = 0;
                    v111 = (unsigned __int64)(0x35A7BD1E35A7BD00LL * *(_QWORD *)(a5 + v109)) >> 44;
                    do
                    {
                      v112 = v111 + v110;
                      v110 += 8;
                      *((_DWORD *)v87 + (v112 & 0xFFFFF)) = 0;
                    }
                    while ( v110 != 32 );
                    ++v109;
                  }
                  while ( v109 != v17 );
                  if ( v17 < 0x20 )
                    break;
                }
                v97 = 0;
                v113 = 0LL;
                do
                {
                  v114 = *(unsigned __int8 *)(a5 + v113);
                  v100 = v113 >= 0x1C;
                  v113 += 4LL;
                  v97 = v114 + v97 * DWORD1(v235) + 1;
                }
                while ( !v100 );
LABEL_209:
                LODWORD(s) = v97;
                break;
              case 'A':
                if ( v244 )
                {
                  v244 = 0;
                  *(_QWORD *)&v239 = (char *)v242
                                   + 2 * (1LL << *((_DWORD *)v245 + 11))
                                   + ((4 * (1LL << *((_DWORD *)v245 + 11))) << *((_DWORD *)v245 + 12));
                  *((_QWORD *)&v235 + 1) = v243;
                  v45 = *((_DWORD *)v243 + 7);
                  LODWORD(s) = 64 - v45;
                  v46 = *((_DWORD *)v243 + 9);
                  v47 = 1LL << v45;
                  v230 = v47;
                  v233 = (__int128 *)(0xFFFFFFFFFFFFFFFFLL >> (-8 * (unsigned __int8)v46));
                  v48 = *((_DWORD *)v243 + 8);
                  v231 = (void *)(1LL << v48);
                  HIDWORD(v234) = v48;
                  LODWORD(v234) = (1LL << v48) - 1;
                  LODWORD(v235) = *((_DWORD *)v243 + 10);
                  v49 = *(_WORD **)v243;
                  LODWORD(v237) = 0;
                  *(_QWORD *)v238 = 0LL;
                  *(_QWORD *)&v236 = v49;
                  *((_QWORD *)&v236 + 1) = &v49[v47];
                  *(_QWORD *)&v238[12] = 0xF1EBF08100010DCDLL;
                  *((_QWORD *)&v237 + 1) = v239;
                  memset((void *)v239, 255, 0x4000000u);
                }
                else
                {
                  v49 = (_WORD *)v236;
                  v47 = v230;
                }
                if ( v17 <= v47 >> 6 )
                {
                  v101 = (__int64)v233;
                  v102 = (char)s;
                  v103 = (__int64 *)a5;
                  v104 = v17;
                  do
                  {
                    v105 = *v103;
                    v103 = (__int64 *)((char *)v103 + 1);
                    --v104;
                    v49[(unsigned int)((0x1FE35A7BD3579BD3LL * (v105 & (unsigned __int64)v101)) >> v102)] = 0;
                  }
                  while ( v104 );
                }
                else
                {
                  memset(v49, 0, 2 * v47);
                }
                if ( v17 >= 0x20 )
                {
                  v106 = 0;
                  for ( i = 0LL; i != 32; ++i )
                  {
                    v108 = *(unsigned __int8 *)(a5 + i);
                    v106 = v108 + v106 * *(_DWORD *)&v238[12] + 1;
                  }
                  LODWORD(v237) = v106;
                }
                break;
            }
          }
LABEL_210:
          *(_QWORD *)v229 = 0LL;
          *((_QWORD *)&v228 + 1) = 0LL;
          *(_DWORD *)&v229[28] = 1;
          v198 = 1LL << v26;
          switch ( *(_DWORD *)&v229[8] )
          {
            case 'A':
              if ( v17 >= 0x20 )
              {
                v118 = 0;
                for ( j = 0LL; j != 32; ++j )
                {
                  v120 = *(unsigned __int8 *)(a5 + j);
                  v118 = v120 + v118 * *(_DWORD *)&v238[12] + 1;
                }
                LODWORD(v237) = v118;
              }
              v121 = (__int128 **)v238;
              goto LABEL_229;
            case '7':
              if ( v17 < 0x20 )
              {
LABEL_228:
                v121 = &v234;
LABEL_229:
                *v121 = 0LL;
                goto LABEL_230;
              }
              v115 = 0;
              v122 = 0LL;
              do
              {
                v123 = *(unsigned __int8 *)(a5 + v122);
                v100 = v122 >= 0x1C;
                v122 += 4LL;
                v115 = v123 + v115 * DWORD1(v235) + 1;
              }
              while ( !v100 );
              break;
            case '#':
              if ( v17 < 0x20 )
                goto LABEL_228;
              v115 = 0;
              v116 = 0LL;
              do
              {
                v117 = *(unsigned __int8 *)(a5 + v116);
                v100 = v116 >= 0x1C;
                v116 += 4LL;
                v115 = v117 + v115 * DWORD1(v235) + 1;
              }
              while ( !v100 );
              break;
            default:
LABEL_230:
              v124 = 0LL;
              v205 = 0LL;
              v208 = 1LL << v27;
              v202 = 1;
              v196 = 0LL;
              v197 = a7;
              v201 = v11;
              do
              {
                v227 = 0LL;
                v226 = 0LL;
                v125 = v124 + v198;
                if ( v124 + v198 > v11 )
                  v125 = v11;
                v126 = v125 - v124;
                v211 = v125;
                v206 = v28;
                if ( SHIDWORD(v249) < 10 || (unsigned int)sub_1BF0D5C(a5, v124, 0x7FFFFFFFFFFFFFFFLL, v125 - v124, 0.75) )
                  v127 = 2;
                else
                  v127 = 3;
                v212 = 0LL;
                src = 0LL;
                v200 = v127;
                v210 = v126 / 0xC + 16;
                v128 = 0LL;
                v129 = 0LL;
                v130 = v124;
                v209 = (char *)&unk_FEFC25 + (unsigned int)(v127 << 9);
                v203 = v124;
                while ( v211 > v130 )
                {
                  v262 = v129;
                  if ( v211 - v130 >= v208 )
                    v131 = v208;
                  else
                    v131 = v211 - v130;
                  if ( v131 == -1LL )
                    v132 = 0LL;
                  else
                    v132 = sub_1BE98A8(v261, 16 * (v131 + 1));
                  v213 = v128;
                  sub_1C4B294(v132, v131 + 1);
                  if ( v130 >= 0x80 && v131 >= 3 )
                  {
                    v133 = v130 - 127;
                    v134 = v131 + v130 - 127;
                    if ( v134 > v130 )
                      v134 = v130;
                    if ( v133 < v134 )
                    {
                      v135 = v230;
                      v136 = v231;
                      v137 = (__int64)v233;
                      v138 = (int)s;
                      do
                      {
                        v139 = v133 & 0x7FFFFFFFFFFFFFFFLL;
                        v140 = 15LL;
                        if ( v130 - v133 > 0xF )
                          v140 = v130 - v133;
                        v141 = (unsigned int)(506832829 * *(_DWORD *)(a5 + (v133 & 0x7FFFFFFFFFFFFFFFLL))) >> 15;
                        v142 = (unsigned int)v136[v141];
                        v143 = 2 * (v133 & v135);
                        v144 = v143 | 1;
                        v145 = v133 - v142;
                        v136[v141] = v133;
                        if ( v133 != v142 )
                        {
                          v146 = 0LL;
                          v147 = 0LL;
                          v148 = v135 - v140;
                          v149 = a5 + v139;
                          v150 = 64LL;
                          while ( v145 <= v148 && v150 )
                          {
                            if ( v147 >= v146 )
                              v151 = v146;
                            else
                              v151 = v147;
                            v152 = 128 - v151;
                            v153 = (128 - v151) >> 3;
                            v154 = (unsigned __int8 *)(a5 + v151 + v142);
                            if ( v153 )
                            {
                              v155 = v152 & 0xFFFFFFFFFFFFFFF8LL;
                              v156 = 0LL;
                              while ( 1 )
                              {
                                v157 = *(_QWORD *)&v154[v156];
                                v158 = *(_QWORD *)(v149 + v151 + v156);
                                if ( v157 != v158 )
                                  break;
                                --v153;
                                v156 += 8LL;
                                if ( !v153 )
                                {
                                  v154 += v152 & 0xFFFFFFFFFFFFFFF8LL;
                                  goto LABEL_272;
                                }
                              }
                              v155 = v156 + (__clz(__rbit64(v158 ^ v157)) >> 3);
                            }
                            else
                            {
                              v155 = 0LL;
LABEL_272:
                              v161 = v152 & 7;
                              if ( v161 )
                              {
                                v162 = v155 | v161;
                                while ( *(unsigned __int8 *)(v149 + v151 + v155) == *v154 )
                                {
                                  ++v154;
                                  --v161;
                                  ++v155;
                                  if ( !v161 )
                                  {
                                    v155 = v162;
                                    break;
                                  }
                                }
                              }
                            }
                            v159 = v155 + v151;
                            if ( v159 > 0x7F )
                            {
                              *(_DWORD *)(v137 + 4 * v143) = *(_DWORD *)(v137 + 8 * (v142 & v135));
                              v163 = *(_DWORD *)(v137 + ((8 * (v142 & v135)) | 4));
                              goto LABEL_279;
                            }
                            if ( *(unsigned __int8 *)(a5 + v159 + v139) <= (unsigned int)*(unsigned __int8 *)(a5 + v159 + v142) )
                            {
                              *(_DWORD *)(v137 + 4 * v144) = v142;
                              v144 = 2 * (v142 & v135);
                              v146 = v159;
                              v160 = v144;
                            }
                            else
                            {
                              *(_DWORD *)(v137 + 4 * v143) = v142;
                              v143 = (2 * (v142 & v135)) | 1;
                              v147 = v159;
                              v160 = v143;
                            }
                            v142 = *(unsigned int *)(v137 + 4 * v160);
                            --v150;
                            v145 = v133 - v142;
                            if ( v133 == v142 )
                              break;
                          }
                        }
                        *(_DWORD *)(v137 + 4 * v143) = v138;
                        v163 = v138;
LABEL_279:
                        ++v133;
                        *(_DWORD *)(v137 + 4 * v144) = v163;
                      }
                      while ( v133 != v134 );
                    }
                  }
                  v164 = sub_1C4B5BC(v261, v131, v130, a5, 0x7FFFFFFFFFFFFFFFLL, v209, &v249, &v260, &v228, v132);
                  v165 = v262;
                  v166 = v164 + v262;
                  if ( v210 <= v164 + v262 + 1 )
                    v167 = v166 + 1;
                  else
                    v167 = v210;
                  if ( v212 == v167 )
                  {
                    v168 = v198 >> 3;
                    v169 = src;
                  }
                  else
                  {
                    if ( v167 )
                    {
                      v170 = sub_1BE98A8(v261, 16 * v167);
                      v165 = v262;
                      v169 = (char *)v170;
                    }
                    else
                    {
                      v169 = 0LL;
                    }
                    if ( src )
                    {
                      memcpy(v169, src, 16 * v165);
                      sub_1BE98CC(v261, src);
                      v165 = v262;
                    }
                    v168 = v198 >> 3;
                    v212 = v167;
                  }
                  src = v169;
                  sub_1C4B2C0(v131, v130, v132, &v260, &v227, &v249, &v169[16 * v165], &v226);
                  v128 = v131 + v213;
                  sub_1BE98CC(v261, v132);
                  if ( v166 <= v168 )
                  {
                    v130 += v131;
                    v129 = v166;
                    if ( v226 <= v168 )
                      continue;
                  }
                  goto LABEL_295;
                }
                v166 = v129;
LABEL_295:
                v171 = v227;
                v11 = v201;
                if ( v227 )
                {
                  v172 = &src[16 * v166];
                  *(_DWORD *)v172 = v227;
                  *(_QWORD *)(v172 + 4) = 0x8000000LL;
                  *((_WORD *)v172 + 7) = 16;
                  if ( v171 > 5 )
                  {
                    if ( v171 > 0x81 )
                    {
                      if ( v171 > 0x841 )
                      {
                        if ( v171 >> 1 >= 0xC21 )
                        {
                          if ( v171 < 0x5842 )
                            LOWORD(v173) = 22;
                          else
                            LOWORD(v173) = 23;
                        }
                        else
                        {
                          LOWORD(v173) = 21;
                        }
                      }
                      else
                      {
                        v173 = (__clz(v171 - 66) ^ 0x1F) + 10;
                      }
                    }
                    else
                    {
                      v174 = (__clz(v171 - 2) ^ 0x1F) - 1;
                      v173 = ((v171 - 2) >> v174) + 2 * v174 + 2;
                    }
                  }
                  else
                  {
                    LOWORD(v173) = v171;
                  }
                  *(_WORD *)&src[16 * v166++ + 12] = ((((0x520D40u >> (6 * ((unsigned __int16)v173 >> 3))) & 0xC0)
                                                     + 192 * ((unsigned __int16)v173 >> 3)) & 0xFFC7 | (8 * (v173 & 7)))
                                                   + 66;
                  v226 += v171;
                }
                v124 = v128 + v203;
                v225 = v207;
                if ( v128 )
                {
                  if ( (unsigned int)sub_1BD650C(a5, 0x7FFFFFFFFFFFFFFFLL, v203, v128, v226, v166) )
                  {
                    v262 = v128 + v203;
                    memcpy(dest, &v249, 0x90u);
                    sub_1C463C0(v217);
                    sub_1C463C0(v218);
                    sub_1C463C0(v219);
                    v223 = 0u;
                    v224 = 0u;
                    v221 = 0u;
                    v222 = 0u;
                    v220 = 0u;
                    sub_1C1C49C(
                      (int)v261,
                      a5,
                      v203,
                      -1,
                      dest,
                      SHIDWORD(v196),
                      v196,
                      (int)src,
                      v166,
                      v200,
                      (__int64)v217);
                    sub_1C1D8FC(v216);
                    v175 = (char *)sub_1BE98A8(v261, 2 * v128 + 503);
                    *v175 = v206;
                    v175[1] = v204;
                    sub_1C134DC(
                      v261,
                      a5,
                      v203,
                      v128,
                      0x7FFFFFFFFFFFFFFFLL,
                      HIDWORD(v196),
                      (unsigned int)v196,
                      v128 + v203 == v201,
                      dest,
                      v200,
                      src,
                      v166,
                      v217,
                      &v225,
                      v175);
                    if ( v128 + 4 < v225 >> 3 )
                    {
                      v260 = v259;
                      *v175 = v206;
                      v175[1] = v204;
                      v225 = v207;
                      sub_1C157C0(v128 + v203 == v201, a5, v203, 0x7FFFFFFFFFFFFFFFLL, v128, &v225, v175);
                    }
                    sub_1C463D0(v261, v217);
                    sub_1C463D0(v261, v218);
                    sub_1C463D0(v261, v219);
                    sub_1BE98CC(v261, v220);
                    *(_QWORD *)&v220 = 0LL;
                    sub_1BE98CC(v261, v221);
                    *(_QWORD *)&v221 = 0LL;
                    sub_1BE98CC(v261, v222);
                    *(_QWORD *)&v222 = 0LL;
                    sub_1BE98CC(v261, v223);
                    *(_QWORD *)&v223 = 0LL;
                    sub_1BE98CC(v261, v224);
                    v176 = v205;
                    v11 = v201;
                    v124 = v262;
                  }
                  else
                  {
                    v260 = v259;
                    v175 = (char *)sub_1BE98A8(v261, v128 + 16);
                    *v175 = v206;
                    v175[1] = v204;
                    sub_1C157C0(v128 + v203 == v201, a5, v203, 0x7FFFFFFFFFFFFFFFLL, v128, &v225, v175);
                    v176 = v205;
                  }
                }
                else
                {
                  v175 = (char *)sub_1BE98A8(v261, 16LL);
                  *v175 = v206;
                  v175[1] = v204;
                  v177 = v225 + 9;
                  *(_QWORD *)&v175[v225 >> 3] = (3LL << (v225 & 7)) | (unsigned __int8)v175[v225 >> 3];
                  v176 = v205;
                  v225 = v177 & 0xFFFFFFF8;
                }
                v178 = v225;
                v179 = v225 >> 3;
                v28 = v175[v225 >> 3];
                if ( v124 < v11 )
                {
                  LODWORD(v196) = *(unsigned __int8 *)(v124 + a5 - 2);
                  HIDWORD(v196) = *(unsigned __int8 *)(v124 + a5 - 1);
                }
                v205 = v179 + v176;
                v259 = v260;
                if ( v179 + v176 <= v199 )
                {
                  memcpy(v197, v175, v225 >> 3);
                  v197 += v179;
                }
                else
                {
                  v202 = 0;
                }
                sub_1BE98CC(v261, v175);
                sub_1BE98CC(v261, src);
                if ( v124 >= v11 )
                  break;
                v207 = v178 & 7;
                v204 = 0;
              }
              while ( v202 );
              v10 = (__int64 *)a6;
              *a6 = v205;
              if ( (_QWORD)v228 )
                sub_1BE98CC(v261, v228);
              v9 = a7;
              v8 = v193;
              if ( !v202 )
              {
LABEL_328:
                *v10 = 0LL;
                if ( v8 - 1 < v199 )
                {
                  v180 = 0LL;
                  v181 = 2LL;
                  *v9 = 801;
                  do
                  {
                    if ( v11 >> 24 )
                      v182 = 0x1000000LL;
                    else
                      v182 = v11;
                    if ( (unsigned int)v182 <= 0x100000 )
                      v183 = 1;
                    else
                      v183 = 2;
                    v184 = 8 * v182 - 8;
                    if ( (unsigned int)v182 <= 0x10000 )
                      v183 = 0;
                    v185 = v184 >> 8;
                    v186 = v184 | (2 * v183);
                    v187 = (char *)v9 + v181;
                    *v187 = v186;
                    v188 = (1 << ((4 * v183) | 0x13)) | v186;
                    v189 = v181 + 3;
                    v187[1] = v185;
                    v187[2] = BYTE2(v188);
                    if ( (unsigned int)v182 > 0x100000 )
                    {
                      *((_BYTE *)v9 + v189) = HIBYTE(v188);
                      v189 = v181 + 4;
                    }
                    memcpy((char *)v9 + v189, (const void *)(a5 + v180), v182);
                    v181 = v189 + v182;
                    v11 -= v182;
                    v180 += v182;
                  }
                  while ( v11 );
                  *((_BYTE *)v9 + v181) = 3;
                  *v10 = v181 + 1;
                  return (_BYTE *)(&dword_0 + 1);
                }
                return 0LL;
              }
LABEL_326:
              if ( !v8 || *v10 <= v8 )
                return (_BYTE *)(&dword_0 + 1);
              goto LABEL_328;
          }
          LODWORD(s) = v115;
          goto LABEL_228;
        }
        if ( SHIDWORD(v249) < 9 )
          v34 = 41;
        else
          v34 = 42;
        if ( SHIDWORD(v249) >= 7 )
          v31 = v34;
        else
          v31 = 40;
      }
    }
    else
    {
      v31 = 10;
    }
    LODWORD(v254) = v31;
    goto LABEL_50;
  }
  return 0LL;
}