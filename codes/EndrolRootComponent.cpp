void EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  struct System_Int32_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59323A6 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_59323A6 = 1;
  }
  v3 = int___TypeInfo;
  this->fields.nowDispIndex = -1;
  v4 = (struct System_Int32_array *)sub_21FFD10(v3, 2);
  this->fields.effectWave = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effectWave, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_59323A1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18824/*"column=3"*/);
    sub_21FFC50(&StringLiteral_18823/*"column=2"*/);
    sub_21FFC50(&StringLiteral_1572/*"<"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    this = (EndrolRootComponent_o *)sub_21FFC50(&StringLiteral_7882/*"Image"*/);
    byte_59323A1 = 1;
  }
  if ( !nextDispText )
    sub_21FFECC(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7882/*"Image"*/, 0) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1850/*"@"*/, 0) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1572/*"<"*/, 0) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18823/*"column=2"*/, 0) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18824/*"column=3"*/, 0) )
    return 5;
  return 4;
}


void EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *bgmName; // x0
  __int64 v11; // x1
  int32_t txtLength; // w8
  char v13; // w22
  unsigned __int64 i; // x29
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v16; // x8
  struct System_String_array *v17; // x8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x8
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  System_String_o *v28; // x1
  Il2CppClass **v29; // x0
  struct System_String_array *v30; // x8
  struct System_String_array *v31; // x8
  struct System_String_array *v32; // x8
  int32_t defaultFontSize; // w22
  struct System_String_array *v34; // x8
  int klass; // w9
  System_String_o *v36; // x21
  signed int v37; // w8
  void **p_monitor; // x24
  __int64 v39; // x23
  System_String_c **v40; // x20
  void **v41; // x20
  System_String_o *v42; // t1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int v55; // w8
  struct System_String_array *v56; // x8
  struct System_String_array *v57; // x8
  struct System_String_array *v58; // x8
  struct System_String_array *v59; // x8
  System_String_o *fields; // x21
  float v61; // s0
  struct System_Int32_array *effectWave; // x23
  struct System_Int32_array *v63; // x20
  struct System_String_array *v64; // x8
  struct System_String_o *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_String_o *v78; // x1
  struct System_String_array *v79; // x8
  struct System_String_array *v80; // x8
  struct System_String_array *v81; // x8
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_String_o *v88; // x1
  struct System_Collections_Generic_List_string__o **p_creditText; // [xsp+8h] [xbp-68h]

  if ( (byte_59323A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&StringLiteral_19701/*"effect"*/);
    sub_21FFC50(&StringLiteral_7073/*"FontSize"*/);
    sub_21FFC50(&StringLiteral_24385/*"scroll"*/);
    sub_21FFC50(&StringLiteral_24861/*"start"*/);
    sub_21FFC50(&StringLiteral_17844/*"bgm"*/);
    sub_21FFC50(&StringLiteral_19340/*"default_text_color"*/);
    sub_21FFC50(&StringLiteral_1572/*"<"*/);
    sub_21FFC50(&StringLiteral_9742/*"NULL"*/);
    sub_21FFC50(&StringLiteral_26040/*"wait"*/);
    sub_21FFC50(&StringLiteral_19851/*"end"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_19339/*"default_font_size"*/);
    sub_21FFC50(&StringLiteral_17828/*"begine_time"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_86/*"\r"*/);
    sub_21FFC50(&StringLiteral_1830/*">"*/);
    sub_21FFC50(&StringLiteral_19338/*"default_clearance"*/);
    byte_59323A5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.creditText, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  txtLength = this->fields.txtLength;
  p_creditText = &this->fields.creditText;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v13 = 0;
    for ( i = 0; (int)i < this->fields.txtLength; ++i )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_157;
      if ( i >= LODWORD(allCreditText->max_length) )
        goto LABEL_158;
      bgmName = allCreditText->m_Items[i];
      if ( !bgmName )
LABEL_157:
        sub_21FFECC(bgmName, v11);
      bgmName = (System_String_o *)System_String__StartsWith(bgmName, (System_String_o *)StringLiteral_1850/*"@"*/, 0);
      if ( ((unsigned __int8)bgmName & 1) != 0 )
      {
        v16 = this->fields.allCreditText;
        if ( !v16 )
          goto LABEL_157;
        if ( i >= LODWORD(v16->max_length) )
          goto LABEL_158;
        bgmName = v16->m_Items[i];
        if ( !bgmName )
          goto LABEL_157;
        bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_24861/*"start"*/, 0);
        if ( ((unsigned __int8)bgmName & 1) != 0 )
        {
          v13 = 1;
        }
        else
        {
          v30 = this->fields.allCreditText;
          if ( !v30 )
            goto LABEL_157;
          if ( i >= LODWORD(v30->max_length) )
            goto LABEL_158;
          bgmName = v30->m_Items[i];
          if ( !bgmName )
            goto LABEL_157;
          bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_17828/*"begine_time"*/, 0);
          v31 = this->fields.allCreditText;
          if ( ((unsigned __int8)bgmName & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_157;
            if ( i >= LODWORD(v31->max_length) )
              goto LABEL_158;
            bgmName = v31->m_Items[i];
            if ( !bgmName )
              goto LABEL_157;
            bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
            if ( !bgmName )
              goto LABEL_157;
            if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
              goto LABEL_158;
            this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)&bgmName[1].fields, 0) / 10.0;
          }
          else
          {
            if ( !v31 )
              goto LABEL_157;
            if ( i >= LODWORD(v31->max_length) )
              goto LABEL_158;
            bgmName = v31->m_Items[i];
            if ( !bgmName )
              goto LABEL_157;
            bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_24385/*"scroll"*/, 0);
            v56 = this->fields.allCreditText;
            if ( ((unsigned __int8)bgmName & 1) != 0 )
            {
              if ( !v56 )
                goto LABEL_157;
              if ( i >= LODWORD(v56->max_length) )
                goto LABEL_158;
              bgmName = v56->m_Items[i];
              if ( !bgmName )
                goto LABEL_157;
              bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
              if ( !bgmName )
                goto LABEL_157;
              if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                goto LABEL_158;
              this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)&bgmName[1].fields, 0) / 10.0;
            }
            else
            {
              if ( !v56 )
                goto LABEL_157;
              if ( i >= LODWORD(v56->max_length) )
                goto LABEL_158;
              bgmName = v56->m_Items[i];
              if ( !bgmName )
                goto LABEL_157;
              bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_19851/*"end"*/, 0);
              if ( ((unsigned __int8)bgmName & 1) != 0 )
              {
LABEL_73:
                v13 = 0;
                continue;
              }
              v57 = this->fields.allCreditText;
              if ( !v57 )
                goto LABEL_157;
              if ( i >= LODWORD(v57->max_length) )
                goto LABEL_158;
              bgmName = v57->m_Items[i];
              if ( !bgmName )
                goto LABEL_157;
              bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_26040/*"wait"*/, 0);
              v58 = this->fields.allCreditText;
              if ( ((unsigned __int8)bgmName & 1) != 0 )
              {
                if ( !v58 )
                  goto LABEL_157;
                if ( i >= LODWORD(v58->max_length) )
                  goto LABEL_158;
                bgmName = v58->m_Items[i];
                if ( !bgmName )
                  goto LABEL_157;
                bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                if ( !bgmName )
                  goto LABEL_157;
                if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                  goto LABEL_158;
                this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)&bgmName[1].fields, 0) / 10.0;
              }
              else
              {
                if ( !v58 )
                  goto LABEL_157;
                if ( i >= LODWORD(v58->max_length) )
                  goto LABEL_158;
                bgmName = v58->m_Items[i];
                if ( !bgmName )
                  goto LABEL_157;
                bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_19701/*"effect"*/, 0);
                v59 = this->fields.allCreditText;
                if ( ((unsigned __int8)bgmName & 1) != 0 )
                {
                  if ( !v59 )
                    goto LABEL_157;
                  if ( i >= LODWORD(v59->max_length) )
                    goto LABEL_158;
                  bgmName = v59->m_Items[i];
                  if ( !bgmName )
                    goto LABEL_157;
                  bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                    goto LABEL_158;
                  fields = (System_String_o *)bgmName[1].fields;
                  if ( !fields )
                    goto LABEL_157;
                  bgmName = (System_String_o *)System_String__Split(
                                                 *(System_String_o **)&bgmName[1].fields,
                                                 0x7Eu,
                                                 0,
                                                 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( !LODWORD(bgmName[1].klass) )
                    goto LABEL_158;
                  v61 = System_Single__Parse((System_String_o *)bgmName[1].monitor, 0);
                  effectWave = this->fields.effectWave;
                  this->fields.effectTime = v61 / 10.0;
                  bgmName = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                    goto LABEL_158;
                  bgmName = (System_String_o *)bgmName[1].fields;
                  if ( !bgmName )
                    goto LABEL_157;
                  bgmName = (System_String_o *)System_String__Split(bgmName, 0x2Du, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( !LODWORD(bgmName[1].klass) )
                    goto LABEL_158;
                  bgmName = (System_String_o *)System_Int32__Parse((System_String_o *)bgmName[1].monitor, 0);
                  if ( !effectWave )
                    goto LABEL_157;
                  if ( !LODWORD(effectWave->max_length) )
                    goto LABEL_158;
                  v63 = this->fields.effectWave;
                  effectWave->m_Items[0] = (int)bgmName;
                  bgmName = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                    goto LABEL_158;
                  bgmName = (System_String_o *)bgmName[1].fields;
                  if ( !bgmName )
                    goto LABEL_157;
                  bgmName = (System_String_o *)System_String__Split(bgmName, 0x2Du, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                    goto LABEL_158;
                  bgmName = (System_String_o *)System_Int32__Parse(*(System_String_o **)&bgmName[1].fields, 0);
                  if ( !v63 )
                    goto LABEL_157;
                  if ( (v63->max_length & 0xFFFFFFFE) == 0 )
                    goto LABEL_158;
                  v63->m_Items[1] = (int)bgmName;
                  bgmName = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0);
                  if ( !bgmName )
                    goto LABEL_157;
                  if ( LODWORD(bgmName[1].klass) <= 2 )
                    goto LABEL_158;
                  this->fields.effectOverlap = System_Single__Parse((System_String_o *)bgmName[2].klass, 0);
                }
                else
                {
                  if ( !v59 )
                    goto LABEL_157;
                  if ( i >= LODWORD(v59->max_length) )
                    goto LABEL_158;
                  bgmName = v59->m_Items[i];
                  if ( !bgmName )
                    goto LABEL_157;
                  bgmName = (System_String_o *)System_String__Contains(
                                                 bgmName,
                                                 (System_String_o *)StringLiteral_17844/*"bgm"*/,
                                                 0);
                  v64 = this->fields.allCreditText;
                  if ( ((unsigned __int8)bgmName & 1) != 0 )
                  {
                    if ( !v64 )
                      goto LABEL_157;
                    if ( i >= LODWORD(v64->max_length) )
                      goto LABEL_158;
                    bgmName = v64->m_Items[i];
                    if ( !bgmName )
                      goto LABEL_157;
                    v65 = System_String__Replace_75490096(
                            bgmName,
                            (System_String_o *)StringLiteral_86/*"\r"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
                    this->fields.bgmName = v65;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName,
                      (int32_t)v65,
                      v66,
                      v67,
                      v68,
                      v69,
                      v70,
                      v71);
                    bgmName = this->fields.bgmName;
                    if ( !bgmName )
                      goto LABEL_157;
                    bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                    if ( !bgmName )
                      goto LABEL_157;
                    if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                      goto LABEL_158;
                    v78 = (struct System_String_o *)bgmName[1].fields;
                    this->fields.bgmName = v78;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName,
                      (int32_t)v78,
                      v72,
                      v73,
                      v74,
                      v75,
                      v76,
                      v77);
                    bgmName = (System_String_o *)System_String__op_Inequality(
                                                   this->fields.bgmName,
                                                   (System_String_o *)StringLiteral_9742/*"NULL"*/,
                                                   0);
                    this->fields.isBgmPlay = (unsigned __int8)bgmName & 1;
                  }
                  else
                  {
                    if ( !v64 )
                      goto LABEL_157;
                    if ( i >= LODWORD(v64->max_length) )
                      goto LABEL_158;
                    bgmName = v64->m_Items[i];
                    if ( !bgmName )
                      goto LABEL_157;
                    bgmName = (System_String_o *)System_String__Contains(
                                                   bgmName,
                                                   (System_String_o *)StringLiteral_19339/*"default_font_size"*/,
                                                   0);
                    v79 = this->fields.allCreditText;
                    if ( ((unsigned __int8)bgmName & 1) != 0 )
                    {
                      if ( !v79 )
                        goto LABEL_157;
                      if ( i >= LODWORD(v79->max_length) )
                        goto LABEL_158;
                      bgmName = v79->m_Items[i];
                      if ( !bgmName )
                        goto LABEL_157;
                      bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                      if ( !bgmName )
                        goto LABEL_157;
                      if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                        goto LABEL_158;
                      bgmName = (System_String_o *)System_Int32__Parse(*(System_String_o **)&bgmName[1].fields, 0);
                      this->fields.defaultFontSize = (int)bgmName;
                    }
                    else
                    {
                      if ( !v79 )
                        goto LABEL_157;
                      if ( i >= LODWORD(v79->max_length) )
                        goto LABEL_158;
                      bgmName = v79->m_Items[i];
                      if ( !bgmName )
                        goto LABEL_157;
                      bgmName = (System_String_o *)System_String__Contains(
                                                     bgmName,
                                                     (System_String_o *)StringLiteral_19338/*"default_clearance"*/,
                                                     0);
                      v80 = this->fields.allCreditText;
                      if ( ((unsigned __int8)bgmName & 1) != 0 )
                      {
                        if ( !v80 )
                          goto LABEL_157;
                        if ( i >= LODWORD(v80->max_length) )
                          goto LABEL_158;
                        bgmName = v80->m_Items[i];
                        if ( !bgmName )
                          goto LABEL_157;
                        bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                        if ( !bgmName )
                          goto LABEL_157;
                        if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                          goto LABEL_158;
                        bgmName = (System_String_o *)System_Int32__Parse(*(System_String_o **)&bgmName[1].fields, 0);
                        this->fields.defaultClearance = (int)bgmName;
                      }
                      else
                      {
                        if ( !v80 )
                          goto LABEL_157;
                        if ( i >= LODWORD(v80->max_length) )
                          goto LABEL_158;
                        bgmName = v80->m_Items[i];
                        if ( !bgmName )
                          goto LABEL_157;
                        bgmName = (System_String_o *)System_String__Contains(
                                                       bgmName,
                                                       (System_String_o *)StringLiteral_19340/*"default_text_color"*/,
                                                       0);
                        if ( ((unsigned __int8)bgmName & 1) != 0 )
                        {
                          v81 = this->fields.allCreditText;
                          if ( !v81 )
                            goto LABEL_157;
                          if ( i >= LODWORD(v81->max_length) )
                            goto LABEL_158;
                          bgmName = v81->m_Items[i];
                          if ( !bgmName )
                            goto LABEL_157;
                          bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                          if ( !bgmName )
                            goto LABEL_157;
                          if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                            goto LABEL_158;
                          v88 = (struct System_String_o *)bgmName[1].fields;
                          this->fields.defaultTextColor = v88;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&this->fields.defaultTextColor,
                            (int32_t)v88,
                            v82,
                            v83,
                            v84,
                            v85,
                            v86,
                            v87);
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
        if ( (v13 & 1) == 0 )
          goto LABEL_73;
        v17 = this->fields.allCreditText;
        if ( !v17 )
          goto LABEL_157;
        if ( i >= LODWORD(v17->max_length) )
          goto LABEL_158;
        bgmName = v17->m_Items[i];
        if ( !bgmName )
          goto LABEL_157;
        bgmName = System_String__Replace_75490096(
                    bgmName,
                    (System_String_o *)StringLiteral_86/*"\r"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
        v24 = (System_Collections_Generic_List_object__o *)*p_creditText;
        if ( !*p_creditText )
          goto LABEL_157;
        items = v24->fields._items;
        v26 = Method_System_Collections_Generic_List_string__Add__;
        ++v24->fields._version;
        if ( !items )
          goto LABEL_157;
        size = v24->fields._size;
        v28 = bgmName;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            (Il2CppObject *)bgmName,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v28, v18, v19, v20, v21, v22, v23);
        }
        v32 = this->fields.allCreditText;
        if ( !v32 )
          goto LABEL_157;
        if ( i >= LODWORD(v32->max_length) )
          goto LABEL_158;
        bgmName = v32->m_Items[i];
        if ( !bgmName )
          goto LABEL_157;
        defaultFontSize = this->fields.defaultFontSize;
        bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_7073/*"FontSize"*/, 0);
        if ( ((unsigned __int8)bgmName & 1) != 0 )
        {
          v34 = this->fields.allCreditText;
          if ( !v34 )
            goto LABEL_157;
          if ( i >= LODWORD(v34->max_length) )
            goto LABEL_158;
          bgmName = v34->m_Items[i];
          if ( !bgmName )
            goto LABEL_157;
          bgmName = (System_String_o *)System_String__Split(bgmName, 0x7Eu, 0, 0);
          if ( !bgmName )
            goto LABEL_157;
          klass = (int)bgmName[1].klass;
          v36 = bgmName;
          if ( klass >= 1 )
          {
            v37 = 0;
            p_monitor = &bgmName[1].monitor;
            while ( v37 < (unsigned int)klass )
            {
              v39 = v37;
              v40 = &v36->klass + v37;
              v42 = (System_String_o *)v40[4];
              v41 = (void **)(v40 + 4);
              bgmName = v42;
              if ( !v42 )
                goto LABEL_157;
              bgmName = (System_String_o *)System_String__Contains(bgmName, (System_String_o *)StringLiteral_7073/*"FontSize"*/, 0);
              if ( ((unsigned __int8)bgmName & 1) != 0 )
              {
                if ( (unsigned int)v39 >= LODWORD(v36[1].klass) )
                  break;
                bgmName = (System_String_o *)*v41;
                if ( !*v41 )
                  goto LABEL_157;
                bgmName = System_String__Replace_75490096(
                            bgmName,
                            (System_String_o *)StringLiteral_1572/*"<"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
                if ( (unsigned int)v39 >= LODWORD(v36[1].klass) )
                  break;
                *v41 = bgmName;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&p_monitor[v39],
                  (int32_t)bgmName,
                  v43,
                  v44,
                  v45,
                  v46,
                  v47,
                  v48);
                if ( (unsigned int)v39 >= LODWORD(v36[1].klass) )
                  break;
                bgmName = (System_String_o *)*v41;
                if ( !*v41 )
                  goto LABEL_157;
                bgmName = System_String__Replace_75490096(
                            bgmName,
                            (System_String_o *)StringLiteral_1830/*">"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
                if ( (unsigned int)v39 >= LODWORD(v36[1].klass) )
                  break;
                *v41 = bgmName;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&p_monitor[v39],
                  (int32_t)bgmName,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54);
                if ( (unsigned int)v39 >= LODWORD(v36[1].klass) )
                  break;
                bgmName = (System_String_o *)*v41;
                if ( !*v41 )
                  goto LABEL_157;
                bgmName = (System_String_o *)System_String__Split(bgmName, 0x3Du, 0, 0);
                if ( !bgmName )
                  goto LABEL_157;
                if ( ((__int64)bgmName[1].klass & 0xFFFFFFFE) == 0 )
                  break;
                bgmName = (System_String_o *)System_Int32__Parse(*(System_String_o **)&bgmName[1].fields, 0);
                defaultFontSize = (int)bgmName;
              }
              klass = (int)v36[1].klass;
              v37 = v39 + 1;
              if ( (int)v39 + 1 >= klass )
                goto LABEL_58;
            }
LABEL_158:
            sub_21FFED4(bgmName);
          }
        }
LABEL_58:
        v55 = this->fields.defaultClearance + defaultFontSize;
        v13 = 1;
        this->fields.lastPostion = this->fields.lastPostion + (float)v55;
      }
    }
  }
}


void EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *creditText; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w0
  int32_t v10; // w21
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x4
  int32_t lastObjectPosY; // w21

  if ( (byte_59323A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_59323A0 = 1;
  }
  creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
  v6 = (const MethodInfo *)(unsigned int)(this->fields.nowDispIndex + 1);
  this->fields.nowDispIndex = (int)v6;
  if ( !creditText )
    goto LABEL_10;
  if ( (int)v6 < creditText->fields._size )
  {
    v7 = System_Collections_Generic_List_object___get_Item(
           creditText,
           (int32_t)v6,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
    v9 = EndrolRootComponent__CheckNextDispContent((EndrolRootComponent_o *)v7, (System_String_o *)v7, v8);
    if ( v9 != 3 )
    {
      v10 = v9;
      creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
      if ( creditText )
      {
        v11 = System_Collections_Generic_List_object___get_Item(
                creditText,
                this->fields.nowDispIndex,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        creditText = (System_Collections_Generic_List_object__o *)EndrolRootComponent__SetItemInfo(
                                                                    this,
                                                                    (System_String_o *)v11,
                                                                    item,
                                                                    v10,
                                                                    v12);
        if ( item )
        {
          lastObjectPosY = this->fields.lastObjectPosY;
          this->fields.lastObjectPosY = lastObjectPosY
                                      - (EndrolContentItem__get_contentHeight(item, v6)
                                       + this->fields.defaultClearance);
          return;
        }
      }
LABEL_10:
      sub_21FFECC(creditText, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  EndrolContentItem_o *v10; // x21
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x4
  int32_t lastObjectPosY; // w20

  if ( (byte_593239F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593239F = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_56210768(endrolContentParent, gameObject, 0);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v10 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v12),
        !this->fields.creditText)
    || (v13 = (int)contentPref,
        v14 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v14,
                                                   v10,
                                                   v13,
                                                   v15),
        !v10) )
  {
LABEL_11:
    sub_21FFECC(contentPref, *(_QWORD *)&index);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - this->fields.defaultClearance
                              - EndrolContentItem__get_contentHeight(v10, *(const MethodInfo **)&index);
}


void EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_593239D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593239D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5, v6);
  UnityEngine_Application__set_targetFrameRate(30, 0);
  ActionExtensions__Call(this->fields.mEndAct, 0);
}


void EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  CommonConfirmDialog_ClickDelegate_o *v10; // x25
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_59323A4 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_5620/*"ENDROLL_TITLE"*/);
    sub_21FFC50(&StringLiteral_5619/*"ENDROLL_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_5617/*"ENDROLL_CANCEL"*/);
    sub_21FFC50(&StringLiteral_5618/*"ENDROLL_DECIDE"*/);
    byte_59323A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"ENDROLL_TITLE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"ENDROLL_MESSAGE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"ENDROLL_DECIDE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"ENDROLL_CANCEL"*/, 0);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0);
  if ( !Instance )
    sub_21FFECC(v11, v12);
  CommonUI__OpenConfirmDialog_37291728((CommonUI_o *)Instance, v6, v7, v8, v9, v10, 0, 0, 0, 0);
}


void EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_5932399 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_5932399 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void EndrolRootComponent__OnUpdateScroll(EndrolRootComponent_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Component_o *panel; // x0
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  panel = (UnityEngine_Component_o *)this->fields.panel;
  if ( !panel
    || (panel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(panel, 0)) == 0
    || (panel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)panel, 0)) == 0
    || (v7.fields.x = 0.0,
        v7.fields.z = 0.0,
        v7.fields.y = value,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)panel, v7, 0),
        (panel = (UnityEngine_Component_o *)this->fields.panel) == 0) )
  {
    sub_21FFECC(panel, method);
  }
  v6.fields.y = -value;
  v6.fields.x = 0.0;
  UIPanel__set_clipOffset((UIPanel_o *)panel, v6, 0);
}


void EndrolRootComponent__Open(
        EndrolRootComponent_o *this,
        AssetData_o *assetData,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_c *v24; // x0
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_593239B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_21FFC50(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_593239B = 1;
  }
  v7 = sub_21FFEBC(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)endCallback, v16, v17, v18, v19, v20, v21);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v22, v23);
  UnityEngine_Application__set_targetFrameRate(60, 0);
  v24 = System_Action_TypeInfo;
  this->fields.lastObjectPosY = 0;
  v25 = (System_Action_o *)sub_21FFEBC(v24);
  System_Action___ctor(v25, (Il2CppObject *)v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v25, v26);
}


void EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v3; // x19
  System_String_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0)) == 0)
    || (v4 = System_String__Split((System_String_o *)this, 0xAu, 0, 0),
        v3->fields.allCreditText = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.allCreditText, (int32_t)v4, v5, v6, v7, v8, v9, v10),
        (allCreditText = v3->fields.allCreditText) == 0) )
  {
    sub_21FFECC(this, assetData);
  }
  v3->fields.txtLength = allCreditText->max_length;
}


