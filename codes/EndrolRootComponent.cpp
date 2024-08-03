void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0000E & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_4A0000E = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectWave, (int32_t)v3, v4, v5);
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

  if ( (byte_4A00009 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17995/*"column=3"*/, nextDispText);
    sub_1B640C8(&StringLiteral_17994/*"column=2"*/, v4);
    sub_1B640C8(&StringLiteral_1599/*"<"*/, v5);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v6);
    this = (EndrolRootComponent_o *)sub_1B640C8(&StringLiteral_7442/*"Image"*/, v7);
    byte_4A00009 = 1;
  }
  if ( !nextDispText )
    sub_1B64324(this);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7442/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1599/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17994/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17995/*"column=3"*/, 0LL) )
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
  System_Collections_Generic_List_object__o *v23; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *klass; // x0
  __int64 v28; // x1
  int32_t txtLength; // w8
  char v30; // w24
  il2cpp_array_size_t v31; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v33; // x8
  struct System_String_array *v34; // x8
  struct System_String_array *v35; // x9
  char v36; // w8
  struct System_String_array *v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *v40; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  System_String_o *v44; // x1
  Il2CppClass **v45; // x0
  struct System_String_array *v46; // x9
  char v47; // w8
  struct System_String_array *v48; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v50; // x8
  int v51; // w8
  System_String_o *v52; // x23
  unsigned int v53; // w27
  System_String_c **v54; // x25
  ServantStatusBattleListViewItem_o *v55; // x25
  System_String_o *v56; // t1
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_String_array *v61; // x8
  struct System_String_array *v62; // x9
  char v63; // w8
  struct System_String_array *v64; // x9
  char v65; // w8
  System_String_o *fields; // x23
  float v67; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v69; // x25
  struct System_String_array *v70; // x9
  char v71; // w8
  System_String_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_String_o *v77; // x1
  struct System_String_array *v78; // x9
  char v79; // w8
  struct System_String_array *v80; // x9
  char v81; // w8
  struct System_String_array *v82; // x8
  int32_t v83; // w2
  int32_t v84; // w3
  ServantStatusBattleListViewItem_c *v85; // x1
  ServantStatusBattleListViewItem_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4A0000D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_18795/*"effect"*/, v6);
    sub_1B640C8(&StringLiteral_6739/*"FontSize"*/, v7);
    sub_1B640C8(&StringLiteral_22953/*"scroll"*/, v8);
    sub_1B640C8(&StringLiteral_23383/*"start"*/, v9);
    sub_1B640C8(&StringLiteral_17106/*"bgm"*/, v10);
    sub_1B640C8(&StringLiteral_18471/*"default_text_color"*/, v11);
    sub_1B640C8(&StringLiteral_1599/*"<"*/, v12);
    sub_1B640C8(&StringLiteral_9295/*"NULL"*/, v13);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v14);
    sub_1B640C8(&StringLiteral_18926/*"end"*/, v15);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v16);
    sub_1B640C8(&StringLiteral_18470/*"default_font_size"*/, v17);
    sub_1B640C8(&StringLiteral_17092/*"begine_time"*/, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    sub_1B640C8(&StringLiteral_88/*"\r"*/, v20);
    sub_1B640C8(&StringLiteral_1863/*">"*/, v21);
    sub_1B640C8(&StringLiteral_18469/*"default_clearance"*/, v22);
    byte_4A0000D = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v23;
  p_creditText = &this->fields.creditText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.creditText, (int32_t)v23, v25, v26);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v30 = 0;
    v31 = 0;
    p_defaultTextColor = (ServantStatusBattleListViewItem_o *)&this->fields.defaultTextColor;
    p_bgmName = (ServantStatusBattleListViewItem_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v31 >= allCreditText->max_length )
        goto LABEL_137;
      klass = allCreditText->m_Items[v31];
      if ( !klass )
