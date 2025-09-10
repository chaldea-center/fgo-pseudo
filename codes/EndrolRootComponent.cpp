void EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C214CC & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C214CC = 1;
  }
  this->fields.nowDispIndex = -1;
  this->fields.effectWave = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  sub_1C2D434(&this->fields.effectWave);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_4C214C7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18060/*"column=3"*/);
    sub_1C2D490(&StringLiteral_18059/*"column=2"*/);
    sub_1C2D490(&StringLiteral_1496/*"<"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    this = (EndrolRootComponent_o *)sub_1C2D490(&StringLiteral_7560/*"Image"*/);
    byte_4C214C7 = 1;
  }
  if ( !nextDispText )
    sub_1C2D6EC(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7560/*"Image"*/, 0) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1768/*"@"*/, 0) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1496/*"<"*/, 0) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18059/*"column=2"*/, 0) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18060/*"column=3"*/, 0) )
    return 5;
  return 4;
}


void EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  int32_t txtLength; // w8
  char v10; // w24
  unsigned int v11; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v13; // x8
  struct System_String_array *v14; // x8
  struct System_String_array *v15; // x9
  char v16; // w8
  struct System_String_array *v17; // x8
  System_Collections_Generic_List_object__o *v18; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  __int64 v22; // x1
  Il2CppClass **v23; // x0
  struct System_String_array *v24; // x9
  char v25; // w8
  struct System_String_array *v26; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v28; // x8
  int v29; // w8
  __int64 v30; // x23
  unsigned int v31; // w27
  __int64 v32; // x25
  __int64 *v33; // x25
  __int64 v34; // t1
  struct System_String_array *v35; // x8
  struct System_String_array *v36; // x9
  char v37; // w8
  struct System_String_array *v38; // x9
  char v39; // w8
  System_String_o *v40; // x23
  float v41; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v43; // x25
  struct System_String_array *v44; // x9
  char v45; // w8
  struct System_String_array *v46; // x9
  char v47; // w8
  struct System_String_array *v48; // x9
  char v49; // w8
  struct System_String_array *v50; // x8
  struct System_String_o **p_defaultTextColor; // [xsp+8h] [xbp-78h]
  struct System_String_o **p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4C214CB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&StringLiteral_18862/*"effect"*/);
    sub_1C2D490(&StringLiteral_6794/*"FontSize"*/);
    sub_1C2D490(&StringLiteral_23195/*"scroll"*/);
    sub_1C2D490(&StringLiteral_23629/*"start"*/);
    sub_1C2D490(&StringLiteral_17140/*"bgm"*/);
    sub_1C2D490(&StringLiteral_18537/*"default_text_color"*/);
    sub_1C2D490(&StringLiteral_1496/*"<"*/);
    sub_1C2D490(&StringLiteral_9362/*"NULL"*/);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    sub_1C2D490(&StringLiteral_18995/*"end"*/);
    sub_1C2D490(&StringLiteral_1768/*"@"*/);
    sub_1C2D490(&StringLiteral_18536/*"default_font_size"*/);
    sub_1C2D490(&StringLiteral_17125/*"begine_time"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_86/*"\r"*/);
    sub_1C2D490(&StringLiteral_1749/*">"*/);
    sub_1C2D490(&StringLiteral_18535/*"default_clearance"*/);
    byte_4C214CB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  p_creditText = &this->fields.creditText;
  v5 = sub_1C2D434(&this->fields.creditText);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v10 = 0;
    v11 = 0;
    p_defaultTextColor = &this->fields.defaultTextColor;
    p_bgmName = &this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v11 >= LODWORD(allCreditText->max_length) )
        goto LABEL_137;
      v5 = (__int64)allCreditText->m_Items[v11];
      if ( !v5 )
