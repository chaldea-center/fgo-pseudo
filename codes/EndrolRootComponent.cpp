void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A02731 & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    byte_4A02731 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1B64AA8(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.effectWave, (int32_t)v3, v4, v5);
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

  if ( (byte_4A0272C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17998/*"column=3"*/, nextDispText);
    sub_1B64A00(&StringLiteral_17997/*"column=2"*/, v4);
    sub_1B64A00(&StringLiteral_1599/*"<"*/, v5);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v6);
    this = (EndrolRootComponent_o *)sub_1B64A00(&StringLiteral_7444/*"Image"*/, v7);
    byte_4A0272C = 1;
  }
  if ( !nextDispText )
    sub_1B64C5C(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7444/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1599/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17997/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17998/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  System_Collections_Generic_List_object__o *v22; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *klass; // x0
  __int64 v27; // x1
  int32_t txtLength; // w8
  char v29; // w24
  il2cpp_array_size_t v30; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v32; // x8
  struct System_String_array *v33; // x8
  struct System_String_array *v34; // x9
  char v35; // w8
  struct System_String_array *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x8
  struct System_Object_array *items; // x9
  _QWORD *v41; // x10
  __int64 size; // x11
  System_String_o *v43; // x1
  Il2CppClass **v44; // x0
  struct System_String_array *v45; // x9
  char v46; // w8
  struct System_String_array *v47; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v49; // x8
  int v50; // w8
  System_String_o *v51; // x23
  unsigned int v52; // w27
  System_String_c **v53; // x25
  ServantStatusBattleListViewItem_o *v54; // x25
  System_String_o *v55; // t1
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_String_array *v60; // x8
  struct System_String_array *v61; // x9
  char v62; // w8
  struct System_String_array *v63; // x9
  char v64; // w8
  System_String_o *fields; // x23
  float v66; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v68; // x25
  struct System_String_array *v69; // x9
  char v70; // w8
  System_String_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_String_o *v76; // x1
  struct System_String_array *v77; // x9
  char v78; // w8
  struct System_String_array *v79; // x9
  char v80; // w8
  struct System_String_array *v81; // x8
  int32_t v82; // w2
  int32_t v83; // w3
  ServantStatusBattleListViewItem_c *v84; // x1
  ServantStatusBattleListViewItem_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4A02730 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B64A00(&StringLiteral_18798/*"effect"*/, v5);
    sub_1B64A00(&StringLiteral_6740/*"FontSize"*/, v6);
    sub_1B64A00(&StringLiteral_22956/*"scroll"*/, v7);
    sub_1B64A00(&StringLiteral_23387/*"start"*/, v8);
    sub_1B64A00(&StringLiteral_17109/*"bgm"*/, v9);
    sub_1B64A00(&StringLiteral_18474/*"default_text_color"*/, v10);
    sub_1B64A00(&StringLiteral_1599/*"<"*/, v11);
    sub_1B64A00(&StringLiteral_9298/*"NULL"*/, v12);
    sub_1B64A00(&StringLiteral_24505/*"wait"*/, v13);
    sub_1B64A00(&StringLiteral_18929/*"end"*/, v14);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v15);
    sub_1B64A00(&StringLiteral_18473/*"default_font_size"*/, v16);
    sub_1B64A00(&StringLiteral_17095/*"begine_time"*/, v17);
    sub_1B64A00(&StringLiteral_1/*""*/, v18);
    sub_1B64A00(&StringLiteral_88/*"\r"*/, v19);
    sub_1B64A00(&StringLiteral_1863/*">"*/, v20);
    sub_1B64A00(&StringLiteral_18472/*"default_clearance"*/, v21);
    byte_4A02730 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v22;
  p_creditText = &this->fields.creditText;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.creditText, (int32_t)v22, v24, v25);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v29 = 0;
    v30 = 0;
    p_defaultTextColor = (ServantStatusBattleListViewItem_o *)&this->fields.defaultTextColor;
    p_bgmName = (ServantStatusBattleListViewItem_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v30 >= allCreditText->max_length )
        goto LABEL_137;
      klass = allCreditText->m_Items[v30];
      if ( !klass )
