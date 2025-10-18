void EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0

  if ( (byte_4C3D185 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C3D185 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.effectWave = v3;
  sub_1C36FFC(&this->fields.effectWave, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_4C3D180 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18066/*"column=3"*/);
    sub_1C37058(&StringLiteral_18065/*"column=2"*/);
    sub_1C37058(&StringLiteral_1497/*"<"*/);
    sub_1C37058(&StringLiteral_1769/*"@"*/);
    this = (EndrolRootComponent_o *)sub_1C37058(&StringLiteral_7567/*"Image"*/);
    byte_4C3D180 = 1;
  }
  if ( !nextDispText )
    sub_1C372B4(this);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7567/*"Image"*/, 0) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1769/*"@"*/, 0) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1497/*"<"*/, 0) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18065/*"column=2"*/, 0) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18066/*"column=3"*/, 0) )
    return 5;
  return 4;
}


void EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  __int64 v5; // x0
  int32_t txtLength; // w8
  char v7; // w24
  unsigned int v8; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v10; // x8
  struct System_String_array *v11; // x8
  struct System_String_array *v12; // x9
  char v13; // w8
  struct System_String_array *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  __int64 v19; // x1
  Il2CppClass **v20; // x0
  struct System_String_array *v21; // x9
  char v22; // w8
  struct System_String_array *v23; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v25; // x8
  int v26; // w8
  __int64 v27; // x23
  unsigned int v28; // w27
  __int64 v29; // x25
  __int64 *v30; // x25
  __int64 v31; // t1
  struct System_String_array *v32; // x8
  struct System_String_array *v33; // x9
  char v34; // w8
  struct System_String_array *v35; // x9
  char v36; // w8
  System_String_o *v37; // x23
  float v38; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v40; // x25
  struct System_String_array *v41; // x9
  char v42; // w8
  System_String_o *v43; // x0
  struct System_String_o *v44; // x1
  struct System_String_array *v45; // x9
  char v46; // w8
  struct System_String_array *v47; // x9
  char v48; // w8
  struct System_String_array *v49; // x8
  struct System_String_o *v50; // x1
  struct System_String_o **p_defaultTextColor; // [xsp+8h] [xbp-78h]
  struct System_String_o **p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4C3D184 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&StringLiteral_18874/*"effect"*/);
    sub_1C37058(&StringLiteral_6800/*"FontSize"*/);
    sub_1C37058(&StringLiteral_23217/*"scroll"*/);
    sub_1C37058(&StringLiteral_23651/*"start"*/);
    sub_1C37058(&StringLiteral_17146/*"bgm"*/);
    sub_1C37058(&StringLiteral_18546/*"default_text_color"*/);
    sub_1C37058(&StringLiteral_1497/*"<"*/);
    sub_1C37058(&StringLiteral_9369/*"NULL"*/);
    sub_1C37058(&StringLiteral_24718/*"wait"*/);
    sub_1C37058(&StringLiteral_19007/*"end"*/);
    sub_1C37058(&StringLiteral_1769/*"@"*/);
    sub_1C37058(&StringLiteral_18545/*"default_font_size"*/);
    sub_1C37058(&StringLiteral_17131/*"begine_time"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_86/*"\r"*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    sub_1C37058(&StringLiteral_18544/*"default_clearance"*/);
    byte_4C3D184 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  p_creditText = &this->fields.creditText;
  v5 = sub_1C36FFC(&this->fields.creditText, v3);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v7 = 0;
    v8 = 0;
    p_defaultTextColor = &this->fields.defaultTextColor;
    p_bgmName = &this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v8 >= LODWORD(allCreditText->max_length) )
        goto LABEL_137;
      v5 = (__int64)allCreditText->m_Items[v8];
      if ( !v5 )
