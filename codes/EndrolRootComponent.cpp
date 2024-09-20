void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EDF9 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5EDF9 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectWave, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_4A5EDF4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18065/*"column=3"*/);
    sub_1B885B0(&StringLiteral_18064/*"column=2"*/);
    sub_1B885B0(&StringLiteral_1597/*"<"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    this = (EndrolRootComponent_o *)sub_1B885B0(&StringLiteral_7476/*"Image"*/);
    byte_4A5EDF4 = 1;
  }
  if ( !nextDispText )
    sub_1B8880C(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7476/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1886/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1597/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18064/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18065/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *klass; // x0
  __int64 v8; // x1
  int32_t txtLength; // w8
  char v10; // w24
  il2cpp_array_size_t v11; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v13; // x8
  struct System_String_array *v14; // x8
  struct System_String_array *v15; // x9
  char v16; // w8
  struct System_String_array *v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  System_String_o *v24; // x1
  Il2CppClass **v25; // x0
  struct System_String_array *v26; // x9
  char v27; // w8
  struct System_String_array *v28; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v30; // x8
  int v31; // w8
  System_String_o *v32; // x23
  unsigned int v33; // w27
  System_String_c **v34; // x25
  ServantStatusBattleListViewItem_o *v35; // x25
  System_String_o *v36; // t1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_String_array *v41; // x8
  struct System_String_array *v42; // x9
  char v43; // w8
  struct System_String_array *v44; // x9
  char v45; // w8
  System_String_o *fields; // x23
  float v47; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v49; // x25
  struct System_String_array *v50; // x9
  char v51; // w8
  System_String_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_String_o *v57; // x1
  struct System_String_array *v58; // x9
  char v59; // w8
  struct System_String_array *v60; // x9
  char v61; // w8
  struct System_String_array *v62; // x8
  int32_t v63; // w2
  int32_t v64; // w3
  ServantStatusBattleListViewItem_c *v65; // x1
  ServantStatusBattleListViewItem_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  ServantStatusBattleListViewItem_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5EDF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_18868/*"effect"*/);
    sub_1B885B0(&StringLiteral_6767/*"FontSize"*/);
    sub_1B885B0(&StringLiteral_23048/*"scroll"*/);
    sub_1B885B0(&StringLiteral_23480/*"start"*/);
    sub_1B885B0(&StringLiteral_17174/*"bgm"*/);
    sub_1B885B0(&StringLiteral_18543/*"default_text_color"*/);
    sub_1B885B0(&StringLiteral_1597/*"<"*/);
    sub_1B885B0(&StringLiteral_9337/*"NULL"*/);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    sub_1B885B0(&StringLiteral_18999/*"end"*/);
    sub_1B885B0(&StringLiteral_1886/*"@"*/);
    sub_1B885B0(&StringLiteral_18542/*"default_font_size"*/);
    sub_1B885B0(&StringLiteral_17160/*"begine_time"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_88/*"\r"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    sub_1B885B0(&StringLiteral_18541/*"default_clearance"*/);
    byte_4A5EDF8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  p_creditText = &this->fields.creditText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.creditText, (int32_t)v3, v5, v6);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v10 = 0;
    v11 = 0;
    p_defaultTextColor = (ServantStatusBattleListViewItem_o *)&this->fields.defaultTextColor;
    p_bgmName = (ServantStatusBattleListViewItem_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v11 >= allCreditText->max_length )
        goto LABEL_137;
      klass = allCreditText->m_Items[v11];
      if ( !klass )
