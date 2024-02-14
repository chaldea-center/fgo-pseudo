void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4218BB7 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4218BB7 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectWave,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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

  if ( (byte_4218BB1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17566/*"column=3"*/, nextDispText);
    sub_B0D8A4(&StringLiteral_17565/*"column=2"*/, v4);
    sub_B0D8A4(&StringLiteral_1287/*"<"*/, v5);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v6);
    this = (EndrolRootComponent_o *)sub_B0D8A4(&StringLiteral_7519/*"Image"*/, v7);
    byte_4218BB1 = 1;
  }
  if ( !nextDispText )
    sub_B0D97C(this);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7519/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1543/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1287/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17565/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17566/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  int32_t txtLength; // w8
  System_String_o **v33; // x24
  char v34; // w25
  int32_t i; // w26
  struct System_String_array *v36; // x8
  struct System_String_array *v37; // x8
  System_String_o *v38; // x23
  struct System_String_array *v39; // x8
  System_String_o *v40; // x23
  System_String_o *v41; // x23
  struct System_Int32_array *effectWave; // x20
  System_String_o **v43; // x22
  System_String_o *v44; // x24
  struct System_Int32_array *v45; // x20
  System_String_o *v46; // x24
  struct System_String_array *v47; // x9
  char v48; // w8
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_o *klass; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_String_o *v63; // x1
  struct System_String_array *v64; // x8
  System_String_o *v65; // x23
  struct System_String_array *v66; // x8
  System_String_o *v67; // x23
  struct System_String_array *v68; // x8
  System_String_o *v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v78; // x8
  struct System_String_array *v79; // x8
  struct System_String_array *v80; // x8
  System_String_o **v81; // x22
  int32_t defaultFontSize; // w24
  struct System_String_array *v83; // x8
  System_String_o *v84; // x23
  int v85; // w8
  _DWORD *v86; // x23
  unsigned int v87; // w20
  _DWORD *v88; // x25
  BattleServantConfConponent_o *v89; // x25
  __int64 v90; // t1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x24
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x24
  System_String_o *v105; // x24
  float v106; // s0
  struct System_String_array *v107; // x8
  struct System_String_array *v108; // x8
  System_String_o *v109; // x23
  struct System_String_array *v110; // x8
  System_String_o *v111; // x23
  __int64 v112; // x0
  __int64 v113; // x0
  BattleServantConfConponent_o *p_defaultTextColor; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *p_bgmName; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_creditText; // [xsp+18h] [xbp-58h]

  if ( (byte_4218BB6 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18278/*"effect"*/, v7);
    sub_B0D8A4(&StringLiteral_6757/*"FontSize"*/, v8);
    sub_B0D8A4(&StringLiteral_21999/*"scroll"*/, v9);
    sub_B0D8A4(&StringLiteral_22341/*"start"*/, v10);
    sub_B0D8A4(&StringLiteral_16754/*"bgm"*/, v11);
    sub_B0D8A4(&StringLiteral_17998/*"default_text_color"*/, v12);
    sub_B0D8A4(&StringLiteral_1287/*"<"*/, v13);
    sub_B0D8A4(&StringLiteral_9414/*"NULL"*/, v14);
    sub_B0D8A4(&StringLiteral_23268/*"wait"*/, v15);
    sub_B0D8A4(&StringLiteral_18399/*"end"*/, v16);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v17);
    sub_B0D8A4(&StringLiteral_17997/*"default_font_size"*/, v18);
    sub_B0D8A4(&StringLiteral_16741/*"begine_time"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    sub_B0D8A4(&StringLiteral_67/*"\r"*/, v21);
    sub_B0D8A4(&StringLiteral_1522/*">"*/, v22);
    sub_B0D8A4(&StringLiteral_17996/*"default_clearance"*/, v23);
    byte_4218BB6 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.creditText,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  txtLength = this->fields.txtLength;
  p_creditText = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.creditText;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    p_bgmName = (BattleServantConfConponent_o *)&this->fields.bgmName;
    p_defaultTextColor = (BattleServantConfConponent_o *)&this->fields.defaultTextColor;
    v33 = (System_String_o **)&StringLiteral_1543/*"@"*/;
    v34 = 0;
    for ( i = 0; i < this->fields.txtLength; ++i )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_173;
      if ( i >= allCreditText->max_length )
        goto LABEL_174;
      v31 = (__int64)allCreditText->m_Items[i];
      if ( !v31 )
