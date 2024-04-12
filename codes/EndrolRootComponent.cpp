void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B4673 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B4673 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_B52920(
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
  if ( (byte_42B466D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17635/*"column=3"*/);
    sub_B52984(&StringLiteral_17634/*"column=2"*/);
    sub_B52984(&StringLiteral_1295/*"<"*/);
    sub_B52984(&StringLiteral_1555/*"@"*/);
    this = (EndrolRootComponent_o *)sub_B52984(&StringLiteral_7545/*"Image"*/);
    byte_42B466D = 1;
  }
  if ( !nextDispText )
    sub_B52A5C(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7545/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1555/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1295/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17634/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17635/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t txtLength; // w8
  System_String_o **v13; // x24
  char v14; // w25
  int32_t i; // w26
  struct System_String_array *v16; // x8
  struct System_String_array *v17; // x8
  System_String_o *v18; // x23
  struct System_String_array *v19; // x8
  System_String_o *v20; // x23
  System_String_o *v21; // x23
  struct System_Int32_array *effectWave; // x20
  System_String_o **v23; // x22
  System_String_o *v24; // x24
  struct System_Int32_array *v25; // x20
  System_String_o *v26; // x24
  struct System_String_array *v27; // x9
  char v28; // w8
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *klass; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_String_o *v43; // x1
  struct System_String_array *v44; // x8
  System_String_o *v45; // x23
  struct System_String_array *v46; // x8
  System_String_o *v47; // x23
  struct System_String_array *v48; // x8
  System_String_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v58; // x8
  struct System_String_array *v59; // x8
  struct System_String_array *v60; // x8
  System_String_o **v61; // x22
  int32_t defaultFontSize; // w24
  struct System_String_array *v63; // x8
  System_String_o *v64; // x23
  int v65; // w8
  _DWORD *v66; // x23
  unsigned int v67; // w20
  _DWORD *v68; // x25
  BattleServantConfConponent_o *v69; // x25
  __int64 v70; // t1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x24
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x24
  System_String_o *v85; // x24
  float v86; // s0
  struct System_String_array *v87; // x8
  struct System_String_array *v88; // x8
  System_String_o *v89; // x23
  struct System_String_array *v90; // x8
  System_String_o *v91; // x23
  __int64 v92; // x0
  __int64 v93; // x0
  BattleServantConfConponent_o *p_defaultTextColor; // [xsp+0h] [xbp-70h]
  BattleServantConfConponent_o *p_bgmName; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_creditText; // [xsp+18h] [xbp-58h]

  if ( (byte_42B4672 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&StringLiteral_18356/*"effect"*/);
    sub_B52984(&StringLiteral_6784/*"FontSize"*/);
    sub_B52984(&StringLiteral_22111/*"scroll"*/);
    sub_B52984(&StringLiteral_22453/*"start"*/);
    sub_B52984(&StringLiteral_16820/*"bgm"*/);
    sub_B52984(&StringLiteral_18072/*"default_text_color"*/);
    sub_B52984(&StringLiteral_1295/*"<"*/);
    sub_B52984(&StringLiteral_9448/*"NULL"*/);
    sub_B52984(&StringLiteral_23382/*"wait"*/);
    sub_B52984(&StringLiteral_18476/*"end"*/);
    sub_B52984(&StringLiteral_1555/*"@"*/);
    sub_B52984(&StringLiteral_18071/*"default_font_size"*/);
    sub_B52984(&StringLiteral_16807/*"begine_time"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_68/*"\r"*/);
    sub_B52984(&StringLiteral_1530/*">"*/);
    sub_B52984(&StringLiteral_18070/*"default_clearance"*/);
    byte_42B4672 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.creditText,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  txtLength = this->fields.txtLength;
  p_creditText = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.creditText;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    p_bgmName = (BattleServantConfConponent_o *)&this->fields.bgmName;
    p_defaultTextColor = (BattleServantConfConponent_o *)&this->fields.defaultTextColor;
    v13 = (System_String_o **)&StringLiteral_1555/*"@"*/;
    v14 = 0;
    for ( i = 0; i < this->fields.txtLength; ++i )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_173;
      if ( i >= allCreditText->max_length )
        goto LABEL_174;
      v10 = (__int64)allCreditText->m_Items[i];
      if ( !v10 )
LABEL_173:
        sub_B52A5C(v10, v11);
      v10 = System_String__StartsWith((System_String_o *)v10, *v13, 0LL);
      if ( (v10 & 1) != 0 )
      {
        v58 = this->fields.allCreditText;
        if ( !v58 )
          goto LABEL_173;
        if ( i >= v58->max_length )
          goto LABEL_174;
        v10 = (__int64)v58->m_Items[i];
        if ( !v10 )
          goto LABEL_173;
        v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_22453/*"start"*/, 0LL);
        if ( (v10 & 1) != 0 )
        {
          v14 = 1;
        }
        else
        {
          v87 = this->fields.allCreditText;
          if ( !v87 )
            goto LABEL_173;
          if ( i >= v87->max_length )
            goto LABEL_174;
          v10 = (__int64)v87->m_Items[i];
          if ( !v10 )
            goto LABEL_173;
          v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_16807/*"begine_time"*/, 0LL);
          v88 = this->fields.allCreditText;
          if ( !v88 )
            goto LABEL_173;
          if ( i >= v88->max_length )
            goto LABEL_174;
          v89 = v88->m_Items[i];
          if ( (v10 & 1) != 0 )
          {
            v10 = sub_B5299C(char___TypeInfo, 1LL);
            if ( !v10 )
              goto LABEL_173;
            v11 = v10;
            if ( !*(_DWORD *)(v10 + 24) )
              goto LABEL_174;
            *(_WORD *)(v10 + 32) = 61;
            if ( !v89 )
              goto LABEL_173;
            v10 = (__int64)System_String__Split(v89, (System_Char_array *)v10, 0LL);
            if ( !v10 )
              goto LABEL_173;
            if ( *(_DWORD *)(v10 + 24) <= 1u )
              goto LABEL_174;
            this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(v10 + 40), 0LL) / 10.0;
          }
          else
          {
            if ( !v89 )
              goto LABEL_173;
            v10 = System_String__Contains(v89, (System_String_o *)StringLiteral_22111/*"scroll"*/, 0LL);
            v90 = this->fields.allCreditText;
            if ( !v90 )
              goto LABEL_173;
            if ( i >= v90->max_length )
              goto LABEL_174;
            v91 = v90->m_Items[i];
            if ( (v10 & 1) != 0 )
            {
              v10 = sub_B5299C(char___TypeInfo, 1LL);
              if ( !v10 )
                goto LABEL_173;
              v11 = v10;
              if ( !*(_DWORD *)(v10 + 24) )
                goto LABEL_174;
              *(_WORD *)(v10 + 32) = 61;
              if ( !v91 )
                goto LABEL_173;
              v10 = (__int64)System_String__Split(v91, (System_Char_array *)v10, 0LL);
              if ( !v10 )
                goto LABEL_173;
              if ( *(_DWORD *)(v10 + 24) <= 1u )
                goto LABEL_174;
              this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(v10 + 40), 0LL) / 10.0;
            }
            else
            {
              if ( !v91 )
                goto LABEL_173;
              v10 = System_String__Contains(v91, (System_String_o *)StringLiteral_18476/*"end"*/, 0LL);
              if ( (v10 & 1) != 0 )
              {
LABEL_170:
                v14 = 0;
                continue;
              }
              v16 = this->fields.allCreditText;
              if ( !v16 )
                goto LABEL_173;
              if ( i >= v16->max_length )
                goto LABEL_174;
              v10 = (__int64)v16->m_Items[i];
              if ( !v10 )
                goto LABEL_173;
              v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_23382/*"wait"*/, 0LL);
              v17 = this->fields.allCreditText;
              if ( !v17 )
                goto LABEL_173;
              if ( i >= v17->max_length )
                goto LABEL_174;
              v18 = v17->m_Items[i];
              if ( (v10 & 1) != 0 )
              {
                v10 = sub_B5299C(char___TypeInfo, 1LL);
                if ( !v10 )
                  goto LABEL_173;
                v11 = v10;
                if ( !*(_DWORD *)(v10 + 24) )
                  goto LABEL_174;
                *(_WORD *)(v10 + 32) = 61;
                if ( !v18 )
                  goto LABEL_173;
                v10 = (__int64)System_String__Split(v18, (System_Char_array *)v10, 0LL);
                if ( !v10 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v10 + 24) <= 1u )
                  goto LABEL_174;
                this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(v10 + 40), 0LL) / 10.0;
              }
              else
              {
                if ( !v18 )
                  goto LABEL_173;
                v10 = System_String__Contains(v18, (System_String_o *)StringLiteral_18356/*"effect"*/, 0LL);
                v19 = this->fields.allCreditText;
                if ( !v19 )
                  goto LABEL_173;
                if ( i >= v19->max_length )
                  goto LABEL_174;
                v20 = v19->m_Items[i];
                if ( (v10 & 1) != 0 )
                {
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  v11 = v10;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 61;
                  if ( !v20 )
                    goto LABEL_173;
                  v10 = (__int64)System_String__Split(v20, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v10 + 24) <= 1u )
                    goto LABEL_174;
                  v21 = *(System_String_o **)(v10 + 40);
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  v11 = v10;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 126;
                  if ( !v21 )
                    goto LABEL_173;
                  v10 = (__int64)System_String__Split(v21, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  this->fields.effectTime = System_Single__Parse(*(System_String_o **)(v10 + 32), 0LL) / 10.0;
                  effectWave = this->fields.effectWave;
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 126;
                  v10 = (__int64)System_String__Split(v21, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v10 + 24) <= 1u )
                    goto LABEL_174;
                  v23 = v13;
                  v24 = *(System_String_o **)(v10 + 40);
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  v11 = v10;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 45;
                  if ( !v24 )
                    goto LABEL_173;
                  v10 = (__int64)System_String__Split(v24, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  v10 = System_Int32__Parse(*(System_String_o **)(v10 + 32), 0LL);
                  if ( !effectWave )
                    goto LABEL_173;
                  if ( !effectWave->max_length )
                    goto LABEL_174;
                  effectWave->m_Items[1] = v10;
                  v25 = this->fields.effectWave;
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 126;
                  v10 = (__int64)System_String__Split(v21, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v10 + 24) <= 1u )
                    goto LABEL_174;
                  v26 = *(System_String_o **)(v10 + 40);
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  v11 = v10;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 45;
                  if ( !v26 )
                    goto LABEL_173;
                  v10 = (__int64)System_String__Split(v26, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v10 + 24) <= 1u )
                    goto LABEL_174;
                  v13 = v23;
                  v10 = System_Int32__Parse(*(System_String_o **)(v10 + 40), 0LL);
                  if ( !v25 )
                    goto LABEL_173;
                  if ( v25->max_length <= 1 )
                    goto LABEL_174;
                  v25->m_Items[2] = v10;
                  v10 = sub_B5299C(char___TypeInfo, 1LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( !*(_DWORD *)(v10 + 24) )
                    goto LABEL_174;
                  *(_WORD *)(v10 + 32) = 126;
                  v10 = (__int64)System_String__Split(v21, (System_Char_array *)v10, 0LL);
                  if ( !v10 )
                    goto LABEL_173;
                  if ( *(_DWORD *)(v10 + 24) <= 2u )
                    goto LABEL_174;
                  this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v10 + 48), 0LL);
                }
                else
                {
                  if ( !v20 )
                    goto LABEL_173;
                  v10 = System_String__Contains(v20, (System_String_o *)StringLiteral_16820/*"bgm"*/, 0LL);
                  v27 = this->fields.allCreditText;
                  if ( !v27 )
                    goto LABEL_173;
                  if ( i >= v27->max_length )
                    goto LABEL_174;
                  v28 = v10;
                  v10 = (__int64)v27->m_Items[i];
                  if ( !v10 )
                    goto LABEL_173;
                  if ( (v28 & 1) != 0 )
                  {
                    v29 = (System_Int32_array **)System_String__Replace_44575552(
                                                   (System_String_o *)v10,
                                                   (System_String_o *)StringLiteral_68/*"\r"*/,
                                                   (System_String_o *)StringLiteral_1/*""*/,
                                                   0LL);
                    p_bgmName->klass = (BattleServantConfConponent_c *)v29;
                    sub_B52920(p_bgmName, v29, v30, v31, v32, v33, v34, v35);
                    klass = (System_String_o *)p_bgmName->klass;
                    v10 = sub_B5299C(char___TypeInfo, 1LL);
                    if ( !v10 )
                      goto LABEL_173;
                    v11 = v10;
                    if ( !*(_DWORD *)(v10 + 24) )
                      goto LABEL_174;
                    *(_WORD *)(v10 + 32) = 61;
                    if ( !klass )
                      goto LABEL_173;
                    v10 = (__int64)System_String__Split(klass, (System_Char_array *)v10, 0LL);
                    if ( !v10 )
                      goto LABEL_173;
                    if ( *(_DWORD *)(v10 + 24) <= 1u )
                      goto LABEL_174;
                    v43 = *(struct System_String_o **)(v10 + 40);
                    this->fields.bgmName = v43;
                    sub_B52920(p_bgmName, (System_Int32_array **)v43, v37, v38, v39, v40, v41, v42);
                    v10 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9448/*"NULL"*/, 0LL);
                    this->fields.isBgmPlay = v10 & 1;
                  }
                  else
                  {
                    v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_18071/*"default_font_size"*/, 0LL);
                    v44 = this->fields.allCreditText;
                    if ( !v44 )
                      goto LABEL_173;
                    if ( i >= v44->max_length )
                      goto LABEL_174;
                    v45 = v44->m_Items[i];
                    if ( (v10 & 1) != 0 )
                    {
                      v10 = sub_B5299C(char___TypeInfo, 1LL);
                      if ( !v10 )
                        goto LABEL_173;
                      v11 = v10;
                      if ( !*(_DWORD *)(v10 + 24) )
                        goto LABEL_174;
                      *(_WORD *)(v10 + 32) = 61;
                      if ( !v45 )
                        goto LABEL_173;
                      v10 = (__int64)System_String__Split(v45, (System_Char_array *)v10, 0LL);
                      if ( !v10 )
                        goto LABEL_173;
                      if ( *(_DWORD *)(v10 + 24) <= 1u )
                        goto LABEL_174;
                      v10 = System_Int32__Parse(*(System_String_o **)(v10 + 40), 0LL);
                      this->fields.defaultFontSize = v10;
                    }
                    else
                    {
                      if ( !v45 )
                        goto LABEL_173;
                      v10 = System_String__Contains(v45, (System_String_o *)StringLiteral_18070/*"default_clearance"*/, 0LL);
                      v46 = this->fields.allCreditText;
                      if ( !v46 )
                        goto LABEL_173;
                      if ( i >= v46->max_length )
                        goto LABEL_174;
                      v47 = v46->m_Items[i];
                      if ( (v10 & 1) != 0 )
                      {
                        v10 = sub_B5299C(char___TypeInfo, 1LL);
                        if ( !v10 )
                          goto LABEL_173;
                        v11 = v10;
                        if ( !*(_DWORD *)(v10 + 24) )
                          goto LABEL_174;
                        *(_WORD *)(v10 + 32) = 61;
                        if ( !v47 )
                          goto LABEL_173;
                        v10 = (__int64)System_String__Split(v47, (System_Char_array *)v10, 0LL);
                        if ( !v10 )
                          goto LABEL_173;
                        if ( *(_DWORD *)(v10 + 24) <= 1u )
                          goto LABEL_174;
                        v10 = System_Int32__Parse(*(System_String_o **)(v10 + 40), 0LL);
                        this->fields.defaultClearance = v10;
                      }
                      else
                      {
                        if ( !v47 )
                          goto LABEL_173;
                        v10 = System_String__Contains(v47, (System_String_o *)StringLiteral_18072/*"default_text_color"*/, 0LL);
                        if ( (v10 & 1) != 0 )
                        {
                          v48 = this->fields.allCreditText;
                          if ( !v48 )
                            goto LABEL_173;
                          if ( i >= v48->max_length )
                            goto LABEL_174;
                          v49 = v48->m_Items[i];
                          v10 = sub_B5299C(char___TypeInfo, 1LL);
                          if ( !v10 )
                            goto LABEL_173;
                          v11 = v10;
                          if ( !*(_DWORD *)(v10 + 24) )
                            goto LABEL_174;
                          *(_WORD *)(v10 + 32) = 61;
                          if ( !v49 )
                            goto LABEL_173;
                          v10 = (__int64)System_String__Split(v49, (System_Char_array *)v10, 0LL);
                          if ( !v10 )
                            goto LABEL_173;
                          if ( *(_DWORD *)(v10 + 24) <= 1u )
                            goto LABEL_174;
                          v56 = *(System_Int32_array ***)(v10 + 40);
                          p_defaultTextColor->klass = (BattleServantConfConponent_c *)v56;
                          sub_B52920(p_defaultTextColor, v56, v50, v51, v52, v53, v54, v55);
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
        if ( (v14 & 1) == 0 )
          goto LABEL_170;
        v59 = this->fields.allCreditText;
        if ( !v59 )
          goto LABEL_173;
        if ( i >= v59->max_length )
          goto LABEL_174;
        v10 = (__int64)v59->m_Items[i];
        if ( !v10 )
          goto LABEL_173;
        v10 = (__int64)System_String__Replace_44575552(
                         (System_String_o *)v10,
                         (System_String_o *)StringLiteral_68/*"\r"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
        if ( !*p_creditText )
          goto LABEL_173;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_creditText,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
        v60 = this->fields.allCreditText;
        if ( !v60 )
          goto LABEL_173;
        if ( i >= v60->max_length )
          goto LABEL_174;
        v10 = (__int64)v60->m_Items[i];
        if ( !v10 )
          goto LABEL_173;
        v61 = v13;
        defaultFontSize = this->fields.defaultFontSize;
        v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_6784/*"FontSize"*/, 0LL);
        if ( (v10 & 1) != 0 )
        {
          v63 = this->fields.allCreditText;
          if ( !v63 )
            goto LABEL_173;
          if ( i >= v63->max_length )
            goto LABEL_174;
          v64 = v63->m_Items[i];
          v10 = sub_B5299C(char___TypeInfo, 1LL);
          if ( !v10 )
            goto LABEL_173;
          v11 = v10;
          if ( !*(_DWORD *)(v10 + 24) )
            goto LABEL_174;
          *(_WORD *)(v10 + 32) = 126;
          if ( !v64 )
            goto LABEL_173;
          v10 = (__int64)System_String__Split(v64, (System_Char_array *)v10, 0LL);
          if ( !v10 )
            goto LABEL_173;
          v65 = *(_DWORD *)(v10 + 24);
          v66 = (_DWORD *)v10;
          if ( v65 >= 1 )
          {
            v67 = 0;
            while ( v67 < v65 )
            {
              v68 = &v66[2 * v67];
              v70 = *((_QWORD *)v68 + 4);
              v69 = (BattleServantConfConponent_o *)(v68 + 8);
              v10 = v70;
              if ( !v70 )
                goto LABEL_173;
              v10 = System_String__Contains((System_String_o *)v10, (System_String_o *)StringLiteral_6784/*"FontSize"*/, 0LL);
              if ( (v10 & 1) != 0 )
              {
                if ( v67 >= v66[6] )
                  break;
                v10 = (__int64)v69->klass;
                if ( !v69->klass )
                  goto LABEL_173;
                v10 = (__int64)System_String__Replace_44575552(
                                 (System_String_o *)v10,
                                 (System_String_o *)StringLiteral_1295/*"<"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v77 = (System_Int32_array **)v10;
                if ( v10 )
                {
                  v10 = sub_B52A44(v10, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
                  if ( !v10 )
                    goto LABEL_175;
                }
                if ( v67 >= v66[6] )
                  break;
                v69->klass = (BattleServantConfConponent_c *)v77;
                sub_B52920(v69, v77, v71, v72, v73, v74, v75, v76);
                if ( v67 >= v66[6] )
                  break;
                v10 = (__int64)v69->klass;
                if ( !v69->klass )
                  goto LABEL_173;
                v10 = (__int64)System_String__Replace_44575552(
                                 (System_String_o *)v10,
                                 (System_String_o *)StringLiteral_1530/*">"*/,
                                 (System_String_o *)StringLiteral_1/*""*/,
                                 0LL);
                v84 = (System_Int32_array **)v10;
                if ( v10 )
                {
                  v10 = sub_B52A44(v10, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
                  if ( !v10 )
                  {
LABEL_175:
                    v93 = sub_B52A7C(v10);
                    sub_B52A28(v93, 0LL);
                  }
                }
                if ( v67 >= v66[6] )
                  break;
                v69->klass = (BattleServantConfConponent_c *)v84;
                sub_B52920(v69, v84, v78, v79, v80, v81, v82, v83);
                if ( v67 >= v66[6] )
                  break;
                v85 = (System_String_o *)v69->klass;
                v10 = sub_B5299C(char___TypeInfo, 1LL);
                if ( !v10 )
                  goto LABEL_173;
                v11 = v10;
                if ( !*(_DWORD *)(v10 + 24) )
                  break;
                *(_WORD *)(v10 + 32) = 61;
                if ( !v85 )
                  goto LABEL_173;
                v10 = (__int64)System_String__Split(v85, (System_Char_array *)v10, 0LL);
                if ( !v10 )
                  goto LABEL_173;
                if ( *(_DWORD *)(v10 + 24) <= 1u )
                  break;
                v10 = System_Int32__Parse(*(System_String_o **)(v10 + 40), 0LL);
                defaultFontSize = v10;
              }
              v65 = v66[6];
              if ( (int)++v67 >= v65 )
                goto LABEL_145;
            }
LABEL_174:
            v92 = sub_B52A88(v10);
            sub_B52A28(v92, 0LL);
          }
        }
LABEL_145:
        v14 = 1;
        v86 = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
        v13 = v61;
        this->fields.lastPostion = v86;
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
  struct System_Collections_Generic_List_string__o *creditText; // x22
  int v6; // w21
  int size; // w8
  const MethodInfo *v8; // x4
  struct System_Collections_Generic_List_string__o *v9; // x22
  __int64 nowDispIndex; // x23
  int32_t lastObjectPosY; // w20

  v4 = this;
  if ( (byte_42B466C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (EndrolRootComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_42B466C = 1;
  }
  creditText = v4->fields.creditText;
  v6 = v4->fields.nowDispIndex + 1;
  v4->fields.nowDispIndex = v6;
  if ( !creditText )
    goto LABEL_14;
  size = creditText->fields._size;
  if ( v6 < size )
  {
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (EndrolRootComponent_o *)EndrolRootComponent__CheckNextDispContent(
                                      this,
                                      creditText->fields._items->m_Items[v6],
                                      method);
    if ( (_DWORD)this != 3 )
    {
      v9 = v4->fields.creditText;
      if ( v9 )
      {
        nowDispIndex = v4->fields.nowDispIndex;
        if ( v9->fields._size <= (unsigned int)nowDispIndex )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (EndrolRootComponent_o *)EndrolRootComponent__SetItemInfo(
                                          v4,
                                          v9->fields._items->m_Items[nowDispIndex],
                                          item,
                                          (int32_t)this,
                                          v8);
        if ( this )
        {
          lastObjectPosY = v4->fields.lastObjectPosY;
          v4->fields.lastObjectPosY = lastObjectPosY
                                    - EndrolContentItem__get_contentHeight(
                                        (EndrolContentItem_o *)this,
                                        (const MethodInfo *)item)
                                    - v4->fields.defaultClearance;
          return;
        }
      }
LABEL_14:
      sub_B52A5C(this, item);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_string__o *creditText; // x22
  EndrolContentItem_o *v10; // x21
  const MethodInfo *v11; // x4
  struct System_Collections_Generic_List_string__o *v12; // x23
  int32_t lastObjectPosY; // w20

  if ( (byte_42B466B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&NGUITools_TypeInfo);
    byte_42B466B = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_16;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_46085584(endrolContentParent, gameObject, 0LL);
  if ( !contentPref )
    goto LABEL_16;
  contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)contentPref,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
  creditText = this->fields.creditText;
  if ( !creditText )
    goto LABEL_16;
  v10 = (EndrolContentItem_o *)contentPref;
  if ( creditText->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                             (EndrolRootComponent_o *)contentPref,
                                             creditText->fields._items->m_Items[index],
                                             v8);
  v12 = this->fields.creditText;
  if ( !v12 )
    goto LABEL_16;
  if ( v12->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                             this,
                                             v12->fields._items->m_Items[index],
                                             v10,
                                             (int32_t)contentPref,
                                             v11);
  if ( !contentPref )
LABEL_16:
    sub_B52A5C(contentPref, *(_QWORD *)&index);
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(
                                  (EndrolContentItem_o *)contentPref,
                                  *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B4669 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B4669 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42B4670 & 1) == 0 )
  {
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_5516/*"ENDROLL_TITLE"*/);
    sub_B52984(&StringLiteral_5515/*"ENDROLL_MESSAGE"*/);
    sub_B52984(&StringLiteral_5513/*"ENDROLL_CANCEL"*/);
    sub_B52984(&StringLiteral_5514/*"ENDROLL_DECIDE"*/);
    byte_42B4670 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"ENDROLL_TITLE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"ENDROLL_MESSAGE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5514/*"ENDROLL_DECIDE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"ENDROLL_CANCEL"*/, 0LL);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_B52A5C(v9, v10);
  CommonUI__OpenConfirmDialog_18157444(Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_42B4665 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EndrolRootComponent__OnScrollEnd_b__29_0__);
    byte_42B4665 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__29_0__, 0LL);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
    sub_B52A5C(panel, method);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_42B4667 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__);
    sub_B52984(&EndrolRootComponent___c__DisplayClass31_0_TypeInfo);
    byte_42B4667 = 1;
  }
  v7 = sub_B52A54(EndrolRootComponent___c__DisplayClass31_0_TypeInfo);
  EndrolRootComponent___c__DisplayClass31_0___ctor((EndrolRootComponent___c__DisplayClass31_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)endCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isScroll = 0;
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v7, Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v22, v23);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_TextAsset_o *v3; // x20
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

  v3 = assetData;
  v4 = this;
  if ( (byte_42B4671 & 1) == 0 )
  {
    this = (EndrolRootComponent_o *)sub_B52984(&char___TypeInfo);
    byte_42B4671 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  text = UnityEngine_TextAsset__get_text(v3, 0LL);
  this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_9;
  assetData = (UnityEngine_TextAsset_o *)this;
  if ( !LODWORD(this->fields.contentPref) )
  {
    v14 = sub_B52A88(this);
    sub_B52A28(v14, 0LL);
  }
  LOWORD(this->fields.endrolContentParent) = 10;
  if ( !text
    || (v6 = (System_Int32_array **)System_String__Split(text, (System_Char_array *)this, 0LL),
        v4->fields.allCreditText = (struct System_String_array *)v6,
        sub_B52920((BattleServantConfConponent_o *)&v4->fields.allCreditText, v6, v7, v8, v9, v10, v11, v12),
        (allCreditText = v4->fields.allCreditText) == 0LL) )
  {
LABEL_9:
    sub_B52A5C(this, assetData);
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
  UnityEngine_TextAsset_o *Object_WarBoardWaitTimeSetting; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_42B4666 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_TextAsset____68579968);
    this = (EndrolRootComponent_o *)sub_B52984(&StringLiteral_17886/*"credit"*/);
    byte_42B4666 = 1;
  }
  if ( !data
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_TextAsset_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      data,
                                                                      (System_String_o *)StringLiteral_17886/*"credit"*/,
                                                                      (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_TextAsset____68579968),
        EndrolRootComponent__OpenTextFile(v6, Object_WarBoardWaitTimeSetting, v8),
        !endCallback) )
  {
    sub_B52A5C(this, data);
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
  System_String_o *v7; // x21
  EndrolRootComponent_o *v8; // x20
  const MethodInfo *v9; // x4
  int v10; // w8
  EndrolRootComponent_o *v11; // x21
  System_String_o *v12; // x22
  unsigned int v13; // w25
  float v14; // s9
  float v15; // s8
  EndrolRootComponent_c **v16; // x28
  EndrolRootComponent_o **v17; // x28
  EndrolRootComponent_o *v18; // t1
  char v19; // w8
  EndrolRootComponent_o *v20; // x22
  EndrolRootComponent_o *v21; // x23
  EndrolRootComponent_o *v22; // x23
  System_String_o *v23; // x0
  const MethodInfo *v24; // x6
  int v25; // w8
  int32_t v26; // w23
  EndrolRootComponent_o *v27; // x21
  EndrolRootComponent_o *v28; // x22
  unsigned int v29; // w27
  int klass; // w24
  EndrolRootComponent_c **v31; // x25
  EndrolRootComponent_o **v32; // x25
  EndrolRootComponent_o *v33; // t1
  char v34; // w8
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x26
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  EndrolRootComponent_o *v49; // x26
  unsigned int v50; // w8
  System_String_o *v51; // x24
  System_String_o *v52; // x0
  System_String_o *v53; // x24
  intptr_t v54; // w25
  System_Type_o *TypeFromHandle; // x25
  EndrolRootComponent_o *v56; // x21
  int32_t defaultFontSize; // w22
  System_String_o *v58; // x23
  unsigned int v59; // w0
  const MethodInfo *v60; // x5
  int contentPref; // w8
  System_String_array *v62; // x23
  il2cpp_array_size_t v63; // w19
  EndrolRootComponent_o **p_panel; // x24
  unsigned int v65; // w28
  char v66; // w8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x25
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x25
  EndrolRootComponent_o *v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  unsigned int v88; // w8
  EndrolRootComponent_o *v89; // x25
  Il2CppClass **v90; // x0
  int32_t lastObjectPosY; // w1
  struct System_Collections_Generic_List_string__o *creditText; // x19
  __int64 nowDispIndex; // x21
  struct System_Collections_Generic_List_string__o *v94; // x19
  __int64 v95; // x21
  System_String_o *v96; // x2
  struct System_Collections_Generic_List_string__o *v97; // x19
  __int64 v98; // x22
  int32_t v99; // w3
  int32_t v100; // w1
  int32_t v101; // w4
  EndrolContentItem_o *v102; // x0
  EndrolContentItem_o *result; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  EndrolRootComponent_o *v106; // x0
  bool v107; // w1
  const MethodInfo *v108; // x2
  EndrolContentItem_o *v109; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v110; // [xsp+8h] [xbp-68h]
  EndrolContentItem_o *v111; // [xsp+8h] [xbp-68h]
  System_RuntimeTypeHandle_o v112; // 0:w0.4
  UnityEngine_Vector2_o v113; // 0:s0.4,4:s1.4

  v7 = nextDispString;
  v8 = this;
  if ( (byte_42B466E & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&System_Enum_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&UIWidget_Pivot_var);
    sub_B52984(&UIWidget_Pivot_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&StringLiteral_1521/*"="*/);
    sub_B52984(&StringLiteral_19270/*"height"*/);
    sub_B52984(&StringLiteral_1295/*"<"*/);
    sub_B52984(&StringLiteral_20359/*"left"*/);
    sub_B52984(&StringLiteral_22014/*"right"*/);
    sub_B52984(&StringLiteral_295/*"\""*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_23471/*"width"*/);
    sub_B52984(&StringLiteral_1530/*">"*/);
    this = (EndrolRootComponent_o *)sub_B52984(&StringLiteral_17380/*"center"*/);
    byte_42B466E = 1;
  }
  if ( type == 5 )
  {
    this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
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
    v56 = this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
    v111 = item;
    if ( !this )
      goto LABEL_182;
    defaultFontSize = v8->fields.defaultFontSize;
    this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1295/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( !LODWORD(v56->fields.contentPref) )
      goto LABEL_181;
    this = (EndrolRootComponent_o *)v56->fields.endrolContentParent;
    if ( !this )
      goto LABEL_182;
    v58 = System_String__Replace_44575552(
            (System_String_o *)this,
            (System_String_o *)StringLiteral_1530/*">"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_182;
    nextDispString = (System_String_o *)this;
    if ( !LODWORD(this->fields.contentPref) )
      goto LABEL_181;
    LOWORD(this->fields.endrolContentParent) = 61;
    if ( !v58 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Split(v58, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_182;
    if ( LODWORD(this->fields.contentPref) <= 1 )
      goto LABEL_181;
    v59 = System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
    this = (EndrolRootComponent_o *)sub_B5299C(string___TypeInfo, v59);
    contentPref = (int)v56->fields.contentPref;
    v62 = (System_String_array *)this;
    if ( contentPref < 2 )
    {
LABEL_153:
      if ( v62 )
      {
        item = v111;
        if ( v111 )
        {
          lastObjectPosY = v8->fields.lastObjectPosY;
          if ( v62->max_length == 2 )
            EndrolContentItem__SetDoubleColumnText(v111, lastObjectPosY, v62, defaultFontSize, v8, v60);
          else
            EndrolContentItem__SetTripleColumnText(v111, lastObjectPosY, v62, defaultFontSize, v8, v60);
          return item;
        }
      }
      goto LABEL_182;
    }
    v63 = 0;
    p_panel = (EndrolRootComponent_o **)&v56->fields.panel;
    v65 = 1;
    while ( 1 )
    {
      if ( v65 >= contentPref )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__StartsWith(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1295/*"<"*/,
                                        0LL);
      if ( v65 >= LODWORD(v56->fields.contentPref) )
        goto LABEL_181;
      v66 = (char)this;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      if ( (v66 & 1) == 0 )
        break;
      this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1295/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v73 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B52A44(this, v56->klass->_1.element_class);
        if ( !this )
          goto LABEL_183;
      }
      if ( v65 >= LODWORD(v56->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v73;
      sub_B52920((BattleServantConfConponent_o *)p_panel, v73, v67, v68, v69, v70, v71, v72);
      if ( v65 >= LODWORD(v56->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1530/*">"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      v80 = (System_Int32_array **)this;
      if ( this )
      {
        this = (EndrolRootComponent_o *)sub_B52A44(this, v56->klass->_1.element_class);
        if ( !this )
        {
LABEL_183:
          v105 = sub_B52A7C(this);
          sub_B52A28(v105, 0LL);
        }
      }
      if ( v65 >= LODWORD(v56->fields.contentPref) )
        goto LABEL_181;
      *p_panel = (EndrolRootComponent_o *)v80;
      sub_B52920((BattleServantConfConponent_o *)p_panel, v80, v74, v75, v76, v77, v78, v79);
      if ( v65 >= LODWORD(v56->fields.contentPref) )
        goto LABEL_181;
      this = *p_panel;
      if ( !*p_panel )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1521/*"="*/,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v65 >= LODWORD(v56->fields.contentPref) )
          goto LABEL_181;
        v81 = *p_panel;
        this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_182;
        nextDispString = (System_String_o *)this;
        if ( !LODWORD(this->fields.contentPref) )
          goto LABEL_181;
        LOWORD(this->fields.endrolContentParent) = 61;
        if ( !v81 )
          goto LABEL_182;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v81, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_182;
        if ( LODWORD(this->fields.contentPref) <= 1 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
        defaultFontSize = (int)this;
      }
LABEL_152:
      contentPref = (int)v56->fields.contentPref;
      ++v65;
      ++p_panel;
      if ( (int)v65 >= contentPref )
        goto LABEL_153;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15739/*"["*/,
                                      0LL);
    v88 = (unsigned int)v56->fields.contentPref;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v65 >= v88 )
        goto LABEL_181;
      if ( !v62 )
        goto LABEL_182;
      v89 = *p_panel;
      if ( !*p_panel )
        goto LABEL_150;
    }
    else
    {
      if ( v65 >= v88 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_String__Concat_44568316(
                                        v8->fields.defaultTextColor,
                                        (System_String_o *)*p_panel,
                                        0LL);
      if ( !v62 )
        goto LABEL_182;
      v89 = this;
      if ( !this )
        goto LABEL_150;
    }
    this = (EndrolRootComponent_o *)sub_B52A44(v89, v62->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_183;
LABEL_150:
    if ( v63 >= v62->max_length )
      goto LABEL_181;
    v90 = &v62->obj.klass + (int)v63;
    v90[4] = (Il2CppClass *)v89;
    sub_B52920((BattleServantConfConponent_o *)(v90 + 4), (System_Int32_array **)v89, v82, v83, v84, v85, v86, v87);
    ++v63;
    goto LABEL_152;
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
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
            v109 = item;
            v10 = (int)this->fields.contentPref;
            v11 = this;
            v12 = (System_String_o *)StringLiteral_1/*""*/;
            if ( v10 >= 1 )
            {
              v13 = 0;
              v14 = 0.0;
              v15 = 0.0;
              while ( v13 < v10 )
              {
                v16 = &v11->klass + (int)v13;
                v18 = (EndrolRootComponent_o *)v16[4];
                v17 = (EndrolRootComponent_o **)(v16 + 4);
                this = v18;
                if ( !v18 )
                  goto LABEL_182;
                this = (EndrolRootComponent_o *)System_String__StartsWith(
                                                  (System_String_o *)this,
                                                  (System_String_o *)StringLiteral_1295/*"<"*/,
                                                  0LL);
                if ( v13 >= LODWORD(v11->fields.contentPref) )
                  break;
                v19 = (char)this;
                this = *v17;
                if ( !*v17 )
                  goto LABEL_182;
                if ( (v19 & 1) != 0 )
                {
                  this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_1295/*"<"*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  if ( v13 >= LODWORD(v11->fields.contentPref) )
                    break;
                  v20 = *v17;
                  this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
                  if ( !this )
                    goto LABEL_182;
                  nextDispString = (System_String_o *)this;
                  if ( !LODWORD(this->fields.contentPref) )
                    break;
                  LOWORD(this->fields.endrolContentParent) = 61;
                  if ( !v20 )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Split(
                                                    (System_String_o *)v20,
                                                    (System_Char_array *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_182;
                  if ( LODWORD(this->fields.contentPref) <= 1 )
                    break;
                  this = (EndrolRootComponent_o *)this->fields.panel;
                  if ( !this )
                    goto LABEL_182;
                  this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_295/*"\""*/,
                                                    (System_String_o *)StringLiteral_1/*""*/,
                                                    0LL);
                  v12 = (System_String_o *)this;
                }
                else
                {
                  this = (EndrolRootComponent_o *)System_String__Contains(
                                                    (System_String_o *)this,
                                                    (System_String_o *)StringLiteral_23471/*"width"*/,
                                                    0LL);
                  if ( v13 >= LODWORD(v11->fields.contentPref) )
                    break;
                  v21 = *v17;
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
                    if ( !this )
                      goto LABEL_182;
                    nextDispString = (System_String_o *)this;
                    if ( !LODWORD(this->fields.contentPref) )
                      break;
                    LOWORD(this->fields.endrolContentParent) = 61;
                    if ( !v21 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Split(
                                                      (System_String_o *)v21,
                                                      (System_Char_array *)this,
                                                      0LL);
                    if ( !this )
                      goto LABEL_182;
                    if ( LODWORD(this->fields.contentPref) <= 1 )
                      break;
                    v15 = System_Single__Parse((System_String_o *)this->fields.panel, 0LL);
                  }
                  else
                  {
                    if ( !v21 )
                      goto LABEL_182;
                    this = (EndrolRootComponent_o *)System_String__Contains(
                                                      (System_String_o *)*v17,
                                                      (System_String_o *)StringLiteral_19270/*"height"*/,
                                                      0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      if ( v13 >= LODWORD(v11->fields.contentPref) )
                        break;
                      v22 = *v17;
                      this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_182;
                      nextDispString = (System_String_o *)this;
                      if ( !LODWORD(this->fields.contentPref) )
                        break;
                      LOWORD(this->fields.endrolContentParent) = 61;
                      if ( !v22 )
                        goto LABEL_182;
                      this = (EndrolRootComponent_o *)System_String__Split(
                                                        (System_String_o *)v22,
                                                        (System_Char_array *)this,
                                                        0LL);
                      if ( !this )
                        goto LABEL_182;
                      if ( LODWORD(this->fields.contentPref) <= 1 )
                        break;
                      this = (EndrolRootComponent_o *)this->fields.panel;
                      if ( !this )
                        goto LABEL_182;
                      v23 = System_String__Replace_44575552(
                              (System_String_o *)this,
                              (System_String_o *)StringLiteral_1530/*">"*/,
                              (System_String_o *)StringLiteral_1/*""*/,
                              0LL);
                      v14 = System_Single__Parse(v23, 0LL);
                    }
                  }
                }
                v10 = (int)v11->fields.contentPref;
                if ( (int)++v13 >= v10 )
                  goto LABEL_178;
              }
LABEL_181:
              v104 = sub_B52A88(this);
              sub_B52A28(v104, 0LL);
            }
            v15 = 0.0;
            v14 = 0.0;
LABEL_178:
            item = v109;
            if ( v109 )
            {
              v113.fields.x = v15;
              v113.fields.y = v14;
              EndrolContentItem__SetImage(v109, v8->fields.lastObjectPosY, v12, v113, v8, v9);
              return item;
            }
          }
        }
      }
LABEL_182:
      sub_B52A5C(this, nextDispString);
    }
    creditText = v8->fields.creditText;
    if ( !creditText )
      goto LABEL_182;
    nowDispIndex = v8->fields.nowDispIndex;
    if ( creditText->fields._size <= (unsigned int)nowDispIndex )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    this = (EndrolRootComponent_o *)creditText->fields._items->m_Items[nowDispIndex];
    if ( !this )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_15739/*"["*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v94 = v8->fields.creditText;
      if ( !v94 )
        goto LABEL_182;
      v95 = v8->fields.nowDispIndex;
      if ( v94->fields._size <= (unsigned int)v95 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v96 = v94->fields._items->m_Items[v95];
      if ( !item )
        goto LABEL_182;
    }
    else
    {
      v97 = v8->fields.creditText;
      if ( !v97 )
        goto LABEL_182;
      v98 = v8->fields.nowDispIndex;
      if ( v97->fields._size <= (unsigned int)v98 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (EndrolRootComponent_o *)System_String__Concat_44568316(
                                        v8->fields.defaultTextColor,
                                        v97->fields._items->m_Items[v98],
                                        0LL);
      v96 = (System_String_o *)this;
      if ( !item )
        goto LABEL_182;
    }
    v99 = v8->fields.defaultFontSize;
    v100 = v8->fields.lastObjectPosY;
    v101 = 4;
    v102 = item;
LABEL_176:
    EndrolContentItem__SetText(v102, v100, v96, v99, v101, v8, v24);
    return item;
  }
  this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
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
  v110 = item;
  v25 = (int)this->fields.contentPref;
  v26 = v8->fields.defaultFontSize;
  v27 = this;
  v28 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v25 < 1 )
  {
    klass = 4;
LABEL_174:
    item = v110;
    if ( !v110 )
      goto LABEL_182;
    v100 = v8->fields.lastObjectPosY;
    v102 = v110;
    v96 = (System_String_o *)v28;
    v99 = v26;
    v101 = klass;
    goto LABEL_176;
  }
  v29 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v29 >= v25 )
      goto LABEL_181;
    v31 = &v27->klass + (int)v29;
    v33 = (EndrolRootComponent_o *)v31[4];
    v32 = (EndrolRootComponent_o **)(v31 + 4);
    this = v33;
    if ( !v33 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1295/*"<"*/,
                                      0LL);
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    v34 = (char)this;
    this = *v32;
    if ( !*v32 )
      goto LABEL_182;
    if ( (v34 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15739/*"["*/,
                                        0LL);
      v50 = (unsigned int)v27->fields.contentPref;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v29 >= v50 )
          goto LABEL_181;
        v28 = *v32;
      }
      else
      {
        if ( v29 >= v50 )
          goto LABEL_181;
        this = (EndrolRootComponent_o *)System_String__Concat_44568316(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v32,
                                          0LL);
        v28 = this;
      }
      goto LABEL_101;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1295/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v41 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B52A44(this, v27->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    *v32 = (EndrolRootComponent_o *)v41;
    sub_B52920((BattleServantConfConponent_o *)v32, v41, v35, v36, v37, v38, v39, v40);
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    this = *v32;
    if ( !*v32 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Replace_44575552(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1530/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    v48 = (System_Int32_array **)this;
    if ( this )
    {
      this = (EndrolRootComponent_o *)sub_B52A44(this, v27->klass->_1.element_class);
      if ( !this )
        goto LABEL_183;
    }
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    *v32 = (EndrolRootComponent_o *)v48;
    sub_B52920((BattleServantConfConponent_o *)v32, v48, v42, v43, v44, v45, v46, v47);
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    this = *v32;
    if ( !*v32 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1521/*"="*/,
                                      0LL);
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    v49 = *v32;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_182;
      nextDispString = (System_String_o *)this;
      if ( !LODWORD(this->fields.contentPref) )
        goto LABEL_181;
      LOWORD(this->fields.endrolContentParent) = 61;
      if ( !v49 )
        goto LABEL_182;
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)v49, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_182;
      if ( LODWORD(this->fields.contentPref) <= 1 )
        goto LABEL_181;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.panel, 0LL);
      v26 = (int)this;
      goto LABEL_101;
    }
    if ( !v49 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)*v32,
                                      (System_String_o *)StringLiteral_17380/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    this = *v32;
    if ( !*v32 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_20359/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v29 >= LODWORD(v27->fields.contentPref) )
      goto LABEL_181;
    this = *v32;
    if ( !*v32 )
      goto LABEL_182;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22014/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_101:
    v25 = (int)v27->fields.contentPref;
    if ( (int)++v29 >= v25 )
      goto LABEL_174;
  }
  if ( v29 >= LODWORD(v27->fields.contentPref) )
    goto LABEL_181;
  this = *v32;
  if ( !*v32 )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__Substring_44632052((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_182;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v29 >= LODWORD(v27->fields.contentPref) )
    goto LABEL_181;
  v51 = (System_String_o *)this;
  this = *v32;
  if ( !*v32 )
    goto LABEL_182;
  v52 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v53 = System_String__Concat_44568316(v51, v52, 0LL);
  v54 = (int)UIWidget_Pivot_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v112.fields.value = v54;
  TypeFromHandle = System_Type__GetTypeFromHandle(v112, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v53, 0LL);
  if ( !this )
    goto LABEL_182;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this);
    klass = (int)this->klass;
    goto LABEL_101;
  }
  sub_B52D50(this);
  EndrolRootComponent__callbackConfirmDlg(v106, v107, v108);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float lastPostion; // s8
  System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-2Ch] BYREF
  float v11; // [xsp+8h] [xbp-28h] BYREF
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B4664 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Hashtable_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_10135/*"OnUpdateScroll"*/);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_10112/*"OnScrollEnd"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B4664 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_B52A54(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39351252(v4, 0LL);
  v12 = 0;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_19056/*"from"*/,
    v5,
    v4->klass->vtable._24_Clear.methodPtr);
  v11 = lastPostion + 580.0;
  v7 = j_il2cpp_value_box_0(float_TypeInfo, &v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22904/*"to"*/,
    v7,
    v4->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v8 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22867/*"time"*/,
    v8,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_21442/*"onupdate"*/,
    StringLiteral_10135/*"OnUpdateScroll"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_21433/*"oncomplete"*/,
    StringLiteral_10112/*"OnScrollEnd"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v4, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42B4668 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_EndrolRootComponent_EndFadeout__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B4668 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42B466A & 1) == 0 )
  {
    sub_B52984(&EndrolRootComponent__Wait_d__34_TypeInfo);
    byte_42B466A = 1;
  }
  v6 = sub_B52A54(EndrolRootComponent__Wait_d__34_TypeInfo);
  EndrolRootComponent__Wait_d__34___ctor((EndrolRootComponent__Wait_d__34_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B52A5C(v7, v8);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42B466F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B466F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v7);
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
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_42AD89A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD89A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      sub_B52A5C(0LL, method);
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_B52920(&this->fields.__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_EndrolRootComponent__Wait_d__34_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  EndrolRootComponent_o *_4__this; // x0
  struct EndrolRootComponent_o *v4; // x8
  System_String_o *bgmName; // x20
  unsigned int v6; // w20
  CommonUI_o *v7; // x20
  struct EndrolRootComponent_o *v8; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_42AD899 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__);
    byte_42AD899 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  EndrolRootComponent__CheckOrderEndrol(_4__this, 0LL);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_25;
  if ( v4->fields.isBgmPlay )
  {
    bgmName = v4->fields.bgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playJingle(bgmName, 0LL);
    v4 = this->fields.__4__this;
    if ( !v4 )
      goto LABEL_25;
  }
  _4__this = (EndrolRootComponent_o *)v4->fields.effectManager;
  if ( !_4__this )
    goto LABEL_25;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  v6 = -1;
  do
  {
    if ( !_4__this )
      goto LABEL_25;
    EndrolRootComponent__CreateText(_4__this, ++v6, 0LL);
    _4__this = this->fields.__4__this;
  }
  while ( v6 < 0x1D );
  if ( !_4__this )
    goto LABEL_25;
  _4__this->fields.mEndAct = this->fields.endCallback;
  sub_B52920(&_4__this->fields.mEndAct);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)_4__this;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v8 = this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(_4__this, method);
  }
  startWaitTime = v8->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass31_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B52920(&this->fields.__9__1);
  }
  v11 = EndrolRootComponent__Wait(v8, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)v8, v11, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass31_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}