void EndrolRootComponent__SetAssetStorageData(
        EndrolRootComponent_o *this,
        AssetData_o *data,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v6; // x20
  Il2CppObject *Object_object__58323140; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_593239A & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_TextAsset____91482136);
    this = (EndrolRootComponent_o *)sub_21FFC50(&StringLiteral_19117/*"credit"*/);
    byte_593239A = 1;
  }
  if ( !data
    || (Object_object__58323140 = AssetData__GetObject_object__58323140(
                                    data,
                                    (System_String_o *)StringLiteral_19117/*"credit"*/,
                                    (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_TextAsset____91482136),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__58323140, v8),
        !endCallback) )
  {
    sub_21FFECC(this, data);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
    endCallback->fields.method_code,
    endCallback->fields.method);
}


EndrolContentItem_o *EndrolRootComponent__SetItemInfo(
        EndrolRootComponent_o *this,
        System_String_o *nextDispString,
        EndrolContentItem_o *item,
        int32_t type,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v8; // x20
  const MethodInfo *v9; // x4
  EndrolRootComponent_o *v10; // x21
  int v11; // w8
  EndrolRootComponent_o *v12; // x22
  float v13; // s9
  float v14; // s8
  unsigned int i; // w28
  EndrolRootComponent_c **v16; // x29
  EndrolRootComponent_o **v17; // x29
  EndrolRootComponent_o *v18; // t1
  unsigned int v19; // w8
  unsigned int v20; // w8
  System_String_o *v21; // x0
  const MethodInfo *v22; // x6
  EndrolRootComponent_o *v23; // x21
  int v24; // w8
  EndrolRootComponent_o *v25; // x23
  unsigned int v26; // w9
  __int64 *v27; // x25
  struct EndrolContentItem_o **p_contentPref; // x28
  int klass; // w24
  __int64 v30; // x29
  EndrolRootComponent_c **v31; // x19
  EndrolRootComponent_o **v32; // x19
  EndrolRootComponent_o *v33; // t1
  unsigned int v34; // w8
  __int64 *v35; // x22
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  unsigned int v48; // w8
  unsigned int v49; // w8
  EndrolRootComponent_o *v50; // x24
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x8
  System_String_o *v56; // x24
  Il2CppType *v57; // x25
  System_RuntimeTypeHandle_o v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  System_Type_o *TypeFromHandle; // x25
  __int64 v62; // x2
  __int64 v63; // x3
  EndrolRootComponent_o *v64; // x21
  int32_t defaultFontSize; // w22
  unsigned int v66; // w0
  const MethodInfo *v67; // x5
  int m_CancellationTokenSource; // w8
  EndrolRootComponent_o *v69; // x23
  unsigned int v70; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v72; // w28
  unsigned int v73; // w8
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  unsigned int v92; // w8
  EndrolRootComponent_o *v93; // x1
  bool v94; // w8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v96; // x0
  EndrolRootComponent_o *v97; // x2
  int32_t v98; // w3
  int32_t lastObjectPosY; // w1
  EndrolContentItem_o *v100; // x0
  int32_t v101; // w4
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v103; // x0
  bool v104; // w1
  const MethodInfo *v105; // x2
  EndrolContentItem_o *v106; // [xsp+0h] [xbp-80h]
  int32_t fontSize; // [xsp+Ch] [xbp-74h]
  UnityEngine_Vector2_o v108; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_59323A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&UIWidget_Pivot_var);
    sub_21FFC50(&UIWidget_Pivot_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1824/*"="*/);
    sub_21FFC50(&StringLiteral_20858/*"height"*/);
    sub_21FFC50(&StringLiteral_1572/*"<"*/);
    sub_21FFC50(&StringLiteral_22220/*"left"*/);
    sub_21FFC50(&StringLiteral_24277/*"right"*/);
    sub_21FFC50(&StringLiteral_366/*"\""*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_26146/*"width"*/);
    sub_21FFC50(&StringLiteral_1830/*">"*/);
    this = (EndrolRootComponent_o *)sub_21FFC50(&StringLiteral_18543/*"center"*/);
    byte_59323A2 = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
    if ( !this )
      goto LABEL_155;
    v64 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_155;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1572/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0);
      if ( LODWORD(v64->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v64->fields.contentPref;
        if ( !this )
          goto LABEL_155;
        this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1830/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0);
        if ( !this )
          goto LABEL_155;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
        if ( !this )
          goto LABEL_155;
        if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
        {
          v106 = item;
          v66 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
          this = (EndrolRootComponent_o *)sub_21FFD10(string___TypeInfo, v66);
          m_CancellationTokenSource = (int)v64->fields.m_CancellationTokenSource;
          v69 = this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_132:
            if ( !v69 )
              goto LABEL_155;
            item = v106;
            if ( LODWORD(v69->fields.m_CancellationTokenSource) == 2 )
            {
              if ( !v106 )
                goto LABEL_155;
              EndrolContentItem__SetDoubleColumnText(
                v106,
                v8->fields.lastObjectPosY,
                (System_String_array *)v69,
                defaultFontSize,
                v8,
                v67);
            }
            else
            {
              if ( !v106 )
                goto LABEL_155;
              EndrolContentItem__SetTripleColumnText(
                v106,
                v8->fields.lastObjectPosY,
                (System_String_array *)v69,
                defaultFontSize,
                v8,
                v67);
            }
            return item;
          }
          v70 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v64->fields.endrolContentParent;
          v72 = 1;
          while ( v72 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_155;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1572/*"<"*/,
                                              0);
            v73 = (unsigned int)v64->fields.m_CancellationTokenSource;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( v72 >= v73 )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1572/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v72 >= LODWORD(v64->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)p_endrolContentParent,
                (int32_t)this,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79);
              if ( v72 >= LODWORD(v64->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1830/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v72 >= LODWORD(v64->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)p_endrolContentParent,
                (int32_t)this,
                v80,
                v81,
                v82,
                v83,
                v84,
                v85);
              if ( v72 >= LODWORD(v64->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1824/*"="*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v72 >= LODWORD(v64->fields.m_CancellationTokenSource) )
                  break;
                this = *p_endrolContentParent;
                if ( !*p_endrolContentParent )
                  goto LABEL_155;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
                if ( !this )
                  goto LABEL_155;
                if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
                  break;
                this = (EndrolRootComponent_o *)System_Int32__Parse(
                                                  (System_String_o *)this->fields.endrolContentParent,
                                                  0);
                defaultFontSize = (int)this;
              }
            }
            else
            {
              if ( v72 >= v73 )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_16395/*"["*/,
                                                0);
              v92 = (unsigned int)v64->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v72 >= v92 )
                  break;
                if ( !v69 )
                  goto LABEL_155;
                if ( v70 >= LODWORD(v69->fields.m_CancellationTokenSource) )
                  break;
                v93 = *p_endrolContentParent;
              }
              else
              {
                if ( v72 >= v92 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_75438412(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0);
                if ( !v69 )
                  goto LABEL_155;
                v93 = this;
                if ( v70 >= LODWORD(v69->fields.m_CancellationTokenSource) )
                  break;
              }
              *((_QWORD *)&v69->fields.contentPref + (int)v70) = v93;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(&v69->fields.contentPref + (int)v70++),
                (int32_t)v93,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91);
            }
            m_CancellationTokenSource = (int)v64->fields.m_CancellationTokenSource;
            ++v72;
            ++p_endrolContentParent;
            if ( (int)v72 >= m_CancellationTokenSource )
              goto LABEL_132;
          }
        }
      }
    }