LABEL_136:
        sub_1C372B4(v5);
      v5 = System_String__StartsWith((System_String_o *)v5, (System_String_o *)StringLiteral_1769/*"@"*/, 0);
      if ( (v5 & 1) == 0 )
        break;
      v10 = this->fields.allCreditText;
      if ( !v10 )
        goto LABEL_136;
      if ( v8 >= LODWORD(v10->max_length) )
        goto LABEL_137;
      v5 = (__int64)v10->m_Items[v8];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23651/*"start"*/, 0);
      if ( (v5 & 1) != 0 )
        goto LABEL_65;
      v11 = this->fields.allCreditText;
      if ( !v11 )
        goto LABEL_136;
      if ( v8 >= LODWORD(v11->max_length) )
        goto LABEL_137;
      v5 = (__int64)v11->m_Items[v8];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17131/*"begine_time"*/, 0);
      v12 = this->fields.allCreditText;
      if ( !v12 )
        goto LABEL_136;
      if ( v8 >= LODWORD(v12->max_length) )
        goto LABEL_137;
      v13 = v5;
      v5 = (__int64)v12->m_Items[v8];
      if ( !v5 )
        goto LABEL_136;
      if ( (v13 & 1) != 0 )
      {
        v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
        if ( !v5 )
          goto LABEL_136;
        if ( *(_DWORD *)(v5 + 24) <= 1u )
          goto LABEL_137;
        this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(v5 + 40), 0) / 10.0;
      }
      else
      {
        v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23217/*"scroll"*/, 0);
        v21 = this->fields.allCreditText;
        if ( !v21 )
          goto LABEL_136;
        if ( v8 >= LODWORD(v21->max_length) )
          goto LABEL_137;
        v22 = v5;
        v5 = (__int64)v21->m_Items[v8];
        if ( !v5 )
          goto LABEL_136;
        if ( (v22 & 1) != 0 )
        {
          v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
          if ( !v5 )
            goto LABEL_136;
          if ( *(_DWORD *)(v5 + 24) <= 1u )
            goto LABEL_137;
          this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(v5 + 40), 0) / 10.0;
        }
        else
        {
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_19007/*"end"*/, 0);
          if ( (v5 & 1) != 0 )
          {
LABEL_67:
            v7 = 0;
            goto LABEL_68;
          }
          v32 = this->fields.allCreditText;
          if ( !v32 )
            goto LABEL_136;
          if ( v8 >= LODWORD(v32->max_length) )
            goto LABEL_137;
          v5 = (__int64)v32->m_Items[v8];
          if ( !v5 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_24718/*"wait"*/, 0);
          v33 = this->fields.allCreditText;
          if ( !v33 )
            goto LABEL_136;
          if ( v8 >= LODWORD(v33->max_length) )
            goto LABEL_137;
          v34 = v5;
          v5 = (__int64)v33->m_Items[v8];
          if ( !v5 )
            goto LABEL_136;
          if ( (v34 & 1) != 0 )
          {
            v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
            if ( !v5 )
              goto LABEL_136;
            if ( *(_DWORD *)(v5 + 24) <= 1u )
              goto LABEL_137;
            this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(v5 + 40), 0) / 10.0;
          }
          else
          {
            v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18874/*"effect"*/, 0);
            v35 = this->fields.allCreditText;
            if ( !v35 )
              goto LABEL_136;
            if ( v8 >= LODWORD(v35->max_length) )
              goto LABEL_137;
            v36 = v5;
            v5 = (__int64)v35->m_Items[v8];
            if ( !v5 )
              goto LABEL_136;
            if ( (v36 & 1) != 0 )
            {
              v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v37 = *(System_String_o **)(v5 + 40);
              if ( !v37 )
                goto LABEL_136;
              v5 = (__int64)System_String__Split(*(System_String_o **)(v5 + 40), 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( !*(_DWORD *)(v5 + 24) )
                goto LABEL_137;
              v38 = System_Single__Parse(*(System_String_o **)(v5 + 32), 0);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v38 / 10.0;
              v5 = (__int64)System_String__Split(v37, 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v5 = *(_QWORD *)(v5 + 40);
              if ( !v5 )
                goto LABEL_136;
              v5 = (__int64)System_String__Split((System_String_o *)v5, 0x2Du, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( !*(_DWORD *)(v5 + 24) )
                goto LABEL_137;
              v5 = System_Int32__Parse(*(System_String_o **)(v5 + 32), 0);
              if ( !effectWave )
                goto LABEL_136;
              if ( !LODWORD(effectWave->max_length) )
                goto LABEL_137;
              effectWave->m_Items[0] = v5;
              v40 = this->fields.effectWave;
              v5 = (__int64)System_String__Split(v37, 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v5 = *(_QWORD *)(v5 + 40);
              if ( !v5 )
                goto LABEL_136;
              v5 = (__int64)System_String__Split((System_String_o *)v5, 0x2Du, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
              if ( !v40 )
                goto LABEL_136;
              if ( LODWORD(v40->max_length) <= 1 )
                goto LABEL_137;
              v40->m_Items[1] = v5;
              v5 = (__int64)System_String__Split(v37, 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v5 + 48), 0);
            }
            else
            {
              v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17146/*"bgm"*/, 0);
              v41 = this->fields.allCreditText;
              if ( !v41 )
                goto LABEL_136;
              if ( v8 >= LODWORD(v41->max_length) )
                goto LABEL_137;
              v42 = v5;
              v5 = (__int64)v41->m_Items[v8];
              if ( !v5 )
                goto LABEL_136;
              if ( (v42 & 1) != 0 )
              {
                v43 = System_String__Replace_63608204(
                        (System_String_o *)v5,
                        (System_String_o *)StringLiteral_86/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
                *p_bgmName = v43;
                sub_1C36FFC(p_bgmName, v43);
                v5 = (__int64)*p_bgmName;
                if ( !*p_bgmName )
                  goto LABEL_136;
                v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                if ( !v5 )
                  goto LABEL_136;
                if ( *(_DWORD *)(v5 + 24) <= 1u )
                  goto LABEL_137;
                v44 = *(struct System_String_o **)(v5 + 40);
                this->fields.bgmName = v44;
                sub_1C36FFC(p_bgmName, v44);
                v5 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9369/*"NULL"*/, 0);
                this->fields.isBgmPlay = v5 & 1;
              }
              else
              {
                v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18545/*"default_font_size"*/, 0);
                v45 = this->fields.allCreditText;
                if ( !v45 )
                  goto LABEL_136;
                if ( v8 >= LODWORD(v45->max_length) )
                  goto LABEL_137;
                v46 = v5;
                v5 = (__int64)v45->m_Items[v8];
                if ( !v5 )
                  goto LABEL_136;
                if ( (v46 & 1) != 0 )
                {
                  v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                  if ( !v5 )
                    goto LABEL_136;
                  if ( *(_DWORD *)(v5 + 24) <= 1u )
                    goto LABEL_137;
                  v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
                  this->fields.defaultFontSize = v5;
                }
                else
                {
                  v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18544/*"default_clearance"*/, 0);
                  v47 = this->fields.allCreditText;
                  if ( !v47 )
                    goto LABEL_136;
                  if ( v8 >= LODWORD(v47->max_length) )
                    goto LABEL_137;
                  v48 = v5;
                  v5 = (__int64)v47->m_Items[v8];
                  if ( !v5 )
                    goto LABEL_136;
                  if ( (v48 & 1) != 0 )
                  {
                    v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                    if ( !v5 )
                      goto LABEL_136;
                    if ( *(_DWORD *)(v5 + 24) <= 1u )
                      goto LABEL_137;
                    v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
                    this->fields.defaultClearance = v5;
                  }
                  else
                  {
                    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18546/*"default_text_color"*/, 0);
                    if ( (v5 & 1) != 0 )
                    {
                      v49 = this->fields.allCreditText;
                      if ( !v49 )
                        goto LABEL_136;
                      if ( v8 >= LODWORD(v49->max_length) )
                        goto LABEL_137;
                      v5 = (__int64)v49->m_Items[v8];
                      if ( !v5 )
                        goto LABEL_136;
                      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                      if ( !v5 )
                        goto LABEL_136;
                      if ( *(_DWORD *)(v5 + 24) <= 1u )
                        goto LABEL_137;
                      v50 = *(struct System_String_o **)(v5 + 40);
                      *p_defaultTextColor = v50;
                      v5 = sub_1C36FFC(p_defaultTextColor, v50);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v8 >= this->fields.txtLength )
        return;
    }
    if ( (v7 & 1) == 0 )
      goto LABEL_67;
    v14 = this->fields.allCreditText;
    if ( !v14 )
      goto LABEL_136;
    if ( v8 >= LODWORD(v14->max_length) )
      goto LABEL_137;
    v5 = (__int64)v14->m_Items[v8];
    if ( !v5 )
      goto LABEL_136;
    v5 = (__int64)System_String__Replace_63608204(
                    (System_String_o *)v5,
                    (System_String_o *)StringLiteral_86/*"\r"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
    v15 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v15->fields._items;
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++v15->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v15->fields._size;
    v19 = v5;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v5,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v19;
      v5 = sub_1C36FFC(v20 + 4, v19);
    }
    v23 = this->fields.allCreditText;
    if ( !v23 )
      goto LABEL_136;
    if ( v8 >= LODWORD(v23->max_length) )
      goto LABEL_137;
    v5 = (__int64)v23->m_Items[v8];
    if ( !v5 )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6800/*"FontSize"*/, 0);
    if ( (v5 & 1) != 0 )
    {
      v25 = this->fields.allCreditText;
      if ( !v25 )
        goto LABEL_136;
      if ( v8 >= LODWORD(v25->max_length) )
        goto LABEL_137;
      v5 = (__int64)v25->m_Items[v8];
      if ( !v5 )
        goto LABEL_136;
      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x7Eu, 0, 0);
      if ( !v5 )
        goto LABEL_136;
      v26 = *(_DWORD *)(v5 + 24);
      v27 = v5;
      if ( v26 >= 1 )
      {
        v28 = 0;
        while ( v28 < v26 )
        {
          v29 = v27 + 8LL * (int)v28;
          v31 = *(_QWORD *)(v29 + 32);
          v30 = (__int64 *)(v29 + 32);
          v5 = v31;
          if ( !v31 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6800/*"FontSize"*/, 0);
          if ( (v5 & 1) != 0 )
          {
            if ( v28 >= *(_DWORD *)(v27 + 24) )
              break;
            v5 = *v30;
            if ( !*v30 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_63608204(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1497/*"<"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v28 >= *(_DWORD *)(v27 + 24) )
              break;
            *v30 = v5;
            v5 = sub_1C36FFC(v30, v5);
            if ( v28 >= *(_DWORD *)(v27 + 24) )
              break;
            v5 = *v30;
            if ( !*v30 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_63608204(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1750/*">"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v28 >= *(_DWORD *)(v27 + 24) )
              break;
            *v30 = v5;
            v5 = sub_1C36FFC(v30, v5);
            if ( v28 >= *(_DWORD *)(v27 + 24) )
              break;
            v5 = *v30;
            if ( !*v30 )
              goto LABEL_136;
            v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
            if ( !v5 )
              goto LABEL_136;
            if ( *(_DWORD *)(v5 + 24) <= 1u )
              break;
            v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
            defaultFontSize = v5;
          }
          v26 = *(_DWORD *)(v27 + 24);
          if ( (int)++v28 >= v26 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1C372BC(v5);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v7 = 1;
    goto LABEL_68;
  }
}


void EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *creditText; // x0
  int32_t v6; // w1
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w0
  int32_t v10; // w21
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x1
  int32_t lastObjectPosY; // w21

  if ( (byte_4C3D17F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C3D17F = 1;
  }
  creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
  v6 = this->fields.nowDispIndex + 1;
  this->fields.nowDispIndex = v6;
  if ( !creditText )
    goto LABEL_10;
  if ( v6 < creditText->fields._size )
  {
    v7 = System_Collections_Generic_List_object___get_Item(
           creditText,
           v6,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                      - EndrolContentItem__get_contentHeight(item, v13)
                                      - this->fields.defaultClearance;
          return;
        }
      }
LABEL_10:
      sub_1C372B4(creditText);
    }
  }
}


void EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
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
  const MethodInfo *v14; // x1
  int32_t lastObjectPosY; // w20

  if ( (byte_4C3D17E & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C3D17E = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_49349528(endrolContentParent, gameObject, 0);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v8 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v10),
        !this->fields.creditText)
    || (v11 = (int)contentPref,
        v12 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v12,
                                                   v8,
                                                   v11,
                                                   v13),
        !v8) )
  {
LABEL_11:
    sub_1C372B4(contentPref);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v8, v14)
                              - this->fields.defaultClearance;
}


void EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3D17C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D17C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(30, 0);
  ActionExtensions__Call(this->fields.mEndAct, 0);
}


void EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_String_o *v7; // x24
  CommonConfirmDialog_ClickDelegate_o *v8; // x25
  __int64 v9; // x0

  if ( (byte_4C3D183 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_5431/*"ENDROLL_TITLE"*/);
    sub_1C37058(&StringLiteral_5430/*"ENDROLL_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5428/*"ENDROLL_CANCEL"*/);
    sub_1C37058(&StringLiteral_5429/*"ENDROLL_DECIDE"*/);
    byte_4C3D183 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5431/*"ENDROLL_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5430/*"ENDROLL_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5429/*"ENDROLL_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5428/*"ENDROLL_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_EndrolRootComponent_callbackConfirmDlg__, 0);
  if ( !Instance )
    sub_1C372B4(v9);
  CommonUI__OpenConfirmDialog_31207876((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0);
}


void EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C3D178 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_4C3D178 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
    sub_1C372B4(panel);
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
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4C3D17A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_1C37058(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_4C3D17A = 1;
  }
  v7 = (Il2CppObject *)sub_1C372A4(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C36FFC(&v7[1], this);
  v7[1].monitor = endCallback;
  sub_1C36FFC(&v7[1].monitor, endCallback);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0);
  this->fields.lastObjectPosY = 0;
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v9, v10);
}


void EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v3; // x19
  System_String_array *v4; // x0
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0)) == 0)
    || (v4 = System_String__Split((System_String_o *)this, 0xAu, 0, 0),
        v3->fields.allCreditText = v4,
        this = (EndrolRootComponent_o *)sub_1C36FFC(&v3->fields.allCreditText, v4),
        (allCreditText = v3->fields.allCreditText) == 0) )
  {
    sub_1C372B4(this);
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
  Il2CppObject *Object_object__51154888; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_4C3D179 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_TextAsset____78105192);
    this = (EndrolRootComponent_o *)sub_1C37058(&StringLiteral_18331/*"credit"*/);
    byte_4C3D179 = 1;
  }
  if ( !data
    || (Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    data,
                                    (System_String_o *)StringLiteral_18331/*"credit"*/,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_TextAsset____78105192),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__51154888, v8),
        !endCallback) )
  {
    sub_1C372B4(this);
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
  EndrolRootComponent_o *v27; // x23
  unsigned int v28; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v30; // w28
  char v31; // w8
  unsigned int v32; // w8
  EndrolRootComponent_o *v33; // x1
  EndrolRootComponent_c **v34; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v36; // x6
  int v37; // w8
  int32_t v38; // w22
  EndrolRootComponent_o *v39; // x21
  EndrolRootComponent_o *v40; // x23
  unsigned int v41; // w27
  int klass; // w24
  EndrolRootComponent_c **v43; // x25
  EndrolRootComponent_o **v44; // x25
  EndrolRootComponent_o *v45; // t1
  char v46; // w8
  char v47; // w8
  unsigned int v48; // w8
  EndrolRootComponent_o *v49; // x24
  System_String_o *v50; // x0
  System_String_o *v51; // x24
  Il2CppType *v52; // x25
  System_RuntimeTypeHandle_o v53; // x0
  System_Type_o *TypeFromHandle; // x25
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v57; // x0
  EndrolRootComponent_o *v58; // x2
  int32_t v59; // w3
  int32_t v60; // w1
  int32_t v61; // w4
  EndrolContentItem_o *v62; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v64; // x0
  bool v65; // w1
  const MethodInfo *v66; // x2
  EndrolContentItem_o *v67; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector2_o v68; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4C3D181 & 1) == 0 )
  {
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&UIWidget_Pivot_var);
    sub_1C37058(&UIWidget_Pivot_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    sub_1C37058(&StringLiteral_1744/*"="*/);
    sub_1C37058(&StringLiteral_19953/*"height"*/);
    sub_1C37058(&StringLiteral_1497/*"<"*/);
    sub_1C37058(&StringLiteral_21198/*"left"*/);
    sub_1C37058(&StringLiteral_23117/*"right"*/);
    sub_1C37058(&StringLiteral_341/*"\""*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_24820/*"width"*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    this = (EndrolRootComponent_o *)sub_1C37058(&StringLiteral_17793/*"center"*/);
    byte_4C3D181 = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
    if ( !this )
      goto LABEL_145;
    v22 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1497/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v22->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1750/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v67 = item;
          v24 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
          this = (EndrolRootComponent_o *)sub_1C37100(string___TypeInfo, v24);
          m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
          v27 = this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v27 )
              goto LABEL_145;
            item = v67;
            if ( !v67 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( LODWORD(v27->fields.m_CancellationTokenSource) == 2 )
              EndrolContentItem__SetDoubleColumnText(
                v67,
                lastObjectPosY,
                (System_String_array *)v27,
                defaultFontSize,
                v8,
                v25);
            else
              EndrolContentItem__SetTripleColumnText(
                v67,
                lastObjectPosY,
                (System_String_array *)v27,
                defaultFontSize,
                v8,
                v25);
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
                                              (System_String_o *)StringLiteral_1497/*"<"*/,
                                              0);
            if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
              break;
            v31 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v31 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1497/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C36FFC(p_endrolContentParent, this);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1750/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C36FFC(p_endrolContentParent, this);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1744/*"="*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                  break;
                this = *p_endrolContentParent;
                if ( !*p_endrolContentParent )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  break;
                this = (EndrolRootComponent_o *)System_Int32__Parse(
                                                  (System_String_o *)this->fields.endrolContentParent,
                                                  0);
                defaultFontSize = (int)this;
              }
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_15804/*"["*/,
                                                0);
              v32 = (unsigned int)v22->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= v32 )
                  break;
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= LODWORD(v27->fields.m_CancellationTokenSource) )
                  break;
                v33 = *p_endrolContentParent;
              }
              else
              {
                if ( v30 >= v32 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_63561656(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0);
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= LODWORD(v27->fields.m_CancellationTokenSource) )
                  break;
                v33 = this;
              }
              v34 = &v27->klass + (int)v28;
              v34[4] = (EndrolRootComponent_c *)v33;
              this = (EndrolRootComponent_o *)sub_1C36FFC(v34 + 4, v33);
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
    sub_1C372BC(this);
  }
  if ( type != 4 )
  {
    if ( type == 2 )
    {
      if ( !nextDispString )
        goto LABEL_145;
      this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
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
                                            (System_String_o *)StringLiteral_1497/*"<"*/,
                                            0);
          if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v19 = (char)this;
          this = *v17;
          if ( !*v17 )
            goto LABEL_145;
          if ( (v19 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1497/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v17;
            if ( !*v17 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_341/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            v12 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24820/*"width"*/,
                                              0);
            if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v20 = (char)this;
            this = *v17;
            if ( !*v17 )
              goto LABEL_145;
            if ( (v20 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v15 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_19953/*"height"*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v17;
                if ( !*v17 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v21 = System_String__Replace_63608204(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1750/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
                v14 = System_Single__Parse(v21, 0);
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
      v68.fields.x = v15;
      v68.fields.y = v14;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v12, v68, v8, v9);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15804/*"["*/,
                                          0);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v57 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_63561656(defaultTextColor, (System_String_o *)v57, 0);
        }
        v58 = this;
        if ( item )
        {
          v59 = v8->fields.defaultFontSize;
          v60 = v8->fields.lastObjectPosY;
          v61 = 4;
          v62 = item;
LABEL_142:
          EndrolContentItem__SetText(v62, v60, (System_String_o *)v58, v59, v61, v8, v36);
          return item;
        }
      }
    }
    goto LABEL_145;
  }
  if ( !nextDispString )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
  if ( !this )
    goto LABEL_145;
  v37 = (int)this->fields.m_CancellationTokenSource;
  v38 = v8->fields.defaultFontSize;
  v39 = this;
  v40 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v37 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v60 = v8->fields.lastObjectPosY;
      v62 = item;
      v58 = v40;
      v59 = v38;
      v61 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1C372B4(this);
  }
  v41 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v41 >= v37 )
      goto LABEL_144;
    v43 = &v39->klass + (int)v41;
    v45 = (EndrolRootComponent_o *)v43[4];
    v44 = (EndrolRootComponent_o **)(v43 + 4);
    this = v45;
    if ( !v45 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1497/*"<"*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v46 = (char)this;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    if ( (v46 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15804/*"["*/,
                                        0);
      v48 = (unsigned int)v39->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v41 >= v48 )
          goto LABEL_144;
        v40 = *v44;
      }
      else
      {
        if ( v41 >= v48 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_63561656(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v44,
                                          0);
        v40 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1497/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v44 = this;
    this = (EndrolRootComponent_o *)sub_1C36FFC(v44, this);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_63608204(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1750/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v44 = this;
    this = (EndrolRootComponent_o *)sub_1C36FFC(v44, this);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1744/*"="*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v47 = (char)this;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    if ( (v47 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
      v38 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17793/*"center"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21198/*"left"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_23117/*"right"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v37 = (int)v39->fields.m_CancellationTokenSource;
    if ( (int)++v41 >= v37 )
      goto LABEL_140;
  }
  if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v44;
  if ( !*v44 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_63607580((System_String_o *)this, 0, 1, 0);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0);
  if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v49 = this;
  this = *v44;
  if ( !*v44 )
    goto LABEL_145;
  v50 = System_String__Substring((System_String_o *)this, 1, 0);
  v51 = System_String__Concat_63561656((System_String_o *)v49, v50, 0);
  v52 = UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v53.fields.value = (intptr_t)v52;
  TypeFromHandle = System_Type__GetTypeFromHandle(v53, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v51, 0);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0();
    klass = (int)this->klass;
    goto LABEL_125;
  }
  v64 = (EndrolRootComponent_o *)sub_1C37574(this);
  EndrolRootComponent__callbackConfirmDlg(v64, v65, v66);
  return result;
}


void EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float lastPostion; // s8
  System_Collections_Hashtable_o *v4; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v28; // [xsp+8h] [xbp-68h] BYREF
  int v29; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C3D177 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Hashtable_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&StringLiteral_9978/*"OnUpdateScroll"*/);
    sub_1C37058(&StringLiteral_19692/*"from"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22438/*"onupdate"*/);
    sub_1C37058(&StringLiteral_9954/*"OnScrollEnd"*/);
    sub_1C37058(&StringLiteral_24110/*"to"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C3D177 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_1C372A4(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64925884(v4, 0);
  v29 = 0;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v29, v5, v6, v7, v8, v9, v10);
  if ( !v4 )
    sub_1C372B4(v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_19692/*"from"*/,
    v11,
    v4->klass->vtable._22_Add.method);
  v28 = lastPostion + 580.0;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v28, v12, v13, v14, v15, v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24110/*"to"*/,
    v18,
    v4->klass->vtable._22_Add.method);
  endrolTotalTime = this->fields.endrolTotalTime;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v19, v20, v21, v22, v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24071/*"time"*/,
    v25,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22438/*"onupdate"*/,
    StringLiteral_9978/*"OnUpdateScroll"*/,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22430/*"oncomplete"*/,
    StringLiteral_9954/*"OnScrollEnd"*/,
    v4->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v4, 0);
}


void EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3D17B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_EndrolRootComponent_EndFadeout__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D17B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


System_Collections_IEnumerator_o *EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20

  if ( (byte_4C3D17D & 1) == 0 )
  {
    sub_1C37058(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_4C3D17D = 1;
  }
  v6 = sub_1C372A4(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1C36FFC(v6 + 40, callback);
  return (System_Collections_IEnumerator_o *)v6;
}


void EndrolRootComponent__callbackConfirmDlg(EndrolRootComponent_o *this, bool isSkip, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3D182 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D182 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isSkip )
    EndrolRootComponent__StopEndrol(this, v6);
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
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4C3D187 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3D187 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C372B4(this);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1C36FFC(&v2->fields.__2__current, v5);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  EndrolRootComponent_o *_4__this; // x0
  const MethodInfo *v4; // x1
  struct EndrolRootComponent_o *v5; // x8
  System_String_o *bgmName; // x20
  const MethodInfo *v7; // x2
  int32_t i; // w20
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v10; // x20
  const MethodInfo *v11; // x2
  struct EndrolRootComponent_o *v12; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4C3D186 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_4C3D186 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol(_4__this, method);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_23;
  if ( v5->fields.isBgmPlay )
  {
    bgmName = v5->fields.bgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playJingle(bgmName, 0);
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_23;
  }
  _4__this = (EndrolRootComponent_o *)v5->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, v4);
  _4__this = this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText(_4__this, i, v7);
    _4__this = this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  _4__this->fields.mEndAct = endCallback;
  sub_1C36FFC(&_4__this->fields.mEndAct, endCallback);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    _4__this = (EndrolRootComponent_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10
    || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (v12 = this->fields.__4__this) == 0) )
  {
LABEL_23:
    sub_1C372B4(_4__this);
  }
  startWaitTime = v12->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, 0);
    this->fields.__9__1 = _9__1;
    _4__this = (EndrolRootComponent_o *)sub_1C36FFC(&this->fields.__9__1, _9__1);
  }
  v15 = EndrolRootComponent__Wait(_4__this, startWaitTime, _9__1, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)v12, v15, 0);
}


void EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  EndrolRootComponent__StartEndroll(_4__this, method);
}