LABEL_136:
        sub_1C2D6EC(v5, v6);
      v5 = System_String__StartsWith((System_String_o *)v5, (System_String_o *)StringLiteral_1768/*"@"*/, 0);
      if ( (v5 & 1) == 0 )
        break;
      v13 = this->fields.allCreditText;
      if ( !v13 )
        goto LABEL_136;
      if ( v11 >= LODWORD(v13->max_length) )
        goto LABEL_137;
      v5 = (__int64)v13->m_Items[v11];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23629/*"start"*/, 0);
      if ( (v5 & 1) != 0 )
        goto LABEL_65;
      v14 = this->fields.allCreditText;
      if ( !v14 )
        goto LABEL_136;
      if ( v11 >= LODWORD(v14->max_length) )
        goto LABEL_137;
      v5 = (__int64)v14->m_Items[v11];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17125/*"begine_time"*/, 0);
      v15 = this->fields.allCreditText;
      if ( !v15 )
        goto LABEL_136;
      if ( v11 >= LODWORD(v15->max_length) )
        goto LABEL_137;
      v16 = v5;
      v5 = (__int64)v15->m_Items[v11];
      if ( !v5 )
        goto LABEL_136;
      if ( (v16 & 1) != 0 )
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
        v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23195/*"scroll"*/, 0);
        v24 = this->fields.allCreditText;
        if ( !v24 )
          goto LABEL_136;
        if ( v11 >= LODWORD(v24->max_length) )
          goto LABEL_137;
        v25 = v5;
        v5 = (__int64)v24->m_Items[v11];
        if ( !v5 )
          goto LABEL_136;
        if ( (v25 & 1) != 0 )
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
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18995/*"end"*/, 0);
          if ( (v5 & 1) != 0 )
          {
LABEL_67:
            v10 = 0;
            goto LABEL_68;
          }
          v35 = this->fields.allCreditText;
          if ( !v35 )
            goto LABEL_136;
          if ( v11 >= LODWORD(v35->max_length) )
            goto LABEL_137;
          v5 = (__int64)v35->m_Items[v11];
          if ( !v5 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_24695/*"wait"*/, 0);
          v36 = this->fields.allCreditText;
          if ( !v36 )
            goto LABEL_136;
          if ( v11 >= LODWORD(v36->max_length) )
            goto LABEL_137;
          v37 = v5;
          v5 = (__int64)v36->m_Items[v11];
          if ( !v5 )
            goto LABEL_136;
          if ( (v37 & 1) != 0 )
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
            v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18862/*"effect"*/, 0);
            v38 = this->fields.allCreditText;
            if ( !v38 )
              goto LABEL_136;
            if ( v11 >= LODWORD(v38->max_length) )
              goto LABEL_137;
            v39 = v5;
            v5 = (__int64)v38->m_Items[v11];
            if ( !v5 )
              goto LABEL_136;
            if ( (v39 & 1) != 0 )
            {
              v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v40 = *(System_String_o **)(v5 + 40);
              if ( !v40 )
                goto LABEL_136;
              v5 = (__int64)System_String__Split(*(System_String_o **)(v5 + 40), 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( !*(_DWORD *)(v5 + 24) )
                goto LABEL_137;
              v41 = System_Single__Parse(*(System_String_o **)(v5 + 32), 0);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v41 / 10.0;
              v5 = (__int64)System_String__Split(v40, 0x7Eu, 0, 0);
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
              v43 = this->fields.effectWave;
              v5 = (__int64)System_String__Split(v40, 0x7Eu, 0, 0);
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
              if ( !v43 )
                goto LABEL_136;
              if ( LODWORD(v43->max_length) <= 1 )
                goto LABEL_137;
              v43->m_Items[1] = v5;
              v5 = (__int64)System_String__Split(v40, 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v5 + 48), 0);
            }
            else
            {
              v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17140/*"bgm"*/, 0);
              v44 = this->fields.allCreditText;
              if ( !v44 )
                goto LABEL_136;
              if ( v11 >= LODWORD(v44->max_length) )
                goto LABEL_137;
              v45 = v5;
              v5 = (__int64)v44->m_Items[v11];
              if ( !v5 )
                goto LABEL_136;
              if ( (v45 & 1) != 0 )
              {
                *p_bgmName = System_String__Replace_63504412(
                               (System_String_o *)v5,
                               (System_String_o *)StringLiteral_86/*"\r"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0);
                sub_1C2D434(p_bgmName);
                v5 = (__int64)*p_bgmName;
                if ( !*p_bgmName )
                  goto LABEL_136;
                v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                if ( !v5 )
                  goto LABEL_136;
                if ( *(_DWORD *)(v5 + 24) <= 1u )
                  goto LABEL_137;
                this->fields.bgmName = *(struct System_String_o **)(v5 + 40);
                sub_1C2D434(p_bgmName);
                v5 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9362/*"NULL"*/, 0);
                this->fields.isBgmPlay = v5 & 1;
              }
              else
              {
                v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18536/*"default_font_size"*/, 0);
                v46 = this->fields.allCreditText;
                if ( !v46 )
                  goto LABEL_136;
                if ( v11 >= LODWORD(v46->max_length) )
                  goto LABEL_137;
                v47 = v5;
                v5 = (__int64)v46->m_Items[v11];
                if ( !v5 )
                  goto LABEL_136;
                if ( (v47 & 1) != 0 )
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
                  v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18535/*"default_clearance"*/, 0);
                  v48 = this->fields.allCreditText;
                  if ( !v48 )
                    goto LABEL_136;
                  if ( v11 >= LODWORD(v48->max_length) )
                    goto LABEL_137;
                  v49 = v5;
                  v5 = (__int64)v48->m_Items[v11];
                  if ( !v5 )
                    goto LABEL_136;
                  if ( (v49 & 1) != 0 )
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
                    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18537/*"default_text_color"*/, 0);
                    if ( (v5 & 1) != 0 )
                    {
                      v50 = this->fields.allCreditText;
                      if ( !v50 )
                        goto LABEL_136;
                      if ( v11 >= LODWORD(v50->max_length) )
                        goto LABEL_137;
                      v5 = (__int64)v50->m_Items[v11];
                      if ( !v5 )
                        goto LABEL_136;
                      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                      if ( !v5 )
                        goto LABEL_136;
                      if ( *(_DWORD *)(v5 + 24) <= 1u )
                        goto LABEL_137;
                      *p_defaultTextColor = *(struct System_String_o **)(v5 + 40);
                      v5 = sub_1C2D434(p_defaultTextColor);
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
    if ( v11 >= LODWORD(v17->max_length) )
      goto LABEL_137;
    v5 = (__int64)v17->m_Items[v11];
    if ( !v5 )
      goto LABEL_136;
    v5 = (__int64)System_String__Replace_63504412(
                    (System_String_o *)v5,
                    (System_String_o *)StringLiteral_86/*"\r"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
    v18 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v18->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v18->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v18->fields._size;
    v22 = v5;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        (Il2CppObject *)v5,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v22;
      v5 = sub_1C2D434(v23 + 4);
    }
    v26 = this->fields.allCreditText;
    if ( !v26 )
      goto LABEL_136;
    if ( v11 >= LODWORD(v26->max_length) )
      goto LABEL_137;
    v5 = (__int64)v26->m_Items[v11];
    if ( !v5 )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6794/*"FontSize"*/, 0);
    if ( (v5 & 1) != 0 )
    {
      v28 = this->fields.allCreditText;
      if ( !v28 )
        goto LABEL_136;
      if ( v11 >= LODWORD(v28->max_length) )
        goto LABEL_137;
      v5 = (__int64)v28->m_Items[v11];
      if ( !v5 )
        goto LABEL_136;
      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x7Eu, 0, 0);
      if ( !v5 )
        goto LABEL_136;
      v29 = *(_DWORD *)(v5 + 24);
      v30 = v5;
      if ( v29 >= 1 )
      {
        v31 = 0;
        while ( v31 < v29 )
        {
          v32 = v30 + 8LL * (int)v31;
          v34 = *(_QWORD *)(v32 + 32);
          v33 = (__int64 *)(v32 + 32);
          v5 = v34;
          if ( !v34 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6794/*"FontSize"*/, 0);
          if ( (v5 & 1) != 0 )
          {
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            v5 = *v33;
            if ( !*v33 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_63504412(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1496/*"<"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            *v33 = v5;
            v5 = sub_1C2D434(v33);
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            v5 = *v33;
            if ( !*v33 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_63504412(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1749/*">"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            *v33 = v5;
            v5 = sub_1C2D434(v33);
            if ( v31 >= *(_DWORD *)(v30 + 24) )
              break;
            v5 = *v33;
            if ( !*v33 )
              goto LABEL_136;
            v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
            if ( !v5 )
              goto LABEL_136;
            if ( *(_DWORD *)(v5 + 24) <= 1u )
              break;
            v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
            defaultFontSize = v5;
          }
          v29 = *(_DWORD *)(v30 + 24);
          if ( (int)++v31 >= v29 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1C2D6F4(v5, v6, v7, v8);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v10 = 1;
    goto LABEL_68;
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

  if ( (byte_4C214C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C214C6 = 1;
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
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C2D6EC(creditText, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t lastObjectPosY; // w20

  if ( (byte_4C214C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&NGUITools_TypeInfo);
    byte_4C214C5 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_49246352(endrolContentParent, gameObject, 0);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v8 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v10),
        !this->fields.creditText)
    || (v11 = (int)contentPref,
        v12 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v12,
                                                   v8,
                                                   v11,
                                                   v13),
        !v8) )
  {
LABEL_11:
    sub_1C2D6EC(contentPref, *(_QWORD *)&index);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v8, *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C214C3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C214C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  __int64 v10; // x1

  if ( (byte_4C214CA & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_5422/*"ENDROLL_TITLE"*/);
    sub_1C2D490(&StringLiteral_5421/*"ENDROLL_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_5419/*"ENDROLL_CANCEL"*/);
    sub_1C2D490(&StringLiteral_5420/*"ENDROLL_DECIDE"*/);
    byte_4C214CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5422/*"ENDROLL_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5421/*"ENDROLL_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5420/*"ENDROLL_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5419/*"ENDROLL_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_EndrolRootComponent_callbackConfirmDlg__, 0);
  if ( !Instance )
    sub_1C2D6EC(v9, v10);
  CommonUI__OpenConfirmDialog_31167304((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0);
}


void EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C214BF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_4C214BF = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
    sub_1C2D6EC(panel, method);
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
  __int64 v9; // x1
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4C214C1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    sub_1C2D490(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_1C2D490(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_4C214C1 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[1]);
  v7[1].monitor = endCallback;
  sub_1C2D434(&v7[1].monitor);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0);
  this->fields.lastObjectPosY = 0;
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v10, v11);
}


void EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v3; // x19
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0)) == 0)
    || (v3->fields.allCreditText = System_String__Split((System_String_o *)this, 0xAu, 0, 0),
        this = (EndrolRootComponent_o *)sub_1C2D434(&v3->fields.allCreditText),
        (allCreditText = v3->fields.allCreditText) == 0) )
  {
    sub_1C2D6EC(this, assetData);
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
  Il2CppObject *Object_object__51051712; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_4C214C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_TextAsset____77994104);
    this = (EndrolRootComponent_o *)sub_1C2D490(&StringLiteral_18324/*"credit"*/);
    byte_4C214C0 = 1;
  }
  if ( !data
    || (Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    data,
                                    (System_String_o *)StringLiteral_18324/*"credit"*/,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_TextAsset____77994104),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__51051712, v8),
        !endCallback) )
  {
    sub_1C2D6EC(this, data);
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
  __int64 v9; // x2
  __int64 v10; // x3
  const MethodInfo *v11; // x4
  int v12; // w8
  EndrolRootComponent_o *v13; // x21
  EndrolRootComponent_o *v14; // x22
  unsigned int v15; // w23
  float v16; // s9
  float v17; // s8
  EndrolRootComponent_c **v18; // x29
  EndrolRootComponent_o **v19; // x29
  EndrolRootComponent_o *v20; // t1
  char v21; // w8
  char v22; // w8
  System_String_o *v23; // x0
  EndrolRootComponent_o *v24; // x21
  int32_t defaultFontSize; // w22
  unsigned int v26; // w0
  const MethodInfo *v27; // x5
  int m_CancellationTokenSource; // w8
  EndrolRootComponent_o *v29; // x23
  unsigned int v30; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v32; // w28
  char v33; // w8
  unsigned int v34; // w8
  EndrolRootComponent_o *v35; // x1
  EndrolRootComponent_c **v36; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v38; // x6
  int v39; // w8
  int32_t v40; // w22
  EndrolRootComponent_o *v41; // x21
  EndrolRootComponent_o *v42; // x23
  unsigned int v43; // w27
  int klass; // w24
  EndrolRootComponent_c **v45; // x25
  EndrolRootComponent_o **v46; // x25
  EndrolRootComponent_o *v47; // t1
  char v48; // w8
  char v49; // w8
  unsigned int v50; // w8
  EndrolRootComponent_o *v51; // x24
  System_String_o *v52; // x0
  System_String_o *v53; // x24
  Il2CppType *v54; // x25
  System_RuntimeTypeHandle_o v55; // x0
  System_Type_o *TypeFromHandle; // x25
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v59; // x0
  EndrolRootComponent_o *v60; // x2
  int32_t v61; // w3
  int32_t v62; // w1
  int32_t v63; // w4
  EndrolContentItem_o *v64; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v66; // x0
  bool v67; // w1
  const MethodInfo *v68; // x2
  EndrolContentItem_o *v69; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector2_o v70; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4C214C8 & 1) == 0 )
  {
    sub_1C2D490(&System_Enum_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&UIWidget_Pivot_var);
    sub_1C2D490(&UIWidget_Pivot_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&System_Type_TypeInfo);
    sub_1C2D490(&StringLiteral_1743/*"="*/);
    sub_1C2D490(&StringLiteral_19938/*"height"*/);
    sub_1C2D490(&StringLiteral_1496/*"<"*/);
    sub_1C2D490(&StringLiteral_21183/*"left"*/);
    sub_1C2D490(&StringLiteral_23095/*"right"*/);
    sub_1C2D490(&StringLiteral_341/*"\""*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_24797/*"width"*/);
    sub_1C2D490(&StringLiteral_1749/*">"*/);
    this = (EndrolRootComponent_o *)sub_1C2D490(&StringLiteral_17788/*"center"*/);
    byte_4C214C8 = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0);
    if ( !this )
      goto LABEL_145;
    v24 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1496/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0);
      if ( LODWORD(v24->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v24->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1749/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v69 = item;
          v26 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
          this = (EndrolRootComponent_o *)sub_1C2D538(string___TypeInfo, v26);
          m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
          v29 = this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v29 )
              goto LABEL_145;
            item = v69;
            if ( !v69 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( LODWORD(v29->fields.m_CancellationTokenSource) == 2 )
              EndrolContentItem__SetDoubleColumnText(
                v69,
                lastObjectPosY,
                (System_String_array *)v29,
                defaultFontSize,
                v8,
                v27);
            else
              EndrolContentItem__SetTripleColumnText(
                v69,
                lastObjectPosY,
                (System_String_array *)v29,
                defaultFontSize,
                v8,
                v27);
            return item;
          }
          v30 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v24->fields.endrolContentParent;
          v32 = 1;
          while ( v32 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1496/*"<"*/,
                                              0);
            if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
              break;
            v33 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v33 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1496/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C2D434(p_endrolContentParent);
              if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1749/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C2D434(p_endrolContentParent);
              if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1743/*"="*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v32 >= LODWORD(v24->fields.m_CancellationTokenSource) )
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
                                                (System_String_o *)StringLiteral_15801/*"["*/,
                                                0);
              v34 = (unsigned int)v24->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v32 >= v34 )
                  break;
                if ( !v29 )
                  goto LABEL_145;
                if ( v30 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                  break;
                v35 = *p_endrolContentParent;
              }
              else
              {
                if ( v32 >= v34 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_63457864(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0);
                if ( !v29 )
                  goto LABEL_145;
                if ( v30 >= LODWORD(v29->fields.m_CancellationTokenSource) )
                  break;
                v35 = this;
              }
              v36 = &v29->klass + (int)v30;
              v36[4] = (EndrolRootComponent_c *)v35;
              this = (EndrolRootComponent_o *)sub_1C2D434(v36 + 4);
              ++v30;
            }
            m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
            ++v32;
            ++p_endrolContentParent;
            if ( (int)v32 >= m_CancellationTokenSource )
              goto LABEL_76;
          }
        }
      }
    }