LABEL_136:
        sub_1B8880C(klass, v8);
      klass = (System_String_o *)System_String__StartsWith(klass, (System_String_o *)StringLiteral_1886/*"@"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
        break;
      v13 = this->fields.allCreditText;
      if ( !v13 )
        goto LABEL_136;
      if ( v11 >= v13->max_length )
        goto LABEL_137;
      klass = v13->m_Items[v11];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23480/*"start"*/, 0LL);
      if ( ((unsigned __int8)klass & 1) != 0 )
        goto LABEL_65;
      v14 = this->fields.allCreditText;
      if ( !v14 )
        goto LABEL_136;
      if ( v11 >= v14->max_length )
        goto LABEL_137;
      klass = v14->m_Items[v11];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17160/*"begine_time"*/, 0LL);
      v15 = this->fields.allCreditText;
      if ( !v15 )
        goto LABEL_136;
      if ( v11 >= v15->max_length )
        goto LABEL_137;
      v16 = (char)klass;
      klass = v15->m_Items[v11];
      if ( !klass )
        goto LABEL_136;
      if ( (v16 & 1) != 0 )
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
        klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23048/*"scroll"*/, 0LL);
        v26 = this->fields.allCreditText;
        if ( !v26 )
          goto LABEL_136;
        if ( v11 >= v26->max_length )
          goto LABEL_137;
        v27 = (char)klass;
        klass = v26->m_Items[v11];
        if ( !klass )
          goto LABEL_136;
        if ( (v27 & 1) != 0 )
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
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18999/*"end"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
LABEL_67:
            v10 = 0;
            goto LABEL_68;
          }
          v41 = this->fields.allCreditText;
          if ( !v41 )
            goto LABEL_136;
          if ( v11 >= v41->max_length )
            goto LABEL_137;
          klass = v41->m_Items[v11];
          if ( !klass )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_24600/*"wait"*/, 0LL);
          v42 = this->fields.allCreditText;
          if ( !v42 )
            goto LABEL_136;
          if ( v11 >= v42->max_length )
            goto LABEL_137;
          v43 = (char)klass;
          klass = v42->m_Items[v11];
          if ( !klass )
            goto LABEL_136;
          if ( (v43 & 1) != 0 )
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
            klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18868/*"effect"*/, 0LL);
            v44 = this->fields.allCreditText;
            if ( !v44 )
              goto LABEL_136;
            if ( v11 >= v44->max_length )
              goto LABEL_137;
            v45 = (char)klass;
            klass = v44->m_Items[v11];
            if ( !klass )
              goto LABEL_136;
            if ( (v45 & 1) != 0 )
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
              v47 = System_Single__Parse((System_String_o *)klass[1].monitor, 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v47 / 10.0;
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
              v49 = this->fields.effectWave;
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
              if ( !v49 )
                goto LABEL_136;
              if ( v49->max_length <= 1 )
                goto LABEL_137;
              v49->m_Items[2] = (int)klass;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 2 )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse((System_String_o *)klass[2].klass, 0LL);
            }
            else
            {
              klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17174/*"bgm"*/, 0LL);
              v50 = this->fields.allCreditText;
              if ( !v50 )
                goto LABEL_136;
              if ( v11 >= v50->max_length )
                goto LABEL_137;
              v51 = (char)klass;
              klass = v50->m_Items[v11];
              if ( !klass )
                goto LABEL_136;
              if ( (v51 & 1) != 0 )
              {
                v52 = System_String__Replace_61726660(
                        klass,
                        (System_String_o *)StringLiteral_88/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (ServantStatusBattleListViewItem_c *)v52;
                sub_1B88554(p_bgmName, (int32_t)v52, v53, v54);
                klass = (System_String_o *)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( LODWORD(klass[1].klass) <= 1 )
                  goto LABEL_137;
                v57 = (struct System_String_o *)klass[1].fields;
                this->fields.bgmName = v57;
                sub_1B88554(p_bgmName, (int32_t)v57, v55, v56);
                klass = (System_String_o *)System_String__op_Inequality(
                                             this->fields.bgmName,
                                             (System_String_o *)StringLiteral_9337/*"NULL"*/,
                                             0LL);
                this->fields.isBgmPlay = (unsigned __int8)klass & 1;
              }
              else
              {
                klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18542/*"default_font_size"*/, 0LL);
                v58 = this->fields.allCreditText;
                if ( !v58 )
                  goto LABEL_136;
                if ( v11 >= v58->max_length )
                  goto LABEL_137;
                v59 = (char)klass;
                klass = v58->m_Items[v11];
                if ( !klass )
                  goto LABEL_136;
                if ( (v59 & 1) != 0 )
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
                  klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18541/*"default_clearance"*/, 0LL);
                  v60 = this->fields.allCreditText;
                  if ( !v60 )
                    goto LABEL_136;
                  if ( v11 >= v60->max_length )
                    goto LABEL_137;
                  v61 = (char)klass;
                  klass = v60->m_Items[v11];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v61 & 1) != 0 )
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
                                                 (System_String_o *)StringLiteral_18543/*"default_text_color"*/,
                                                 0LL);
                    if ( ((unsigned __int8)klass & 1) != 0 )
                    {
                      v62 = this->fields.allCreditText;
                      if ( !v62 )
                        goto LABEL_136;
                      if ( v11 >= v62->max_length )
                        goto LABEL_137;
                      klass = v62->m_Items[v11];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( LODWORD(klass[1].klass) <= 1 )
                        goto LABEL_137;
                      v65 = (ServantStatusBattleListViewItem_c *)klass[1].fields;
                      p_defaultTextColor->klass = v65;
                      sub_1B88554(p_defaultTextColor, (int32_t)v65, v63, v64);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v11 >= this->fields.txtLength )
        return;
    }
    if ( (v10 & 1) == 0 )
      goto LABEL_67;
    v17 = this->fields.allCreditText;
    if ( !v17 )
      goto LABEL_136;
    if ( v11 >= v17->max_length )
      goto LABEL_137;
    klass = v17->m_Items[v11];
    if ( !klass )
      goto LABEL_136;
    klass = System_String__Replace_61726660(
              klass,
              (System_String_o *)StringLiteral_88/*"\r"*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
    v20 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v20->fields._items;
    v22 = Method_System_Collections_Generic_List_string__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v20->fields._size;
    v24 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)klass,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v18, v19);
    }
    v28 = this->fields.allCreditText;
    if ( !v28 )
      goto LABEL_136;
    if ( v11 >= v28->max_length )
      goto LABEL_137;
    klass = v28->m_Items[v11];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6767/*"FontSize"*/, 0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      v30 = this->fields.allCreditText;
      if ( !v30 )
        goto LABEL_136;
      if ( v11 >= v30->max_length )
        goto LABEL_137;
      klass = v30->m_Items[v11];
      if ( !klass )
        goto LABEL_136;
      klass = (System_String_o *)System_String__Split(klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v31 = (int)klass[1].klass;
      v32 = klass;
      if ( v31 >= 1 )
      {
        v33 = 0;
        while ( v33 < v31 )
        {
          v34 = &v32->klass + (int)v33;
          v36 = (System_String_o *)v34[4];
          v35 = (ServantStatusBattleListViewItem_o *)(v34 + 4);
          klass = v36;
          if ( !v36 )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6767/*"FontSize"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
            if ( v33 >= LODWORD(v32[1].klass) )
              break;
            klass = (System_String_o *)v35->klass;
            if ( !v35->klass )
              goto LABEL_136;
            klass = System_String__Replace_61726660(
                      klass,
                      (System_String_o *)StringLiteral_1597/*"<"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v33 >= LODWORD(v32[1].klass) )
              break;
            v35->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B88554(v35, (int32_t)klass, v37, v38);
            if ( v33 >= LODWORD(v32[1].klass) )
              break;
            klass = (System_String_o *)v35->klass;
            if ( !v35->klass )
              goto LABEL_136;
            klass = System_String__Replace_61726660(
                      klass,
                      (System_String_o *)StringLiteral_1861/*">"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v33 >= LODWORD(v32[1].klass) )
              break;
            v35->klass = (ServantStatusBattleListViewItem_c *)klass;
            sub_1B88554(v35, (int32_t)klass, v39, v40);
            if ( v33 >= LODWORD(v32[1].klass) )
              break;
            klass = (System_String_o *)v35->klass;
            if ( !v35->klass )
              goto LABEL_136;
            klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( LODWORD(klass[1].klass) <= 1 )
              break;
            klass = (System_String_o *)System_Int32__Parse(*(System_String_o **)&klass[1].fields, 0LL);
            defaultFontSize = (int)klass;
          }
          v31 = (int)v32[1].klass;
          if ( (int)++v33 >= v31 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1B88814(klass, v8);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v10 = 1;
    goto LABEL_68;
  }
}


void __fastcall EndrolRootComponent__ClippingItem(
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

  if ( (byte_4A5EDF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5EDF3 = 1;
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
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                      - EndrolContentItem__get_contentHeight(item, v6)
                                      - this->fields.defaultClearance;
          return;
        }
      }
LABEL_10:
      sub_1B8880C(creditText, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  UnityEngine_GameObject_o *gameObject; // x22
  EndrolContentItem_o *v8; // x21
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x4
  int32_t lastObjectPosY; // w20

  if ( (byte_4A5EDF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5EDF2 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_46862524(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v8 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v10),
        !this->fields.creditText)
    || (v11 = (int)contentPref,
        v12 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v12,
                                                   v8,
                                                   v11,
                                                   v13),
        !v8) )
  {
LABEL_11:
    sub_1B8880C(contentPref, *(_QWORD *)&index);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v8, *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5EDF0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EDF0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5EDF7 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_5466/*"ENDROLL_TITLE"*/);
    sub_1B885B0(&StringLiteral_5465/*"ENDROLL_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_5463/*"ENDROLL_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5464/*"ENDROLL_DECIDE"*/);
    byte_4A5EDF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5466/*"ENDROLL_TITLE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5465/*"ENDROLL_MESSAGE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5464/*"ENDROLL_DECIDE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5463/*"ENDROLL_CANCEL"*/, 0LL);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v9, v10);
  CommonUI__OpenConfirmDialog_30493912((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4A5EDEC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_4A5EDEC = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
    sub_1B8880C(panel, method);
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
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4A5EDEE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_1B885B0(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_4A5EDEE = 1;
  }
  v7 = sub_1B887FC(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)endCallback, v12, v13);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v14, v15);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.allCreditText, (int32_t)v4, v5, v6),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1B8880C(this, assetData);
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
  Il2CppObject *Object_object__48635516; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_4A5EDED & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_TextAsset____76085368);
    this = (EndrolRootComponent_o *)sub_1B885B0(&StringLiteral_18327/*"credit"*/);
    byte_4A5EDED = 1;
  }
  if ( !data
    || (Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    data,
                                    (System_String_o *)StringLiteral_18327/*"credit"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_TextAsset____76085368),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__48635516, v8),
        !endCallback) )
  {
    sub_1B8880C(this, data);
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
  const MethodInfo *v9; // x4
  int v10; // w8
  EndrolRootComponent_o *v11; // x21
  EndrolRootComponent_o *v12; // x22
  unsigned int v13; // w23
  float v14; // s9
  float v15; // s8
  EndrolRootComponent_c **v16; // x29
  EndrolRootComponent_o **v17; // x29
  EndrolRootComponent_o *v18; // t1
  char v19; // w8
  char v20; // w8
  System_String_o *v21; // x0
  EndrolRootComponent_o *v22; // x21
  int32_t defaultFontSize; // w22
  unsigned int v24; // w0
  const MethodInfo *v25; // x5
  int m_CancellationTokenSource; // w8
  System_String_array *v27; // x23
  il2cpp_array_size_t v28; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v30; // w28
  char v31; // w8
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  unsigned int v38; // w8
  EndrolRootComponent_o *v39; // x1
  Il2CppClass **v40; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v42; // x6
  int v43; // w8
  int32_t v44; // w22
  EndrolRootComponent_o *v45; // x21
  EndrolRootComponent_o *v46; // x23
  unsigned int v47; // w27
  int klass; // w24
  EndrolRootComponent_c **v49; // x25
  EndrolRootComponent_o **v50; // x25
  EndrolRootComponent_o *v51; // t1
  char v52; // w8
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  char v57; // w8
  unsigned int v58; // w8
  EndrolRootComponent_o *v59; // x24
  System_String_o *v60; // x0
  System_String_o *v61; // x24
  intptr_t v62; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v64; // x2
  __int64 v65; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v68; // x0
  EndrolRootComponent_o *v69; // x2
  int32_t v70; // w3
  int32_t v71; // w1
  int32_t v72; // w4
  EndrolContentItem_o *v73; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v75; // x0
  bool v76; // w1
  const MethodInfo *v77; // x2
  EndrolContentItem_o *v78; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v79; // 0:w0.4
  UnityEngine_Vector2_o v80; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4A5EDF5 & 1) == 0 )
  {
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&UIWidget_Pivot_var);
    sub_1B885B0(&UIWidget_Pivot_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_1852/*"="*/);
    sub_1B885B0(&StringLiteral_19901/*"height"*/);
    sub_1B885B0(&StringLiteral_1597/*"<"*/);
    sub_1B885B0(&StringLiteral_21067/*"left"*/);
    sub_1B885B0(&StringLiteral_22941/*"right"*/);
    sub_1B885B0(&StringLiteral_372/*"\""*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_24697/*"width"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    this = (EndrolRootComponent_o *)sub_1B885B0(&StringLiteral_17795/*"center"*/);
    byte_4A5EDF5 = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
    if ( !this )
      goto LABEL_145;
    v22 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1597/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v22->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1861/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v78 = item;
          v24 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1B88658(string___TypeInfo, v24);
          m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
          v27 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v27 )
              goto LABEL_145;
            item = v78;
            if ( !v78 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v27->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v78, lastObjectPosY, v27, defaultFontSize, v8, v25);
            else
              EndrolContentItem__SetTripleColumnText(v78, lastObjectPosY, v27, defaultFontSize, v8, v25);
            return item;
          }
          v28 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v22->fields.endrolContentParent;
          v30 = 1;
          while ( v30 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1597/*"<"*/,
                                              0LL);
            if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
              break;
            v31 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v31 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1597/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B88554((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v32, v33);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1861/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1B88554((ServantStatusBattleListViewItem_o *)p_endrolContentParent, (int32_t)this, v34, v35);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1852/*"="*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
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
                                                (System_String_o *)StringLiteral_15812/*"["*/,
                                                0LL);
              v38 = (unsigned int)v22->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= v38 )
                  break;
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= v27->max_length )
                  break;
                v39 = *p_endrolContentParent;
              }
              else
              {
                if ( v30 >= v38 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_61707032(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= v27->max_length )
                  break;
                v39 = this;
              }
              v40 = &v27->obj.klass + (int)v28;
              v40[4] = (Il2CppClass *)v39;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v36, v37);
              ++v28;
            }
            m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
            ++v30;
            ++p_endrolContentParent;
            if ( (int)v30 >= m_CancellationTokenSource )
              goto LABEL_76;
          }
        }
      }
    }