LABEL_136:
        sub_1B64324(klass);
      klass = (System_String_o *)System_String__StartsWith(klass, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
        break;
      v33 = this->fields.allCreditText;
      if ( !v33 )
        goto LABEL_136;
      if ( v31 >= v33->max_length )
        goto LABEL_137;
      klass = v33->m_Items[v31];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23383/*"start"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
        goto LABEL_65;
      v34 = this->fields.allCreditText;
      if ( !v34 )
        goto LABEL_136;
      if ( v31 >= v34->max_length )
        goto LABEL_137;
      klass = v34->m_Items[v31];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17092/*"begine_time"*/, 0LL);
      v35 = this->fields.allCreditText;
      if ( !v35 )
        goto LABEL_136;
      if ( v31 >= v35->max_length )
        goto LABEL_137;
      v36 = (char)klass;
      klass = v35->m_Items[v31];
      if ( !klass )
        goto LABEL_136;
      if ( (v36 & 1) != 0 )
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
        klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_22953/*"scroll"*/, 0LL);
        v46 = this->fields.allCreditText;
        if ( !v46 )
          goto LABEL_136;
        if ( v31 >= v46->max_length )
          goto LABEL_137;
        v47 = (char)klass;
        klass = v46->m_Items[v31];
        if ( !klass )
          goto LABEL_136;
        if ( (v47 & 1) != 0 )
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
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18926/*"end"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
LABEL_67:
            v30 = 0;
            goto LABEL_68;
          }
          v61 = this->fields.allCreditText;
          if ( !v61 )
            goto LABEL_136;
          if ( v31 >= v61->max_length )
            goto LABEL_137;
          klass = v61->m_Items[v31];
          if ( !klass )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL);
          v62 = this->fields.allCreditText;
          if ( !v62 )
            goto LABEL_136;
          if ( v31 >= v62->max_length )
            goto LABEL_137;
          v63 = (char)klass;
          klass = v62->m_Items[v31];
          if ( !klass )
            goto LABEL_136;
          if ( (v63 & 1) != 0 )
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
            klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18795/*"effect"*/, 0LL);
            v64 = this->fields.allCreditText;
            if ( !v64 )
              goto LABEL_136;
            if ( v31 >= v64->max_length )
              goto LABEL_137;
            v65 = (char)klass;
            klass = v64->m_Items[v31];
            if ( !klass )
              goto LABEL_136;
            if ( (v65 & 1) != 0 )
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
              v67 = System_Single__Parse((System_String_o *)klass[1].monitor, 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v67 / 10.0;
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
              v69 = this->fields.effectWave;
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
              if ( !v69 )
                goto LABEL_136;
              if ( v69->max_length <= 1 )
                goto LABEL_137;
              v69->m_Items[2] = (int)klass;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 2 )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse((System_String_o *)klass[2].klass, 0LL);
            }
            else
            {
              klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17106/*"bgm"*/, 0LL);
              v70 = this->fields.allCreditText;
              if ( !v70 )
                goto LABEL_136;
              if ( v31 >= v70->max_length )
                goto LABEL_137;
              v71 = (char)klass;
              klass = v70->m_Items[v31];
              if ( !klass )
                goto LABEL_136;
              if ( (v71 & 1) != 0 )
              {
                v72 = System_String__Replace_61395016(
                        klass,
                        (System_String_o *)StringLiteral_88/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (ServantStatusBattleListViewItem_c *)v72;
                sub_1B6406C(p_bgmName, (int32_t)v72, v73, v74);
                klass = (System_String_o *)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( LODWORD(klass[1].klass) <= 1 )
                  goto LABEL_137;
                v77 = (struct System_String_o *)klass[1].fields;
                this->fields.bgmName = v77;
                sub_1B6406C(p_bgmName, (int32_t)v77, v75, v76);
                klass = (System_String_o *)System_String__op_Inequality(
                                             this->fields.bgmName,
                                             (System_String_o *)StringLiteral_9295/*"NULL"*/,
                                             0LL);
                this->fields.isBgmPlay = (unsigned __int8)klass & 1;
              }
              else
              {
                klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18470/*"default_font_size"*/, 0LL);
                v78 = this->fields.allCreditText;
                if ( !v78 )
                  goto LABEL_136;
                if ( v31 >= v78->max_length )
                  goto LABEL_137;
                v79 = (char)klass;
                klass = v78->m_Items[v31];
                if ( !klass )
                  goto LABEL_136;
                if ( (v79 & 1) != 0 )
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
                  klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18469/*"default_clearance"*/, 0LL);
                  v80 = this->fields.allCreditText;
                  if ( !v80 )
                    goto LABEL_136;
                  if ( v31 >= v80->max_length )
                    goto LABEL_137;
                  v81 = (char)klass;
                  klass = v80->m_Items[v31];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v81 & 1) != 0 )
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
                                                 (System_String_o *)StringLiteral_18471/*"default_text_color"*/,
                                                 0LL);
                    if ( ((unsigned __int8)klass & 1) != 0 )
                    {
                      v82 = this->fields.allCreditText;
                      if ( !v82 )
                        goto LABEL_136;
                      if ( v31 >= v82->max_length )
                        goto LABEL_137;
                      klass = v82->m_Items[v31];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( LODWORD(klass[1].klass) <= 1 )
                        goto LABEL_137;
                      v85 = (ServantStatusBattleListViewItem_c *)klass[1].fields;
                      p_defaultTextColor->klass = v85;
                      sub_1B6406C(p_defaultTextColor, (int32_t)v85, v83, v84);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v31 >= this->fields.txtLength )
        return;
    }
    if ( (v30 & 1) == 0 )
      goto LABEL_67;
    v37 = this->fields.allCreditText;
    if ( !v37 )
      goto LABEL_136;
    if ( v31 >= v37->max_length )
      goto LABEL_137;
    klass = v37->m_Items[v31];
    if ( !klass )
      goto LABEL_136;
    klass = System_String__Replace_61395016(
              klass,
              (System_String_o *)StringLiteral_88/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
    v40 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v40->fields._items;
    v42 = Method_System_Collections_Generic_List_string__Add__;
    ++v40->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v40->fields._size;
    v44 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v40,
        (Il2CppObject *)klass,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v40->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v38, v39);
    }
    v48 = this->fields.allCreditText;
    if ( !v48 )
      goto LABEL_136;
    if ( v31 >= v48->max_length )
      goto LABEL_137;
    klass = v48->m_Items[v31];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6739/*"FontSize"*/, 0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      v50 = this->fields.allCreditText;
      if ( !v50 )
        goto LABEL_136;
      if ( v31 >= v50->max_length )
        goto LABEL_137;
      klass = v50->m_Items[v31];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Split(klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v51 = (int)klass[1].klass;
      v52 = klass;
      if ( v51 >= 1 )
      {
        v53 = 0;
        while ( v53 < v51 )
        {
          v54 = &v52->klass + (int)v53;
          v56 = (System_String_o *)v54[4];
          v55 = (ServantStatusBattleListViewItem_o *)(v54 + 4);
          klass = v56;
          if ( !v56 )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6739/*"FontSize"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            klass = (System_String_o *)v55->klass;
            if ( !v55->klass )
              goto LABEL_136;
            klass = System_String__Replace_61395016(
                      klass,
                      (System_String_o *)StringLiteral_1599/*"<"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            v55->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B6406C(v55, (int32_t)klass, v57, v58);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            klass = (System_String_o *)v55->klass;
            if ( !v55->klass )
              goto LABEL_136;
            klass = System_String__Replace_61395016(
                      klass,
                      (System_String_o *)StringLiteral_1863/*">"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            v55->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B6406C(v55, (int32_t)klass, v59, v60);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            klass = (System_String_o *)v55->klass;
            if ( !v55->klass )
              goto LABEL_136;
            klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( LODWORD(klass[1].klass) <= 1 )
              break;
            klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
            defaultFontSize = (int)klass;
          }
          v51 = (int)v52[1].klass;
          if ( (int)++v53 >= v51 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1B6432C(klass, v28);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v30 = 1;
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
  int32_t v7; // w1
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w0
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x1
  int32_t lastObjectPosY; // w21

  if ( (byte_4A00008 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, item);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_4A00008 = 1;
  }
  creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
  v7 = this->fields.nowDispIndex + 1;
  this->fields.nowDispIndex = v7;
  if ( !creditText )
    goto LABEL_10;
  if ( v7 < creditText->fields._size )
  {
    v8 = System_Collections_Generic_List_object___get_Item(
           creditText,
           v7,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                      - EndrolContentItem__get_contentHeight(item, v14)
                                      - this->fields.defaultClearance;
          return;
        }
      }
LABEL_10:
      sub_1B64324(creditText);
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
  const MethodInfo *v16; // x1
  int32_t lastObjectPosY; // w20

  if ( (byte_4A00007 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1B640C8(&NGUITools_TypeInfo, v6);
    byte_4A00007 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_46584332(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v10 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v12),
        !this->fields.creditText)
    || (v13 = (int)contentPref,
        v14 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v14,
                                                   v10,
                                                   v13,
                                                   v15),
        !v10) )
  {
LABEL_11:
    sub_1B64324(contentPref);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v10, v16)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_4A00005 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A00005 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  __int64 v18; // x0

  if ( (byte_4A0000C & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_5440/*"ENDROLL_TITLE"*/, v6);
    sub_1B640C8(&StringLiteral_5439/*"ENDROLL_MESSAGE"*/, v7);
    sub_1B640C8(&StringLiteral_5437/*"ENDROLL_CANCEL"*/, v8);
    sub_1B640C8(&StringLiteral_5438/*"ENDROLL_DECIDE"*/, v9);
    byte_4A0000C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5440/*"ENDROLL_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5439/*"ENDROLL_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5438/*"ENDROLL_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5437/*"ENDROLL_CANCEL"*/, 0LL);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16);
  CommonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1B64324(v18);
  CommonUI__OpenConfirmDialog_30344968((CommonUI_o *)Instance, v11, v12, v13, v14, v17, 0, 0, 0, 0LL);
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

  if ( (byte_4A00001 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__, v4);
    byte_4A00001 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v9 = EndrolRootComponent__Wait(v7, endWaitTime, v6, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
    sub_1B64324(panel);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3

  if ( (byte_4A00003 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, assetData);
    sub_1B640C8(&UnityEngine_Application_TypeInfo, v7);
    sub_1B640C8(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, v8);
    sub_1B640C8(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo, v9);
    byte_4A00003 = 1;
  }
  v10 = sub_1B64314(EndrolRootComponent___c__DisplayClass30_0_TypeInfo, assetData, endCallback);
  EndrolRootComponent___c__DisplayClass30_0___ctor((EndrolRootComponent___c__DisplayClass30_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endCallback, v14, v15);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)v10, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v18, v19);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.allCreditText, (int32_t)v4, v5, v6),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1B64324(this);
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
  Il2CppObject *Object_object__48347676; // x0
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4A00002 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_TextAsset____75705976, data);
    this = (EndrolRootComponent_o *)sub_1B640C8(&StringLiteral_18256/*"credit"*/, v7);
    byte_4A00002 = 1;
  }
  if ( !data
    || (Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    data,
                                    (System_String_o *)StringLiteral_18256/*"credit"*/,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_TextAsset____75705976),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__48347676, v9),
        !endCallback) )
  {
    sub_1B64324(this);
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
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  int v27; // w8
  EndrolRootComponent_o *v28; // x21
  EndrolRootComponent_o *v29; // x22
  unsigned int v30; // w23
  float v31; // s9
  float v32; // s8
  EndrolRootComponent_c **v33; // x29
  EndrolRootComponent_o **v34; // x29
  EndrolRootComponent_o *v35; // t1
  char v36; // w8
  char v37; // w8
  System_String_o *v38; // x0
  EndrolRootComponent_o *v39; // x21
  int32_t defaultFontSize; // w22
  unsigned int v41; // w0
  const MethodInfo *v42; // x5
  int m_CancellationTokenSource; // w8
  System_String_array *v44; // x23
  il2cpp_array_size_t v45; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v47; // w28
  char v48; // w8
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  unsigned int v55; // w8
  EndrolRootComponent_o *v56; // x1
  Il2CppClass **v57; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v59; // x6
  int v60; // w8
  int32_t v61; // w22
  EndrolRootComponent_o *v62; // x21
  EndrolRootComponent_o *v63; // x23
  unsigned int v64; // w27
  int klass; // w24
  EndrolRootComponent_c **v66; // x25
  EndrolRootComponent_o **v67; // x25
  EndrolRootComponent_o *v68; // t1
  char v69; // w8
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  char v74; // w8
  unsigned int v75; // w8
  EndrolRootComponent_o *v76; // x24
  System_String_o *v77; // x0
  System_String_o *v78; // x24
  intptr_t v79; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v81; // x2
  __int64 v82; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v85; // x0
  EndrolRootComponent_o *v86; // x2
  int32_t v87; // w3
  int32_t v88; // w1
  int32_t v89; // w4
  EndrolContentItem_o *v90; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v92; // x0
  bool v93; // w1
  const MethodInfo *v94; // x2
  EndrolContentItem_o *v95; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v96; // 0:w0.4
  UnityEngine_Vector2_o v97; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4A0000A & 1) == 0 )
  {
    sub_1B640C8(&System_Enum_TypeInfo, nextDispString);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_1B640C8(&UIWidget_Pivot_var, v10);
    sub_1B640C8(&UIWidget_Pivot_TypeInfo, v11);
    sub_1B640C8(&string___TypeInfo, v12);
    sub_1B640C8(&System_Type_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1854/*"="*/, v14);
    sub_1B640C8(&StringLiteral_19822/*"height"*/, v15);
    sub_1B640C8(&StringLiteral_1599/*"<"*/, v16);
    sub_1B640C8(&StringLiteral_20985/*"left"*/, v17);
    sub_1B640C8(&StringLiteral_22846/*"right"*/, v18);
    sub_1B640C8(&StringLiteral_373/*"\""*/, v19);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    sub_1B640C8(&StringLiteral_24598/*"width"*/, v22);
    sub_1B640C8(&StringLiteral_1863/*">"*/, v23);
    this = (EndrolRootComponent_o *)sub_1B640C8(&StringLiteral_17725/*"center"*/, v24);
    byte_4A0000A = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
    if ( !this )
      goto LABEL_145;
    v39 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1599/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v39->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v39->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_61395016(
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
          v95 = item;
          v41 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1B64170(string___TypeInfo, v41);
          m_CancellationTokenSource = (int)v39->fields.m_CancellationTokenSource;
          v44 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v44 )
              goto LABEL_145;
            item = v95;
            if ( !v95 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v44->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v95, lastObjectPosY, v44, defaultFontSize, v8, v42);
            else
              EndrolContentItem__SetTripleColumnText(v95, lastObjectPosY, v44, defaultFontSize, v8, v42);
            return item;
          }
          v45 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v39->fields.endrolContentParent;
          v47 = 1;
          while ( v47 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
                                              0LL);
            if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
              break;
            v48 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v48 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1599/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v49, v50);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1863/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v51, v52);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
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
                if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
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
                                                (System_String_o *)StringLiteral_15744/*"["*/,
                                                0LL);
              v55 = (unsigned int)v39->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v47 >= v55 )
                  break;
                if ( !v44 )
                  goto LABEL_145;
                if ( v45 >= v44->max_length )
                  break;
                v56 = *p_endrolContentParent;
              }
              else
              {
                if ( v47 >= v55 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_61375396(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v44 )
                  goto LABEL_145;
                if ( v45 >= v44->max_length )
                  break;
                v56 = this;
              }
              v57 = &v44->obj.klass + (int)v45;
              v57[4] = (Il2CppClass *)v56;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v56, v53, v54);
              ++v45;
            }
            m_CancellationTokenSource = (int)v39->fields.m_CancellationTokenSource;
            ++v47;
            ++p_endrolContentParent;
            if ( (int)v47 >= m_CancellationTokenSource )
              goto LABEL_76;
          }
        }
      }
    }