LABEL_144:
    sub_1C2D6F4(this, nextDispString, v9, v10);
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
      v12 = (int)this->fields.m_CancellationTokenSource;
      v13 = this;
      v14 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v12 < 1 )
      {
        v17 = 0.0;
        v16 = 0.0;
        if ( !item )
          goto LABEL_145;
      }
      else
      {
        v15 = 0;
        v16 = 0.0;
        v17 = 0.0;
        do
        {
          if ( v15 >= v12 )
            goto LABEL_144;
          v18 = &v13->klass + (int)v15;
          v20 = (EndrolRootComponent_o *)v18[4];
          v19 = (EndrolRootComponent_o **)(v18 + 4);
          this = v20;
          if ( !v20 )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1496/*"<"*/,
                                            0);
          if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v21 = (char)this;
          this = *v19;
          if ( !*v19 )
            goto LABEL_145;
          if ( (v21 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1496/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v19;
            if ( !*v19 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_341/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
            v14 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24797/*"width"*/,
                                              0);
            if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v22 = (char)this;
            this = *v19;
            if ( !*v19 )
              goto LABEL_145;
            if ( (v22 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v17 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_19938/*"height"*/,
                                                0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v19;
                if ( !*v19 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v23 = System_String__Replace_63504412(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1749/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
                v16 = System_Single__Parse(v23, 0);
              }
            }
          }
          v12 = (int)v13->fields.m_CancellationTokenSource;
          ++v15;
        }
        while ( (int)v15 < v12 );
        if ( !item )
          goto LABEL_145;
      }
      v70.fields.x = v17;
      v70.fields.y = v16;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v14, v70, v8, v11);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15801/*"["*/,
                                          0);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v59 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_63457864(defaultTextColor, (System_String_o *)v59, 0);
        }
        v60 = this;
        if ( item )
        {
          v61 = v8->fields.defaultFontSize;
          v62 = v8->fields.lastObjectPosY;
          v63 = 4;
          v64 = item;
LABEL_142:
          EndrolContentItem__SetText(v64, v62, (System_String_o *)v60, v61, v63, v8, v38);
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
  v39 = (int)this->fields.m_CancellationTokenSource;
  v40 = v8->fields.defaultFontSize;
  v41 = this;
  v42 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v39 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v62 = v8->fields.lastObjectPosY;
      v64 = item;
      v60 = v42;
      v61 = v40;
      v63 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1C2D6EC(this, nextDispString);
  }
  v43 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v43 >= v39 )
      goto LABEL_144;
    v45 = &v41->klass + (int)v43;
    v47 = (EndrolRootComponent_o *)v45[4];
    v46 = (EndrolRootComponent_o **)(v45 + 4);
    this = v47;
    if ( !v47 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1496/*"<"*/,
                                      0);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v48 = (char)this;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    if ( (v48 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15801/*"["*/,
                                        0);
      v50 = (unsigned int)v41->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v43 >= v50 )
          goto LABEL_144;
        v42 = *v46;
      }
      else
      {
        if ( v43 >= v50 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_63457864(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v46,
                                          0);
        v42 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1496/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v46 = this;
    this = (EndrolRootComponent_o *)sub_1C2D434(v46);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_63504412(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1749/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v46 = this;
    this = (EndrolRootComponent_o *)sub_1C2D434(v46);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1743/*"="*/,
                                      0);
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v49 = (char)this;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    if ( (v49 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0);
      v40 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17788/*"center"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21183/*"left"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v46;
    if ( !*v46 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_23095/*"right"*/,
                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v39 = (int)v41->fields.m_CancellationTokenSource;
    if ( (int)++v43 >= v39 )
      goto LABEL_140;
  }
  if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v46;
  if ( !*v46 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_63503788((System_String_o *)this, 0, 1, 0);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0);
  if ( v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v51 = this;
  this = *v46;
  if ( !*v46 )
    goto LABEL_145;
  v52 = System_String__Substring((System_String_o *)this, 1, 0);
  v53 = System_String__Concat_63457864((System_String_o *)v51, v52, 0);
  v54 = UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v55.fields.value = (intptr_t)v54;
  TypeFromHandle = System_Type__GetTypeFromHandle(v55, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v53, 0);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0();
    klass = (int)this->klass;
    goto LABEL_125;
  }
  v66 = (EndrolRootComponent_o *)sub_1C2D9AC(this);
  EndrolRootComponent__callbackConfirmDlg(v66, v67, v68);
  return result;
}


void EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C214BE & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_9972/*"OnUpdateScroll"*/);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_9948/*"OnScrollEnd"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C214BE = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v4, 0);
  v21 = 0;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v21, v5, v6, v7);
  if ( !v4 )
    sub_1C2D6EC(v8, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_19677/*"from"*/,
    v8,
    v4->klass->vtable._22_Add.method);
  v20 = lastPostion + 580.0;
  v13 = j_il2cpp_value_box_0(float_TypeInfo, &v20, v10, v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24088/*"to"*/,
    v13,
    v4->klass->vtable._22_Add.method);
  endrolTotalTime = this->fields.endrolTotalTime;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v14, v15, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24049/*"time"*/,
    v17,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22418/*"onupdate"*/,
    StringLiteral_9972/*"OnUpdateScroll"*/,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_9948/*"OnScrollEnd"*/,
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
  __int64 v9; // x1

  if ( (byte_4C214C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_EndrolRootComponent_EndFadeout__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C214C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


System_Collections_IEnumerator_o *EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20

  if ( (byte_4C214C4 & 1) == 0 )
  {
    sub_1C2D490(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_4C214C4 = 1;
  }
  v6 = sub_1C2D6DC(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1C2D434(v6 + 40);
  return (System_Collections_IEnumerator_o *)v6;
}


void EndrolRootComponent__callbackConfirmDlg(EndrolRootComponent_o *this, bool isSkip, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4C214C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C214C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
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
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4C214CE & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C214CE = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C2D6EC(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1C2D434(&v2->fields.__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  struct EndrolRootComponent_o *v4; // x8
  System_String_o *bgmName; // x20
  const MethodInfo *v6; // x2
  int32_t i; // w20
  CommonUI_o *v8; // x20
  const MethodInfo *v9; // x2
  struct EndrolRootComponent_o *v10; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4C214CD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_4C214CD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol(_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_23;
  if ( v4->fields.isBgmPlay )
  {
    bgmName = v4->fields.bgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playJingle(bgmName, 0);
    v4 = this->fields.__4__this;
    if ( !v4 )
      goto LABEL_23;
  }
  _4__this = (EndrolRootComponent_o *)v4->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, method);
  _4__this = this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText(_4__this, i, v6);
    _4__this = this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.mEndAct = this->fields.endCallback;
  sub_1C2D434(&_4__this->fields.mEndAct);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    _4__this = (EndrolRootComponent_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8
    || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (v10 = this->fields.__4__this) == 0) )
  {
LABEL_23:
    sub_1C2D6EC(_4__this, method);
  }
  startWaitTime = v10->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, 0);
    this->fields.__9__1 = _9__1;
    _4__this = (EndrolRootComponent_o *)sub_1C2D434(&this->fields.__9__1);
  }
  v13 = EndrolRootComponent__Wait(_4__this, startWaitTime, _9__1, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v10, v13, 0);
}


void EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}