LABEL_144:
    sub_1B88814(this, nextDispString);
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
      v10 = (int)this->fields.m_CancellationTokenSource;
      v11 = this;
      v12 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v10 < 1 )
      {
        v15 = 0.0;
        v14 = 0.0;
        if ( !item )
          goto LABEL_145;
      }
      else
      {
        v13 = 0;
        v14 = 0.0;
        v15 = 0.0;
        do
        {
          if ( v13 >= v10 )
            goto LABEL_144;
          v16 = &v11->klass + (int)v13;
          v18 = (EndrolRootComponent_o *)v16[4];
          v17 = (EndrolRootComponent_o **)(v16 + 4);
          this = v18;
          if ( !v18 )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1597/*"<"*/,
                                            0LL);
          if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v19 = (char)this;
          this = *v17;
          if ( !*v17 )
            goto LABEL_145;
          if ( (v19 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1597/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v17;
            if ( !*v17 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_372/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v12 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24697/*"width"*/,
                                              0LL);
            if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v20 = (char)this;
            this = *v17;
            if ( !*v17 )
              goto LABEL_145;
            if ( (v20 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v15 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_19901/*"height"*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v17;
                if ( !*v17 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v21 = System_String__Replace_61726660(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1861/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                v14 = System_Single__Parse(v21, 0LL);
              }
            }
          }
          v10 = (int)v11->fields.m_CancellationTokenSource;
          ++v13;
        }
        while ( (int)v13 < v10 );
        if ( !item )
          goto LABEL_145;
      }
      v80.fields.x = v15;
      v80.fields.y = v14;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v12, v80, v8, v9);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15812/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v68 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_61707032(defaultTextColor, (System_String_o *)v68, 0LL);
        }
        v69 = this;
        if ( item )
        {
          v70 = v8->fields.defaultFontSize;
          v71 = v8->fields.lastObjectPosY;
          v72 = 4;
          v73 = item;
LABEL_142:
          EndrolContentItem__SetText(v73, v71, (System_String_o *)v69, v70, v72, v8, v42);
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
  v43 = (int)this->fields.m_CancellationTokenSource;
  v44 = v8->fields.defaultFontSize;
  v45 = this;
  v46 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v43 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v71 = v8->fields.lastObjectPosY;
      v73 = item;
      v69 = v46;
      v70 = v44;
      v72 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1B8880C(this, nextDispString);
  }
  v47 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v47 >= v43 )
      goto LABEL_144;
    v49 = &v45->klass + (int)v47;
    v51 = (EndrolRootComponent_o *)v49[4];
    v50 = (EndrolRootComponent_o **)(v49 + 4);
    this = v51;
    if ( !v51 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1597/*"<"*/,
                                      0LL);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v52 = (char)this;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    if ( (v52 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15812/*"["*/,
                                        0LL);
      v58 = (unsigned int)v45->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v47 >= v58 )
          goto LABEL_144;
        v46 = *v50;
      }
      else
      {
        if ( v47 >= v58 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_61707032(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v50,
                                          0LL);
        v46 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1597/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v50 = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v50, (int32_t)this, v53, v54);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_61726660(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1861/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v50 = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v50, (int32_t)this, v55, v56);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1852/*"="*/,
                                      0LL);
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v57 = (char)this;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    if ( (v57 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v44 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17795/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21067/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v50;
    if ( !*v50 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22941/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v43 = (int)v45->fields.m_CancellationTokenSource;
    if ( (int)++v47 >= v43 )
      goto LABEL_140;
  }
  if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v50;
  if ( !*v50 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_61726036((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v59 = this;
  this = *v50;
  if ( !*v50 )
    goto LABEL_145;
  v60 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v61 = System_String__Concat_61707032((System_String_o *)v59, v60, 0LL);
  v62 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v79.fields.value = v62;
  TypeFromHandle = System_Type__GetTypeFromHandle(v79, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v61, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v64, v65);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1B88ACC(this);
  EndrolRootComponent__callbackConfirmDlg(v75, v76, v77);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float lastPostion; // s8
  System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v20; // [xsp+8h] [xbp-68h] BYREF
  int v21; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5EDEB & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_9971/*"OnUpdateScroll"*/);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_9948/*"OnScrollEnd"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5EDEB = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v4, 0LL);
  v21 = 0;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v21, v5, v6, v7);
  if ( !v4 )
    sub_1B8880C(v8, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_19656/*"from"*/,
    v8,
    v4->klass->vtable._24_Clear.methodPtr);
  v20 = lastPostion + 580.0;
  v13 = j_il2cpp_value_box_0(float_TypeInfo, &v20, v10, v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_23969/*"to"*/,
    v13,
    v4->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v14, v15, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_23929/*"time"*/,
    v17,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22281/*"onupdate"*/,
    StringLiteral_9971/*"OnUpdateScroll"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22273/*"oncomplete"*/,
    StringLiteral_9948/*"OnScrollEnd"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v4, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5EDEF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_EndrolRootComponent_EndFadeout__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EDEF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EDF1 & 1) == 0 )
  {
    sub_1B885B0(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_4A5EDF1 = 1;
  }
  v6 = sub_1B887FC(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callback, v7, v8);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall EndrolRootComponent__callbackConfirmDlg(
        EndrolRootComponent_o *this,
        bool isSkip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A5EDF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EDF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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
  if ( (byte_4A5EDFB & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5EDFB = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1B8880C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  char *_4__this; // x0
  struct EndrolRootComponent_o *v4; // x8
  System_String_o *bgmName; // x20
  const MethodInfo *v6; // x2
  int32_t i; // w20
  int32_t v8; // w3
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v10; // x20
  const MethodInfo *v11; // x2
  struct EndrolRootComponent_o *v12; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_4A5EDFA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_4A5EDFA = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol((EndrolRootComponent_o *)_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_23;
  if ( v4->fields.isBgmPlay )
  {
    bgmName = v4->fields.bgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playJingle(bgmName, 0LL);
    v4 = this->fields.__4__this;
    if ( !v4 )
      goto LABEL_23;
  }
  _4__this = (char *)v4->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, method);
  _4__this = (char *)this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText((EndrolRootComponent_o *)_4__this, i, v6);
    _4__this = (char *)this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  *((_QWORD *)_4__this + 20) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(_4__this + 160), (int32_t)endCallback, (int32_t)v6, v8);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10
    || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v12 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(_4__this, method);
  }
  startWaitTime = v12->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v15, v16);
  }
  v17 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v12, v17, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}