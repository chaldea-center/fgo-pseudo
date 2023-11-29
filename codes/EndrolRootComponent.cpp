void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FE2B2 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FE2B2 = 1;
  }
  this->fields.nowDispIndex = -1;
  v4 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  this->fields.effectWave = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectWave,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_40FE2AC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17443, nextDispText);
    sub_B16FFC(&StringLiteral_17442, v4);
    sub_B16FFC(&StringLiteral_1278, v5);
    sub_B16FFC(&StringLiteral_1533, v6);
    sub_B16FFC(&StringLiteral_7470, v7);
    byte_40FE2AC = 1;
  }
  if ( !nextDispText )
    sub_B170D4();
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7470, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1533, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1278, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17442, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17443, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  int32_t txtLength; // w8
  System_String_o **v37; // x24
  char v38; // w25
  int32_t i; // w26
  struct System_String_array *v40; // x8
  System_String_o *v41; // x0
  struct System_String_array *v42; // x8
  System_String_o *v43; // x23
  struct System_String_array *v44; // x8
  System_String_o *v45; // x23
  System_String_o *v46; // x23
  struct System_Int32_array *effectWave; // x20
  __int64 v48; // x2
  System_String_o **v49; // x22
  System_String_o *v50; // x24
  struct System_Int32_array *v51; // x20
  System_String_o *v52; // x24
  struct System_String_array *v53; // x9
  char v54; // w8
  System_String_o *v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_o *klass; // x23
  __int64 v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_String_o *v70; // x1
  struct System_String_array *v71; // x8
  System_String_o *v72; // x23
  struct System_String_array *v73; // x8
  System_String_o *v74; // x23
  struct System_String_array *v75; // x8
  System_String_o *v76; // x23
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  struct System_String_array *allCreditText; // x8
  System_String_o *v84; // x0
  struct System_String_array *v85; // x8
  System_String_o *v86; // x0
  struct System_String_array *v87; // x8
  System_String_o *v88; // x0
  System_String_o *v89; // x0
  struct System_String_array *v90; // x8
  System_String_o *v91; // x0
  System_String_o **v92; // x22
  int32_t defaultFontSize; // w24
  struct System_String_array *v94; // x8
  System_String_o *v95; // x23
  int v96; // w8
  _DWORD *v97; // x23
  unsigned int v98; // w20
  _DWORD *v99; // x25
  System_String_o *v100; // x0
  System_String_o **v101; // x25
  System_String_o *v102; // t1
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x24
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x24
  System_String_o *v115; // x24
  float v116; // s0
  struct System_String_array *v117; // x8
  System_String_o *v118; // x0
  struct System_String_array *v119; // x8
  System_String_o *v120; // x23
  struct System_String_array *v121; // x8
  System_String_o *v122; // x23
  BattleServantConfConponent_o *p_defaultTextColor; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *p_bgmName; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_creditText; // [xsp+18h] [xbp-58h]

  if ( (byte_40FE2B1 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18153, v9);
    sub_B16FFC(&StringLiteral_6714, v10);
    sub_B16FFC(&StringLiteral_21834, v11);
    sub_B16FFC(&StringLiteral_22174, v12);
    sub_B16FFC(&StringLiteral_16641, v13);
    sub_B16FFC(&StringLiteral_17874, v14);
    sub_B16FFC(&StringLiteral_1278, v15);
    sub_B16FFC(&StringLiteral_9361, v16);
    sub_B16FFC(&StringLiteral_23096, v17);
    sub_B16FFC(&StringLiteral_18273, v18);
    sub_B16FFC(&StringLiteral_1533, v19);
    sub_B16FFC(&StringLiteral_17873, v20);
    sub_B16FFC(&StringLiteral_16628, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    sub_B16FFC(&StringLiteral_67, v23);
    sub_B16FFC(&StringLiteral_1512, v24);
    sub_B16FFC(&StringLiteral_17872, v25);
    byte_40FE2B1 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.creditText,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  txtLength = this->fields.txtLength;
  p_creditText = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.creditText;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    p_bgmName = (BattleServantConfConponent_o *)&this->fields.bgmName;
    p_defaultTextColor = (BattleServantConfConponent_o *)&this->fields.defaultTextColor;
    v37 = (System_String_o **)&StringLiteral_1533;
    v38 = 0;
    for ( i = 0; i < this->fields.txtLength; ++i )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_173;
      if ( i >= allCreditText->max_length )
        goto LABEL_174;
      v84 = allCreditText->m_Items[i];
      if ( !v84 )
LABEL_173:
        sub_B170D4();
      v33 = System_String__StartsWith(v84, *v37, 0LL);
      if ( (v33 & 1) != 0 )
      {
        v85 = this->fields.allCreditText;
        if ( !v85 )
          goto LABEL_173;
        if ( i >= v85->max_length )
          goto LABEL_174;
        v86 = v85->m_Items[i];
        if ( !v86 )
          goto LABEL_173;
        v33 = System_String__Contains(v86, (System_String_o *)StringLiteral_22174, 0LL);
        if ( (v33 & 1) != 0 )
        {
          v38 = 1;
        }
        else
        {
          v117 = this->fields.allCreditText;
          if ( !v117 )
            goto LABEL_173;
          if ( i >= v117->max_length )
            goto LABEL_174;
          v118 = v117->m_Items[i];
          if ( !v118 )
            goto LABEL_173;
          v33 = System_String__Contains(v118, (System_String_o *)StringLiteral_16628, 0LL);
          v119 = this->fields.allCreditText;
          if ( !v119 )
            goto LABEL_173;
          if ( i >= v119->max_length )
            goto LABEL_174;
          v120 = v119->m_Items[i];
          if ( (v33 & 1) != 0 )
          {
            v33 = sub_B17014(char___TypeInfo, 1LL, v35);
            if ( !v33 )
              goto LABEL_173;
            v34 = v33;
            if ( !*(_DWORD *)(v33 + 24) )
              goto LABEL_174;
            *(_WORD *)(v33 + 32) = 61;
            if ( !v120 )
              goto LABEL_173;
            v33 = (__int64)System_String__Split(v120, (System_Char_array *)v33, 0LL);
            if ( !v33 )
              goto LABEL_173;
            if ( *(_DWORD *)(v33 + 24) <= 1u )
              goto LABEL_174;
            this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(v33 + 40), 0LL) / 10.0;
          }
          else
          {
            if ( !v120 )
              goto LABEL_173;
            v33 = System_String__Contains(v120, (System_String_o *)StringLiteral_21834, 0LL);
            v121 = this->fields.allCreditText;
            if ( !v121 )
              goto LABEL_173;
            if ( i >= v121->max_length )
              goto LABEL_174;
            v122 = v121->m_Items[i];
            if ( (v33 & 1) != 0 )
            {
              v33 = sub_B17014(char___TypeInfo, 1LL, v35);
              if ( !v33 )
                goto LABEL_173;
              v34 = v33;
              if ( !*(_DWORD *)(v33 + 24) )
                goto LABEL_174;
              *(_WORD *)(v33 + 32) = 61;
              if ( !v122 )
                goto LABEL_173;
              v33 = (__int64)System_String__Split(v122, (System_Char_array *)v33, 0LL);
              if ( !v33 )
                goto LABEL_173;
              if ( *(_DWORD *)(v33 + 24) <= 1u )
                goto LABEL_174;
              this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(v33 + 40), 0LL) / 10.0;
            }
            else
            {
              if ( !v122 )
                goto LABEL_173;
              v33 = System_String__Contains(v122, (System_String_o *)StringLiteral_18273, 0LL);
              if ( (v33 & 1) != 0 )
              {
LABEL_170:
                v38 = 0;
                continue;
              }
              v40 = this->fields.allCreditText;
              if ( !v40 )
                goto LABEL_173;
              if ( i >= v40->max_length )
                goto LABEL_174;
              v41 = v40->m_Items[i];
              if ( !v41 )
                goto LABEL_173;
              v33 = System_String__Contains(v41, (System_String_o *)StringLiteral_23096, 0LL);
              v42 = this->fields.allCreditText;
              if ( !v42 )
                goto LABEL_173;
              if ( i >= v42->max_length )
                goto LABEL_174;
              v43 = v42->m_Items[i];
              if ( (v33 & 1) != 0 )
              {
                v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                if ( !v33 )
                  goto LABEL_173;
                v34 = v33;
                if ( !*(_DWORD *)(v33 + 24) )
                  goto LABEL_174;
                *(_WORD *)(v33 + 32) = 61;
                if ( !v43 )
                  goto LABEL_173;
                v33 = (__int64)System_String__Split(v43, (System_Char_array *)v33, 0LL);
                if ( !v33 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v33 + 24) <= 1u )
                  goto LABEL_174;
                this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(v33 + 40), 0LL) / 10.0;
              }
              else
              {
                if ( !v43 )
                  goto LABEL_173;
                v33 = System_String__Contains(v43, (System_String_o *)StringLiteral_18153, 0LL);
                v44 = this->fields.allCreditText;
                if ( !v44 )
                  goto LABEL_173;
                if ( i >= v44->max_length )
                  goto LABEL_174;
                v45 = v44->m_Items[i];
                if ( (v33 & 1) != 0 )
                {
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 61;
                  if ( !v45 )
                    goto LABEL_173;
                  v33 = (__int64)System_String__Split(v45, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v33 + 24) <= 1u )
                    goto LABEL_174;
                  v46 = *(System_String_o **)(v33 + 40);
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 126;
                  if ( !v46 )
                    goto LABEL_173;
                  v33 = (__int64)System_String__Split(v46, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  this->fields.effectTime = System_Single__Parse(*(System_String_o **)(v33 + 32), 0LL) / 10.0;
                  effectWave = this->fields.effectWave;
                  v33 = sub_B17014(char___TypeInfo, 1LL, v48);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 126;
                  v33 = (__int64)System_String__Split(v46, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v33 + 24) <= 1u )
                    goto LABEL_174;
                  v49 = v37;
                  v50 = *(System_String_o **)(v33 + 40);
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 45;
                  if ( !v50 )
                    goto LABEL_173;
                  v33 = (__int64)System_String__Split(v50, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  v33 = System_Int32__Parse(*(System_String_o **)(v33 + 32), 0LL);
                  if ( !effectWave )
                    goto LABEL_173;
                  if ( !effectWave->max_length )
                    goto LABEL_174;
                  effectWave->m_Items[1] = v33;
                  v51 = this->fields.effectWave;
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 126;
                  v33 = (__int64)System_String__Split(v46, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v33 + 24) <= 1u )
                    goto LABEL_174;
                  v52 = *(System_String_o **)(v33 + 40);
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 45;
                  if ( !v52 )
                    goto LABEL_173;
                  v33 = (__int64)System_String__Split(v52, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v33 + 24) <= 1u )
                    goto LABEL_174;
                  v37 = v49;
                  v33 = System_Int32__Parse(*(System_String_o **)(v33 + 40), 0LL);
                  if ( !v51 )
                    goto LABEL_173;
                  if ( v51->max_length <= 1 )
                    goto LABEL_174;
                  v51->m_Items[2] = v33;
                  v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                  if ( !v33 )
                    goto LABEL_173;
                  v34 = v33;
                  if ( !*(_DWORD *)(v33 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v33 + 32) = 126;
                  v33 = (__int64)System_String__Split(v46, (System_Char_array *)v33, 0LL);
                  if ( !v33 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v33 + 24) <= 2u )
                    goto LABEL_174;
                  this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v33 + 48), 0LL);
                }
                else
                {
                  if ( !v45 )
                    goto LABEL_173;
                  v33 = System_String__Contains(v45, (System_String_o *)StringLiteral_16641, 0LL);
                  v53 = this->fields.allCreditText;
                  if ( !v53 )
                    goto LABEL_173;
                  if ( i >= v53->max_length )
                    goto LABEL_174;
                  v54 = v33;
                  v55 = v53->m_Items[i];
                  if ( !v55 )
                    goto LABEL_173;
                  if ( (v54 & 1) != 0 )
                  {
                    v56 = (System_Int32_array **)System_String__Replace_43750968(
                                                   v55,
                                                   (System_String_o *)StringLiteral_67,
                                                   (System_String_o *)StringLiteral_1,
                                                   0LL);
                    p_bgmName->klass = (BattleServantConfConponent_c *)v56;
                    sub_B16F98(p_bgmName, v56, v57, v58, v59, v60, v61, v62);
                    klass = (System_String_o *)p_bgmName->klass;
                    v33 = sub_B17014(char___TypeInfo, 1LL, v64);
                    if ( !v33 )
                      goto LABEL_173;
                    v34 = v33;
                    if ( !*(_DWORD *)(v33 + 24) )
                      goto LABEL_174;
                    *(_WORD *)(v33 + 32) = 61;
                    if ( !klass )
                      goto LABEL_173;
                    v33 = (__int64)System_String__Split(klass, (System_Char_array *)v33, 0LL);
                    if ( !v33 )
                      goto LABEL_173;
                    if ( *(_DWORD *)(v33 + 24) <= 1u )
                      goto LABEL_174;
                    v70 = *(struct System_String_o **)(v33 + 40);
                    this->fields.bgmName = v70;
                    sub_B16F98(p_bgmName, (System_Int32_array **)v70, v35, v65, v66, v67, v68, v69);
                    v33 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9361, 0LL);
                    this->fields.isBgmPlay = v33 & 1;
                  }
                  else
                  {
                    v33 = System_String__Contains(v55, (System_String_o *)StringLiteral_17873, 0LL);
                    v71 = this->fields.allCreditText;
                    if ( !v71 )
                      goto LABEL_173;
                    if ( i >= v71->max_length )
                      goto LABEL_174;
                    v72 = v71->m_Items[i];
                    if ( (v33 & 1) != 0 )
                    {
                      v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                      if ( !v33 )
                        goto LABEL_173;
                      v34 = v33;
                      if ( !*(_DWORD *)(v33 + 24) )
                        goto LABEL_174;
                      *(_WORD *)(v33 + 32) = 61;
                      if ( !v72 )
                        goto LABEL_173;
                      v33 = (__int64)System_String__Split(v72, (System_Char_array *)v33, 0LL);
                      if ( !v33 )
                        goto LABEL_173;
                      if ( *(_DWORD *)(v33 + 24) <= 1u )
                        goto LABEL_174;
                      v33 = System_Int32__Parse(*(System_String_o **)(v33 + 40), 0LL);
                      this->fields.defaultFontSize = v33;
                    }
                    else
                    {
                      if ( !v72 )
                        goto LABEL_173;
                      v33 = System_String__Contains(v72, (System_String_o *)StringLiteral_17872, 0LL);
                      v73 = this->fields.allCreditText;
                      if ( !v73 )
                        goto LABEL_173;
                      if ( i >= v73->max_length )
                        goto LABEL_174;
                      v74 = v73->m_Items[i];
                      if ( (v33 & 1) != 0 )
                      {
                        v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                        if ( !v33 )
                          goto LABEL_173;
                        v34 = v33;
                        if ( !*(_DWORD *)(v33 + 24) )
                          goto LABEL_174;
                        *(_WORD *)(v33 + 32) = 61;
                        if ( !v74 )
                          goto LABEL_173;
                        v33 = (__int64)System_String__Split(v74, (System_Char_array *)v33, 0LL);
                        if ( !v33 )
                          goto LABEL_173;
                        if ( *(_DWORD *)(v33 + 24) <= 1u )
                          goto LABEL_174;
                        v33 = System_Int32__Parse(*(System_String_o **)(v33 + 40), 0LL);
                        this->fields.defaultClearance = v33;
                      }
                      else
                      {
                        if ( !v74 )
                          goto LABEL_173;
                        v33 = System_String__Contains(v74, (System_String_o *)StringLiteral_17874, 0LL);
                        if ( (v33 & 1) != 0 )
                        {
                          v75 = this->fields.allCreditText;
                          if ( !v75 )
                            goto LABEL_173;
                          if ( i >= v75->max_length )
                            goto LABEL_174;
                          v76 = v75->m_Items[i];
                          v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                          if ( !v33 )
                            goto LABEL_173;
                          v34 = v33;
                          if ( !*(_DWORD *)(v33 + 24) )
                            goto LABEL_174;
                          *(_WORD *)(v33 + 32) = 61;
                          if ( !v76 )
                            goto LABEL_173;
                          v33 = (__int64)System_String__Split(v76, (System_Char_array *)v33, 0LL);
                          if ( !v33 )
                            goto LABEL_173;
                          if ( *(_DWORD *)(v33 + 24) <= 1u )
                            goto LABEL_174;
                          v82 = *(System_Int32_array ***)(v33 + 40);
                          p_defaultTextColor->klass = (BattleServantConfConponent_c *)v82;
                          sub_B16F98(p_defaultTextColor, v82, v35, v77, v78, v79, v80, v81);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if ( (v38 & 1) == 0 )
          goto LABEL_170;
        v87 = this->fields.allCreditText;
        if ( !v87 )
          goto LABEL_173;
        if ( i >= v87->max_length )
          goto LABEL_174;
        v88 = v87->m_Items[i];
        if ( !v88 )
          goto LABEL_173;
        v89 = System_String__Replace_43750968(
                v88,
                (System_String_o *)StringLiteral_67,
                (System_String_o *)StringLiteral_1,
                0LL);
        if ( !*p_creditText )
          goto LABEL_173;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_creditText,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        v90 = this->fields.allCreditText;
        if ( !v90 )
          goto LABEL_173;
        if ( i >= v90->max_length )
          goto LABEL_174;
        v91 = v90->m_Items[i];
        if ( !v91 )
          goto LABEL_173;
        v92 = v37;
        defaultFontSize = this->fields.defaultFontSize;
        v33 = System_String__Contains(v91, (System_String_o *)StringLiteral_6714, 0LL);
        if ( (v33 & 1) != 0 )
        {
          v94 = this->fields.allCreditText;
          if ( !v94 )
            goto LABEL_173;
          if ( i >= v94->max_length )
            goto LABEL_174;
          v95 = v94->m_Items[i];
          v33 = sub_B17014(char___TypeInfo, 1LL, v35);
          if ( !v33 )
            goto LABEL_173;
          v34 = v33;
          if ( !*(_DWORD *)(v33 + 24) )
            goto LABEL_174;
          *(_WORD *)(v33 + 32) = 126;
          if ( !v95 )
            goto LABEL_173;
          v33 = (__int64)System_String__Split(v95, (System_Char_array *)v33, 0LL);
          if ( !v33 )
            goto LABEL_173;
          v96 = *(_DWORD *)(v33 + 24);
          v97 = (_DWORD *)v33;
          if ( v96 >= 1 )
          {
            v98 = 0;
            while ( v98 < v96 )
            {
              v99 = &v97[2 * v98];
              v102 = (System_String_o *)*((_QWORD *)v99 + 4);
              v101 = (System_String_o **)(v99 + 8);
              v100 = v102;
              if ( !v102 )
                goto LABEL_173;
              v33 = System_String__Contains(v100, (System_String_o *)StringLiteral_6714, 0LL);
              if ( (v33 & 1) != 0 )
              {
                if ( v98 >= v97[6] )
                  break;
                if ( !*v101 )
                  goto LABEL_173;
                v33 = (__int64)System_String__Replace_43750968(
                                 *v101,
                                 (System_String_o *)StringLiteral_1278,
                                 (System_String_o *)StringLiteral_1,
                                 0LL);
                v108 = (System_Int32_array **)v33;
                if ( v33 )
                {
                  v33 = sub_B170BC(v33, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
                  if ( !v33 )
                    goto LABEL_175;
                }
                if ( v98 >= v97[6] )
                  break;
                *v101 = (System_String_o *)v108;
                sub_B16F98((BattleServantConfConponent_o *)v101, v108, v35, v103, v104, v105, v106, v107);
                if ( v98 >= v97[6] )
                  break;
                if ( !*v101 )
                  goto LABEL_173;
                v33 = (__int64)System_String__Replace_43750968(
                                 *v101,
                                 (System_String_o *)StringLiteral_1512,
                                 (System_String_o *)StringLiteral_1,
                                 0LL);
                v114 = (System_Int32_array **)v33;
                if ( v33 )
                {
                  v33 = sub_B170BC(v33, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
                  if ( !v33 )
                  {
LABEL_175:
                    sub_B170F4(v33);
                    sub_B170A0();
                  }
                }
                if ( v98 >= v97[6] )
                  break;
                *v101 = (System_String_o *)v114;
                sub_B16F98((BattleServantConfConponent_o *)v101, v114, v35, v109, v110, v111, v112, v113);
                if ( v98 >= v97[6] )
                  break;
                v115 = *v101;
                v33 = sub_B17014(char___TypeInfo, 1LL, v35);
                if ( !v33 )
                  goto LABEL_173;
                v34 = v33;
                if ( !*(_DWORD *)(v33 + 24) )
                  break;
                *(_WORD *)(v33 + 32) = 61;
                if ( !v115 )
                  goto LABEL_173;
                v33 = (__int64)System_String__Split(v115, (System_Char_array *)v33, 0LL);
                if ( !v33 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v33 + 24) <= 1u )
                  break;
                v33 = System_Int32__Parse(*(System_String_o **)(v33 + 40), 0LL);
                defaultFontSize = v33;
              }
              v96 = v97[6];
              if ( (int)++v98 >= v96 )
                goto LABEL_145;
            }
LABEL_174:
            sub_B17100(v33, v34, v35);
            sub_B170A0();
          }
        }
LABEL_145:
        v38 = 1;
        v116 = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
        v37 = v92;
        this->fields.lastPostion = v116;
      }
    }
  }
}


void __fastcall EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *creditText; // x22
  int v7; // w21
  int size; // w8
  int32_t v9; // w0
  const MethodInfo *v10; // x4
  struct System_Collections_Generic_List_string__o *v11; // x22
  __int64 nowDispIndex; // x23
  EndrolContentItem_o *v13; // x0
  const MethodInfo *v14; // x1
  int32_t lastObjectPosY; // w20

  v4 = this;
  if ( (byte_40FE2AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, item);
    this = (EndrolRootComponent_o *)sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_40FE2AB = 1;
  }
  creditText = v4->fields.creditText;
  v7 = v4->fields.nowDispIndex + 1;
  v4->fields.nowDispIndex = v7;
  if ( !creditText )
    goto LABEL_14;
  size = creditText->fields._size;
  if ( v7 < size )
  {
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = EndrolRootComponent__CheckNextDispContent(this, creditText->fields._items->m_Items[v7], method);
    if ( v9 != 3 )
    {
      v11 = v4->fields.creditText;
      if ( v11 )
      {
        nowDispIndex = v4->fields.nowDispIndex;
        if ( v11->fields._size <= (unsigned int)nowDispIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v13 = EndrolRootComponent__SetItemInfo(v4, v11->fields._items->m_Items[nowDispIndex], item, v9, v10);
        if ( v13 )
        {
          lastObjectPosY = v4->fields.lastObjectPosY;
          v4->fields.lastObjectPosY = lastObjectPosY
                                    - EndrolContentItem__get_contentHeight(v13, v14)
                                    - v4->fields.defaultClearance;
          return;
        }
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v10; // x0
  EndrolRootComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_string__o *creditText; // x22
  EndrolContentItem_o *v14; // x21
  int32_t v15; // w0
  const MethodInfo *v16; // x4
  struct System_Collections_Generic_List_string__o *v17; // x23
  EndrolContentItem_o *v18; // x0
  const MethodInfo *v19; // x1
  int32_t lastObjectPosY; // w20

  if ( (byte_40FE2AA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_B16FFC(&NGUITools_TypeInfo, v6);
    byte_40FE2AA = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_16;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v10 = NGUITools__AddChild_45681684(endrolContentParent, gameObject, 0LL);
  if ( !v10 )
    goto LABEL_16;
  Component_srcLineSprite = (EndrolRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v10,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
  creditText = this->fields.creditText;
  if ( !creditText )
    goto LABEL_16;
  v14 = (EndrolContentItem_o *)Component_srcLineSprite;
  if ( creditText->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v15 = EndrolRootComponent__CheckNextDispContent(
          Component_srcLineSprite,
          creditText->fields._items->m_Items[index],
          v12);
  v17 = this->fields.creditText;
  if ( !v17 )
    goto LABEL_16;
  if ( v17->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v18 = EndrolRootComponent__SetItemInfo(this, v17->fields._items->m_Items[index], v14, v15, v16);
  if ( !v18 )
LABEL_16:
    sub_B170D4();
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v18, v19)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FE2A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FE2A8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonConfirmDialog_ClickDelegate_o *v19; // x25

  if ( (byte_40FE2AF & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_5459, v6);
    sub_B16FFC(&StringLiteral_5458, v7);
    sub_B16FFC(&StringLiteral_5456, v8);
    sub_B16FFC(&StringLiteral_5457, v9);
    byte_40FE2AF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5459, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5458, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5457, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5456, 0LL);
  v19 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v15,
                                                 v16,
                                                 v17,
                                                 v18);
  CommonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenConfirmDialog_18236860(Instance, v11, v12, v13, v14, v19, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  float endWaitTime; // s8
  System_Action_o *v8; // x20
  EndrolRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_40FE2A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EndrolRootComponent__OnScrollEnd_b__29_0__, v6);
    byte_40FE2A4 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__29_0__, 0LL);
  v11 = EndrolRootComponent__Wait(v9, endWaitTime, v8, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall EndrolRootComponent__OnUpdateScroll(EndrolRootComponent_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Component_o *panel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UIPanel_o *v8; // x0
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  panel = (UnityEngine_Component_o *)this->fields.panel;
  if ( !panel
    || (gameObject = UnityEngine_Component__get_gameObject(panel, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL
    || (v10.fields.x = 0.0,
        v10.fields.z = 0.0,
        v10.fields.y = value,
        UnityEngine_Transform__set_localPosition(transform, v10, 0LL),
        (v8 = this->fields.panel) == 0LL) )
  {
    sub_B170D4();
  }
  v9.fields.y = -value;
  v9.fields.x = 0.0;
  UIPanel__set_clipOffset(v8, v9, 0LL);
}


void __fastcall EndrolRootComponent__Open(
        EndrolRootComponent_o *this,
        AssetData_o *assetData,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x3

  if ( (byte_40FE2A6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, assetData);
    sub_B16FFC(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, v8);
    sub_B16FFC(&EndrolRootComponent___c__DisplayClass31_0_TypeInfo, v9);
    byte_40FE2A6 = 1;
  }
  v10 = sub_B170CC(EndrolRootComponent___c__DisplayClass31_0_TypeInfo, assetData, endCallback, method, v4);
  EndrolRootComponent___c__DisplayClass31_0___ctor((EndrolRootComponent___c__DisplayClass31_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)endCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isScroll = 0;
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)v10, Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v27, v28);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  System_String_o *text; // x20
  __int64 v6; // x2
  System_Char_array *v7; // x0
  __int64 v8; // x2
  struct System_String_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *allCreditText; // x8

  if ( (byte_40FE2B0 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, assetData);
    byte_40FE2B0 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  text = UnityEngine_TextAsset__get_text(assetData, 0LL);
  v7 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
  if ( !v7 )
    goto LABEL_9;
  if ( !v7->max_length )
  {
    sub_B17100(v7, v7, v8);
    sub_B170A0();
  }
  v7->m_Items[2] = 10;
  if ( !text
    || (v9 = System_String__Split(text, v7, 0LL),
        this->fields.allCreditText = v9,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.allCreditText,
          (System_Int32_array **)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (allCreditText = this->fields.allCreditText) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  this->fields.txtLength = *(_QWORD *)&allCreditText->max_length;
}


void __fastcall EndrolRootComponent__SetAssetStorageData(
        EndrolRootComponent_o *this,
        AssetData_o *data,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_TextAsset_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40FE2A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_TextAsset____66802800, data);
    sub_B16FFC(&StringLiteral_17693, v7);
    byte_40FE2A5 = 1;
  }
  if ( !data
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_TextAsset_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      data,
                                                                      (System_String_o *)StringLiteral_17693,
                                                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_TextAsset____66802800),
        EndrolRootComponent__OpenTextFile(this, Object_WarBoardWaitTimeSetting, v9),
        !endCallback) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(endCallback, 0LL);
}


EndrolContentItem_o *__fastcall EndrolRootComponent__SetItemInfo(
        EndrolRootComponent_o *this,
        System_String_o *nextDispString,
        EndrolContentItem_o *item,
        int32_t type,
        const MethodInfo *method)
{
  EndrolContentItem_o *v6; // x25
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x0
  System_String_array **v27; // x2
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  int v30; // w8
  __int64 v31; // x21
  System_String_o *v32; // x22
  unsigned int v33; // w25
  float v34; // s9
  float v35; // s8
  __int64 v36; // x28
  System_String_o *v37; // x0
  System_String_o **v38; // x28
  System_String_o *v39; // t1
  char v40; // w8
  System_String_o *v41; // x0
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x23
  System_String_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  const MethodInfo *v48; // x6
  int v49; // w8
  int32_t v50; // w23
  _DWORD *v51; // x21
  System_String_o *v52; // x22
  unsigned int v53; // w27
  int v54; // w24
  _DWORD *v55; // x25
  System_String_o *v56; // x0
  System_String_o **v57; // x25
  System_String_o *v58; // t1
  char v59; // w8
  System_String_o *v60; // x0
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x26
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x26
  System_String_o *v73; // x26
  unsigned int v74; // w8
  System_String_o *v75; // x0
  System_String_o *v76; // x24
  System_String_o *v77; // x0
  System_String_o *v78; // x24
  intptr_t v79; // w25
  System_Type_o *TypeFromHandle; // x25
  Il2CppObject *v81; // x0
  __int64 v82; // x21
  System_String_o *v83; // x0
  int32_t defaultFontSize; // w22
  System_String_o *v85; // x0
  System_String_o *v86; // x23
  __int64 v87; // x2
  unsigned int v88; // w0
  __int64 v89; // x2
  const MethodInfo *v90; // x5
  int v91; // w8
  System_String_array *v92; // x23
  il2cpp_array_size_t v93; // w19
  System_String_o **v94; // x24
  unsigned int v95; // w28
  char v96; // w8
  System_String_o *v97; // x0
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x25
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x25
  System_String_o *v110; // x22
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  unsigned int v116; // w8
  System_String_o *v117; // x25
  Il2CppClass **v118; // x0
  int32_t lastObjectPosY; // w1
  struct System_Collections_Generic_List_string__o *creditText; // x19
  __int64 nowDispIndex; // x21
  System_String_o *v122; // x0
  struct System_Collections_Generic_List_string__o *v123; // x19
  __int64 v124; // x21
  System_String_o *v125; // x2
  struct System_Collections_Generic_List_string__o *v126; // x19
  __int64 v127; // x22
  int32_t v128; // w3
  int32_t v129; // w1
  int32_t v130; // w4
  EndrolContentItem_o *v131; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v133; // x0
  bool v134; // w1
  const MethodInfo *v135; // x2
  EndrolContentItem_o *v136; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v137; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v138; // [xsp+8h] [xbp-68h]
  System_RuntimeTypeHandle_o v139; // 0:w0.4
  UnityEngine_Vector2_o v140; // 0:s0.4,4:s1.4

  v6 = item;
  if ( (byte_40FE2AD & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, nextDispString);
    sub_B16FFC(&System_Enum_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v10);
    sub_B16FFC(&UIWidget_Pivot_var, v11);
    sub_B16FFC(&UIWidget_Pivot_TypeInfo, v12);
    sub_B16FFC(&string___TypeInfo, v13);
    sub_B16FFC(&System_Type_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1503, v15);
    sub_B16FFC(&StringLiteral_19054, v16);
    sub_B16FFC(&StringLiteral_1278, v17);
    sub_B16FFC(&StringLiteral_20123, v18);
    sub_B16FFC(&StringLiteral_21740, v19);
    sub_B16FFC(&StringLiteral_288, v20);
    sub_B16FFC(&StringLiteral_15571, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    sub_B16FFC(&StringLiteral_23184, v23);
    sub_B16FFC(&StringLiteral_1512, v24);
    sub_B16FFC(&StringLiteral_17193, v25);
    byte_40FE2AD = 1;
  }
  if ( type == 5 )
  {
    v26 = sub_B17014(char___TypeInfo, 1LL, item);
    if ( !v26 )
      goto LABEL_182;
    v28 = v26;
    if ( !*(_DWORD *)(v26 + 24) )
      goto LABEL_181;
    *(_WORD *)(v26 + 32) = 126;
    if ( !nextDispString )
      goto LABEL_182;
    v26 = (__int64)System_String__Split(nextDispString, (System_Char_array *)v26, 0LL);
    if ( !v26 )
      goto LABEL_182;
    v82 = v26;
    if ( !*(_DWORD *)(v26 + 24) )
      goto LABEL_181;
    v83 = *(System_String_o **)(v26 + 32);
    v138 = v6;
    if ( !v83 )
      goto LABEL_182;
    defaultFontSize = this->fields.defaultFontSize;
    v26 = (__int64)System_String__Replace_43750968(
                     v83,
                     (System_String_o *)StringLiteral_1278,
                     (System_String_o *)StringLiteral_1,
                     0LL);
    if ( !*(_DWORD *)(v82 + 24) )
      goto LABEL_181;
    v85 = *(System_String_o **)(v82 + 32);
    if ( !v85 )
      goto LABEL_182;
    v86 = System_String__Replace_43750968(
            v85,
            (System_String_o *)StringLiteral_1512,
            (System_String_o *)StringLiteral_1,
            0LL);
    v26 = sub_B17014(char___TypeInfo, 1LL, v87);
    if ( !v26 )
      goto LABEL_182;
    v28 = v26;
    if ( !*(_DWORD *)(v26 + 24) )
      goto LABEL_181;
    *(_WORD *)(v26 + 32) = 61;
    if ( !v86 )
      goto LABEL_182;
    v26 = (__int64)System_String__Split(v86, (System_Char_array *)v26, 0LL);
    if ( !v26 )
      goto LABEL_182;
    if ( *(_DWORD *)(v26 + 24) <= 1u )
      goto LABEL_181;
    v88 = System_Int32__Parse(*(System_String_o **)(v26 + 40), 0LL);
    v26 = sub_B17014(string___TypeInfo, v88, v89);
    v91 = *(_DWORD *)(v82 + 24);
    v92 = (System_String_array *)v26;
    if ( v91 < 2 )
    {
LABEL_153:
      if ( v92 )
      {
        v6 = v138;
        if ( v138 )
        {
          lastObjectPosY = this->fields.lastObjectPosY;
          if ( v92->max_length == 2 )
            EndrolContentItem__SetDoubleColumnText(v138, lastObjectPosY, v92, defaultFontSize, this, v90);
          else
            EndrolContentItem__SetTripleColumnText(v138, lastObjectPosY, v92, defaultFontSize, this, v90);
          return v6;
        }
      }
      goto LABEL_182;
    }
    v93 = 0;
    v94 = (System_String_o **)(v82 + 40);
    v95 = 1;
    while ( 1 )
    {
      if ( v95 >= v91 )
        goto LABEL_181;
      if ( !*v94 )
        goto LABEL_182;
      v26 = System_String__StartsWith(*v94, (System_String_o *)StringLiteral_1278, 0LL);
      if ( v95 >= *(_DWORD *)(v82 + 24) )
        goto LABEL_181;
      v96 = v26;
      v97 = *v94;
      if ( !*v94 )
        goto LABEL_182;
      if ( (v96 & 1) == 0 )
        break;
      v26 = (__int64)System_String__Replace_43750968(
                       v97,
                       (System_String_o *)StringLiteral_1278,
                       (System_String_o *)StringLiteral_1,
                       0LL);
      v103 = (System_Int32_array **)v26;
      if ( v26 )
      {
        v26 = sub_B170BC(v26, *(_QWORD *)(*(_QWORD *)v82 + 64LL));
        if ( !v26 )
          goto LABEL_183;
      }
      if ( v95 >= *(_DWORD *)(v82 + 24) )
        goto LABEL_181;
      *v94 = (System_String_o *)v103;
      sub_B16F98((BattleServantConfConponent_o *)v94, v103, v27, v98, v99, v100, v101, v102);
      if ( v95 >= *(_DWORD *)(v82 + 24) )
        goto LABEL_181;
      if ( !*v94 )
        goto LABEL_182;
      v26 = (__int64)System_String__Replace_43750968(
                       *v94,
                       (System_String_o *)StringLiteral_1512,
                       (System_String_o *)StringLiteral_1,
                       0LL);
      v109 = (System_Int32_array **)v26;
      if ( v26 )
      {
        v26 = sub_B170BC(v26, *(_QWORD *)(*(_QWORD *)v82 + 64LL));
        if ( !v26 )
        {
LABEL_183:
          sub_B170F4(v26);
          sub_B170A0();
        }
      }
      if ( v95 >= *(_DWORD *)(v82 + 24) )
        goto LABEL_181;
      *v94 = (System_String_o *)v109;
      sub_B16F98((BattleServantConfConponent_o *)v94, v109, v27, v104, v105, v106, v107, v108);
      if ( v95 >= *(_DWORD *)(v82 + 24) )
        goto LABEL_181;
      if ( !*v94 )
        goto LABEL_182;
      v26 = System_String__Contains(*v94, (System_String_o *)StringLiteral_1503, 0LL);
      if ( (v26 & 1) != 0 )
      {
        if ( v95 >= *(_DWORD *)(v82 + 24) )
          goto LABEL_181;
        v110 = *v94;
        v26 = sub_B17014(char___TypeInfo, 1LL, v27);
        if ( !v26 )
          goto LABEL_182;
        v28 = v26;
        if ( !*(_DWORD *)(v26 + 24) )
          goto LABEL_181;
        *(_WORD *)(v26 + 32) = 61;
        if ( !v110 )
          goto LABEL_182;
        v26 = (__int64)System_String__Split(v110, (System_Char_array *)v26, 0LL);
        if ( !v26 )
          goto LABEL_182;
        if ( *(_DWORD *)(v26 + 24) <= 1u )
          goto LABEL_181;
        v26 = System_Int32__Parse(*(System_String_o **)(v26 + 40), 0LL);
        defaultFontSize = v26;
      }
LABEL_152:
      v91 = *(_DWORD *)(v82 + 24);
      ++v95;
      ++v94;
      if ( (int)v95 >= v91 )
        goto LABEL_153;
    }
    v26 = System_String__Contains(v97, (System_String_o *)StringLiteral_15571, 0LL);
    v116 = *(_DWORD *)(v82 + 24);
    if ( (v26 & 1) != 0 )
    {
      if ( v95 >= v116 )
        goto LABEL_181;
      if ( !v92 )
        goto LABEL_182;
      v117 = *v94;
      if ( !*v94 )
        goto LABEL_150;
    }
    else
    {
      if ( v95 >= v116 )
        goto LABEL_181;
      v26 = (__int64)System_String__Concat_43743732(this->fields.defaultTextColor, *v94, 0LL);
      if ( !v92 )
        goto LABEL_182;
      v117 = (System_String_o *)v26;
      if ( !v26 )
        goto LABEL_150;
    }
    v26 = sub_B170BC(v117, v92->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_183;
LABEL_150:
    if ( v93 >= v92->max_length )
      goto LABEL_181;
    v118 = &v92->obj.klass + (int)v93;
    v118[4] = (Il2CppClass *)v117;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v118 + 4),
      (System_Int32_array **)v117,
      v27,
      v111,
      v112,
      v113,
      v114,
      v115);
    ++v93;
    goto LABEL_152;
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      v26 = sub_B17014(char___TypeInfo, 1LL, item);
      if ( v26 )
      {
        v28 = v26;
        if ( !*(_DWORD *)(v26 + 24) )
          goto LABEL_181;
        *(_WORD *)(v26 + 32) = 126;
        if ( nextDispString )
        {
          v26 = (__int64)System_String__Split(nextDispString, (System_Char_array *)v26, 0LL);
          if ( v26 )
          {
            v136 = v6;
            v30 = *(_DWORD *)(v26 + 24);
            v31 = v26;
            v32 = (System_String_o *)StringLiteral_1;
            if ( v30 >= 1 )
            {
              v33 = 0;
              v34 = 0.0;
              v35 = 0.0;
              while ( v33 < v30 )
              {
                v36 = v31 + 8LL * (int)v33;
                v39 = *(System_String_o **)(v36 + 32);
                v38 = (System_String_o **)(v36 + 32);
                v37 = v39;
                if ( !v39 )
                  goto LABEL_182;
                v26 = System_String__StartsWith(v37, (System_String_o *)StringLiteral_1278, 0LL);
                if ( v33 >= *(_DWORD *)(v31 + 24) )
                  break;
                v40 = v26;
                v41 = *v38;
                if ( !*v38 )
                  goto LABEL_182;
                if ( (v40 & 1) != 0 )
                {
                  v26 = (__int64)System_String__Replace_43750968(
                                   v41,
                                   (System_String_o *)StringLiteral_1278,
                                   (System_String_o *)StringLiteral_1,
                                   0LL);
                  if ( v33 >= *(_DWORD *)(v31 + 24) )
                    break;
                  v42 = *v38;
                  v26 = sub_B17014(char___TypeInfo, 1LL, v27);
                  if ( !v26 )
                    goto LABEL_182;
                  v28 = v26;
                  if ( !*(_DWORD *)(v26 + 24) )
                    break;
                  *(_WORD *)(v26 + 32) = 61;
                  if ( !v42 )
                    goto LABEL_182;
                  v26 = (__int64)System_String__Split(v42, (System_Char_array *)v26, 0LL);
                  if ( !v26 )
                    goto LABEL_182;
                  if ( *(_DWORD *)(v26 + 24) <= 1u )
                    break;
                  v43 = *(System_String_o **)(v26 + 40);
                  if ( !v43 )
                    goto LABEL_182;
                  v26 = (__int64)System_String__Replace_43750968(
                                   v43,
                                   (System_String_o *)StringLiteral_288,
                                   (System_String_o *)StringLiteral_1,
                                   0LL);
                  v32 = (System_String_o *)v26;
                }
                else
                {
                  v26 = System_String__Contains(v41, (System_String_o *)StringLiteral_23184, 0LL);
                  if ( v33 >= *(_DWORD *)(v31 + 24) )
                    break;
                  v44 = *v38;
                  if ( (v26 & 1) != 0 )
                  {
                    v26 = sub_B17014(char___TypeInfo, 1LL, v27);
                    if ( !v26 )
                      goto LABEL_182;
                    v28 = v26;
                    if ( !*(_DWORD *)(v26 + 24) )
                      break;
                    *(_WORD *)(v26 + 32) = 61;
                    if ( !v44 )
                      goto LABEL_182;
                    v26 = (__int64)System_String__Split(v44, (System_Char_array *)v26, 0LL);
                    if ( !v26 )
                      goto LABEL_182;
                    if ( *(_DWORD *)(v26 + 24) <= 1u )
                      break;
                    v35 = System_Single__Parse(*(System_String_o **)(v26 + 40), 0LL);
                  }
                  else
                  {
                    if ( !v44 )
                      goto LABEL_182;
                    v26 = System_String__Contains(*v38, (System_String_o *)StringLiteral_19054, 0LL);
                    if ( (v26 & 1) != 0 )
                    {
                      if ( v33 >= *(_DWORD *)(v31 + 24) )
                        break;
                      v45 = *v38;
                      v26 = sub_B17014(char___TypeInfo, 1LL, v27);
                      if ( !v26 )
                        goto LABEL_182;
                      v28 = v26;
                      if ( !*(_DWORD *)(v26 + 24) )
                        break;
                      *(_WORD *)(v26 + 32) = 61;
                      if ( !v45 )
                        goto LABEL_182;
                      v26 = (__int64)System_String__Split(v45, (System_Char_array *)v26, 0LL);
                      if ( !v26 )
                        goto LABEL_182;
                      if ( *(_DWORD *)(v26 + 24) <= 1u )
                        break;
                      v46 = *(System_String_o **)(v26 + 40);
                      if ( !v46 )
                        goto LABEL_182;
                      v47 = System_String__Replace_43750968(
                              v46,
                              (System_String_o *)StringLiteral_1512,
                              (System_String_o *)StringLiteral_1,
                              0LL);
                      v34 = System_Single__Parse(v47, 0LL);
                    }
                  }
                }
                v30 = *(_DWORD *)(v31 + 24);
                if ( (int)++v33 >= v30 )
                  goto LABEL_178;
              }
LABEL_181:
              sub_B17100(v26, v28, v27);
              sub_B170A0();
            }
            v35 = 0.0;
            v34 = 0.0;
LABEL_178:
            v6 = v136;
            if ( v136 )
            {
              v140.fields.x = v35;
              v140.fields.y = v34;
              EndrolContentItem__SetImage(v136, this->fields.lastObjectPosY, v32, v140, this, v29);
              return v6;
            }
          }
        }
      }
LABEL_182:
      sub_B170D4();
    }
    creditText = this->fields.creditText;
    if ( !creditText )
      goto LABEL_182;
    nowDispIndex = this->fields.nowDispIndex;
    if ( creditText->fields._size <= (unsigned int)nowDispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v122 = creditText->fields._items->m_Items[nowDispIndex];
    if ( !v122 )
      goto LABEL_182;
    if ( System_String__Contains(v122, (System_String_o *)StringLiteral_15571, 0LL) )
    {
      v123 = this->fields.creditText;
      if ( !v123 )
        goto LABEL_182;
      v124 = this->fields.nowDispIndex;
      if ( v123->fields._size <= (unsigned int)v124 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v125 = v123->fields._items->m_Items[v124];
      if ( !v6 )
        goto LABEL_182;
    }
    else
    {
      v126 = this->fields.creditText;
      if ( !v126 )
        goto LABEL_182;
      v127 = this->fields.nowDispIndex;
      if ( v126->fields._size <= (unsigned int)v127 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v125 = System_String__Concat_43743732(this->fields.defaultTextColor, v126->fields._items->m_Items[v127], 0LL);
      if ( !v6 )
        goto LABEL_182;
    }
    v128 = this->fields.defaultFontSize;
    v129 = this->fields.lastObjectPosY;
    v130 = 4;
    v131 = v6;
LABEL_176:
    EndrolContentItem__SetText(v131, v129, v125, v128, v130, this, v48);
    return v6;
  }
  v26 = sub_B17014(char___TypeInfo, 1LL, item);
  if ( !v26 )
    goto LABEL_182;
  v28 = v26;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_181;
  *(_WORD *)(v26 + 32) = 126;
  if ( !nextDispString )
    goto LABEL_182;
  v26 = (__int64)System_String__Split(nextDispString, (System_Char_array *)v26, 0LL);
  if ( !v26 )
    goto LABEL_182;
  v137 = v6;
  v49 = *(_DWORD *)(v26 + 24);
  v50 = this->fields.defaultFontSize;
  v51 = (_DWORD *)v26;
  v52 = (System_String_o *)StringLiteral_1;
  if ( v49 < 1 )
  {
    v54 = 4;
LABEL_174:
    v6 = v137;
    if ( !v137 )
      goto LABEL_182;
    v129 = this->fields.lastObjectPosY;
    v131 = v137;
    v125 = v52;
    v128 = v50;
    v130 = v54;
    goto LABEL_176;
  }
  v53 = 0;
  v54 = 4;
  while ( 1 )
  {
    if ( v53 >= v49 )
      goto LABEL_181;
    v55 = &v51[2 * v53];
    v58 = (System_String_o *)*((_QWORD *)v55 + 4);
    v57 = (System_String_o **)(v55 + 8);
    v56 = v58;
    if ( !v58 )
      goto LABEL_182;
    v26 = System_String__StartsWith(v56, (System_String_o *)StringLiteral_1278, 0LL);
    if ( v53 >= v51[6] )
      goto LABEL_181;
    v59 = v26;
    v60 = *v57;
    if ( !*v57 )
      goto LABEL_182;
    if ( (v59 & 1) == 0 )
    {
      v26 = System_String__Contains(v60, (System_String_o *)StringLiteral_15571, 0LL);
      v74 = v51[6];
      if ( (v26 & 1) != 0 )
      {
        if ( v53 >= v74 )
          goto LABEL_181;
        v52 = *v57;
      }
      else
      {
        if ( v53 >= v74 )
          goto LABEL_181;
        v26 = (__int64)System_String__Concat_43743732(this->fields.defaultTextColor, *v57, 0LL);
        v52 = (System_String_o *)v26;
      }
      goto LABEL_101;
    }
    v26 = (__int64)System_String__Replace_43750968(
                     v60,
                     (System_String_o *)StringLiteral_1278,
                     (System_String_o *)StringLiteral_1,
                     0LL);
    v66 = (System_Int32_array **)v26;
    if ( v26 )
    {
      v26 = sub_B170BC(v26, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
      if ( !v26 )
        goto LABEL_183;
    }
    if ( v53 >= v51[6] )
      goto LABEL_181;
    *v57 = (System_String_o *)v66;
    sub_B16F98((BattleServantConfConponent_o *)v57, v66, v27, v61, v62, v63, v64, v65);
    if ( v53 >= v51[6] )
      goto LABEL_181;
    if ( !*v57 )
      goto LABEL_182;
    v26 = (__int64)System_String__Replace_43750968(
                     *v57,
                     (System_String_o *)StringLiteral_1512,
                     (System_String_o *)StringLiteral_1,
                     0LL);
    v72 = (System_Int32_array **)v26;
    if ( v26 )
    {
      v26 = sub_B170BC(v26, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
      if ( !v26 )
        goto LABEL_183;
    }
    if ( v53 >= v51[6] )
      goto LABEL_181;
    *v57 = (System_String_o *)v72;
    sub_B16F98((BattleServantConfConponent_o *)v57, v72, v27, v67, v68, v69, v70, v71);
    if ( v53 >= v51[6] )
      goto LABEL_181;
    if ( !*v57 )
      goto LABEL_182;
    v26 = System_String__Contains(*v57, (System_String_o *)StringLiteral_1503, 0LL);
    if ( v53 >= v51[6] )
      goto LABEL_181;
    v73 = *v57;
    if ( (v26 & 1) != 0 )
    {
      v26 = sub_B17014(char___TypeInfo, 1LL, v27);
      if ( !v26 )
        goto LABEL_182;
      v28 = v26;
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_181;
      *(_WORD *)(v26 + 32) = 61;
      if ( !v73 )
        goto LABEL_182;
      v26 = (__int64)System_String__Split(v73, (System_Char_array *)v26, 0LL);
      if ( !v26 )
        goto LABEL_182;
      if ( *(_DWORD *)(v26 + 24) <= 1u )
        goto LABEL_181;
      v26 = System_Int32__Parse(*(System_String_o **)(v26 + 40), 0LL);
      v50 = v26;
      goto LABEL_101;
    }
    if ( !v73 )
      goto LABEL_182;
    v26 = System_String__Contains(*v57, (System_String_o *)StringLiteral_17193, 0LL);
    if ( (v26 & 1) != 0 )
      break;
    if ( v53 >= v51[6] )
      goto LABEL_181;
    if ( !*v57 )
      goto LABEL_182;
    v26 = System_String__Contains(*v57, (System_String_o *)StringLiteral_20123, 0LL);
    if ( (v26 & 1) != 0 )
      break;
    if ( v53 >= v51[6] )
      goto LABEL_181;
    if ( !*v57 )
      goto LABEL_182;
    v26 = System_String__Contains(*v57, (System_String_o *)StringLiteral_21740, 0LL);
    if ( (v26 & 1) != 0 )
      break;
LABEL_101:
    v49 = v51[6];
    if ( (int)++v53 >= v49 )
      goto LABEL_174;
  }
  if ( v53 >= v51[6] )
    goto LABEL_181;
  if ( !*v57 )
    goto LABEL_182;
  v75 = System_String__Substring_43807468(*v57, 0, 1, 0LL);
  if ( !v75 )
    goto LABEL_182;
  v26 = (__int64)System_String__ToUpper(v75, 0LL);
  if ( v53 >= v51[6] )
    goto LABEL_181;
  v76 = (System_String_o *)v26;
  if ( !*v57 )
    goto LABEL_182;
  v77 = System_String__Substring(*v57, 1, 0LL);
  v78 = System_String__Concat_43743732(v76, v77, 0LL);
  v79 = (int)UIWidget_Pivot_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v139.fields.value = v79;
  TypeFromHandle = System_Type__GetTypeFromHandle(v139, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v81 = System_Enum__Parse(TypeFromHandle, v78, 0LL);
  if ( !v81 )
    goto LABEL_182;
  if ( v81->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    v26 = j_il2cpp_object_unbox_0(v81);
    v54 = *(_DWORD *)v26;
    goto LABEL_101;
  }
  sub_B173C8(v81);
  EndrolRootComponent__callbackConfirmDlg(v133, v134, v135);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  float lastPostion; // s8
  System_Collections_Hashtable_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-2Ch] BYREF
  float v23; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FE2A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&float_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_10039, v8);
    sub_B16FFC(&StringLiteral_18842, v9);
    sub_B16FFC(&StringLiteral_22584, v10);
    sub_B16FFC(&StringLiteral_21182, v11);
    sub_B16FFC(&StringLiteral_10016, v12);
    sub_B16FFC(&StringLiteral_22621, v13);
    sub_B16FFC(&StringLiteral_21173, v14);
    sub_B16FFC(&iTween_TypeInfo, v15);
    byte_40FE2A3 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v17 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v2, v3, v4);
  System_Collections_Hashtable___ctor_38240048(v17, 0LL);
  v24 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v24);
  if ( !v17 )
    sub_B170D4();
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_18842,
    v18,
    v17->klass->vtable._24_Clear.methodPtr);
  v23 = lastPostion + 580.0;
  v19 = j_il2cpp_value_box_0(float_TypeInfo, &v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_22621,
    v19,
    v17->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_22584,
    v20,
    v17->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_21182,
    StringLiteral_10039,
    v17->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_21173,
    StringLiteral_10016,
    v17->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v17, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FE2A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FE2A7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FE2A9 & 1) == 0 )
  {
    sub_B16FFC(&EndrolRootComponent__Wait_d__34_TypeInfo, callback);
    byte_40FE2A9 = 1;
  }
  v8 = sub_B170CC(EndrolRootComponent__Wait_d__34_TypeInfo, callback, method, v4, v5);
  EndrolRootComponent__Wait_d__34___ctor((EndrolRootComponent__Wait_d__34_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(float *)(v8 + 32) = waitTime;
  *(_QWORD *)(v8 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callback, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40FE2AE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_40FE2AE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v6);
}


void __fastcall EndrolRootComponent__Wait_d__34___ctor(
        EndrolRootComponent__Wait_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EndrolRootComponent__Wait_d__34__MoveNext(
        EndrolRootComponent__Wait_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_40F8B80 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_40F8B80 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      sub_B170D4();
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v8, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall EndrolRootComponent__Wait_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EndrolRootComponent__Wait_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EndrolRootComponent__Wait_d__34__System_Collections_IEnumerator_Reset(
        EndrolRootComponent__Wait_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_EndrolRootComponent__Wait_d__34_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall EndrolRootComponent__Wait_d__34__System_Collections_IEnumerator_get_Current(
        EndrolRootComponent__Wait_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EndrolRootComponent__Wait_d__34__System_IDisposable_Dispose(
        EndrolRootComponent__Wait_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___ctor(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___Open_b__0(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EndrolRootComponent_o *_4__this; // x0
  struct EndrolRootComponent_o *v8; // x8
  System_String_o *bgmName; // x20
  EndrolEffectManager_o *effectManager; // x0
  struct EndrolRootComponent_o *v11; // x0
  unsigned int v12; // w20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **endCallback; // x1
  CommonUI_o *Instance; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct EndrolRootComponent_o *v27; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_IEnumerator_o *v36; // x1

  if ( (byte_40F8B7F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__, v6);
    byte_40F8B7F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  EndrolRootComponent__CheckOrderEndrol(_4__this, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_25;
  if ( v8->fields.isBgmPlay )
  {
    bgmName = v8->fields.bgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playJingle(bgmName, 0LL);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_25;
  }
  effectManager = v8->fields.effectManager;
  if ( !effectManager )
    goto LABEL_25;
  EndrolEffectManager__EndEffect(effectManager, 0LL);
  v11 = this->fields.__4__this;
  v12 = -1;
  do
  {
    if ( !v11 )
      goto LABEL_25;
    EndrolRootComponent__CreateText(v11, ++v12, 0LL);
    v11 = this->fields.__4__this;
  }
  while ( v12 < 0x1D );
  if ( !v11 )
    goto LABEL_25;
  endCallback = (System_Int32_array **)this->fields.endCallback;
  v11->fields.mEndAct = (struct System_Action_o *)endCallback;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.mEndAct, endCallback, v13, v14, v15, v16, v17, v18);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance
    || (CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (v21 = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v21, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v27 = this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  startWaitTime = v27->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = EndrolRootComponent__Wait(v27, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v27, v36, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}