LABEL_144:
    sub_1B6432C(this, v25);
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
      v27 = (int)this->fields.m_CancellationTokenSource;
      v28 = this;
      v29 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v27 < 1 )
      {
        v32 = 0.0;
        v31 = 0.0;
        if ( !item )
          goto LABEL_145;
      }
      else
      {
        v30 = 0;
        v31 = 0.0;
        v32 = 0.0;
        do
        {
          if ( v30 >= v27 )
            goto LABEL_144;
          v33 = &v28->klass + (int)v30;
          v35 = (EndrolRootComponent_o *)v33[4];
          v34 = (EndrolRootComponent_o **)(v33 + 4);
          this = v35;
          if ( !v35 )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1599/*"<"*/,
                                            0LL);
          if ( v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v36 = (char)this;
          this = *v34;
          if ( !*v34 )
            goto LABEL_145;
          if ( (v36 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            if ( v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v34;
            if ( !*v34 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_373/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v29 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24598/*"width"*/,
                                              0LL);
            if ( v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v37 = (char)this;
            this = *v34;
            if ( !*v34 )
              goto LABEL_145;
            if ( (v37 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v32 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_19822/*"height"*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v34;
                if ( !*v34 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v38 = System_String__Replace_61395016(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1863/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                v31 = System_Single__Parse(v38, 0LL);
              }
            }
          }
          v27 = (int)v28->fields.m_CancellationTokenSource;
          ++v30;
        }
        while ( (int)v30 < v27 );
        if ( !item )
          goto LABEL_145;
      }
      v97.fields.x = v32;
      v97.fields.y = v31;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v29, v97, v8, v26);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15744/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v85 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_61375396(defaultTextColor, (System_String_o *)v85, 0LL);
        }
        v86 = this;
        if ( item )
        {
          v87 = v8->fields.defaultFontSize;
          v88 = v8->fields.lastObjectPosY;
          v89 = 4;
          v90 = item;
LABEL_142:
          EndrolContentItem__SetText(v90, v88, (System_String_o *)v86, v87, v89, v8, v59);
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
  v60 = (int)this->fields.m_CancellationTokenSource;
  v61 = v8->fields.defaultFontSize;
  v62 = this;
  v63 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v60 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v88 = v8->fields.lastObjectPosY;
      v90 = item;
      v86 = v63;
      v87 = v61;
      v89 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1B64324(this);
  }
  v64 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v64 >= v60 )
      goto LABEL_144;
    v66 = &v62->klass + (int)v64;
    v68 = (EndrolRootComponent_o *)v66[4];
    v67 = (EndrolRootComponent_o **)(v66 + 4);
    this = v68;
    if ( !v68 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      0LL);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v69 = (char)this;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    if ( (v69 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15744/*"["*/,
                                        0LL);
      v75 = (unsigned int)v62->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v64 >= v75 )
          goto LABEL_144;
        v63 = *v67;
      }
      else
      {
        if ( v64 >= v75 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_61375396(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v67,
                                          0LL);
        v63 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v67 = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v67, (int32_t)this, v70, v71);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_61395016(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1863/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v67 = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v67, (int32_t)this, v72, v73);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1854/*"="*/,
                                      0LL);
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v74 = (char)this;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    if ( (v74 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v61 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17725/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_20985/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v67;
    if ( !*v67 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22846/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v60 = (int)v62->fields.m_CancellationTokenSource;
    if ( (int)++v64 >= v60 )
      goto LABEL_140;
  }
  if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v67;
  if ( !*v67 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_61394392((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v76 = this;
  this = *v67;
  if ( !*v67 )
    goto LABEL_145;
  v77 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v78 = System_String__Concat_61375396((System_String_o *)v76, v77, 0LL);
  v79 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v96.fields.value = v79;
  TypeFromHandle = System_Type__GetTypeFromHandle(v96, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v78, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v81, v82);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1B645E4(this);
  EndrolRootComponent__callbackConfirmDlg(v92, v93, v94);
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
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v21; // [xsp+8h] [xbp-68h] BYREF
  int v22; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A00000 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&float_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_9926/*"OnUpdateScroll"*/, v6);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v7);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v8);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v9);
    sub_1B640C8(&StringLiteral_9903/*"OnScrollEnd"*/, v10);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v11);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v12);
    sub_1B640C8(&iTween_TypeInfo, v13);
    byte_4A00000 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v15 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_61954820(v15, 0LL);
  v22 = 0;
  v16 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  if ( !v15 )
    sub_1B64324(v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_19577/*"from"*/,
    v16,
    v15->klass->vtable._24_Clear.methodPtr);
  v21 = lastPostion + 580.0;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_23870/*"to"*/,
    v17,
    v15->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_23830/*"time"*/,
    v18,
    v15->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_22193/*"onupdate"*/,
    StringLiteral_9926/*"OnUpdateScroll"*/,
    v15->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_Add.method)(
    v15,
    StringLiteral_22185/*"oncomplete"*/,
    StringLiteral_9903/*"OnScrollEnd"*/,
    v15->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v15, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4A00004 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A00004 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A00006 & 1) == 0 )
  {
    sub_1B640C8(&EndrolRootComponent__Wait_d__33_TypeInfo, callback);
    byte_4A00006 = 1;
  }
  v6 = sub_1B64314(EndrolRootComponent__Wait_d__33_TypeInfo, callback, method);
  EndrolRootComponent__Wait_d__33___ctor((EndrolRootComponent__Wait_d__33_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1B64324(v7);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A0000B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_4A0000B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v6);
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
  __int64 v2; // x2
  EndrolRootComponent__Wait_d__33_o *v3; // x19
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v3 = this;
  if ( (byte_4A00010 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4A00010 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v3->fields.callback;
    v3->fields.__1__state = -1;
    if ( !callback )
      sub_1B64324(this);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    waitTime = v3->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    v3->fields.__2__current = (Il2CppObject *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    v3->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v15; // x1
  __int64 v16; // x2
  struct EndrolRootComponent_o *v17; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_4A0000F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, v6);
    byte_4A0000F = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(_4__this + 160), (int32_t)endCallback, v11, v12);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14
    || (CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v17 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1B64324(_4__this);
  }
  startWaitTime = v17->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v20, v21);
  }
  v22 = EndrolRootComponent__Wait(v17, startWaitTime, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v17, v22, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EndrolRootComponent__StartEndroll(_4__this, 0LL);
}