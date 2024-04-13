void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Int32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42ECFFC & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFFC = 1;
  }
  this->fields.nowDispIndex = -1;
  v5 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  this->fields.effectWave = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectWave,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3

  if ( (byte_42ECFF6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17729/*"column=3"*/, (_DWORD)nextDispText, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17728/*"column=2"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1300/*"<"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v11, v12, v13);
    this = (EndrolRootComponent_o *)sub_B5D5C4(&StringLiteral_7582/*"Image"*/, v14, v15, v16);
    byte_42ECFF6 = 1;
  }
  if ( !nextDispText )
    sub_B5D69C(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7582/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1560/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1300/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17728/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17729/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t txtLength; // w8
  System_String_o **v75; // x24
  char v76; // w25
  int32_t i; // w26
  struct System_String_array *v78; // x8
  struct System_String_array *v79; // x8
  System_String_o *v80; // x23
  struct System_String_array *v81; // x8
  System_String_o *v82; // x23
  System_String_o *v83; // x23
  struct System_Int32_array *effectWave; // x20
  System_String_o **v85; // x22
  System_String_o *v86; // x24
  struct System_Int32_array *v87; // x20
  System_String_o *v88; // x24
  struct System_String_array *v89; // x9
  char v90; // w8
  System_Int32_array **v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_o *klass; // x23
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct System_String_o *v105; // x1
  struct System_String_array *v106; // x8
  System_String_o *v107; // x23
  struct System_String_array *v108; // x8
  System_String_o *v109; // x23
  struct System_String_array *v110; // x8
  System_String_o *v111; // x23
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v120; // x8
  struct System_String_array *v121; // x8
  struct System_String_array *v122; // x8
  System_String_o **v123; // x22
  int32_t defaultFontSize; // w24
  struct System_String_array *v125; // x8
  System_String_o *v126; // x23
  int v127; // w8
  _DWORD *v128; // x23
  unsigned int v129; // w20
  _DWORD *v130; // x25
  BattleServantConfConponent_o *v131; // x25
  __int64 v132; // t1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x24
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x24
  System_String_o *v147; // x24
  float v148; // s0
  struct System_String_array *v149; // x8
  struct System_String_array *v150; // x8
  System_String_o *v151; // x23
  struct System_String_array *v152; // x8
  System_String_o *v153; // x23
  __int64 v154; // x0
  __int64 v155; // x0
  BattleServantConfConponent_o *p_defaultTextColor; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *p_bgmName; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_creditText; // [xsp+18h] [xbp-58h]

  if ( (byte_42ECFFB & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18450/*"effect"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6820/*"FontSize"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22225/*"scroll"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22568/*"start"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16911/*"bgm"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18166/*"default_text_color"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1300/*"<"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_9487/*"NULL"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_18571/*"end"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_18165/*"default_font_size"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_16898/*"begine_time"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1/*""*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_68/*"\r"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_1535/*">"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_18164/*"default_clearance"*/, v62, v63, v64);
    byte_42ECFFB = 1;
  }
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v65;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.creditText,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  txtLength = this->fields.txtLength;
  p_creditText = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.creditText;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    p_bgmName = (BattleServantConfConponent_o *)&this->fields.bgmName;
    p_defaultTextColor = (BattleServantConfConponent_o *)&this->fields.defaultTextColor;
    v75 = (System_String_o **)&StringLiteral_1560/*"@"*/;
    v76 = 0;
    for ( i = 0; i < this->fields.txtLength; ++i )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_173;
      if ( i >= allCreditText->max_length )
        goto LABEL_174;
      v72 = (__int64)allCreditText->m_Items[i];
      if ( !v72 )
LABEL_173:
        sub_B5D69C(v72, v73);
      v72 = System_String__StartsWith((System_String_o *)v72, *v75, 0LL);
      if ( (v72 & 1) != 0 )
      {
        v120 = this->fields.allCreditText;
        if ( !v120 )
          goto LABEL_173;
        if ( i >= v120->max_length )
          goto LABEL_174;
        v72 = (__int64)v120->m_Items[i];
        if ( !v72 )
          goto LABEL_173;
        v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_22568/*"start"*/, 0LL);
        if ( (v72 & 1) != 0 )
        {
          v76 = 1;
        }
        else
        {
          v149 = this->fields.allCreditText;
          if ( !v149 )
            goto LABEL_173;
          if ( i >= v149->max_length )
            goto LABEL_174;
          v72 = (__int64)v149->m_Items[i];
          if ( !v72 )
            goto LABEL_173;
          v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_16898/*"begine_time"*/, 0LL);
          v150 = this->fields.allCreditText;
          if ( !v150 )
            goto LABEL_173;
          if ( i >= v150->max_length )
            goto LABEL_174;
          v151 = v150->m_Items[i];
          if ( (v72 & 1) != 0 )
          {
            v72 = sub_B5D5DC(char___TypeInfo, 1LL);
            if ( !v72 )
              goto LABEL_173;
            v73 = v72;
            if ( !*(_DWORD *)(v72 + 24) )
              goto LABEL_174;
            *(_WORD *)(v72 + 32) = 61;
            if ( !v151 )
              goto LABEL_173;
            v72 = (__int64)System_String__Split(v151, (System_Char_array *)v72, 0LL);
            if ( !v72 )
              goto LABEL_173;
            if ( *(_DWORD *)(v72 + 24) <= 1u )
              goto LABEL_174;
            this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(v72 + 40), 0LL) / 10.0;
          }
          else
          {
            if ( !v151 )
              goto LABEL_173;
            v72 = System_String__Contains(v151, (System_String_o *)StringLiteral_22225/*"scroll"*/, 0LL);
            v152 = this->fields.allCreditText;
            if ( !v152 )
              goto LABEL_173;
            if ( i >= v152->max_length )
              goto LABEL_174;
            v153 = v152->m_Items[i];
            if ( (v72 & 1) != 0 )
            {
              v72 = sub_B5D5DC(char___TypeInfo, 1LL);
              if ( !v72 )
                goto LABEL_173;
              v73 = v72;
              if ( !*(_DWORD *)(v72 + 24) )
                goto LABEL_174;
              *(_WORD *)(v72 + 32) = 61;
              if ( !v153 )
                goto LABEL_173;
              v72 = (__int64)System_String__Split(v153, (System_Char_array *)v72, 0LL);
              if ( !v72 )
                goto LABEL_173;
              if ( *(_DWORD *)(v72 + 24) <= 1u )
                goto LABEL_174;
              this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(v72 + 40), 0LL) / 10.0;
            }
            else
            {
              if ( !v153 )
                goto LABEL_173;
              v72 = System_String__Contains(v153, (System_String_o *)StringLiteral_18571/*"end"*/, 0LL);
              if ( (v72 & 1) != 0 )
              {
LABEL_170:
                v76 = 0;
                continue;
              }
              v78 = this->fields.allCreditText;
              if ( !v78 )
                goto LABEL_173;
              if ( i >= v78->max_length )
                goto LABEL_174;
              v72 = (__int64)v78->m_Items[i];
              if ( !v72 )
                goto LABEL_173;
              v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_23499/*"wait"*/, 0LL);
              v79 = this->fields.allCreditText;
              if ( !v79 )
                goto LABEL_173;
              if ( i >= v79->max_length )
                goto LABEL_174;
              v80 = v79->m_Items[i];
              if ( (v72 & 1) != 0 )
              {
                v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                if ( !v72 )
                  goto LABEL_173;
                v73 = v72;
                if ( !*(_DWORD *)(v72 + 24) )
                  goto LABEL_174;
                *(_WORD *)(v72 + 32) = 61;
                if ( !v80 )
                  goto LABEL_173;
                v72 = (__int64)System_String__Split(v80, (System_Char_array *)v72, 0LL);
                if ( !v72 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v72 + 24) <= 1u )
                  goto LABEL_174;
                this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(v72 + 40), 0LL) / 10.0;
              }
              else
              {
                if ( !v80 )
                  goto LABEL_173;
                v72 = System_String__Contains(v80, (System_String_o *)StringLiteral_18450/*"effect"*/, 0LL);
                v81 = this->fields.allCreditText;
                if ( !v81 )
                  goto LABEL_173;
                if ( i >= v81->max_length )
                  goto LABEL_174;
                v82 = v81->m_Items[i];
                if ( (v72 & 1) != 0 )
                {
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  v73 = v72;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 61;
                  if ( !v82 )
                    goto LABEL_173;
                  v72 = (__int64)System_String__Split(v82, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v72 + 24) <= 1u )
                    goto LABEL_174;
                  v83 = *(System_String_o **)(v72 + 40);
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  v73 = v72;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 126;
                  if ( !v83 )
                    goto LABEL_173;
                  v72 = (__int64)System_String__Split(v83, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  this->fields.effectTime = System_Single__Parse(*(System_String_o **)(v72 + 32), 0LL) / 10.0;
                  effectWave = this->fields.effectWave;
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 126;
                  v72 = (__int64)System_String__Split(v83, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v72 + 24) <= 1u )
                    goto LABEL_174;
                  v85 = v75;
                  v86 = *(System_String_o **)(v72 + 40);
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  v73 = v72;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 45;
                  if ( !v86 )
                    goto LABEL_173;
                  v72 = (__int64)System_String__Split(v86, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  v72 = System_Int32__Parse(*(System_String_o **)(v72 + 32), 0LL);
                  if ( !effectWave )
                    goto LABEL_173;
                  if ( !effectWave->max_length )
                    goto LABEL_174;
                  effectWave->m_Items[1] = v72;
                  v87 = this->fields.effectWave;
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 126;
                  v72 = (__int64)System_String__Split(v83, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v72 + 24) <= 1u )
                    goto LABEL_174;
                  v88 = *(System_String_o **)(v72 + 40);
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  v73 = v72;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 45;
                  if ( !v88 )
                    goto LABEL_173;
                  v72 = (__int64)System_String__Split(v88, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v72 + 24) <= 1u )
                    goto LABEL_174;
                  v75 = v85;
                  v72 = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0LL);
                  if ( !v87 )
                    goto LABEL_173;
                  if ( v87->max_length <= 1 )
                    goto LABEL_174;
                  v87->m_Items[2] = v72;
                  v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v72 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v72 + 32) = 126;
                  v72 = (__int64)System_String__Split(v83, (System_Char_array *)v72, 0LL);
                  if ( !v72 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v72 + 24) <= 2u )
                    goto LABEL_174;
                  this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v72 + 48), 0LL);
                }
                else
                {
                  if ( !v82 )
                    goto LABEL_173;
                  v72 = System_String__Contains(v82, (System_String_o *)StringLiteral_16911/*"bgm"*/, 0LL);
                  v89 = this->fields.allCreditText;
                  if ( !v89 )
                    goto LABEL_173;
                  if ( i >= v89->max_length )
                    goto LABEL_174;
                  v90 = v72;
                  v72 = (__int64)v89->m_Items[i];
                  if ( !v72 )
                    goto LABEL_173;
                  if ( (v90 & 1) != 0 )
                  {
                    v91 = (System_Int32_array **)System_String__Replace_44585024(
                                                   (System_String_o *)v72,
                                                   (System_String_o *)StringLiteral_68/*"\r"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
                    p_bgmName->klass = (BattleServantConfConponent_c *)v91;
                    sub_B5D560(p_bgmName, v91, v92, v93, v94, v95, v96, v97);
                    klass = (System_String_o *)p_bgmName->klass;
                    v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                    if ( !v72 )
                      goto LABEL_173;
                    v73 = v72;
                    if ( !*(_DWORD *)(v72 + 24) )
                      goto LABEL_174;
                    *(_WORD *)(v72 + 32) = 61;
                    if ( !klass )
                      goto LABEL_173;
                    v72 = (__int64)System_String__Split(klass, (System_Char_array *)v72, 0LL);
                    if ( !v72 )
                      goto LABEL_173;
                    if ( *(_DWORD *)(v72 + 24) <= 1u )
                      goto LABEL_174;
                    v105 = *(struct System_String_o **)(v72 + 40);
                    this->fields.bgmName = v105;
                    sub_B5D560(p_bgmName, (System_Int32_array **)v105, v99, v100, v101, v102, v103, v104);
                    v72 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9487/*"NULL"*/, 0LL);
                    this->fields.isBgmPlay = v72 & 1;
                  }
                  else
                  {
                    v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_18165/*"default_font_size"*/, 0LL);
                    v106 = this->fields.allCreditText;
                    if ( !v106 )
                      goto LABEL_173;
                    if ( i >= v106->max_length )
                      goto LABEL_174;
                    v107 = v106->m_Items[i];
                    if ( (v72 & 1) != 0 )
                    {
                      v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                      if ( !v72 )
                        goto LABEL_173;
                      v73 = v72;
                      if ( !*(_DWORD *)(v72 + 24) )
                        goto LABEL_174;
                      *(_WORD *)(v72 + 32) = 61;
                      if ( !v107 )
                        goto LABEL_173;
                      v72 = (__int64)System_String__Split(v107, (System_Char_array *)v72, 0LL);
                      if ( !v72 )
                        goto LABEL_173;
                      if ( *(_DWORD *)(v72 + 24) <= 1u )
                        goto LABEL_174;
                      v72 = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0LL);
                      this->fields.defaultFontSize = v72;
                    }
                    else
                    {
                      if ( !v107 )
                        goto LABEL_173;
                      v72 = System_String__Contains(v107, (System_String_o *)StringLiteral_18164/*"default_clearance"*/, 0LL);
                      v108 = this->fields.allCreditText;
                      if ( !v108 )
                        goto LABEL_173;
                      if ( i >= v108->max_length )
                        goto LABEL_174;
                      v109 = v108->m_Items[i];
                      if ( (v72 & 1) != 0 )
                      {
                        v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                        if ( !v72 )
                          goto LABEL_173;
                        v73 = v72;
                        if ( !*(_DWORD *)(v72 + 24) )
                          goto LABEL_174;
                        *(_WORD *)(v72 + 32) = 61;
                        if ( !v109 )
                          goto LABEL_173;
                        v72 = (__int64)System_String__Split(v109, (System_Char_array *)v72, 0LL);
                        if ( !v72 )
                          goto LABEL_173;
                        if ( *(_DWORD *)(v72 + 24) <= 1u )
                          goto LABEL_174;
                        v72 = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0LL);
                        this->fields.defaultClearance = v72;
                      }
                      else
                      {
                        if ( !v109 )
                          goto LABEL_173;
                        v72 = System_String__Contains(v109, (System_String_o *)StringLiteral_18166/*"default_text_color"*/, 0LL);
                        if ( (v72 & 1) != 0 )
                        {
                          v110 = this->fields.allCreditText;
                          if ( !v110 )
                            goto LABEL_173;
                          if ( i >= v110->max_length )
                            goto LABEL_174;
                          v111 = v110->m_Items[i];
                          v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                          if ( !v72 )
                            goto LABEL_173;
                          v73 = v72;
                          if ( !*(_DWORD *)(v72 + 24) )
                            goto LABEL_174;
                          *(_WORD *)(v72 + 32) = 61;
                          if ( !v111 )
                            goto LABEL_173;
                          v72 = (__int64)System_String__Split(v111, (System_Char_array *)v72, 0LL);
                          if ( !v72 )
                            goto LABEL_173;
                          if ( *(_DWORD *)(v72 + 24) <= 1u )
                            goto LABEL_174;
                          v118 = *(System_Int32_array ***)(v72 + 40);
                          p_defaultTextColor->klass = (BattleServantConfConponent_c *)v118;
                          sub_B5D560(p_defaultTextColor, v118, v112, v113, v114, v115, v116, v117);
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
        if ( (v76 & 1) == 0 )
          goto LABEL_170;
        v121 = this->fields.allCreditText;
        if ( !v121 )
          goto LABEL_173;
        if ( i >= v121->max_length )
          goto LABEL_174;
        v72 = (__int64)v121->m_Items[i];
        if ( !v72 )
          goto LABEL_173;
        v72 = (__int64)System_String__Replace_44585024(
                         (System_String_o *)v72,
                         (System_String_o *)StringLiteral_68/*"\r"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
        if ( !*p_creditText )
          goto LABEL_173;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_creditText,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        v122 = this->fields.allCreditText;
        if ( !v122 )
          goto LABEL_173;
        if ( i >= v122->max_length )
          goto LABEL_174;
        v72 = (__int64)v122->m_Items[i];
        if ( !v72 )
          goto LABEL_173;
        v123 = v75;
        defaultFontSize = this->fields.defaultFontSize;
        v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_6820/*"FontSize"*/, 0LL);
        if ( (v72 & 1) != 0 )
        {
          v125 = this->fields.allCreditText;
          if ( !v125 )
            goto LABEL_173;
          if ( i >= v125->max_length )
            goto LABEL_174;
          v126 = v125->m_Items[i];
          v72 = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !v72 )
            goto LABEL_173;
          v73 = v72;
          if ( !*(_DWORD *)(v72 + 24) )
            goto LABEL_174;
          *(_WORD *)(v72 + 32) = 126;
          if ( !v126 )
            goto LABEL_173;
          v72 = (__int64)System_String__Split(v126, (System_Char_array *)v72, 0LL);
          if ( !v72 )
            goto LABEL_173;
          v127 = *(_DWORD *)(v72 + 24);
          v128 = (_DWORD *)v72;
          if ( v127 >= 1 )
          {
            v129 = 0;
            while ( v129 < v127 )
            {
              v130 = &v128[2 * v129];
              v132 = *((_QWORD *)v130 + 4);
              v131 = (BattleServantConfConponent_o *)(v130 + 8);
              v72 = v132;
              if ( !v132 )
                goto LABEL_173;
              v72 = System_String__Contains((System_String_o *)v72, (System_String_o *)StringLiteral_6820/*"FontSize"*/, 0LL);
              if ( (v72 & 1) != 0 )
              {
                if ( v129 >= v128[6] )
                  break;
                v72 = (__int64)v131->klass;
                if ( !v131->klass )
                  goto LABEL_173;
                v72 = (__int64)System_String__Replace_44585024(
                                 (System_String_o *)v72,
                                 (System_String_o *)StringLiteral_1300/*"<"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v139 = (System_Int32_array **)v72;
                if ( v72 )
                {
                  v72 = sub_B5D684(v72, *(_QWORD *)(*(_QWORD *)v128 + 64LL));
                  if ( !v72 )
                    goto LABEL_175;
                }
                if ( v129 >= v128[6] )
                  break;
                v131->klass = (BattleServantConfConponent_c *)v139;
                sub_B5D560(v131, v139, v133, v134, v135, v136, v137, v138);
                if ( v129 >= v128[6] )
                  break;
                v72 = (__int64)v131->klass;
                if ( !v131->klass )
                  goto LABEL_173;
                v72 = (__int64)System_String__Replace_44585024(
                                 (System_String_o *)v72,
                                 (System_String_o *)StringLiteral_1535/*">"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v146 = (System_Int32_array **)v72;
                if ( v72 )
                {
                  v72 = sub_B5D684(v72, *(_QWORD *)(*(_QWORD *)v128 + 64LL));
                  if ( !v72 )
                  {
LABEL_175:
                    v155 = sub_B5D6BC(v72);
                    sub_B5D668(v155, 0LL);
                  }
                }
                if ( v129 >= v128[6] )
                  break;
                v131->klass = (BattleServantConfConponent_c *)v146;
                sub_B5D560(v131, v146, v140, v141, v142, v143, v144, v145);
                if ( v129 >= v128[6] )
                  break;
                v147 = (System_String_o *)v131->klass;
                v72 = sub_B5D5DC(char___TypeInfo, 1LL);
                if ( !v72 )
                  goto LABEL_173;
                v73 = v72;
                if ( !*(_DWORD *)(v72 + 24) )
                  break;
                *(_WORD *)(v72 + 32) = 61;
                if ( !v147 )
                  goto LABEL_173;
                v72 = (__int64)System_String__Split(v147, (System_Char_array *)v72, 0LL);
                if ( !v72 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v72 + 24) <= 1u )
                  break;
                v72 = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0LL);
                defaultFontSize = v72;
              }
              v127 = v128[6];
              if ( (int)++v129 >= v127 )
                goto LABEL_145;
            }
LABEL_174:
            v154 = sub_B5D6C8(v72);
            sub_B5D668(v154, 0LL);
          }
        }
LABEL_145:
        v76 = 1;
        v148 = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
        v75 = v123;
        this->fields.lastPostion = v148;
      }
    }
  }
}


void __fastcall EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EndrolRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x22
  int v10; // w21
  int size; // w8
  const MethodInfo *v12; // x4
  struct System_Collections_Generic_List_string__o *v13; // x22
  __int64 nowDispIndex; // x23
  int32_t lastObjectPosY; // w20

  v5 = this;
  if ( (byte_42ECFF5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, (_DWORD)item, (_DWORD)method, v3);
    this = (EndrolRootComponent_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v6, v7, v8);
    byte_42ECFF5 = 1;
  }
  creditText = v5->fields.creditText;
  v10 = v5->fields.nowDispIndex + 1;
  v5->fields.nowDispIndex = v10;
  if ( !creditText )
    goto LABEL_14;
  size = creditText->fields._size;
  if ( v10 < size )
  {
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (EndrolRootComponent_o *)EndrolRootComponent__CheckNextDispContent(
                                      this,
                                      creditText->fields._items->m_Items[v10],
                                      method);
    if ( (_DWORD)this != 3 )
    {
      v13 = v5->fields.creditText;
      if ( v13 )
      {
        nowDispIndex = v5->fields.nowDispIndex;
        if ( v13->fields._size <= (unsigned int)nowDispIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (EndrolRootComponent_o *)EndrolRootComponent__SetItemInfo(
                                          v5,
                                          v13->fields._items->m_Items[nowDispIndex],
                                          item,
                                          (int32_t)this,
                                          v12);
        if ( this )
        {
          lastObjectPosY = v5->fields.lastObjectPosY;
          v5->fields.lastObjectPosY = lastObjectPosY
                                    - EndrolContentItem__get_contentHeight(
                                        (EndrolContentItem_o *)this,
                                        (const MethodInfo *)item)
                                    - v5->fields.defaultClearance;
          return;
        }
      }
LABEL_14:
      sub_B5D69C(this, item);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_List_string__o *creditText; // x22
  EndrolContentItem_o *v17; // x21
  const MethodInfo *v18; // x4
  struct System_Collections_Generic_List_string__o *v19; // x23
  int32_t lastObjectPosY; // w20

  if ( (byte_42ECFF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v6, v7, v8);
    sub_B5D5C4(&NGUITools_TypeInfo, v9, v10, v11);
    byte_42ECFF4 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_16;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_46200776(endrolContentParent, gameObject, 0LL);
  if ( !contentPref )
    goto LABEL_16;
  contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)contentPref,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
  creditText = this->fields.creditText;
  if ( !creditText )
    goto LABEL_16;
  v17 = (EndrolContentItem_o *)contentPref;
  if ( creditText->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                             (EndrolRootComponent_o *)contentPref,
                                             creditText->fields._items->m_Items[index],
                                             v15);
  v19 = this->fields.creditText;
  if ( !v19 )
    goto LABEL_16;
  if ( v19->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                             this,
                                             v19->fields._items->m_Items[index],
                                             v17,
                                             (int32_t)contentPref,
                                             v18);
  if ( !contentPref )
LABEL_16:
    sub_B5D69C(contentPref, *(_QWORD *)&index);
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(
                                  (EndrolContentItem_o *)contentPref,
                                  *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42ECFF2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42ECFF2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1

  if ( (byte_42ECFF9 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EndrolRootComponent_callbackConfirmDlg__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5551/*"ENDROLL_TITLE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5550/*"ENDROLL_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5548/*"ENDROLL_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5549/*"ENDROLL_DECIDE"*/, v23, v24, v25);
    byte_42ECFF9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5551/*"ENDROLL_TITLE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5550/*"ENDROLL_MESSAGE"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5549/*"ENDROLL_DECIDE"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5548/*"ENDROLL_CANCEL"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v32, v33);
  CommonUI__OpenConfirmDialog_18201384(Instance, v27, v28, v29, v30, v31, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  float endWaitTime; // s8
  System_Action_o *v9; // x20
  EndrolRootComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_42ECFEE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EndrolRootComponent__OnScrollEnd_b__29_0__, v5, v6, v7);
    byte_42ECFEE = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__29_0__, 0LL);
  v12 = EndrolRootComponent__Wait(v10, endWaitTime, v9, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall EndrolRootComponent__OnUpdateScroll(EndrolRootComponent_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Component_o *panel; // x0
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  panel = (UnityEngine_Component_o *)this->fields.panel;
  if ( !panel
    || (panel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(panel, 0LL)) == 0LL
    || (panel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)panel, 0LL)) == 0LL
    || (v7.fields.x = 0.0,
        v7.fields.z = 0.0,
        v7.fields.y = value,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)panel, v7, 0LL),
        (panel = (UnityEngine_Component_o *)this->fields.panel) == 0LL) )
  {
    sub_B5D69C(panel, method);
  }
  v6.fields.y = -value;
  v6.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)panel, v6, 0LL);
}


void __fastcall EndrolRootComponent__Open(
        EndrolRootComponent_o *this,
        AssetData_o *assetData,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x3

  if ( (byte_42ECFF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)assetData, (_DWORD)endCallback, method);
    sub_B5D5C4(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, v7, v8, v9);
    sub_B5D5C4(&EndrolRootComponent___c__DisplayClass31_0_TypeInfo, v10, v11, v12);
    byte_42ECFF0 = 1;
  }
  v13 = sub_B5D694(EndrolRootComponent___c__DisplayClass31_0_TypeInfo);
  EndrolRootComponent___c__DisplayClass31_0___ctor((EndrolRootComponent___c__DisplayClass31_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.isScroll = 0;
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v13, Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v28, v29);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_TextAsset_o *v4; // x20
  EndrolRootComponent_o *v5; // x19
  System_String_o *text; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_array *allCreditText; // x8
  __int64 v15; // x0

  v4 = assetData;
  v5 = this;
  if ( (byte_42ECFFA & 1) == 0 )
  {
    this = (EndrolRootComponent_o *)sub_B5D5C4(&char___TypeInfo, (_DWORD)assetData, (_DWORD)method, v3);
    byte_42ECFFA = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  text = UnityEngine_TextAsset__get_text(v4, 0LL);
  this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_9;
  assetData = (UnityEngine_TextAsset_o *)this;
  if ( !LODWORD(this->fields.contentPref) )
  {
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  LOWORD(this->fields.endrolContentParent) = 10;
  if ( !text
    || (v7 = (System_Int32_array **)System_String__Split(text, (System_Char_array *)this, 0LL),
        v5->fields.allCreditText = (struct System_String_array *)v7,
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields.allCreditText, v7, v8, v9, v10, v11, v12, v13),
        (allCreditText = v5->fields.allCreditText) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(this, assetData);
  }
  v5->fields.txtLength = *(_QWORD *)&allCreditText->max_length;
}


void __fastcall EndrolRootComponent__SetAssetStorageData(
        EndrolRootComponent_o *this,
        AssetData_o *data,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_TextAsset_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v11; // x2

  v6 = this;
  if ( (byte_42ECFEF & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_TextAsset____68807520, (_DWORD)data, (_DWORD)endCallback, method);
    this = (EndrolRootComponent_o *)sub_B5D5C4(&StringLiteral_17980/*"credit"*/, v7, v8, v9);
    byte_42ECFEF = 1;
  }
  if ( !data
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_TextAsset_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      data,
                                                                      (System_String_o *)StringLiteral_17980/*"credit"*/,
                                                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_TextAsset____68807520),
        EndrolRootComponent__OpenTextFile(v6, Object_WarBoardWaitTimeSetting, v11),
        !endCallback) )
  {
    sub_B5D69C(this, data);
  }
  System_Action__Invoke(endCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EndrolContentItem_o *__fastcall EndrolRootComponent__SetItemInfo(
        EndrolRootComponent_o *this,
        System_String_o *nextDispString,
        EndrolContentItem_o *item,
        int32_t type,
        const MethodInfo *method)
{
  EndrolContentItem_o *v6; // x25
  System_String_o *v7; // x21
  EndrolRootComponent_o *v8; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  const MethodInfo *v60; // x4
  int v61; // w8
  EndrolRootComponent_o *v62; // x21
  System_String_o *v63; // x22
  unsigned int v64; // w25
  float v65; // s9
  float v66; // s8
  EndrolRootComponent_c **v67; // x28
  EndrolRootComponent_o **v68; // x28
  EndrolRootComponent_o *v69; // t1
  char v70; // w8
  EndrolRootComponent_o *v71; // x22
  EndrolRootComponent_o *v72; // x23
  EndrolRootComponent_o *v73; // x23
  System_String_o *v74; // x0
  const MethodInfo *v75; // x6
  int v76; // w8
  int32_t v77; // w23
  EndrolRootComponent_o *v78; // x21
  EndrolRootComponent_o *v79; // x22
  unsigned int v80; // w27
  int klass; // w24
  EndrolRootComponent_c **v82; // x25
  EndrolRootComponent_o **v83; // x25
  EndrolRootComponent_o *v84; // t1
  char v85; // w8
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x26
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x26
  EndrolRootComponent_o *v100; // x26
  unsigned int v101; // w8
  System_String_o *v102; // x24
  System_String_o *v103; // x0
  System_String_o *v104; // x24
  intptr_t v105; // w25
  System_Type_o *TypeFromHandle; // x25
  EndrolRootComponent_o *v107; // x21
  int32_t defaultFontSize; // w22
  System_String_o *v109; // x23
  unsigned int v110; // w0
  const MethodInfo *v111; // x5
  int contentPref; // w8
  System_String_array *v113; // x23
  il2cpp_array_size_t v114; // w19
  EndrolRootComponent_o **p_panel; // x24
  unsigned int v116; // w28
  char v117; // w8
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x25
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x25
  EndrolRootComponent_o *v132; // x22
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  unsigned int v139; // w8
  EndrolRootComponent_o *v140; // x25
  Il2CppClass **v141; // x0
  int32_t lastObjectPosY; // w1
  struct System_Collections_Generic_List_string__o *creditText; // x19
  __int64 nowDispIndex; // x21
  struct System_Collections_Generic_List_string__o *v145; // x19
  __int64 v146; // x21
  System_String_o *v147; // x2
  struct System_Collections_Generic_List_string__o *v148; // x19
  __int64 v149; // x22
  int32_t v150; // w3
  int32_t v151; // w1
  int32_t v152; // w4
  EndrolContentItem_o *v153; // x0
  EndrolContentItem_o *result; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  EndrolRootComponent_o *v157; // x0
  bool v158; // w1
  const MethodInfo *v159; // x2
  EndrolContentItem_o *v160; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v161; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v162; // [xsp+8h] [xbp-68h]
  System_RuntimeTypeHandle_o v163; // 0:w0.4
  UnityEngine_Vector2_o v164; // 0:s0.4,4:s1.4

  v6 = item;
  v7 = nextDispString;
  v8 = this;
  if ( (byte_42ECFF7 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)nextDispString, (_DWORD)item, *(_QWORD *)&type);
    sub_B5D5C4(&System_Enum_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v12, v13, v14);
    sub_B5D5C4(&UIWidget_Pivot_var, v15, v16, v17);
    sub_B5D5C4(&UIWidget_Pivot_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&string___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Type_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1526/*"="*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_19367/*"height"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1300/*"<"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20462/*"left"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_22128/*"right"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_294/*"\""*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1/*""*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_23589/*"width"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_1535/*">"*/, v54, v55, v56);
    this = (EndrolRootComponent_o *)sub_B5D5C4(&StringLiteral_17474/*"center"*/, v57, v58, v59);
    byte_42ECFF7 = 1;
  }
  if ( type == 5 )
  {
    this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_182;
    nextDispString = (System_String_o *)this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    LOWORD(this->fields.endrolContentParent) = 126;
    if ( !v7 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Split(v7, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_182;
    v107 = this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
    v162 = v6;
    if ( !this )
      goto LABEL_182;
    defaultFontSize = v8->fields.defaultFontSize;
    this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1300/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( !LODWORD(v107->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)v107->fields.endrolContentParent;
    if ( !this )
      goto LABEL_182;
    v109 = System_String__Replace_44585024(
             (System_String_o *)this,
             (System_String_o *)StringLiteral_1535/*">"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
    this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_182;
    nextDispString = (System_String_o *)this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    LOWORD(this->fields.endrolContentParent) = 61;
    if ( !v109 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Split(v109, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_182;
    if ( LODWORD(this->fields.contentPref) <= 1 )
      goto LABEL_181;
    v110 = System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
    this = (EndrolRootComponent_o *)sub_B5D5DC(string___TypeInfo, v110);
    contentPref = (int)v107->fields.contentPref;
    v113 = (System_String_array *)this;
    if ( contentPref < 2 )
    {
LABEL_153:
      if ( v113 )
      {
        v6 = v162;
        if ( v162 )
        {
          lastObjectPosY = v8->fields.lastObjectPosY;
          if ( v113->max_length == 2 )
            EndrolContentItem__SetDoubleColumnText(v162, lastObjectPosY, v113, defaultFontSize, v8, v111);
          else
            EndrolContentItem__SetTripleColumnText(v162, lastObjectPosY, v113, defaultFontSize, v8, v111);
          return v6;
        }
      }
      goto LABEL_182;
    }
    v114 = 0;
    p_panel = (EndrolRootComponent_o **)&v107->fields.panel;
    v116 = 1;
    while ( 1 )
    {
      if ( v116 >= contentPref )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__StartsWith(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1300/*"<"*/,
                                        0LL);
      if ( v116 >= LODWORD(v107->fields.contentPref) )
        goto LABEL_181;
      v117 = (char)this;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      if ( (v117 & 1) == 0 )
        break;
      this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1300/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v124 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B5D684(this, v107->klass->_1.element_class);
        if ( !this )
          goto LABEL_183;
      }
      if ( v116 >= LODWORD(v107->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v124;
      sub_B5D560((BattleServantConfConponent_o *)p_panel, v124, v118, v119, v120, v121, v122, v123);
      if ( v116 >= LODWORD(v107->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1535/*">"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v131 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B5D684(this, v107->klass->_1.element_class);
        if ( !this )
        {
LABEL_183:
          v156 = sub_B5D6BC(this);
          sub_B5D668(v156, 0LL);
        }
      }
      if ( v116 >= LODWORD(v107->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v131;
      sub_B5D560((BattleServantConfConponent_o *)p_panel, v131, v125, v126, v127, v128, v129, v130);
      if ( v116 >= LODWORD(v107->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1526/*"="*/,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v116 >= LODWORD(v107->fields.contentPref) )
          goto LABEL_181;
        v132 = *p_panel;
        this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_182;
        nextDispString = (System_String_o *)this;
        if ( !LODWORD(this->fields.contentPref) )
          goto LABEL_181;
        LOWORD(this->fields.endrolContentParent) = 61;
        if ( !v132 )
          goto LABEL_182;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v132, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_182;
        if ( LODWORD(this->fields.contentPref) <= 1 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
        defaultFontSize = (int)this;
      }
LABEL_152:
      contentPref = (int)v107->fields.contentPref;
      ++v116;
      ++p_panel;
      if ( (int)v116 >= contentPref )
        goto LABEL_153;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15824/*"["*/,
                                      0LL);
    v139 = (unsigned int)v107->fields.contentPref;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v116 >= v139 )
        goto LABEL_181;
      if ( !v113 )
        goto LABEL_182;
      v140 = *p_panel;
      if ( !*p_panel )
        goto LABEL_150;
    }
    else
    {
      if ( v116 >= v139 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_String__Concat_44577788(
                                        v8->fields.defaultTextColor,
                                        (System_String_o *)*p_panel,
                                        0LL);
      if ( !v113 )
        goto LABEL_182;
      v140 = this;
      if ( !this )
        goto LABEL_150;
    }
    this = (EndrolRootComponent_o *)sub_B5D684(v140, v113->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_183;
LABEL_150:
    if ( v114 >= v113->max_length )
      goto LABEL_181;
    v141 = &v113->obj.klass + (int)v114;
    v141[4] = (Il2CppClass *)v140;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v141 + 4),
      (System_Int32_array **)v140,
      v133,
      v134,
      v135,
      v136,
      v137,
      v138);
    ++v114;
    goto LABEL_152;
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( this )
      {
        nextDispString = (System_String_o *)this;
        if ( !LODWORD(this->fields.contentPref) )
          goto LABEL_181;
        LOWORD(this->fields.endrolContentParent) = 126;
        if ( v7 )
        {
          this = (EndrolRootComponent_o *)System_String__Split(v7, (System_Char_array *)this, 0LL);
          if ( this )
          {
            v160 = v6;
            v61 = (int)this->fields.contentPref;
            v62 = this;
            v63 = (System_String_o *)StringLiteral_1/*""*/;
            if ( v61 >= 1 )
            {
              v64 = 0;
              v65 = 0.0;
              v66 = 0.0;
              while ( v64 < v61 )
              {
                v67 = &v62->klass + (int)v64;
                v69 = (EndrolRootComponent_o *)v67[4];
                v68 = (EndrolRootComponent_o **)(v67 + 4);
                this = v69;
                if ( !v69 )
                  goto LABEL_182;
                this = (EndrolRootComponent_o *)System_String__StartsWith(
                                                  (System_String_o *)this,
                                                  (System_String_o *)StringLiteral_1300/*"<"*/,
                                                  0LL);
                if ( v64 >= LODWORD(v62->fields.contentPref) )
                  break;
                v70 = (char)this;
                this = *v68;
                if ( !*v68 )
                  goto LABEL_182;
                if ( (v70 & 1) != 0 )
                {
                  this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1300/*"<"*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  if ( v64 >= LODWORD(v62->fields.contentPref) )
                    break;
                  v71 = *v68;
                  this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
                  if ( !this )
                    goto LABEL_182;
                  nextDispString = (System_String_o *)this;
                  if ( !LODWORD(this->fields.contentPref) )
                    break;
                  LOWORD(this->fields.endrolContentParent) = 61;
                  if ( !v71 )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Split(
                                                    (System_String_o *)v71,
                                                    (System_Char_array *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_182;
                  if ( LODWORD(this->fields.contentPref) <= 1 )
                    break;
                  this = (EndrolRootComponent_o *)this->fields.panel;
                  if ( !this )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_294/*"\""*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  v63 = (System_String_o *)this;
                }
                else
                {
                  this = (EndrolRootComponent_o *)System_String__Contains(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_23589/*"width"*/,
                                                    0LL);
                  if ( v64 >= LODWORD(v62->fields.contentPref) )
                    break;
                  v72 = *v68;
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
                    if ( !this )
                      goto LABEL_182;
                    nextDispString = (System_String_o *)this;
                    if ( !LODWORD(this->fields.contentPref) )
                      break;
                    LOWORD(this->fields.endrolContentParent) = 61;
                    if ( !v72 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Split(
                                                      (System_String_o *)v72,
                                                      (System_Char_array *)this,
                                                      0LL);
                    if ( !this )
                      goto LABEL_182;
                    if ( LODWORD(this->fields.contentPref) <= 1 )
                      break;
                    v66 = System_Single__Parse((System_String_o *)this->fields.panel, 0LL);
                  }
                  else
                  {
                    if ( !v72 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Contains(
                                                      (System_String_o *)*v68,
                                                      (System_String_o *)StringLiteral_19367/*"height"*/,
                                                      0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( v64 >= LODWORD(v62->fields.contentPref) )
                        break;
                      v73 = *v68;
                      this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_182;
                      nextDispString = (System_String_o *)this;
                      if ( !LODWORD(this->fields.contentPref) )
                        break;
                      LOWORD(this->fields.endrolContentParent) = 61;
                      if ( !v73 )
                        goto LABEL_182;
                      this = (EndrolRootComponent_o *)System_String__Split(
                                                        (System_String_o *)v73,
                                                        (System_Char_array *)this,
                                                        0LL);
                      if ( !this )
                        goto LABEL_182;
                      if ( LODWORD(this->fields.contentPref) <= 1 )
                        break;
                      this = (EndrolRootComponent_o *)this->fields.panel;
                      if ( !this )
                        goto LABEL_182;
                      v74 = System_String__Replace_44585024(
                              (System_String_o *)this,
                              (System_String_o *)StringLiteral_1535/*">"*/,
                              (System_String_o *)StringLiteral_1/*""*/,
                              0LL);
                      v65 = System_Single__Parse(v74, 0LL);
                    }
                  }
                }
                v61 = (int)v62->fields.contentPref;
                if ( (int)++v64 >= v61 )
                  goto LABEL_178;
              }
LABEL_181:
              v155 = sub_B5D6C8(this);
              sub_B5D668(v155, 0LL);
            }
            v66 = 0.0;
            v65 = 0.0;
LABEL_178:
            v6 = v160;
            if ( v160 )
            {
              v164.fields.x = v66;
              v164.fields.y = v65;
              EndrolContentItem__SetImage(v160, v8->fields.lastObjectPosY, v63, v164, v8, v60);
              return v6;
            }
          }
        }
      }
LABEL_182:
      sub_B5D69C(this, nextDispString);
    }
    creditText = v8->fields.creditText;
    if ( !creditText )
      goto LABEL_182;
    nowDispIndex = v8->fields.nowDispIndex;
    if ( creditText->fields._size <= (unsigned int)nowDispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (EndrolRootComponent_o *)creditText->fields._items->m_Items[nowDispIndex];
    if ( !this )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15824/*"["*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v145 = v8->fields.creditText;
      if ( !v145 )
        goto LABEL_182;
      v146 = v8->fields.nowDispIndex;
      if ( v145->fields._size <= (unsigned int)v146 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v147 = v145->fields._items->m_Items[v146];
      if ( !v6 )
        goto LABEL_182;
    }
    else
    {
      v148 = v8->fields.creditText;
      if ( !v148 )
        goto LABEL_182;
      v149 = v8->fields.nowDispIndex;
      if ( v148->fields._size <= (unsigned int)v149 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (EndrolRootComponent_o *)System_String__Concat_44577788(
                                        v8->fields.defaultTextColor,
                                        v148->fields._items->m_Items[v149],
                                        0LL);
      v147 = (System_String_o *)this;
      if ( !v6 )
        goto LABEL_182;
    }
    v150 = v8->fields.defaultFontSize;
    v151 = v8->fields.lastObjectPosY;
    v152 = 4;
    v153 = v6;
LABEL_176:
    EndrolContentItem__SetText(v153, v151, v147, v150, v152, v8, v75);
    return v6;
  }
  this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_182;
  nextDispString = (System_String_o *)this;
  if ( !LODWORD(this->fields.contentPref) )
    goto LABEL_181;
  LOWORD(this->fields.endrolContentParent) = 126;
  if ( !v7 )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__Split(v7, (System_Char_array *)this, 0LL);
  if ( !this )
    goto LABEL_182;
  v161 = v6;
  v76 = (int)this->fields.contentPref;
  v77 = v8->fields.defaultFontSize;
  v78 = this;
  v79 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v76 < 1 )
  {
    klass = 4;
LABEL_174:
    v6 = v161;
    if ( !v161 )
      goto LABEL_182;
    v151 = v8->fields.lastObjectPosY;
    v153 = v161;
    v147 = (System_String_o *)v79;
    v150 = v77;
    v152 = klass;
    goto LABEL_176;
  }
  v80 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v80 >= v76 )
      goto LABEL_181;
    v82 = &v78->klass + (int)v80;
    v84 = (EndrolRootComponent_o *)v82[4];
    v83 = (EndrolRootComponent_o **)(v82 + 4);
    this = v84;
    if ( !v84 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1300/*"<"*/,
                                      0LL);
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    v85 = (char)this;
    this = *v83;
    if ( !*v83 )
      goto LABEL_182;
    if ( (v85 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15824/*"["*/,
                                        0LL);
      v101 = (unsigned int)v78->fields.contentPref;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v80 >= v101 )
          goto LABEL_181;
        v79 = *v83;
      }
      else
      {
        if ( v80 >= v101 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_String__Concat_44577788(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v83,
                                          0LL);
        v79 = this;
      }
      goto LABEL_101;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1300/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v92 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B5D684(this, v78->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    *v83 = (EndrolRootComponent_o *)v92;
    sub_B5D560((BattleServantConfConponent_o *)v83, v92, v86, v87, v88, v89, v90, v91);
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    this = *v83;
    if ( !*v83 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Replace_44585024(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1535/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v99 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B5D684(this, v78->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    *v83 = (EndrolRootComponent_o *)v99;
    sub_B5D560((BattleServantConfConponent_o *)v83, v99, v93, v94, v95, v96, v97, v98);
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    this = *v83;
    if ( !*v83 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1526/*"="*/,
                                      0LL);
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    v100 = *v83;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_182;
      nextDispString = (System_String_o *)this;
      if ( !LODWORD(this->fields.contentPref) )
        goto LABEL_181;
      LOWORD(this->fields.endrolContentParent) = 61;
      if ( !v100 )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v100, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_182;
      if ( LODWORD(this->fields.contentPref) <= 1 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
      v77 = (int)this;
      goto LABEL_101;
    }
    if ( !v100 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)*v83,
                                      (System_String_o *)StringLiteral_17474/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    this = *v83;
    if ( !*v83 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_20462/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v80 >= LODWORD(v78->fields.contentPref) )
      goto LABEL_181;
    this = *v83;
    if ( !*v83 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22128/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_101:
    v76 = (int)v78->fields.contentPref;
    if ( (int)++v80 >= v76 )
      goto LABEL_174;
  }
  if ( v80 >= LODWORD(v78->fields.contentPref) )
    goto LABEL_181;
  this = *v83;
  if ( !*v83 )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__Substring_44641524((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v80 >= LODWORD(v78->fields.contentPref) )
    goto LABEL_181;
  v102 = (System_String_o *)this;
  this = *v83;
  if ( !*v83 )
    goto LABEL_182;
  v103 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v104 = System_String__Concat_44577788(v102, v103, 0LL);
  v105 = (int)UIWidget_Pivot_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v163.fields.value = v105;
  TypeFromHandle = System_Type__GetTypeFromHandle(v163, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v104, 0LL);
  if ( !this )
    goto LABEL_182;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this);
    klass = (int)this->klass;
    goto LABEL_101;
  }
  sub_B5D990(this);
  EndrolRootComponent__callbackConfirmDlg(v157, v158, v159);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  float lastPostion; // s8
  System_Collections_Hashtable_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-2Ch] BYREF
  float v43; // [xsp+8h] [xbp-28h] BYREF
  int v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ECFED & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_10177/*"OnUpdateScroll"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_10154/*"OnScrollEnd"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v29, v30, v31);
    sub_B5D5C4(&iTween_TypeInfo, v32, v33, v34);
    byte_42ECFED = 1;
  }
  lastPostion = this->fields.lastPostion;
  v36 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v36, 0LL);
  v44 = 0;
  v37 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_19153/*"from"*/,
    v37,
    v36->klass->vtable._24_Clear.methodPtr);
  v43 = lastPostion + 580.0;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_23019/*"to"*/,
    v39,
    v36->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_22982/*"time"*/,
    v40,
    v36->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_21551/*"onupdate"*/,
    StringLiteral_10177/*"OnUpdateScroll"*/,
    v36->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_10154/*"OnScrollEnd"*/,
    v36->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v36, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42ECFF1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EndrolRootComponent_EndFadeout__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42ECFF1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42ECFF3 & 1) == 0 )
  {
    sub_B5D5C4(&EndrolRootComponent__Wait_d__34_TypeInfo, (_DWORD)callback, (_DWORD)method, v4);
    byte_42ECFF3 = 1;
  }
  v7 = sub_B5D694(EndrolRootComponent__Wait_d__34_TypeInfo);
  EndrolRootComponent__Wait_d__34___ctor((EndrolRootComponent__Wait_d__34_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(float *)(v7 + 32) = waitTime;
  *(_QWORD *)(v7 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v10, v11, v12, v13, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_42ECFF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip, (_DWORD)method, v3);
    byte_42ECFF8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v8);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_42E64D8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E64D8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      sub_B5D69C(0LL, method);
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_B5D560(&this->fields.__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EndrolRootComponent__Wait_d__34_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  EndrolRootComponent_o *_4__this; // x0
  struct EndrolRootComponent_o *v18; // x8
  System_String_o *bgmName; // x20
  unsigned int v20; // w20
  CommonUI_o *v21; // x20
  struct EndrolRootComponent_o *v22; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_42E64D7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__, v14, v15, v16);
    byte_42E64D7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  EndrolRootComponent__CheckOrderEndrol(_4__this, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  if ( v18->fields.isBgmPlay )
  {
    bgmName = v18->fields.bgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playJingle(bgmName, 0LL);
    v18 = this->fields.__4__this;
    if ( !v18 )
      goto LABEL_25;
  }
  _4__this = (EndrolRootComponent_o *)v18->fields.effectManager;
  if ( !_4__this )
    goto LABEL_25;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  v20 = -1;
  do
  {
    if ( !_4__this )
      goto LABEL_25;
    EndrolRootComponent__CreateText(_4__this, ++v20, 0LL);
    _4__this = this->fields.__4__this;
  }
  while ( v20 < 0x1D );
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.mEndAct = this->fields.endCallback;
  sub_B5D560(&_4__this->fields.mEndAct);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CommonUI_o *)_4__this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v21
    || (CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v22 = this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(_4__this, method);
  }
  startWaitTime = v22->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  v25 = EndrolRootComponent__Wait(v22, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v22, v25, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}