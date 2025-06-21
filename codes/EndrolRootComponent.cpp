void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B20710 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, method);
    byte_4B20710 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectWave, (int32_t)v3, v4, v5);
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

  if ( (byte_4B2070B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17914/*"column=3"*/, nextDispText);
    sub_1BCAFF8(&StringLiteral_17913/*"column=2"*/, v4);
    sub_1BCAFF8(&StringLiteral_1488/*"<"*/, v5);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v6);
    this = (EndrolRootComponent_o *)sub_1BCAFF8(&StringLiteral_7498/*"Image"*/, v7);
    byte_4B2070B = 1;
  }
  if ( !nextDispText )
    sub_1BCB254(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7498/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1760/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1488/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17913/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_17914/*"column=3"*/, 0LL) )
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
  const MethodInfo *v25; // x3
  System_String_o *klass; // x0
  __int64 v27; // x1
  __int64 v28; // x2
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
  const MethodInfo *v39; // x3
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
  CGThumbnailListItem_o *v55; // x25
  System_String_o *v56; // t1
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  struct System_String_array *v59; // x8
  struct System_String_array *v60; // x9
  char v61; // w8
  struct System_String_array *v62; // x9
  char v63; // w8
  System_String_o *fields; // x23
  float v65; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v67; // x25
  struct System_String_array *v68; // x9
  char v69; // w8
  System_String_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  struct System_String_o *v74; // x1
  struct System_String_array *v75; // x9
  char v76; // w8
  struct System_String_array *v77; // x9
  char v78; // w8
  struct System_String_array *v79; // x8
  const MethodInfo *v80; // x3
  CGThumbnailListItem_c *v81; // x1
  CGThumbnailListItem_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  CGThumbnailListItem_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4B2070F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_18709/*"effect"*/, v5);
    sub_1BCAFF8(&StringLiteral_6748/*"FontSize"*/, v6);
    sub_1BCAFF8(&StringLiteral_23007/*"scroll"*/, v7);
    sub_1BCAFF8(&StringLiteral_23440/*"start"*/, v8);
    sub_1BCAFF8(&StringLiteral_17006/*"bgm"*/, v9);
    sub_1BCAFF8(&StringLiteral_18389/*"default_text_color"*/, v10);
    sub_1BCAFF8(&StringLiteral_1488/*"<"*/, v11);
    sub_1BCAFF8(&StringLiteral_9294/*"NULL"*/, v12);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v13);
    sub_1BCAFF8(&StringLiteral_18841/*"end"*/, v14);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v15);
    sub_1BCAFF8(&StringLiteral_18388/*"default_font_size"*/, v16);
    sub_1BCAFF8(&StringLiteral_16991/*"begine_time"*/, v17);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v18);
    sub_1BCAFF8(&StringLiteral_86/*"\r"*/, v19);
    sub_1BCAFF8(&StringLiteral_1741/*">"*/, v20);
    sub_1BCAFF8(&StringLiteral_18387/*"default_clearance"*/, v21);
    byte_4B2070F = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v22;
  p_creditText = &this->fields.creditText;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.creditText, (int32_t)v22, v24, v25);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v30 = 0;
    v31 = 0;
    p_defaultTextColor = (CGThumbnailListItem_o *)&this->fields.defaultTextColor;
    p_bgmName = (CGThumbnailListItem_o *)&this->fields.bgmName;
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
        sub_1BCB254(klass, v27);
      klass = (System_String_o *)System_String__StartsWith(klass, (System_String_o *)StringLiteral_1760/*"@"*/, 0LL);
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
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23440/*"start"*/, 0LL);
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
      klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_16991/*"begine_time"*/, 0LL);
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
        klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_23007/*"scroll"*/, 0LL);
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
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18841/*"end"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
LABEL_67:
            v30 = 0;
            goto LABEL_68;
          }
          v59 = this->fields.allCreditText;
          if ( !v59 )
            goto LABEL_136;
          if ( v31 >= v59->max_length )
            goto LABEL_137;
          klass = v59->m_Items[v31];
          if ( !klass )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL);
          v60 = this->fields.allCreditText;
          if ( !v60 )
            goto LABEL_136;
          if ( v31 >= v60->max_length )
            goto LABEL_137;
          v61 = (char)klass;
          klass = v60->m_Items[v31];
          if ( !klass )
            goto LABEL_136;
          if ( (v61 & 1) != 0 )
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
            klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18709/*"effect"*/, 0LL);
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
              fields = (System_String_o *)klass[1].fields;
              if ( !fields )
                goto LABEL_136;
              klass = (System_String_o *)System_String__Split(*(System_String_o **)&klass[1].fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !LODWORD(klass[1].klass) )
                goto LABEL_137;
              v65 = System_Single__Parse((System_String_o *)klass[1].monitor, 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v65 / 10.0;
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
              v67 = this->fields.effectWave;
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
              if ( !v67 )
                goto LABEL_136;
              if ( v67->max_length <= 1 )
                goto LABEL_137;
              v67->m_Items[2] = (int)klass;
              klass = (System_String_o *)System_String__Split(fields, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( LODWORD(klass[1].klass) <= 2 )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse((System_String_o *)klass[2].klass, 0LL);
            }
            else
            {
              klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_17006/*"bgm"*/, 0LL);
              v68 = this->fields.allCreditText;
              if ( !v68 )
                goto LABEL_136;
              if ( v31 >= v68->max_length )
                goto LABEL_137;
              v69 = (char)klass;
              klass = v68->m_Items[v31];
              if ( !klass )
                goto LABEL_136;
              if ( (v69 & 1) != 0 )
              {
                v70 = System_String__Replace_62496972(
                        klass,
                        (System_String_o *)StringLiteral_86/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (CGThumbnailListItem_c *)v70;
                sub_1BCAF9C(p_bgmName, (int32_t)v70, v71, v72);
                klass = (System_String_o *)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( LODWORD(klass[1].klass) <= 1 )
                  goto LABEL_137;
                v74 = (struct System_String_o *)klass[1].fields;
                this->fields.bgmName = v74;
                sub_1BCAF9C(p_bgmName, (int32_t)v74, v28, v73);
                klass = (System_String_o *)System_String__op_Inequality(
                                             this->fields.bgmName,
                                             (System_String_o *)StringLiteral_9294/*"NULL"*/,
                                             0LL);
                this->fields.isBgmPlay = (unsigned __int8)klass & 1;
              }
              else
              {
                klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18388/*"default_font_size"*/, 0LL);
                v75 = this->fields.allCreditText;
                if ( !v75 )
                  goto LABEL_136;
                if ( v31 >= v75->max_length )
                  goto LABEL_137;
                v76 = (char)klass;
                klass = v75->m_Items[v31];
                if ( !klass )
                  goto LABEL_136;
                if ( (v76 & 1) != 0 )
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
                  klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_18387/*"default_clearance"*/, 0LL);
                  v77 = this->fields.allCreditText;
                  if ( !v77 )
                    goto LABEL_136;
                  if ( v31 >= v77->max_length )
                    goto LABEL_137;
                  v78 = (char)klass;
                  klass = v77->m_Items[v31];
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
                    this->fields.defaultClearance = (int)klass;
                  }
                  else
                  {
                    klass = (System_String_o *)System_String__Contains(
                                                 klass,
                                                 (System_String_o *)StringLiteral_18389/*"default_text_color"*/,
                                                 0LL);
                    if ( ((unsigned __int8)klass & 1) != 0 )
                    {
                      v79 = this->fields.allCreditText;
                      if ( !v79 )
                        goto LABEL_136;
                      if ( v31 >= v79->max_length )
                        goto LABEL_137;
                      klass = v79->m_Items[v31];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (System_String_o *)System_String__Split(klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( LODWORD(klass[1].klass) <= 1 )
                        goto LABEL_137;
                      v81 = (CGThumbnailListItem_c *)klass[1].fields;
                      p_defaultTextColor->klass = v81;
                      sub_1BCAF9C(p_defaultTextColor, (int32_t)v81, v28, v80);
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
    klass = System_String__Replace_62496972(
              klass,
              (System_String_o *)StringLiteral_86/*"\r"*/,
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
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &items->obj.klass + size;
      v40->fields._size = size + 1;
      v45[4] = (Il2CppClass *)v44;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v44, v38, v39);
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
    klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6748/*"FontSize"*/, 0LL);
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
          v55 = (CGThumbnailListItem_o *)(v54 + 4);
          klass = v56;
          if ( !v56 )
            goto LABEL_136;
          klass = (System_String_o *)System_String__Contains(klass, (System_String_o *)StringLiteral_6748/*"FontSize"*/, 0LL);
          if ( ((unsigned __int8)klass & 1) != 0 )
          {
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            klass = (System_String_o *)v55->klass;
            if ( !v55->klass )
              goto LABEL_136;
            klass = System_String__Replace_62496972(
                      klass,
                      (System_String_o *)StringLiteral_1488/*"<"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            v55->klass = (CGThumbnailListItem_c *)klass;
            sub_1BCAF9C(v55, (int32_t)klass, v28, v57);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            klass = (System_String_o *)v55->klass;
            if ( !v55->klass )
              goto LABEL_136;
            klass = System_String__Replace_62496972(
                      klass,
                      (System_String_o *)StringLiteral_1741/*">"*/,
                      (System_String_o *)StringLiteral_1/*""*/,
                      0LL);
            if ( v53 >= LODWORD(v52[1].klass) )
              break;
            v55->klass = (CGThumbnailListItem_c *)klass;
            sub_1BCAF9C(v55, (int32_t)klass, v28, v58);
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
        sub_1BCB25C(klass, v27, v28);
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
  const MethodInfo *v7; // x1
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w0
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x4
  int32_t lastObjectPosY; // w21

  if ( (byte_4B2070A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_4B2070A = 1;
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
           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1BCB254(creditText, v7);
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

  if ( (byte_4B20709 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1BCAFF8(&NGUITools_TypeInfo, v6);
    byte_4B20709 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_48542324(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v10 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v12),
        !this->fields.creditText)
    || (v13 = (int)contentPref,
        v14 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v14,
                                                   v10,
                                                   v13,
                                                   v15),
        !v10) )
  {
LABEL_11:
    sub_1BCB254(contentPref, *(_QWORD *)&index);
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

  if ( (byte_4B20707 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B20707 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
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

  if ( (byte_4B2070E & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_5387/*"ENDROLL_TITLE"*/, v6);
    sub_1BCAFF8(&StringLiteral_5386/*"ENDROLL_MESSAGE"*/, v7);
    sub_1BCAFF8(&StringLiteral_5384/*"ENDROLL_CANCEL"*/, v8);
    sub_1BCAFF8(&StringLiteral_5385/*"ENDROLL_DECIDE"*/, v9);
    byte_4B2070E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5387/*"ENDROLL_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5386/*"ENDROLL_MESSAGE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5385/*"ENDROLL_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5384/*"ENDROLL_CANCEL"*/, 0LL);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1BCB254(v16, v17);
  CommonUI__OpenConfirmDialog_30763412((CommonUI_o *)Instance, v11, v12, v13, v14, v15, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float endWaitTime; // s8
  System_Action_o *v5; // x20
  EndrolRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4B20703 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__, v3);
    byte_4B20703 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v8 = EndrolRootComponent__Wait(v6, endWaitTime, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
    sub_1BCB254(panel, method);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4B20705 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, assetData);
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, v7);
    sub_1BCAFF8(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, v8);
    sub_1BCAFF8(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo, v9);
    byte_4B20705 = 1;
  }
  v10 = sub_1BCB244(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)endCallback, v15, v16);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
  const MethodInfo *v6; // x3
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0LL)) == 0LL)
    || (v4 = System_String__Split((System_String_o *)this, 0xAu, 0, 0LL),
        v3->fields.allCreditText = v4,
        sub_1BCAF9C((CGThumbnailListItem_o *)&v3->fields.allCreditText, (int32_t)v4, v5, v6),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1BCB254(this, assetData);
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
  Il2CppObject *Object_object__50315216; // x0
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4B20704 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_TextAsset____76915360, data);
    this = (EndrolRootComponent_o *)sub_1BCAFF8(&StringLiteral_18175/*"credit"*/, v7);
    byte_4B20704 = 1;
  }
  if ( !data
    || (Object_object__50315216 = AssetData__GetObject_object__50315216(
                                    data,
                                    (System_String_o *)StringLiteral_18175/*"credit"*/,
                                    (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_TextAsset____76915360),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__50315216, v9),
        !endCallback) )
  {
    sub_1BCB254(this, data);
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
  __int64 v25; // x2
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
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  unsigned int v52; // w8
  EndrolRootComponent_o *v53; // x1
  Il2CppClass **v54; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v56; // x6
  int v57; // w8
  int32_t v58; // w22
  EndrolRootComponent_o *v59; // x21
  EndrolRootComponent_o *v60; // x23
  unsigned int v61; // w27
  int klass; // w24
  EndrolRootComponent_c **v63; // x25
  EndrolRootComponent_o **v64; // x25
  EndrolRootComponent_o *v65; // t1
  char v66; // w8
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  char v69; // w8
  unsigned int v70; // w8
  EndrolRootComponent_o *v71; // x24
  System_String_o *v72; // x0
  System_String_o *v73; // x24
  intptr_t v74; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v76; // x2
  __int64 v77; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v80; // x0
  EndrolRootComponent_o *v81; // x2
  int32_t v82; // w3
  int32_t v83; // w1
  int32_t v84; // w4
  EndrolContentItem_o *v85; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v87; // x0
  bool v88; // w1
  const MethodInfo *v89; // x2
  EndrolContentItem_o *v90; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v91; // 0:w0.4
  UnityEngine_Vector2_o v92; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4B2070C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Enum_TypeInfo, nextDispString);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_1BCAFF8(&UIWidget_Pivot_var, v10);
    sub_1BCAFF8(&UIWidget_Pivot_TypeInfo, v11);
    sub_1BCAFF8(&string___TypeInfo, v12);
    sub_1BCAFF8(&System_Type_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_1735/*"="*/, v14);
    sub_1BCAFF8(&StringLiteral_19773/*"height"*/, v15);
    sub_1BCAFF8(&StringLiteral_1488/*"<"*/, v16);
    sub_1BCAFF8(&StringLiteral_21006/*"left"*/, v17);
    sub_1BCAFF8(&StringLiteral_22907/*"right"*/, v18);
    sub_1BCAFF8(&StringLiteral_340/*"\""*/, v19);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    sub_1BCAFF8(&StringLiteral_24601/*"width"*/, v22);
    sub_1BCAFF8(&StringLiteral_1741/*">"*/, v23);
    this = (EndrolRootComponent_o *)sub_1BCAFF8(&StringLiteral_17646/*"center"*/, v24);
    byte_4B2070C = 1;
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
      this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1488/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v39->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v39->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1741/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v90 = item;
          v41 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1BCB0A0(string___TypeInfo, v41);
          m_CancellationTokenSource = (int)v39->fields.m_CancellationTokenSource;
          v44 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v44 )
              goto LABEL_145;
            item = v90;
            if ( !v90 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v44->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v90, lastObjectPosY, v44, defaultFontSize, v8, v42);
            else
              EndrolContentItem__SetTripleColumnText(v90, lastObjectPosY, v44, defaultFontSize, v8, v42);
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
                                              (System_String_o *)StringLiteral_1488/*"<"*/,
                                              0LL);
            if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
              break;
            v48 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v48 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1488/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1BCAF9C((CGThumbnailListItem_o *)p_endrolContentParent, (int32_t)this, v25, v49);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1741/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1BCAF9C((CGThumbnailListItem_o *)p_endrolContentParent, (int32_t)this, v25, v50);
              if ( v47 >= LODWORD(v39->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1735/*"="*/,
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
                                                (System_String_o *)StringLiteral_15670/*"["*/,
                                                0LL);
              v52 = (unsigned int)v39->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v47 >= v52 )
                  break;
                if ( !v44 )
                  goto LABEL_145;
                if ( v45 >= v44->max_length )
                  break;
                v53 = *p_endrolContentParent;
              }
              else
              {
                if ( v47 >= v52 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_62450424(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v44 )
                  goto LABEL_145;
                if ( v45 >= v44->max_length )
                  break;
                v53 = this;
              }
              v54 = &v44->obj.klass + (int)v45;
              v54[4] = (Il2CppClass *)v53;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v53, v25, v51);
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
    sub_1BCB25C(this, nextDispString, v25);
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
                                            (System_String_o *)StringLiteral_1488/*"<"*/,
                                            0LL);
          if ( v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v36 = (char)this;
          this = *v34;
          if ( !*v34 )
            goto LABEL_145;
          if ( (v36 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1488/*"<"*/,
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
            this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_340/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v29 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24601/*"width"*/,
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
                                                (System_String_o *)StringLiteral_19773/*"height"*/,
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
                v38 = System_String__Replace_62496972(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1741/*">"*/,
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
      v92.fields.x = v32;
      v92.fields.y = v31;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v29, v92, v8, v26);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15670/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v80 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_62450424(defaultTextColor, (System_String_o *)v80, 0LL);
        }
        v81 = this;
        if ( item )
        {
          v82 = v8->fields.defaultFontSize;
          v83 = v8->fields.lastObjectPosY;
          v84 = 4;
          v85 = item;
LABEL_142:
          EndrolContentItem__SetText(v85, v83, (System_String_o *)v81, v82, v84, v8, v56);
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
  v57 = (int)this->fields.m_CancellationTokenSource;
  v58 = v8->fields.defaultFontSize;
  v59 = this;
  v60 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v57 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v83 = v8->fields.lastObjectPosY;
      v85 = item;
      v81 = v60;
      v82 = v58;
      v84 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1BCB254(this, nextDispString);
  }
  v61 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v61 >= v57 )
      goto LABEL_144;
    v63 = &v59->klass + (int)v61;
    v65 = (EndrolRootComponent_o *)v63[4];
    v64 = (EndrolRootComponent_o **)(v63 + 4);
    this = v65;
    if ( !v65 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1488/*"<"*/,
                                      0LL);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v66 = (char)this;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    if ( (v66 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15670/*"["*/,
                                        0LL);
      v70 = (unsigned int)v59->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v61 >= v70 )
          goto LABEL_144;
        v60 = *v64;
      }
      else
      {
        if ( v61 >= v70 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_62450424(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v64,
                                          0LL);
        v60 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1488/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v64 = this;
    sub_1BCAF9C((CGThumbnailListItem_o *)v64, (int32_t)this, v25, v67);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_62496972(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1741/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v64 = this;
    sub_1BCAF9C((CGThumbnailListItem_o *)v64, (int32_t)this, v25, v68);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1735/*"="*/,
                                      0LL);
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v69 = (char)this;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    if ( (v69 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v58 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17646/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21006/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v64;
    if ( !*v64 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_22907/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v57 = (int)v59->fields.m_CancellationTokenSource;
    if ( (int)++v61 >= v57 )
      goto LABEL_140;
  }
  if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v64;
  if ( !*v64 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_62496348((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v71 = this;
  this = *v64;
  if ( !*v64 )
    goto LABEL_145;
  v72 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v73 = System_String__Concat_62450424((System_String_o *)v71, v72, 0LL);
  v74 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v91.fields.value = v74;
  TypeFromHandle = System_Type__GetTypeFromHandle(v91, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v73, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v76, v77);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1BCB514(this);
  EndrolRootComponent__callbackConfirmDlg(v87, v88, v89);
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

  if ( (byte_4B20702 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v3);
    sub_1BCAFF8(&float_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_9901/*"OnUpdateScroll"*/, v5);
    sub_1BCAFF8(&StringLiteral_19518/*"from"*/, v6);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v7);
    sub_1BCAFF8(&StringLiteral_22237/*"onupdate"*/, v8);
    sub_1BCAFF8(&StringLiteral_9877/*"OnScrollEnd"*/, v9);
    sub_1BCAFF8(&StringLiteral_23894/*"to"*/, v10);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v11);
    sub_1BCAFF8(&iTween_TypeInfo, v12);
    byte_4B20702 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v14 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v14, 0LL);
  v31 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v15, v16, v17);
  if ( !v14 )
    sub_1BCB254(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_19518/*"from"*/,
    v18,
    v14->klass->vtable._23_Clear.methodPtr);
  v30 = lastPostion + 580.0;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_23894/*"to"*/,
    v23,
    v14->klass->vtable._23_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_23855/*"time"*/,
    v27,
    v14->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_22237/*"onupdate"*/,
    StringLiteral_9901/*"OnUpdateScroll"*/,
    v14->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_22229/*"oncomplete"*/,
    StringLiteral_9877/*"OnScrollEnd"*/,
    v14->klass->vtable._23_Clear.methodPtr);
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

  if ( (byte_4B20706 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B20706 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v8 )
    sub_1BCB254(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B20708 & 1) == 0 )
  {
    sub_1BCAFF8(&EndrolRootComponent__Wait_d__33_TypeInfo, callback);
    byte_4B20708 = 1;
  }
  v6 = sub_1BCB244(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callback, v7, v8);
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

  if ( (byte_4B2070D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_4B2070D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
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
  const MethodInfo *v7; // x3
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4B20712 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B20712 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1BCB254(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  const MethodInfo *v10; // x2
  int32_t i; // w20
  const MethodInfo *v12; // x3
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v14; // x20
  const MethodInfo *v15; // x2
  struct EndrolRootComponent_o *v16; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_4B20711 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&SoundManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, v6);
    byte_4B20711 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol((EndrolRootComponent_o *)_4__this, method);
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
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, method);
  _4__this = (char *)this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText((EndrolRootComponent_o *)_4__this, i, v10);
    _4__this = (char *)this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  *((_QWORD *)_4__this + 20) = endCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(_4__this + 160), (int32_t)endCallback, (int32_t)v10, v12);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14
    || (CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v16 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1BCB254(_4__this, method);
  }
  startWaitTime = v16->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v19, v20);
  }
  v21 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v16, v21, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}