LABEL_136:
        sub_1B64C5C(klass, v27);
      klass = (System_String_o *)System_String__StartsWith(klass, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
        break;
      v32 = this->fields.allCreditText;
      if ( !v32 )
        goto LABEL_136;
      if ( v30 >= v32->max_length )
        goto LABEL_137;
      klass = v32->m_Items[v30];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23387/*"start"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
        goto LABEL_65;
      v33 = this->fields.allCreditText;
      if ( !v33 )
        goto LABEL_136;
      if ( v30 >= v33->max_length )
        goto LABEL_137;
      klass = v33->m_Items[v30];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17095/*"begine_time"*/, 0LL);
      v34 = this->fields.allCreditText;
      if ( !v34 )
        goto LABEL_136;
      if ( v30 >= v34->max_length )
        goto LABEL_137;
      v35 = (char)klass;
      klass = v34->m_Items[v30];
      if ( !klass )
        goto LABEL_136;
      if ( (v35 & 1) != 0 )
      {
        klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
        if ( !klass )
          goto LABEL_136;
        if ( LODWORD(klass[1].klass) <= 1 )
          goto LABEL_137;
        this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)&klass[1].fields, 0LL) / 10.0;
      }
      else
      {
        klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_22956/*"scroll"*/, 0LL);
        v45 = this->fields.allCreditText;
        if ( !v45 )
          goto LABEL_136;
        if ( v30 >= v45->max_length )
          goto LABEL_137;
        v46 = (char)klass;
        klass = v45->m_Items[v30];
        if ( !klass )
          goto LABEL_136;
        if ( (v46 & 1) != 0 )
        {
          klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
          if ( !klass )
            goto LABEL_136;
          if ( LODWORD(klass[1].klass) <= 1 )
            goto LABEL_137;
          this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)&klass[1].fields, 0LL) / 10.0;
        }
        else
        {
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18929/*"end"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
LABEL_67:
            v29 = 0;
            goto LABEL_68;
          }
          v60 = this->fields.allCreditText;
          if ( !v60 )
            goto LABEL_136;
          if ( v30 >= v60->max_length )
            goto LABEL_137;
          klass = v60->m_Items[v30];
          if ( !klass )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_24505/*"wait"*/, 0LL);
          v61 = this->fields.allCreditText;
          if ( !v61 )
            goto LABEL_136;
          if ( v30 >= v61->max_length )
            goto LABEL_137;
          v62 = (char)klass;
          klass = v61->m_Items[v30];
          if ( !klass )
            goto LABEL_136;
          if ( (v62 & 1) != 0 )
          {
            klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( LODWORD(klass[1].klass) <= 1 )
              goto LABEL_137;
            this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)&klass[1].fields, 0LL) / 10.0;
          }
          else
          {
            klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18798/*"effect"*/, 0LL);
            v63 = this->fields.allCreditText;
            if ( !v63 )
              goto LABEL_136;
            if ( v30 >= v63->max_length )
              goto LABEL_137;
            v64 = (char)klass;
            klass = v63->m_Items[v30];
            if ( !klass )
              goto LABEL_136;
            if ( (v64 & 1) != 0 )
            {
              klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 1 )
                goto LABEL_137;
              fields = (System_String_o *)klass[1].fields;
              if ( !fields )
                goto LABEL_136;
              klass = (System_String_o *)System_String__Split(*(System_String_o **)&klass[1].fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !LODWORD(klass[1].klass) )
                goto LABEL_137;
              v66 = System_Single__Parse((System_String_o *)klass[1].monitor, 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v66 / 10.0;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 1 )
                goto LABEL_137;
              klass = (System_String_o *)klass[1].fields;
              if ( !klass )
                goto LABEL_136;
              klass = (System_String_o *)System_String__Split(klass, 0x2Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !LODWORD(klass[1].klass) )
                goto LABEL_137;
              klass = (System_String_o *)System_Int32__Parse((System_String_o *)klass[1].monitor, 0LL);
              if ( !effectWave )
                goto LABEL_136;
              if ( !effectWave->max_length )
                goto LABEL_137;
              effectWave->m_Items[1] = (int)klass;
              v68 = this->fields.effectWave;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 1 )
                goto LABEL_137;
              klass = (System_String_o *)klass[1].fields;
              if ( !klass )
                goto LABEL_136;
              klass = (System_String_o *)System_String__Split(klass, 0x2Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 1 )
                goto LABEL_137;
              klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
              if ( !v68 )
                goto LABEL_136;
              if ( v68->max_length <= 1 )
                goto LABEL_137;
              v68->m_Items[2] = (int)klass;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 2 )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse((System_String_o *)klass[2].klass, 0LL);
            }
            else
            {
              klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17109/*"bgm"*/, 0LL);
              v69 = this->fields.allCreditText;
              if ( !v69 )
                goto LABEL_136;
              if ( v30 >= v69->max_length )
                goto LABEL_137;
              v70 = (char)klass;
              klass = v69->m_Items[v30];
              if ( !klass )
                goto LABEL_136;
              if ( (v70 & 1) != 0 )
              {
                v71 = System_String__Replace_61404756(
                        klass,
                        (System_String_o *)StringLiteral_88/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (ServantStatusBattleListViewItem_c *)v71;
                sub_1B649A4(p_bgmName, (int32_t)v71, v72, v73);
                klass = (System_String_o *)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( LODWORD(klass[1].klass) <= 1 )
                  goto LABEL_137;
                v76 = (struct System_String_o *)klass[1].fields;
                this->fields.bgmName = v76;
                sub_1B649A4(p_bgmName, (int32_t)v76, v74, v75);
                klass = (System_String_o *)System_String__op_Inequality(
                                             this->fields.bgmName,
                                             (System_String_o *)StringLiteral_9298/*"NULL"*/,
                                             0LL);
                this->fields.isBgmPlay = (unsigned __int8)klass & 1;
              }
              else
              {
                klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18473/*"default_font_size"*/, 0LL);
                v77 = this->fields.allCreditText;
                if ( !v77 )
                  goto LABEL_136;
                if ( v30 >= v77->max_length )
                  goto LABEL_137;
                v78 = (char)klass;
                klass = v77->m_Items[v30];
                if ( !klass )
                  goto LABEL_136;
                if ( (v78 & 1) != 0 )
                {
                  klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                  if ( !klass )
                    goto LABEL_136;
                  if ( LODWORD(klass[1].klass) <= 1 )
                    goto LABEL_137;
                  klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
                  this->fields.defaultFontSize = (int)klass;
                }
                else
                {
                  klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18472/*"default_clearance"*/, 0LL);
                  v79 = this->fields.allCreditText;
                  if ( !v79 )
                    goto LABEL_136;
                  if ( v30 >= v79->max_length )
                    goto LABEL_137;
                  v80 = (char)klass;
                  klass = v79->m_Items[v30];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v80 & 1) != 0 )
                  {
                    klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                    if ( !klass )
                      goto LABEL_136;
                    if ( LODWORD(klass[1].klass) <= 1 )
                      goto LABEL_137;
                    klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
                    this->fields.defaultClearance = (int)klass;
                  }
                  else
                  {
                    klass = (System_String_o *)System_String__Contains(
                                                 klass,
                                                 (System_String_o *)StringLiteral_18474/*"default_text_color"*/,
                                                 0LL);
                    if ( ((unsigned __int8)klass & 1) != 0 )
                    {
                      v81 = this->fields.allCreditText;
                      if ( !v81 )
                        goto LABEL_136;
                      if ( v30 >= v81->max_length )
                        goto LABEL_137;
                      klass = v81->m_Items[v30];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( LODWORD(klass[1].klass) <= 1 )
                        goto LABEL_137;
                      v84 = (ServantStatusBattleListViewItem_c *)klass[1].fields;
                      p_defaultTextColor->klass = v84;
                      sub_1B649A4(p_defaultTextColor, (int32_t)v84, v82, v83);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v30 >= this->fields.txtLength )
        return;
    }
    if ( (v29 & 1) == 0 )
      goto LABEL_67;
    v36 = this->fields.allCreditText;
    if ( !v36 )
      goto LABEL_136;
    if ( v30 >= v36->max_length )
      goto LABEL_137;
    klass = v36->m_Items[v30];
    if ( !klass )
      goto LABEL_136;
    klass = System_String__Replace_61404756(
              klass,
              (System_String_o *)StringLiteral_88/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
    v39 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v39->fields._items;
    v41 = Method_System_Collections_Generic_List_string__Add__;
    ++v39->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v39->fields._size;
    v43 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        (Il2CppObject *)klass,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      v39->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v43;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v37, v38);
    }
    v47 = this->fields.allCreditText;
    if ( !v47 )
      goto LABEL_136;
    if ( v30 >= v47->max_length )
      goto LABEL_137;
    klass = v47->m_Items[v30];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6740/*"FontSize"*/, 0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      v49 = this->fields.allCreditText;
      if ( !v49 )
        goto LABEL_136;
      if ( v30 >= v49->max_length )
        goto LABEL_137;
      klass = v49->m_Items[v30];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Split(klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v50 = (int)klass[1].klass;
      v51 = klass;
      if ( v50 >= 1 )
      {
        v52 = 0;
        while ( v52 < v50 )
        {
          v53 = &v51->klass + (int)v52;
          v55 = (System_String_o *)v53[4];
          v54 = (ServantStatusBattleListViewItem_o *)(v53 + 4);
          klass = v55;
          if ( !v55 )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6740/*"FontSize"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
            if ( v52 >= LODWORD(v51[1].klass) )
              break;
            klass = (System_String_o *)v54->klass;
            if ( !v54->klass )
              goto LABEL_136;
            klass = System_String__Replace_61404756(
                      klass,
                      (System_String_o *)StringLiteral_1599/*"<"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v52 >= LODWORD(v51[1].klass) )
              break;
            v54->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B649A4(v54, (int32_t)klass, v56, v57);
            if ( v52 >= LODWORD(v51[1].klass) )
              break;
            klass = (System_String_o *)v54->klass;
            if ( !v54->klass )
              goto LABEL_136;
            klass = System_String__Replace_61404756(
                      klass,
                      (System_String_o *)StringLiteral_1863/*">"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v52 >= LODWORD(v51[1].klass) )
              break;
            v54->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B649A4(v54, (int32_t)klass, v58, v59);
            if ( v52 >= LODWORD(v51[1].klass) )
              break;
            klass = (System_String_o *)v54->klass;
            if ( !v54->klass )
              goto LABEL_136;
            klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( LODWORD(klass[1].klass) <= 1 )
              break;
            klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
            defaultFontSize = (int)klass;
          }
          v50 = (int)v51[1].klass;
          if ( (int)++v52 >= v50 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1B64C64(klass, v27);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v29 = 1;
    goto LABEL_68;
  }
}


void __fastcall EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *creditText; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w0
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x4
  int32_t lastObjectPosY; // w21

  if ( (byte_4A0272B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, item);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_4A0272B = 1;
  }
  creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
  v7 = (const MethodInfo *)(unsigned int)(this->fields.nowDispIndex + 1);
  this->fields.nowDispIndex = (int)v7;
  if ( !creditText )
    goto LABEL_10;
  if ( (int)v7 < creditText->fields._size )
  {
    v8 = System_Collections_Generic_List_object___get_Item(
           creditText,
           (int32_t)v7,
           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
    v10 = EndrolRootComponent__CheckNextDispContent((EndrolRootComponent_o *)v8, (System_String_o *)v8, v9);
    if ( v10 != 3 )
    {
      v11 = v10;
      creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
      if ( creditText )
      {
        v12 = System_Collections_Generic_List_object___get_Item(
                creditText,
                this->fields.nowDispIndex,
                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
        creditText = (System_Collections_Generic_List_object__o *)EndrolRootComponent__SetItemInfo(
                                                                    this,
                                                                    (System_String_o *)v12,
                                                                    item,
                                                                    v11,
                                                                    v13);
        if ( item )
        {
          lastObjectPosY = this->fields.lastObjectPosY;
          this->fields.lastObjectPosY = lastObjectPosY
                                      - EndrolContentItem__get_contentHeight(item, v7)
                                      - this->fields.defaultClearance;
          return;
        }
      }
LABEL_10:
      sub_1B64C5C(creditText, v7);
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
  EndrolContentItem_o *v10; // x21
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  Il2CppObject *v14; // x0
  const MethodInfo *v15; // x4
  int32_t lastObjectPosY; // w20

  if ( (byte_4A0272A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1B64A00(&NGUITools_TypeInfo, v6);
    byte_4A0272A = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_46594816(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v10 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v12),
        !this->fields.creditText)
    || (v13 = (int)contentPref,
        v14 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v14,
                                                   v10,
                                                   v13,
                                                   v15),
        !v10) )
  {
LABEL_11:
    sub_1B64C5C(contentPref, *(_QWORD *)&index);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v10, *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A02728 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A02728 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v5);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
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
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  CommonConfirmDialog_ClickDelegate_o *v15; // x25
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4A0272F & 1) == 0 )
  {
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B64A00(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_1B64A00(&LocalizationManager_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&StringLiteral_5441/*"ENDROLL_TITLE"*/, v6);
    sub_1B64A00(&StringLiteral_5440/*"ENDROLL_MESSAGE"*/, v7);
    sub_1B64A00(&StringLiteral_5438/*"ENDROLL_CANCEL"*/, v8);
    sub_1B64A00(&StringLiteral_5439/*"ENDROLL_DECIDE"*/, v9);
    byte_4A0272F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5441/*"ENDROLL_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5440/*"ENDROLL_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5439/*"ENDROLL_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5438/*"ENDROLL_CANCEL"*/, 0LL);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1B64C5C(v16, v17);
  CommonUI__OpenConfirmDialog_30347344((CommonUI_o *)Instance, v11, v12, v13, v14, v15, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float endWaitTime; // s8
  System_Action_o *v5; // x20
  EndrolRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4A02724 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__, v3);
    byte_4A02724 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v5 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v8 = EndrolRootComponent__Wait(v6, endWaitTime, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
    sub_1B64C5C(panel, method);
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
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4A02726 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, assetData);
    sub_1B64A00(&UnityEngine_Application_TypeInfo, v7);
    sub_1B64A00(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, v8);
    sub_1B64A00(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo, v9);
    byte_4A02726 = 1;
  }
  v10 = sub_1B64C4C(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  EndrolRootComponent___c__DisplayClass30_0___ctor((EndrolRootComponent___c__DisplayClass30_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1B64C5C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endCallback, v15, v16);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v17 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v10, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v17, v18);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v3; // x19
  System_String_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0LL)) == 0LL)
    || (v4 = System_String__Split((System_String_o *)this, 0xAu, 0, 0LL),
        v3->fields.allCreditText = v4,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.allCreditText, (int32_t)v4, v5, v6),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1B64C5C(this, assetData);
  }
  v3->fields.txtLength = *(_QWORD *)&allCreditText->max_length;
}