LABEL_173:
        sub_B0D97C(v31);
      v31 = System_String__StartsWith((System_String_o *)v31, *v33, 0LL);
      if ( (v31 & 1) != 0 )
      {
        v78 = this->fields.allCreditText;
        if ( !v78 )
          goto LABEL_173;
        if ( i >= v78->max_length )
          goto LABEL_174;
        v31 = (__int64)v78->m_Items[i];
        if ( !v31 )
          goto LABEL_173;
        v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_22341/*"start"*/, 0LL);
        if ( (v31 & 1) != 0 )
        {
          v34 = 1;
        }
        else
        {
          v107 = this->fields.allCreditText;
          if ( !v107 )
            goto LABEL_173;
          if ( i >= v107->max_length )
            goto LABEL_174;
          v31 = (__int64)v107->m_Items[i];
          if ( !v31 )
            goto LABEL_173;
          v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_16741/*"begine_time"*/, 0LL);
          v108 = this->fields.allCreditText;
          if ( !v108 )
            goto LABEL_173;
          if ( i >= v108->max_length )
            goto LABEL_174;
          v109 = v108->m_Items[i];
          if ( (v31 & 1) != 0 )
          {
            v31 = sub_B0D8BC(char___TypeInfo, 1LL);
            if ( !v31 )
              goto LABEL_173;
            if ( !*(_DWORD *)(v31 + 24) )
              goto LABEL_174;
            *(_WORD *)(v31 + 32) = 61;
            if ( !v109 )
              goto LABEL_173;
            v31 = (__int64)System_String__Split(v109, (System_Char_array *)v31, 0LL);
            if ( !v31 )
              goto LABEL_173;
            if ( *(_DWORD *)(v31 + 24) <= 1u )
              goto LABEL_174;
            this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(v31 + 40), 0LL) / 10.0;
          }
          else
          {
            if ( !v109 )
              goto LABEL_173;
            v31 = System_String__Contains(v109, (System_String_o *)StringLiteral_21999/*"scroll"*/, 0LL);
            v110 = this->fields.allCreditText;
            if ( !v110 )
              goto LABEL_173;
            if ( i >= v110->max_length )
              goto LABEL_174;
            v111 = v110->m_Items[i];
            if ( (v31 & 1) != 0 )
            {
              v31 = sub_B0D8BC(char___TypeInfo, 1LL);
              if ( !v31 )
                goto LABEL_173;
              if ( !*(_DWORD *)(v31 + 24) )
                goto LABEL_174;
              *(_WORD *)(v31 + 32) = 61;
              if ( !v111 )
                goto LABEL_173;
              v31 = (__int64)System_String__Split(v111, (System_Char_array *)v31, 0LL);
              if ( !v31 )
                goto LABEL_173;
              if ( *(_DWORD *)(v31 + 24) <= 1u )
                goto LABEL_174;
              this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(v31 + 40), 0LL) / 10.0;
            }
            else
            {
              if ( !v111 )
                goto LABEL_173;
              v31 = System_String__Contains(v111, (System_String_o *)StringLiteral_18399/*"end"*/, 0LL);
              if ( (v31 & 1) != 0 )
              {
LABEL_170:
                v34 = 0;
                continue;
              }
              v36 = this->fields.allCreditText;
              if ( !v36 )
                goto LABEL_173;
              if ( i >= v36->max_length )
                goto LABEL_174;
              v31 = (__int64)v36->m_Items[i];
              if ( !v31 )
                goto LABEL_173;
              v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_23268/*"wait"*/, 0LL);
              v37 = this->fields.allCreditText;
              if ( !v37 )
                goto LABEL_173;
              if ( i >= v37->max_length )
                goto LABEL_174;
              v38 = v37->m_Items[i];
              if ( (v31 & 1) != 0 )
              {
                v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                if ( !v31 )
                  goto LABEL_173;
                if ( !*(_DWORD *)(v31 + 24) )
                  goto LABEL_174;
                *(_WORD *)(v31 + 32) = 61;
                if ( !v38 )
                  goto LABEL_173;
                v31 = (__int64)System_String__Split(v38, (System_Char_array *)v31, 0LL);
                if ( !v31 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v31 + 24) <= 1u )
                  goto LABEL_174;
                this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(v31 + 40), 0LL) / 10.0;
              }
              else
              {
                if ( !v38 )
                  goto LABEL_173;
                v31 = System_String__Contains(v38, (System_String_o *)StringLiteral_18278/*"effect"*/, 0LL);
                v39 = this->fields.allCreditText;
                if ( !v39 )
                  goto LABEL_173;
                if ( i >= v39->max_length )
                  goto LABEL_174;
                v40 = v39->m_Items[i];
                if ( (v31 & 1) != 0 )
                {
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 61;
                  if ( !v40 )
                    goto LABEL_173;
                  v31 = (__int64)System_String__Split(v40, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v31 + 24) <= 1u )
                    goto LABEL_174;
                  v41 = *(System_String_o **)(v31 + 40);
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 126;
                  if ( !v41 )
                    goto LABEL_173;
                  v31 = (__int64)System_String__Split(v41, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  this->fields.effectTime = System_Single__Parse(*(System_String_o **)(v31 + 32), 0LL) / 10.0;
                  effectWave = this->fields.effectWave;
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 126;
                  v31 = (__int64)System_String__Split(v41, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v31 + 24) <= 1u )
                    goto LABEL_174;
                  v43 = v33;
                  v44 = *(System_String_o **)(v31 + 40);
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 45;
                  if ( !v44 )
                    goto LABEL_173;
                  v31 = (__int64)System_String__Split(v44, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  v31 = System_Int32__Parse(*(System_String_o **)(v31 + 32), 0LL);
                  if ( !effectWave )
                    goto LABEL_173;
                  if ( !effectWave->max_length )
                    goto LABEL_174;
                  effectWave->m_Items[1] = v31;
                  v45 = this->fields.effectWave;
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 126;
                  v31 = (__int64)System_String__Split(v41, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v31 + 24) <= 1u )
                    goto LABEL_174;
                  v46 = *(System_String_o **)(v31 + 40);
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 45;
                  if ( !v46 )
                    goto LABEL_173;
                  v31 = (__int64)System_String__Split(v46, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v31 + 24) <= 1u )
                    goto LABEL_174;
                  v33 = v43;
                  v31 = System_Int32__Parse(*(System_String_o **)(v31 + 40), 0LL);
                  if ( !v45 )
                    goto LABEL_173;
                  if ( v45->max_length <= 1 )
                    goto LABEL_174;
                  v45->m_Items[2] = v31;
                  v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v31 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v31 + 32) = 126;
                  v31 = (__int64)System_String__Split(v41, (System_Char_array *)v31, 0LL);
                  if ( !v31 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v31 + 24) <= 2u )
                    goto LABEL_174;
                  this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v31 + 48), 0LL);
                }
                else
                {
                  if ( !v40 )
                    goto LABEL_173;
                  v31 = System_String__Contains(v40, (System_String_o *)StringLiteral_16754/*"bgm"*/, 0LL);
                  v47 = this->fields.allCreditText;
                  if ( !v47 )
                    goto LABEL_173;
                  if ( i >= v47->max_length )
                    goto LABEL_174;
                  v48 = v31;
                  v31 = (__int64)v47->m_Items[i];
                  if ( !v31 )
                    goto LABEL_173;
                  if ( (v48 & 1) != 0 )
                  {
                    v49 = (System_Int32_array **)System_String__Replace_43857140(
                                                   (System_String_o *)v31,
                                                   (System_String_o *)StringLiteral_67/*"\r"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
                    p_bgmName->klass = (BattleServantConfConponent_c *)v49;
                    sub_B0D840(p_bgmName, v49, v50, v51, v52, v53, v54, v55);
                    klass = (System_String_o *)p_bgmName->klass;
                    v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                    if ( !v31 )
                      goto LABEL_173;
                    if ( !*(_DWORD *)(v31 + 24) )
                      goto LABEL_174;
                    *(_WORD *)(v31 + 32) = 61;
                    if ( !klass )
                      goto LABEL_173;
                    v31 = (__int64)System_String__Split(klass, (System_Char_array *)v31, 0LL);
                    if ( !v31 )
                      goto LABEL_173;
                    if ( *(_DWORD *)(v31 + 24) <= 1u )
                      goto LABEL_174;
                    v63 = *(struct System_String_o **)(v31 + 40);
                    this->fields.bgmName = v63;
                    sub_B0D840(p_bgmName, (System_Int32_array **)v63, v57, v58, v59, v60, v61, v62);
                    v31 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9414/*"NULL"*/, 0LL);
                    this->fields.isBgmPlay = v31 & 1;
                  }
                  else
                  {
                    v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_17997/*"default_font_size"*/, 0LL);
                    v64 = this->fields.allCreditText;
                    if ( !v64 )
                      goto LABEL_173;
                    if ( i >= v64->max_length )
                      goto LABEL_174;
                    v65 = v64->m_Items[i];
                    if ( (v31 & 1) != 0 )
                    {
                      v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                      if ( !v31 )
                        goto LABEL_173;
                      if ( !*(_DWORD *)(v31 + 24) )
                        goto LABEL_174;
                      *(_WORD *)(v31 + 32) = 61;
                      if ( !v65 )
                        goto LABEL_173;
                      v31 = (__int64)System_String__Split(v65, (System_Char_array *)v31, 0LL);
                      if ( !v31 )
                        goto LABEL_173;
                      if ( *(_DWORD *)(v31 + 24) <= 1u )
                        goto LABEL_174;
                      v31 = System_Int32__Parse(*(System_String_o **)(v31 + 40), 0LL);
                      this->fields.defaultFontSize = v31;
                    }
                    else
                    {
                      if ( !v65 )
                        goto LABEL_173;
                      v31 = System_String__Contains(v65, (System_String_o *)StringLiteral_17996/*"default_clearance"*/, 0LL);
                      v66 = this->fields.allCreditText;
                      if ( !v66 )
                        goto LABEL_173;
                      if ( i >= v66->max_length )
                        goto LABEL_174;
                      v67 = v66->m_Items[i];
                      if ( (v31 & 1) != 0 )
                      {
                        v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                        if ( !v31 )
                          goto LABEL_173;
                        if ( !*(_DWORD *)(v31 + 24) )
                          goto LABEL_174;
                        *(_WORD *)(v31 + 32) = 61;
                        if ( !v67 )
                          goto LABEL_173;
                        v31 = (__int64)System_String__Split(v67, (System_Char_array *)v31, 0LL);
                        if ( !v31 )
                          goto LABEL_173;
                        if ( *(_DWORD *)(v31 + 24) <= 1u )
                          goto LABEL_174;
                        v31 = System_Int32__Parse(*(System_String_o **)(v31 + 40), 0LL);
                        this->fields.defaultClearance = v31;
                      }
                      else
                      {
                        if ( !v67 )
                          goto LABEL_173;
                        v31 = System_String__Contains(v67, (System_String_o *)StringLiteral_17998/*"default_text_color"*/, 0LL);
                        if ( (v31 & 1) != 0 )
                        {
                          v68 = this->fields.allCreditText;
                          if ( !v68 )
                            goto LABEL_173;
                          if ( i >= v68->max_length )
                            goto LABEL_174;
                          v69 = v68->m_Items[i];
                          v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                          if ( !v31 )
                            goto LABEL_173;
                          if ( !*(_DWORD *)(v31 + 24) )
                            goto LABEL_174;
                          *(_WORD *)(v31 + 32) = 61;
                          if ( !v69 )
                            goto LABEL_173;
                          v31 = (__int64)System_String__Split(v69, (System_Char_array *)v31, 0LL);
                          if ( !v31 )
                            goto LABEL_173;
                          if ( *(_DWORD *)(v31 + 24) <= 1u )
                            goto LABEL_174;
                          v76 = *(System_Int32_array ***)(v31 + 40);
                          p_defaultTextColor->klass = (BattleServantConfConponent_c *)v76;
                          sub_B0D840(p_defaultTextColor, v76, v70, v71, v72, v73, v74, v75);
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
        if ( (v34 & 1) == 0 )
          goto LABEL_170;
        v79 = this->fields.allCreditText;
        if ( !v79 )
          goto LABEL_173;
        if ( i >= v79->max_length )
          goto LABEL_174;
        v31 = (__int64)v79->m_Items[i];
        if ( !v31 )
          goto LABEL_173;
        v31 = (__int64)System_String__Replace_43857140(
                         (System_String_o *)v31,
                         (System_String_o *)StringLiteral_67/*"\r"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
        if ( !*p_creditText )
          goto LABEL_173;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_creditText,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        v80 = this->fields.allCreditText;
        if ( !v80 )
          goto LABEL_173;
        if ( i >= v80->max_length )
          goto LABEL_174;
        v31 = (__int64)v80->m_Items[i];
        if ( !v31 )
          goto LABEL_173;
        v81 = v33;
        defaultFontSize = this->fields.defaultFontSize;
        v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_6757/*"FontSize"*/, 0LL);
        if ( (v31 & 1) != 0 )
        {
          v83 = this->fields.allCreditText;
          if ( !v83 )
            goto LABEL_173;
          if ( i >= v83->max_length )
            goto LABEL_174;
          v84 = v83->m_Items[i];
          v31 = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !v31 )
            goto LABEL_173;
          if ( !*(_DWORD *)(v31 + 24) )
            goto LABEL_174;
          *(_WORD *)(v31 + 32) = 126;
          if ( !v84 )
            goto LABEL_173;
          v31 = (__int64)System_String__Split(v84, (System_Char_array *)v31, 0LL);
          if ( !v31 )
            goto LABEL_173;
          v85 = *(_DWORD *)(v31 + 24);
          v86 = (_DWORD *)v31;
          if ( v85 >= 1 )
          {
            v87 = 0;
            while ( v87 < v85 )
            {
              v88 = &v86[2 * v87];
              v90 = *((_QWORD *)v88 + 4);
              v89 = (BattleServantConfConponent_o *)(v88 + 8);
              v31 = v90;
              if ( !v90 )
                goto LABEL_173;
              v31 = System_String__Contains((System_String_o *)v31, (System_String_o *)StringLiteral_6757/*"FontSize"*/, 0LL);
              if ( (v31 & 1) != 0 )
              {
                if ( v87 >= v86[6] )
                  break;
                v31 = (__int64)v89->klass;
                if ( !v89->klass )
                  goto LABEL_173;
                v31 = (__int64)System_String__Replace_43857140(
                                 (System_String_o *)v31,
                                 (System_String_o *)StringLiteral_1287/*"<"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v97 = (System_Int32_array **)v31;
                if ( v31 )
                {
                  v31 = sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)v86 + 64LL));
                  if ( !v31 )
                    goto LABEL_175;
                }
                if ( v87 >= v86[6] )
                  break;
                v89->klass = (BattleServantConfConponent_c *)v97;
                sub_B0D840(v89, v97, v91, v92, v93, v94, v95, v96);
                if ( v87 >= v86[6] )
                  break;
                v31 = (__int64)v89->klass;
                if ( !v89->klass )
                  goto LABEL_173;
                v31 = (__int64)System_String__Replace_43857140(
                                 (System_String_o *)v31,
                                 (System_String_o *)StringLiteral_1522/*">"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v104 = (System_Int32_array **)v31;
                if ( v31 )
                {
                  v31 = sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)v86 + 64LL));
                  if ( !v31 )
                  {
LABEL_175:
                    v113 = sub_B0D99C(v31);
                    sub_B0D948(v113, 0LL);
                  }
                }
                if ( v87 >= v86[6] )
                  break;
                v89->klass = (BattleServantConfConponent_c *)v104;
                sub_B0D840(v89, v104, v98, v99, v100, v101, v102, v103);
                if ( v87 >= v86[6] )
                  break;
                v105 = (System_String_o *)v89->klass;
                v31 = sub_B0D8BC(char___TypeInfo, 1LL);
                if ( !v31 )
                  goto LABEL_173;
                if ( !*(_DWORD *)(v31 + 24) )
                  break;
                *(_WORD *)(v31 + 32) = 61;
                if ( !v105 )
                  goto LABEL_173;
                v31 = (__int64)System_String__Split(v105, (System_Char_array *)v31, 0LL);
                if ( !v31 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v31 + 24) <= 1u )
                  break;
                v31 = System_Int32__Parse(*(System_String_o **)(v31 + 40), 0LL);
                defaultFontSize = v31;
              }
              v85 = v86[6];
              if ( (int)++v87 >= v85 )
                goto LABEL_145;
            }
LABEL_174:
            v112 = sub_B0D9A8(v31);
            sub_B0D948(v112, 0LL);
          }
        }
LABEL_145:
        v34 = 1;
        v106 = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
        v33 = v81;
        this->fields.lastPostion = v106;
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
  const MethodInfo *v9; // x4
  struct System_Collections_Generic_List_string__o *v10; // x22
  __int64 nowDispIndex; // x23
  const MethodInfo *v12; // x1
  int32_t lastObjectPosY; // w20

  v4 = this;
  if ( (byte_4218BB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, item);
    this = (EndrolRootComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_4218BB0 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (EndrolRootComponent_o *)EndrolRootComponent__CheckNextDispContent(
                                      this,
                                      creditText->fields._items->m_Items[v7],
                                      method);
    if ( (_DWORD)this != 3 )
    {
      v10 = v4->fields.creditText;
      if ( v10 )
      {
        nowDispIndex = v4->fields.nowDispIndex;
        if ( v10->fields._size <= (unsigned int)nowDispIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (EndrolRootComponent_o *)EndrolRootComponent__SetItemInfo(
                                          v4,
                                          v10->fields._items->m_Items[nowDispIndex],
                                          item,
                                          (int32_t)this,
                                          v9);
        if ( this )
        {
          lastObjectPosY = v4->fields.lastObjectPosY;
          v4->fields.lastObjectPosY = lastObjectPosY
                                    - EndrolContentItem__get_contentHeight((EndrolContentItem_o *)this, v12)
                                    - v4->fields.defaultClearance;
          return;
        }
      }
LABEL_14:
      sub_B0D97C(this);
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
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_string__o *creditText; // x22
  EndrolContentItem_o *v12; // x21
  const MethodInfo *v13; // x4
  struct System_Collections_Generic_List_string__o *v14; // x23
  const MethodInfo *v15; // x1
  int32_t lastObjectPosY; // w20

  if ( (byte_4218BAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_B0D8A4(&NGUITools_TypeInfo, v6);
    byte_4218BAF = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_16;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_45603180(endrolContentParent, gameObject, 0LL);
  if ( !contentPref )
    goto LABEL_16;
  contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)contentPref,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
  creditText = this->fields.creditText;
  if ( !creditText )
    goto LABEL_16;
  v12 = (EndrolContentItem_o *)contentPref;
  if ( creditText->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                             (EndrolRootComponent_o *)contentPref,
                                             creditText->fields._items->m_Items[index],
                                             v10);
  v14 = this->fields.creditText;
  if ( !v14 )
    goto LABEL_16;
  if ( v14->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                             this,
                                             v14->fields._items->m_Items[index],
                                             v12,
                                             (int32_t)contentPref,
                                             v13);
  if ( !contentPref )
LABEL_16:
    sub_B0D97C(contentPref);
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight((EndrolContentItem_o *)contentPref, v15)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4218BAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4218BAD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  __int64 v18; // x0

  if ( (byte_4218BB4 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_5490/*"ENDROLL_TITLE"*/, v6);
    sub_B0D8A4(&StringLiteral_5489/*"ENDROLL_MESSAGE"*/, v7);
    sub_B0D8A4(&StringLiteral_5487/*"ENDROLL_CANCEL"*/, v8);
    sub_B0D8A4(&StringLiteral_5488/*"ENDROLL_DECIDE"*/, v9);
    byte_4218BB4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5490/*"ENDROLL_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5489/*"ENDROLL_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5488/*"ENDROLL_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5487/*"ENDROLL_CANCEL"*/, 0LL);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16);
  CommonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v18);
  CommonUI__OpenConfirmDialog_17016196(Instance, v11, v12, v13, v14, v17, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  float endWaitTime; // s8
  System_Action_o *v6; // x20
  EndrolRootComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4218BA9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EndrolRootComponent__OnScrollEnd_b__29_0__, v4);
    byte_4218BA9 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__29_0__, 0LL);
  v9 = EndrolRootComponent__Wait(v7, endWaitTime, v6, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
    sub_B0D97C(panel);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
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
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x3

  if ( (byte_4218BAB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, assetData);
    sub_B0D8A4(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, v7);
    sub_B0D8A4(&EndrolRootComponent___c__DisplayClass31_0_TypeInfo, v8);
    byte_4218BAB = 1;
  }
  v9 = sub_B0D974(EndrolRootComponent___c__DisplayClass31_0_TypeInfo, assetData, endCallback);
  EndrolRootComponent___c__DisplayClass31_0___ctor((EndrolRootComponent___c__DisplayClass31_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 24),
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
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)v9, Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v25, v26);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v4; // x19
  System_String_o *text; // x20
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_array *allCreditText; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4218BB5 & 1) == 0 )
  {
    this = (EndrolRootComponent_o *)sub_B0D8A4(&char___TypeInfo, assetData);
    byte_4218BB5 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  text = UnityEngine_TextAsset__get_text(assetData, 0LL);
  this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_9;
  if ( !LODWORD(this->fields.contentPref) )
  {
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  LOWORD(this->fields.endrolContentParent) = 10;
  if ( !text
    || (v6 = (System_Int32_array **)System_String__Split(text, (System_Char_array *)this, 0LL),
        v4->fields.allCreditText = (struct System_String_array *)v6,
        sub_B0D840((BattleServantConfConponent_o *)&v4->fields.allCreditText, v6, v7, v8, v9, v10, v11, v12),
        (allCreditText = v4->fields.allCreditText) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  v4->fields.txtLength = *(_QWORD *)&allCreditText->max_length;
}


void __fastcall EndrolRootComponent__SetAssetStorageData(
        EndrolRootComponent_o *this,
        AssetData_o *data,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v6; // x20
  __int64 v7; // x1
  UnityEngine_TextAsset_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4218BAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_TextAsset____67951456, data);
    this = (EndrolRootComponent_o *)sub_B0D8A4(&StringLiteral_17817/*"credit"*/, v7);
    byte_4218BAA = 1;
  }
  if ( !data
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_TextAsset_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      data,
                                                                      (System_String_o *)StringLiteral_17817/*"credit"*/,
                                                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_TextAsset____67951456),
        EndrolRootComponent__OpenTextFile(v6, Object_WarBoardWaitTimeSetting, v9),
        !endCallback) )
  {
    sub_B0D97C(this);
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
  EndrolRootComponent_o *v8; // x20
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
  const MethodInfo *v26; // x4
  int v27; // w8
  EndrolRootComponent_o *v28; // x21
  System_String_o *v29; // x22
  unsigned int v30; // w25
  float v31; // s9
  float v32; // s8
  EndrolRootComponent_c **v33; // x28
  EndrolRootComponent_o **v34; // x28
  EndrolRootComponent_o *v35; // t1
  char v36; // w8
  EndrolRootComponent_o *v37; // x22
  EndrolRootComponent_o *v38; // x23
  EndrolRootComponent_o *v39; // x23
  System_String_o *v40; // x0
  const MethodInfo *v41; // x6
  int v42; // w8
  int32_t v43; // w23
  EndrolRootComponent_o *v44; // x21
  EndrolRootComponent_o *v45; // x22
  unsigned int v46; // w27
  int klass; // w24
  EndrolRootComponent_c **v48; // x25
  EndrolRootComponent_o **v49; // x25
  EndrolRootComponent_o *v50; // t1
  char v51; // w8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x26
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x26
  EndrolRootComponent_o *v66; // x26
  unsigned int v67; // w8
  System_String_o *v68; // x24
  System_String_o *v69; // x0
  System_String_o *v70; // x24
  intptr_t v71; // w25
  System_Type_o *TypeFromHandle; // x25
  EndrolRootComponent_o *v73; // x21
  int32_t defaultFontSize; // w22
  System_String_o *v75; // x23
  unsigned int v76; // w0
  const MethodInfo *v77; // x5
  int contentPref; // w8
  System_String_array *v79; // x23
  il2cpp_array_size_t v80; // w19
  EndrolRootComponent_o **p_panel; // x24
  unsigned int v82; // w28
  char v83; // w8
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x25
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x25
  EndrolRootComponent_o *v98; // x22
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  unsigned int v105; // w8
  EndrolRootComponent_o *v106; // x25
  Il2CppClass **v107; // x0
  int32_t lastObjectPosY; // w1
  struct System_Collections_Generic_List_string__o *creditText; // x19
  __int64 nowDispIndex; // x21
  struct System_Collections_Generic_List_string__o *v111; // x19
  __int64 v112; // x21
  System_String_o *v113; // x2
  struct System_Collections_Generic_List_string__o *v114; // x19
  __int64 v115; // x22
  int32_t v116; // w3
  int32_t v117; // w1
  int32_t v118; // w4
  EndrolContentItem_o *v119; // x0
  EndrolContentItem_o *result; // x0
  __int64 v121; // x0
  __int64 v122; // x0
  EndrolRootComponent_o *v123; // x0
  bool v124; // w1
  const MethodInfo *v125; // x2
  EndrolContentItem_o *v126; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v127; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v128; // [xsp+8h] [xbp-68h]
  System_RuntimeTypeHandle_o v129; // 0:w0.4
  UnityEngine_Vector2_o v130; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4218BB2 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, nextDispString);
    sub_B0D8A4(&System_Enum_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v10);
    sub_B0D8A4(&UIWidget_Pivot_var, v11);
    sub_B0D8A4(&UIWidget_Pivot_TypeInfo, v12);
    sub_B0D8A4(&string___TypeInfo, v13);
    sub_B0D8A4(&System_Type_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_1513/*"="*/, v15);
    sub_B0D8A4(&StringLiteral_19185/*"height"*/, v16);
    sub_B0D8A4(&StringLiteral_1287/*"<"*/, v17);
    sub_B0D8A4(&StringLiteral_20269/*"left"*/, v18);
    sub_B0D8A4(&StringLiteral_21903/*"right"*/, v19);
    sub_B0D8A4(&StringLiteral_293/*"\""*/, v20);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    sub_B0D8A4(&StringLiteral_23356/*"width"*/, v23);
    sub_B0D8A4(&StringLiteral_1522/*">"*/, v24);
    this = (EndrolRootComponent_o *)sub_B0D8A4(&StringLiteral_17311/*"center"*/, v25);
    byte_4218BB2 = 1;
  }
  if ( type == 5 )
  {
    this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_182;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    LOWORD(this->fields.endrolContentParent) = 126;
    if ( !nextDispString )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_182;
    v73 = this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
    v128 = item;
    if ( !this )
      goto LABEL_182;
    defaultFontSize = v8->fields.defaultFontSize;
    this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1287/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( !LODWORD(v73->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)v73->fields.endrolContentParent;
    if ( !this )
      goto LABEL_182;
    v75 = System_String__Replace_43857140(
            (System_String_o *)this,
            (System_String_o *)StringLiteral_1522/*">"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_182;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    LOWORD(this->fields.endrolContentParent) = 61;
    if ( !v75 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Split(v75, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_182;
    if ( LODWORD(this->fields.contentPref) <= 1 )
      goto LABEL_181;
    v76 = System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
    this = (EndrolRootComponent_o *)sub_B0D8BC(string___TypeInfo, v76);
    contentPref = (int)v73->fields.contentPref;
    v79 = (System_String_array *)this;
    if ( contentPref < 2 )
    {
LABEL_153:
      if ( v79 )
      {
        item = v128;
        if ( v128 )
        {
          lastObjectPosY = v8->fields.lastObjectPosY;
          if ( v79->max_length == 2 )
            EndrolContentItem__SetDoubleColumnText(v128, lastObjectPosY, v79, defaultFontSize, v8, v77);
          else
            EndrolContentItem__SetTripleColumnText(v128, lastObjectPosY, v79, defaultFontSize, v8, v77);
          return item;
        }
      }
      goto LABEL_182;
    }
    v80 = 0;
    p_panel = (EndrolRootComponent_o **)&v73->fields.panel;
    v82 = 1;
    while ( 1 )
    {
      if ( v82 >= contentPref )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__StartsWith(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1287/*"<"*/,
                                        0LL);
      if ( v82 >= LODWORD(v73->fields.contentPref) )
        goto LABEL_181;
      v83 = (char)this;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      if ( (v83 & 1) == 0 )
        break;
      this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1287/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v90 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B0D964(this, v73->klass->_1.element_class);
        if ( !this )
          goto LABEL_183;
      }
      if ( v82 >= LODWORD(v73->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v90;
      sub_B0D840((BattleServantConfConponent_o *)p_panel, v90, v84, v85, v86, v87, v88, v89);
      if ( v82 >= LODWORD(v73->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1522/*">"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v97 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B0D964(this, v73->klass->_1.element_class);
        if ( !this )
        {
LABEL_183:
          v122 = sub_B0D99C(this);
          sub_B0D948(v122, 0LL);
        }
      }
      if ( v82 >= LODWORD(v73->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v97;
      sub_B0D840((BattleServantConfConponent_o *)p_panel, v97, v91, v92, v93, v94, v95, v96);
      if ( v82 >= LODWORD(v73->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1513/*"="*/,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v82 >= LODWORD(v73->fields.contentPref) )
          goto LABEL_181;
        v98 = *p_panel;
        this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_182;
        if ( !LODWORD(this->fields.contentPref) )
          goto LABEL_181;
        LOWORD(this->fields.endrolContentParent) = 61;
        if ( !v98 )
          goto LABEL_182;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v98, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_182;
        if ( LODWORD(this->fields.contentPref) <= 1 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
        defaultFontSize = (int)this;
      }
LABEL_152:
      contentPref = (int)v73->fields.contentPref;
      ++v82;
      ++p_panel;
      if ( (int)v82 >= contentPref )
        goto LABEL_153;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15681/*"["*/,
                                      0LL);
    v105 = (unsigned int)v73->fields.contentPref;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v82 >= v105 )
        goto LABEL_181;
      if ( !v79 )
        goto LABEL_182;
      v106 = *p_panel;
      if ( !*p_panel )
        goto LABEL_150;
    }
    else
    {
      if ( v82 >= v105 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_String__Concat_43849904(
                                        v8->fields.defaultTextColor,
                                        (System_String_o *)*p_panel,
                                        0LL);
      if ( !v79 )
        goto LABEL_182;
      v106 = this;
      if ( !this )
        goto LABEL_150;
    }
    this = (EndrolRootComponent_o *)sub_B0D964(v106, v79->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_183;
LABEL_150:
    if ( v80 >= v79->max_length )
      goto LABEL_181;
    v107 = &v79->obj.klass + (int)v80;
    v107[4] = (Il2CppClass *)v106;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v107 + 4),
      (System_Int32_array **)v106,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    ++v80;
    goto LABEL_152;
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( this )
      {
        if ( !LODWORD(this->fields.contentPref) )
          goto LABEL_181;
        LOWORD(this->fields.endrolContentParent) = 126;
        if ( nextDispString )
        {
          this = (EndrolRootComponent_o *)System_String__Split(nextDispString, (System_Char_array *)this, 0LL);
          if ( this )
          {
            v126 = item;
            v27 = (int)this->fields.contentPref;
            v28 = this;
            v29 = (System_String_o *)StringLiteral_1/*""*/;
            if ( v27 >= 1 )
            {
              v30 = 0;
              v31 = 0.0;
              v32 = 0.0;
              while ( v30 < v27 )
              {
                v33 = &v28->klass + (int)v30;
                v35 = (EndrolRootComponent_o *)v33[4];
                v34 = (EndrolRootComponent_o **)(v33 + 4);
                this = v35;
                if ( !v35 )
                  goto LABEL_182;
                this = (EndrolRootComponent_o *)System_String__StartsWith(
                                                  (System_String_o *)this,
                                                  (System_String_o *)StringLiteral_1287/*"<"*/,
                                                  0LL);
                if ( v30 >= LODWORD(v28->fields.contentPref) )
                  break;
                v36 = (char)this;
                this = *v34;
                if ( !*v34 )
                  goto LABEL_182;
                if ( (v36 & 1) != 0 )
                {
                  this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1287/*"<"*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  if ( v30 >= LODWORD(v28->fields.contentPref) )
                    break;
                  v37 = *v34;
                  this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
                  if ( !this )
                    goto LABEL_182;
                  if ( !LODWORD(this->fields.contentPref) )
                    break;
                  LOWORD(this->fields.endrolContentParent) = 61;
                  if ( !v37 )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Split(
                                                    (System_String_o *)v37,
                                                    (System_Char_array *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_182;
                  if ( LODWORD(this->fields.contentPref) <= 1 )
                    break;
                  this = (EndrolRootComponent_o *)this->fields.panel;
                  if ( !this )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_293/*"\""*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  v29 = (System_String_o *)this;
                }
                else
                {
                  this = (EndrolRootComponent_o *)System_String__Contains(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_23356/*"width"*/,
                                                    0LL);
                  if ( v30 >= LODWORD(v28->fields.contentPref) )
                    break;
                  v38 = *v34;
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
                    if ( !this )
                      goto LABEL_182;
                    if ( !LODWORD(this->fields.contentPref) )
                      break;
                    LOWORD(this->fields.endrolContentParent) = 61;
                    if ( !v38 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Split(
                                                      (System_String_o *)v38,
                                                      (System_Char_array *)this,
                                                      0LL);
                    if ( !this )
                      goto LABEL_182;
                    if ( LODWORD(this->fields.contentPref) <= 1 )
                      break;
                    v32 = System_Single__Parse((System_String_o *)this->fields.panel, 0LL);
                  }
                  else
                  {
                    if ( !v38 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Contains(
                                                      (System_String_o *)*v34,
                                                      (System_String_o *)StringLiteral_19185/*"height"*/,
                                                      0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( v30 >= LODWORD(v28->fields.contentPref) )
                        break;
                      v39 = *v34;
                      this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_182;
                      if ( !LODWORD(this->fields.contentPref) )
                        break;
                      LOWORD(this->fields.endrolContentParent) = 61;
                      if ( !v39 )
                        goto LABEL_182;
                      this = (EndrolRootComponent_o *)System_String__Split(
                                                        (System_String_o *)v39,
                                                        (System_Char_array *)this,
                                                        0LL);
                      if ( !this )
                        goto LABEL_182;
                      if ( LODWORD(this->fields.contentPref) <= 1 )
                        break;
                      this = (EndrolRootComponent_o *)this->fields.panel;
                      if ( !this )
                        goto LABEL_182;
                      v40 = System_String__Replace_43857140(
                              (System_String_o *)this,
                              (System_String_o *)StringLiteral_1522/*">"*/,
                              (System_String_o *)StringLiteral_1/*""*/,
                              0LL);
                      v31 = System_Single__Parse(v40, 0LL);
                    }
                  }
                }
                v27 = (int)v28->fields.contentPref;
                if ( (int)++v30 >= v27 )
                  goto LABEL_178;
              }
LABEL_181:
              v121 = sub_B0D9A8(this);
              sub_B0D948(v121, 0LL);
            }
            v32 = 0.0;
            v31 = 0.0;
LABEL_178:
            item = v126;
            if ( v126 )
            {
              v130.fields.x = v32;
              v130.fields.y = v31;
              EndrolContentItem__SetImage(v126, v8->fields.lastObjectPosY, v29, v130, v8, v26);
              return item;
            }
          }
        }
      }
LABEL_182:
      sub_B0D97C(this);
    }
    creditText = v8->fields.creditText;
    if ( !creditText )
      goto LABEL_182;
    nowDispIndex = v8->fields.nowDispIndex;
    if ( creditText->fields._size <= (unsigned int)nowDispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (EndrolRootComponent_o *)creditText->fields._items->m_Items[nowDispIndex];
    if ( !this )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15681/*"["*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v111 = v8->fields.creditText;
      if ( !v111 )
        goto LABEL_182;
      v112 = v8->fields.nowDispIndex;
      if ( v111->fields._size <= (unsigned int)v112 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v113 = v111->fields._items->m_Items[v112];
      if ( !item )
        goto LABEL_182;
    }
    else
    {
      v114 = v8->fields.creditText;
      if ( !v114 )
        goto LABEL_182;
      v115 = v8->fields.nowDispIndex;
      if ( v114->fields._size <= (unsigned int)v115 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (EndrolRootComponent_o *)System_String__Concat_43849904(
                                        v8->fields.defaultTextColor,
                                        v114->fields._items->m_Items[v115],
                                        0LL);
      v113 = (System_String_o *)this;
      if ( !item )
        goto LABEL_182;
    }
    v116 = v8->fields.defaultFontSize;
    v117 = v8->fields.lastObjectPosY;
    v118 = 4;
    v119 = item;
LABEL_176:
    EndrolContentItem__SetText(v119, v117, v113, v116, v118, v8, v41);
    return item;
  }
  this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_182;
  if ( !LODWORD(this->fields.contentPref) )
    goto LABEL_181;
  LOWORD(this->fields.endrolContentParent) = 126;
  if ( !nextDispString )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__Split(nextDispString, (System_Char_array *)this, 0LL);
  if ( !this )
    goto LABEL_182;
  v127 = item;
  v42 = (int)this->fields.contentPref;
  v43 = v8->fields.defaultFontSize;
  v44 = this;
  v45 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v42 < 1 )
  {
    klass = 4;
LABEL_174:
    item = v127;
    if ( !v127 )
      goto LABEL_182;
    v117 = v8->fields.lastObjectPosY;
    v119 = v127;
    v113 = (System_String_o *)v45;
    v116 = v43;
    v118 = klass;
    goto LABEL_176;
  }
  v46 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v46 >= v42 )
      goto LABEL_181;
    v48 = &v44->klass + (int)v46;
    v50 = (EndrolRootComponent_o *)v48[4];
    v49 = (EndrolRootComponent_o **)(v48 + 4);
    this = v50;
    if ( !v50 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1287/*"<"*/,
                                      0LL);
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    v51 = (char)this;
    this = *v49;
    if ( !*v49 )
      goto LABEL_182;
    if ( (v51 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15681/*"["*/,
                                        0LL);
      v67 = (unsigned int)v44->fields.contentPref;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v46 >= v67 )
          goto LABEL_181;
        v45 = *v49;
      }
      else
      {
        if ( v46 >= v67 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_String__Concat_43849904(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v49,
                                          0LL);
        v45 = this;
      }
      goto LABEL_101;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1287/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v58 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B0D964(this, v44->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    *v49 = (EndrolRootComponent_o *)v58;
    sub_B0D840((BattleServantConfConponent_o *)v49, v58, v52, v53, v54, v55, v56, v57);
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    this = *v49;
    if ( !*v49 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Replace_43857140(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1522/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v65 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B0D964(this, v44->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    *v49 = (EndrolRootComponent_o *)v65;
    sub_B0D840((BattleServantConfConponent_o *)v49, v65, v59, v60, v61, v62, v63, v64);
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    this = *v49;
    if ( !*v49 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1513/*"="*/,
                                      0LL);
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    v66 = *v49;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_182;
      if ( !LODWORD(this->fields.contentPref) )
        goto LABEL_181;
      LOWORD(this->fields.endrolContentParent) = 61;
      if ( !v66 )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v66, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_182;
      if ( LODWORD(this->fields.contentPref) <= 1 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
      v43 = (int)this;
      goto LABEL_101;
    }
    if ( !v66 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)*v49,
                                      (System_String_o *)StringLiteral_17311/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    this = *v49;
    if ( !*v49 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_20269/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v46 >= LODWORD(v44->fields.contentPref) )
      goto LABEL_181;
    this = *v49;
    if ( !*v49 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21903/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_101:
    v42 = (int)v44->fields.contentPref;
    if ( (int)++v46 >= v42 )
      goto LABEL_174;
  }
  if ( v46 >= LODWORD(v44->fields.contentPref) )
    goto LABEL_181;
  this = *v49;
  if ( !*v49 )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__Substring_43913640((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v46 >= LODWORD(v44->fields.contentPref) )
    goto LABEL_181;
  v68 = (System_String_o *)this;
  this = *v49;
  if ( !*v49 )
    goto LABEL_182;
  v69 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v70 = System_String__Concat_43849904(v68, v69, 0LL);
  v71 = (int)UIWidget_Pivot_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v129.fields.value = v71;
  TypeFromHandle = System_Type__GetTypeFromHandle(v129, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v70, 0LL);
  if ( !this )
    goto LABEL_182;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this);
    klass = (int)this->klass;
    goto LABEL_101;
  }
  sub_B0DC70(this);
  EndrolRootComponent__callbackConfirmDlg(v123, v124, v125);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  float lastPostion; // s8
  System_Collections_Hashtable_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-2Ch] BYREF
  float v21; // [xsp+8h] [xbp-28h] BYREF
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4218BA8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&float_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10095/*"OnUpdateScroll"*/, v6);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v9);
    sub_B0D8A4(&StringLiteral_10072/*"OnScrollEnd"*/, v10);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v11);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v12);
    sub_B0D8A4(&iTween_TypeInfo, v13);
    byte_4218BA8 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v15 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_38437272(v15, 0LL);
  v22 = 0;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  if ( !v15 )
    sub_B0D97C(v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_18972/*"from"*/,
    v16,
    v15->klass->vtable._24_Clear.methodPtr);
  v21 = lastPostion + 580.0;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_22790/*"to"*/,
    v17,
    v15->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_22753/*"time"*/,
    v18,
    v15->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_21341/*"onupdate"*/,
    StringLiteral_10095/*"OnUpdateScroll"*/,
    v15->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_21332/*"oncomplete"*/,
    StringLiteral_10072/*"OnScrollEnd"*/,
    v15->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v15, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4218BAC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4218BAC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4218BAE & 1) == 0 )
  {
    sub_B0D8A4(&EndrolRootComponent__Wait_d__34_TypeInfo, callback);
    byte_4218BAE = 1;
  }
  v6 = sub_B0D974(EndrolRootComponent__Wait_d__34_TypeInfo, callback, method);
  EndrolRootComponent__Wait_d__34___ctor((EndrolRootComponent__Wait_d__34_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4218BB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_4218BB3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4211B04 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4211B04 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      sub_B0D97C(0LL);
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B0D840(&this->fields.__2__current, v6);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EndrolRootComponent__Wait_d__34_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  unsigned int v10; // w20
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  struct EndrolRootComponent_o *v15; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4211B03 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__, v6);
    byte_4211B03 = 1;
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
  _4__this = (EndrolRootComponent_o *)v8->fields.effectManager;
  if ( !_4__this )
    goto LABEL_25;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  v10 = -1;
  do
  {
    if ( !_4__this )
      goto LABEL_25;
    EndrolRootComponent__CreateText(_4__this, ++v10, 0LL);
    _4__this = this->fields.__4__this;
  }
  while ( v10 < 0x1D );
  if ( !_4__this )
    goto LABEL_25;
  endCallback = this->fields.endCallback;
  _4__this->fields.mEndAct = endCallback;
  sub_B0D840(&_4__this->fields.mEndAct, endCallback);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)_4__this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12
    || (CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v15 = this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(_4__this);
  }
  startWaitTime = v15->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  v18 = EndrolRootComponent__Wait(v15, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v15, v18, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}