LABEL_154:
    sub_21FFED4(this);
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      if ( !nextDispString )
        goto LABEL_155;
      this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
      if ( !this )
        goto LABEL_155;
      v10 = this;
      v11 = (int)this->fields.m_CancellationTokenSource;
      v12 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v11 < 1 )
      {
        v14 = 0.0;
        v13 = 0.0;
        if ( !item )
          goto LABEL_155;
      }
      else
      {
        v13 = 0.0;
        v14 = 0.0;
        for ( i = 0; (int)i < v11; ++i )
        {
          if ( i >= v11 )
            goto LABEL_154;
          v16 = &v10->klass + (int)i;
          v18 = (EndrolRootComponent_o *)v16[4];
          v17 = (EndrolRootComponent_o **)(v16 + 4);
          this = v18;
          if ( !v18 )
            goto LABEL_155;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1572/*"<"*/,
                                            0);
          v19 = (unsigned int)v10->fields.m_CancellationTokenSource;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( i >= v19 )
              goto LABEL_154;
            this = *v17;
            if ( !*v17 )
              goto LABEL_155;
            this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1572/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            if ( i >= LODWORD(v10->fields.m_CancellationTokenSource) )
              goto LABEL_154;
            this = *v17;
            if ( !*v17 )
              goto LABEL_155;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
            if ( !this )
              goto LABEL_155;
            if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
              goto LABEL_154;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_155;
            this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_366/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            v12 = this;
          }
          else
          {
            if ( i >= v19 )
              goto LABEL_154;
            this = *v17;
            if ( !*v17 )
              goto LABEL_155;
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_26146/*"width"*/,
                                              0);
            v20 = (unsigned int)v10->fields.m_CancellationTokenSource;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( i >= v20 )
                goto LABEL_154;
              this = *v17;
              if ( !*v17 )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
              if ( !this )
                goto LABEL_155;
              if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
                goto LABEL_154;
              v14 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0);
            }
            else
            {
              if ( i >= v20 )
                goto LABEL_154;
              this = *v17;
              if ( !*v17 )
                goto LABEL_155;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_20858/*"height"*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( i >= LODWORD(v10->fields.m_CancellationTokenSource) )
                  goto LABEL_154;
                this = *v17;
                if ( !*v17 )
                  goto LABEL_155;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
                if ( !this )
                  goto LABEL_155;
                if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
                  goto LABEL_154;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_155;
                v21 = System_String__Replace_75490096(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1830/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
                v13 = System_Single__Parse(v21, 0);
              }
            }
          }
          v11 = (int)v10->fields.m_CancellationTokenSource;
        }
        if ( !item )
          goto LABEL_155;
      }
      v108.fields.x = v14;
      v108.fields.y = v13;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v12, v108, v8, v9);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        v94 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16395/*"["*/, 0);
        this = (EndrolRootComponent_o *)v8->fields.creditText;
        if ( v94 )
        {
          if ( !this )
            goto LABEL_155;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !this )
            goto LABEL_155;
          defaultTextColor = v8->fields.defaultTextColor;
          v96 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_75438412(defaultTextColor, (System_String_o *)v96, 0);
        }
        v97 = this;
        if ( item )
        {
          v98 = v8->fields.defaultFontSize;
          lastObjectPosY = v8->fields.lastObjectPosY;
          v100 = item;
          v101 = 4;
LABEL_150:
          EndrolContentItem__SetText(v100, lastObjectPosY, (System_String_o *)v97, v98, v101, v8, v22);
          return item;
        }
      }
    }
    goto LABEL_155;
  }
  if ( !nextDispString )
    goto LABEL_155;
  this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
  if ( !this )
    goto LABEL_155;
  v23 = this;
  v24 = (int)this->fields.m_CancellationTokenSource;
  v25 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  fontSize = v8->fields.defaultFontSize;
  if ( v24 < 1 )
  {
    klass = 4;
LABEL_148:
    if ( item )
    {
      lastObjectPosY = v8->fields.lastObjectPosY;
      v98 = fontSize;
      v100 = item;
      v97 = v25;
      v101 = klass;
      goto LABEL_150;
    }
LABEL_155:
    sub_21FFECC(this, nextDispString);
  }
  v26 = 0;
  v27 = &qword_594C028;
  p_contentPref = &this->fields.contentPref;
  klass = 4;
  while ( 1 )
  {
    if ( v26 >= v24 )
      goto LABEL_154;
    v30 = (int)v26;
    v31 = &v23->klass + (int)v26;
    v33 = (EndrolRootComponent_o *)v31[4];
    v32 = (EndrolRootComponent_o **)(v31 + 4);
    this = v33;
    if ( !v33 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1572/*"<"*/,
                                      0);
    v34 = (unsigned int)v23->fields.m_CancellationTokenSource;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( (unsigned int)v30 >= v34 )
        goto LABEL_154;
      this = *v32;
      if ( !*v32 )
        goto LABEL_155;
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_16395/*"["*/,
                                        0);
      v49 = (unsigned int)v23->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (unsigned int)v30 >= v49 )
          goto LABEL_154;
        v25 = *v32;
      }
      else
      {
        if ( (unsigned int)v30 >= v49 )
          goto LABEL_154;
        this = (EndrolRootComponent_o *)System_String__Concat_75438412(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v32,
                                          0);
        v25 = this;
      }
      goto LABEL_90;
    }
    if ( (unsigned int)v30 >= v34 )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    v35 = v27;
    this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1572/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    *v32 = this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&p_contentPref[v30], (int32_t)this, v36, v37, v38, v39, v40, v41);
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Replace_75490096(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1830/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    *v32 = this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&p_contentPref[v30], (int32_t)this, v42, v43, v44, v45, v46, v47);
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1824/*"="*/,
                                      0);
    v48 = (unsigned int)v23->fields.m_CancellationTokenSource;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (unsigned int)v30 >= v48 )
        goto LABEL_154;
      this = *v32;
      if ( !*v32 )
        goto LABEL_155;
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
      if ( !this )
        goto LABEL_155;
      if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_154;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
      fontSize = (int)this;
      goto LABEL_90;
    }
    if ( (unsigned int)v30 >= v48 )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_18543/*"center"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22220/*"left"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
      goto LABEL_154;
    this = *v32;
    if ( !*v32 )
      goto LABEL_155;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_24277/*"right"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_90:
    v24 = (int)v23->fields.m_CancellationTokenSource;
    v26 = v30 + 1;
    if ( (int)v30 + 1 >= v24 )
      goto LABEL_148;
  }
  if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
    goto LABEL_154;
  this = *v32;
  if ( !*v32 )
    goto LABEL_155;
  this = (EndrolRootComponent_o *)System_String__Substring_75489544((System_String_o *)this, 0, 1, 0);
  if ( !this )
    goto LABEL_155;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0);
  if ( (unsigned int)v30 >= LODWORD(v23->fields.m_CancellationTokenSource) )
    goto LABEL_154;
  v50 = this;
  this = *v32;
  if ( !*v32 )
    goto LABEL_155;
  v51 = System_String__Substring((System_String_o *)this, 1, 0);
  v52 = System_String__Concat_75438412((System_String_o *)v50, v51, 0);
  v55 = *(__int64 *)((char *)&qword_E0 + (_QWORD)v27);
  v56 = v52;
  v57 = UIWidget_Pivot_var;
  if ( !*(_DWORD *)(v55 + 228) )
    j_il2cpp_runtime_class_init_0(*(__int64 *)((char *)&qword_E0 + (_QWORD)v35), v53, v54);
  v58.fields.value = (intptr_t)v57;
  TypeFromHandle = System_Type__GetTypeFromHandle(v58, 0);
  if ( !*(_DWORD *)(*(__int64 *)((char *)&qword_98 + (_QWORD)v35) + 228) )
    j_il2cpp_runtime_class_init_0(*(__int64 *)((char *)&qword_98 + (_QWORD)v35), v59, v60);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v56, 0);
  if ( !this )
    goto LABEL_155;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    v27 = v35;
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v62, v63);
    klass = (int)this->klass;
    goto LABEL_90;
  }
  v103 = (EndrolRootComponent_o *)sub_220024C(this, UIWidget_Pivot_TypeInfo, v62, v63);
  EndrolRootComponent__callbackConfirmDlg(v103, v104, v105);
  return result;
}


void EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float lastPostion; // s8
  System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v13; // [xsp+8h] [xbp-68h] BYREF
  int v14; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5932398 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&StringLiteral_10368/*"OnUpdateScroll"*/);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_10344/*"OnScrollEnd"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5932398 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_21FFEBC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76632148(v4, 0);
  v14 = 0;
  v5 = j_il2cpp_value_box_0(qword_594C070, &v14);
  if ( !v4 )
    sub_21FFECC(v5, v6);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_20581/*"from"*/,
    v5,
    v4->klass->vtable._22_Add.method);
  v13 = lastPostion + 580.0;
  v7 = j_il2cpp_value_box_0(qword_594C0A0, &v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_25358/*"to"*/,
    v7,
    v4->klass->vtable._22_Add.method);
  endrolTotalTime = this->fields.endrolTotalTime;
  v8 = j_il2cpp_value_box_0(qword_594C0A0, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_25318/*"time"*/,
    v8,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_23526/*"onupdate"*/,
    StringLiteral_10368/*"OnUpdateScroll"*/,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_23518/*"oncomplete"*/,
    StringLiteral_10344/*"OnScrollEnd"*/,
    v4->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v9, v10);
  iTween__ValueTo(gameObject, v4, 0);
}


void EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_593239C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_EndrolRootComponent_EndFadeout__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593239C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0);
  if ( !v7 )
    sub_21FFECC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


System_Collections_IEnumerator_o *EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593239E & 1) == 0 )
  {
    sub_21FFC50(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_593239E = 1;
  }
  v6 = sub_21FFEBC(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)callback, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void EndrolRootComponent__callbackConfirmDlg(EndrolRootComponent_o *this, bool isSkip, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_59323A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59323A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v7);
}


void EndrolRootComponent__Wait_d__33___ctor(
        EndrolRootComponent__Wait_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EndrolRootComponent__Wait_d__33__MoveNext(EndrolRootComponent__Wait_d__33_o *this, const MethodInfo *method)
{
  EndrolRootComponent__Wait_d__33_o *v2; // x19
  int32_t _1__state; // w21
  struct System_Action_o *callback; // x8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_59323A8 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_59323A8 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = v2->fields.callback;
      v2->fields.__1__state = -1;
      if ( !callback )
        sub_21FFECC(this, method);
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    }
  }
  else
  {
    waitTime = v2->fields.waitTime;
    v2->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v2->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *EndrolRootComponent__Wait_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EndrolRootComponent__Wait_d__33__System_Collections_IEnumerator_Reset(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EndrolRootComponent__Wait_d__33__System_Collections_IEnumerator_get_Current(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EndrolRootComponent__Wait_d__33__System_IDisposable_Dispose(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void EndrolRootComponent___c__DisplayClass30_0___ctor(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EndrolRootComponent___c__DisplayClass30_0___Open_b__0(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  char *_4__this; // x0
  __int64 v4; // x2
  struct EndrolRootComponent_o *v5; // x8
  System_String_o *bgmName; // x20
  MethodInfo *v7; // x2
  int32_t i; // w20
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_o *endCallback; // x1
  __int64 v15; // x2
  CommonUI_o *v16; // x20
  const MethodInfo *v17; // x2
  struct EndrolRootComponent_o *v18; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_59323A7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_59323A7 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol((EndrolRootComponent_o *)_4__this, method);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_23;
  if ( v5->fields.isBgmPlay )
  {
    bgmName = v5->fields.bgmName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v4);
    SoundManager__playJingle(bgmName, 0);
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_23;
  }
  _4__this = (char *)v5->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, method);
  for ( i = 0; i != 30; EndrolRootComponent__CreateText((EndrolRootComponent_o *)_4__this, i++, v7) )
  {
    _4__this = (char *)this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_23;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  *((_QWORD *)_4__this + 20) = endCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(_4__this + 160),
    (int32_t)endCallback,
    (System_String_o *)v7,
    v9,
    v10,
    v11,
    v12,
    v13);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)_4__this;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v15);
  if ( !v16
    || (CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (_4__this = (char *)this->fields.__4__this) == 0)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (v18 = this->fields.__4__this) == 0) )
  {
LABEL_23:
    sub_21FFECC(_4__this, method);
  }
  startWaitTime = v18->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, 0);
    this->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v21, v22, v23, v24, v25, v26);
  }
  v27 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v18, v27, 0);
}


void EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}