void __fastcall EndrolRootComponent__SetAssetStorageData(
        EndrolRootComponent_o *this,
        AssetData_o *data,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v6; // x20
  __int64 v7; // x1
  Il2CppObject *Object_object__48358160; // x0
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4A02725 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObject_TextAsset____75716008, data);
    this = (EndrolRootComponent_o *)sub_1B64A00(&StringLiteral_18259/*"credit"*/, v7);
    byte_4A02725 = 1;
  }
  if ( !data
    || (Object_object__48358160 = AssetData__GetObject_object__48358160(
                                    data,
                                    (System_String_o *)StringLiteral_18259/*"credit"*/,
                                    (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_TextAsset____75716008),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__48358160, v9),
        !endCallback) )
  {
    sub_1B64C5C(this, data);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
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
  const MethodInfo *v25; // x4
  int v26; // w8
  EndrolRootComponent_o *v27; // x21
  EndrolRootComponent_o *v28; // x22
  unsigned int v29; // w23
  float v30; // s9
  float v31; // s8
  EndrolRootComponent_c **v32; // x29
  EndrolRootComponent_o **v33; // x29
  EndrolRootComponent_o *v34; // t1
  char v35; // w8
  char v36; // w8
  System_String_o *v37; // x0
  EndrolRootComponent_o *v38; // x21
  int32_t defaultFontSize; // w22
  unsigned int v40; // w0
  const MethodInfo *v41; // x5
  int m_CancellationTokenSource; // w8
  System_String_array *v43; // x23
  il2cpp_array_size_t v44; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v46; // w28
  char v47; // w8
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  unsigned int v54; // w8
  EndrolRootComponent_o *v55; // x1
  Il2CppClass **v56; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v58; // x6
  int v59; // w8
  int32_t v60; // w22
  EndrolRootComponent_o *v61; // x21
  EndrolRootComponent_o *v62; // x23
  unsigned int v63; // w27
  int klass; // w24
  EndrolRootComponent_c **v65; // x25
  EndrolRootComponent_o **v66; // x25
  EndrolRootComponent_o *v67; // t1
  char v68; // w8
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  char v73; // w8
  unsigned int v74; // w8
  EndrolRootComponent_o *v75; // x24
  System_String_o *v76; // x0
  System_String_o *v77; // x24
  intptr_t v78; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v80; // x2
  __int64 v81; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v84; // x0
  EndrolRootComponent_o *v85; // x2
  int32_t v86; // w3
  int32_t v87; // w1
  int32_t v88; // w4
  EndrolContentItem_o *v89; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v91; // x0
  bool v92; // w1
  const MethodInfo *v93; // x2
  EndrolContentItem_o *v94; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v95; // 0:w0.4
  UnityEngine_Vector2_o v96; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4A0272D & 1) == 0 )
  {
    sub_1B64A00(&System_Enum_TypeInfo, nextDispString);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_1B64A00(&UIWidget_Pivot_var, v10);
    sub_1B64A00(&UIWidget_Pivot_TypeInfo, v11);
    sub_1B64A00(&string___TypeInfo, v12);
    sub_1B64A00(&System_Type_TypeInfo, v13);
    sub_1B64A00(&StringLiteral_1854/*"="*/, v14);
    sub_1B64A00(&StringLiteral_19825/*"height"*/, v15);
    sub_1B64A00(&StringLiteral_1599/*"<"*/, v16);
    sub_1B64A00(&StringLiteral_20988/*"left"*/, v17);
    sub_1B64A00(&StringLiteral_22849/*"right"*/, v18);
    sub_1B64A00(&StringLiteral_373/*"\""*/, v19);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v20);
    sub_1B64A00(&StringLiteral_1/*""*/, v21);
    sub_1B64A00(&StringLiteral_24602/*"width"*/, v22);
    sub_1B64A00(&StringLiteral_1863/*">"*/, v23);
    this = (EndrolRootComponent_o *)sub_1B64A00(&StringLiteral_17728/*"center"*/, v24);
    byte_4A0272D = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
    if ( !this )
      goto LABEL_145;
    v38 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1599/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v38->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v38->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1863/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v94 = item;
          v40 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1B64AA8(string___TypeInfo, v40);
          m_CancellationTokenSource = (int)v38->fields.m_CancellationTokenSource;
          v43 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v43 )
              goto LABEL_145;
            item = v94;
            if ( !v94 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v43->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v94, lastObjectPosY, v43, defaultFontSize, v8, v41);
            else
              EndrolContentItem__SetTripleColumnText(v94, lastObjectPosY, v43, defaultFontSize, v8, v41);
            return item;
          }
          v44 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v38->fields.endrolContentParent;
          v46 = 1;
          while ( v46 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
                                              0LL);
            if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
              break;
            v47 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v47 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1599/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v48, v49);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1863/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v50, v51);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1854/*"="*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                  break;
                this = *p_endrolContentParent;
                if ( !*p_endrolContentParent )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  break;
                this = (EndrolRootComponent_o *)System_Int32__Parse(
                                                  (System_String_o *)this->fields.endrolContentParent,
                                                  0LL);
                defaultFontSize = (int)this;
              }
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_15747/*"["*/,
                                                0LL);
              v54 = (unsigned int)v38->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v46 >= v54 )
                  break;
                if ( !v43 )
                  goto LABEL_145;
                if ( v44 >= v43->max_length )
                  break;
                v55 = *p_endrolContentParent;
              }
              else
              {
                if ( v46 >= v54 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_61385136(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v43 )
                  goto LABEL_145;
                if ( v44 >= v43->max_length )
                  break;
                v55 = this;
              }
              v56 = &v43->obj.klass + (int)v44;
              v56[4] = (Il2CppClass *)v55;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v52, v53);
              ++v44;
            }
            m_CancellationTokenSource = (int)v38->fields.m_CancellationTokenSource;
            ++v46;
            ++p_endrolContentParent;
            if ( (int)v46 >= m_CancellationTokenSource )
              goto LABEL_76;
          }
        }
      }
    }
LABEL_144:
    sub_1B64C64(this, nextDispString);
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      if ( !nextDispString )
        goto LABEL_145;
      this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      v26 = (int)this->fields.m_CancellationTokenSource;
      v27 = this;
      v28 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v26 < 1 )
      {
        v31 = 0.0;
        v30 = 0.0;
        if ( !item )
          goto LABEL_145;
      }
      else
      {
        v29 = 0;
        v30 = 0.0;
        v31 = 0.0;
        do
        {
          if ( v29 >= v26 )
            goto LABEL_144;
          v32 = &v27->klass + (int)v29;
          v34 = (EndrolRootComponent_o *)v32[4];
          v33 = (EndrolRootComponent_o **)(v32 + 4);
          this = v34;
          if ( !v34 )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1599/*"<"*/,
                                            0LL);
          if ( v29 >= LODWORD(v27->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v35 = (char)this;
          this = *v33;
          if ( !*v33 )
            goto LABEL_145;
          if ( (v35 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            if ( v29 >= LODWORD(v27->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v33;
            if ( !*v33 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_373/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v28 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24602/*"width"*/,
                                              0LL);
            if ( v29 >= LODWORD(v27->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v36 = (char)this;
            this = *v33;
            if ( !*v33 )
              goto LABEL_145;
            if ( (v36 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v31 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_19825/*"height"*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v29 >= LODWORD(v27->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v33;
                if ( !*v33 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v37 = System_String__Replace_61404756(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1863/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                v30 = System_Single__Parse(v37, 0LL);
              }
            }
          }
          v26 = (int)v27->fields.m_CancellationTokenSource;
          ++v29;
        }
        while ( (int)v29 < v26 );
        if ( !item )
          goto LABEL_145;
      }
      v96.fields.x = v31;
      v96.fields.y = v30;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v28, v96, v8, v25);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15747/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v84 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_61385136(defaultTextColor, (System_String_o *)v84, 0LL);
        }
        v85 = this;
        if ( item )
        {
          v86 = v8->fields.defaultFontSize;
          v87 = v8->fields.lastObjectPosY;
          v88 = 4;
          v89 = item;
LABEL_142:
          EndrolContentItem__SetText(v89, v87, (System_String_o *)v85, v86, v88, v8, v58);
          return item;
        }
      }
    }
    goto LABEL_145;
  }
  if ( !nextDispString )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
  if ( !this )
    goto LABEL_145;
  v59 = (int)this->fields.m_CancellationTokenSource;
  v60 = v8->fields.defaultFontSize;
  v61 = this;
  v62 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v59 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v87 = v8->fields.lastObjectPosY;
      v89 = item;
      v85 = v62;
      v86 = v60;
      v88 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1B64C5C(this, nextDispString);
  }
  v63 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v63 >= v59 )
      goto LABEL_144;
    v65 = &v61->klass + (int)v63;
    v67 = (EndrolRootComponent_o *)v65[4];
    v66 = (EndrolRootComponent_o **)(v65 + 4);
    this = v67;
    if ( !v67 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      0LL);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v68 = (char)this;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    if ( (v68 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15747/*"["*/,
                                        0LL);
      v74 = (unsigned int)v61->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v63 >= v74 )
          goto LABEL_144;
        v62 = *v66;
      }
      else
      {
        if ( v63 >= v74 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_61385136(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v66,
                                          0LL);
        v62 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v66 = this;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v66, (int32_t)this, v69, v70);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_61404756(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1863/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v66 = this;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v66, (int32_t)this, v71, v72);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1854/*"="*/,
                                      0LL);
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v73 = (char)this;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    if ( (v73 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v60 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17728/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_20988/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v66;
    if ( !*v66 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22849/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v59 = (int)v61->fields.m_CancellationTokenSource;
    if ( (int)++v63 >= v59 )
      goto LABEL_140;
  }
  if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v66;
  if ( !*v66 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_61404132((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v75 = this;
  this = *v66;
  if ( !*v66 )
    goto LABEL_145;
  v76 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v77 = System_String__Concat_61385136((System_String_o *)v75, v76, 0LL);
  v78 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v95.fields.value = v78;
  TypeFromHandle = System_Type__GetTypeFromHandle(v95, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v77, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v80, v81);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1B64F1C(this);
  EndrolRootComponent__callbackConfirmDlg(v91, v92, v93);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  float lastPostion; // s8
  System_Collections_Hashtable_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v30; // [xsp+8h] [xbp-68h] BYREF
  int v31; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A02723 & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_Hashtable_TypeInfo, method);
    sub_1B64A00(&int_TypeInfo, v3);
    sub_1B64A00(&float_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_9928/*"OnUpdateScroll"*/, v5);
    sub_1B64A00(&StringLiteral_19580/*"from"*/, v6);
    sub_1B64A00(&StringLiteral_23834/*"time"*/, v7);
    sub_1B64A00(&StringLiteral_22196/*"onupdate"*/, v8);
    sub_1B64A00(&StringLiteral_9905/*"OnScrollEnd"*/, v9);
    sub_1B64A00(&StringLiteral_23874/*"to"*/, v10);
    sub_1B64A00(&StringLiteral_22188/*"oncomplete"*/, v11);
    sub_1B64A00(&iTween_TypeInfo, v12);
    byte_4A02723 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v14 = (System_Collections_Hashtable_o *)sub_1B64C4C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_61964560(v14, 0LL);
  v31 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v15, v16, v17);
  if ( !v14 )
    sub_1B64C5C(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_19580/*"from"*/,
    v18,
    v14->klass->vtable._24_Clear.methodPtr);
  v30 = lastPostion + 580.0;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_23874/*"to"*/,
    v23,
    v14->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_23834/*"time"*/,
    v27,
    v14->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22196/*"onupdate"*/,
    StringLiteral_9928/*"OnUpdateScroll"*/,
    v14->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22188/*"oncomplete"*/,
    StringLiteral_9905/*"OnScrollEnd"*/,
    v14->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v14, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A02727 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64A00(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A02727 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v8 )
    sub_1B64C5C(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A02729 & 1) == 0 )
  {
    sub_1B64A00(&EndrolRootComponent__Wait_d__33_TypeInfo, callback);
    byte_4A02729 = 1;
  }
  v6 = sub_1B64C4C(EndrolRootComponent__Wait_d__33_TypeInfo);
  EndrolRootComponent__Wait_d__33___ctor((EndrolRootComponent__Wait_d__33_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1B64C5C(v7, v8);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callback, v9, v10);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A0272E & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_4A0272E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v6);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v7);
}


void __fastcall EndrolRootComponent__Wait_d__33___ctor(
        EndrolRootComponent__Wait_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EndrolRootComponent__Wait_d__33__MoveNext(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent__Wait_d__33_o *v2; // x19
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4A02733 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1B64A00(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A02733 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1B64C5C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B64C4C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall EndrolRootComponent__Wait_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EndrolRootComponent__Wait_d__33__System_Collections_IEnumerator_Reset(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall EndrolRootComponent__Wait_d__33__System_Collections_IEnumerator_get_Current(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EndrolRootComponent__Wait_d__33__System_IDisposable_Dispose(
        EndrolRootComponent__Wait_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___ctor(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__0(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  char *_4__this; // x0
  struct EndrolRootComponent_o *v8; // x8
  System_String_o *bgmName; // x20
  int32_t i; // w20
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v14; // x20
  struct EndrolRootComponent_o *v15; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_IEnumerator_o *v20; // x1

  if ( (byte_4A02732 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&AvalonSceneManager_TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64A00(&SoundManager_TypeInfo, v5);
    sub_1B64A00(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, v6);
    byte_4A02732 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol((EndrolRootComponent_o *)_4__this, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  if ( v8->fields.isBgmPlay )
  {
    bgmName = v8->fields.bgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playJingle(bgmName, 0LL);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_23;
  }
  _4__this = (char *)v8->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, 0LL);
  _4__this = (char *)this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText((EndrolRootComponent_o *)_4__this, i, 0LL);
    _4__this = (char *)this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  *((_QWORD *)_4__this + 20) = endCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(_4__this + 160), (int32_t)endCallback, v11, v12);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14
    || (CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v15 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1B64C5C(_4__this, method);
  }
  startWaitTime = v15->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v18, v19);
  }
  v20 = EndrolRootComponent__Wait(v15, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)v15, v20, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64C5C(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}