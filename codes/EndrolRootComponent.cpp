void EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0

  if ( (byte_4CC1550 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    byte_4CC1550 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1C71458(int___TypeInfo, 2);
  this->fields.effectWave = v3;
  sub_1C71354(&this->fields.effectWave, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_4CC154B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18090/*"column=3"*/);
    sub_1C713B0(&StringLiteral_18089/*"column=2"*/);
    sub_1C713B0(&StringLiteral_1490/*"<"*/);
    sub_1C713B0(&StringLiteral_1763/*"@"*/);
    this = (EndrolRootComponent_o *)sub_1C713B0(&StringLiteral_7568/*"Image"*/);
    byte_4CC154B = 1;
  }
  if ( !nextDispText )
    sub_1C71608(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7568/*"Image"*/, 0) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1763/*"@"*/, 0) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1490/*"<"*/, 0) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18089/*"column=2"*/, 0) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18090/*"column=3"*/, 0) )
    return 5;
  return 4;
}


void EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t txtLength; // w8
  char v8; // w24
  unsigned int v9; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v11; // x8
  struct System_String_array *v12; // x8
  struct System_String_array *v13; // x9
  char v14; // w8
  struct System_String_array *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  __int64 v20; // x1
  Il2CppClass **v21; // x0
  struct System_String_array *v22; // x9
  char v23; // w8
  struct System_String_array *v24; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v26; // x8
  int v27; // w8
  __int64 v28; // x23
  unsigned int v29; // w27
  __int64 v30; // x25
  __int64 *v31; // x25
  __int64 v32; // t1
  struct System_String_array *v33; // x8
  struct System_String_array *v34; // x9
  char v35; // w8
  struct System_String_array *v36; // x9
  char v37; // w8
  System_String_o *v38; // x23
  float v39; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v41; // x25
  struct System_String_array *v42; // x9
  char v43; // w8
  System_String_o *v44; // x0
  struct System_String_o *v45; // x1
  struct System_String_array *v46; // x9
  char v47; // w8
  struct System_String_array *v48; // x9
  char v49; // w8
  struct System_String_array *v50; // x8
  struct System_String_o *v51; // x1
  struct System_String_o **p_defaultTextColor; // [xsp+8h] [xbp-78h]
  struct System_String_o **p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4CC154F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&StringLiteral_18920/*"effect"*/);
    sub_1C713B0(&StringLiteral_6795/*"FontSize"*/);
    sub_1C713B0(&StringLiteral_23336/*"scroll"*/);
    sub_1C713B0(&StringLiteral_23765/*"start"*/);
    sub_1C713B0(&StringLiteral_17167/*"bgm"*/);
    sub_1C713B0(&StringLiteral_18584/*"default_text_color"*/);
    sub_1C713B0(&StringLiteral_1490/*"<"*/);
    sub_1C713B0(&StringLiteral_9371/*"NULL"*/);
    sub_1C713B0(&StringLiteral_24848/*"wait"*/);
    sub_1C713B0(&StringLiteral_19064/*"end"*/);
    sub_1C713B0(&StringLiteral_1763/*"@"*/);
    sub_1C713B0(&StringLiteral_18583/*"default_font_size"*/);
    sub_1C713B0(&StringLiteral_17152/*"begine_time"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_86/*"\r"*/);
    sub_1C713B0(&StringLiteral_1743/*">"*/);
    sub_1C713B0(&StringLiteral_18582/*"default_clearance"*/);
    byte_4CC154F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  p_creditText = &this->fields.creditText;
  v5 = sub_1C71354(&this->fields.creditText, v3);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v8 = 0;
    v9 = 0;
    p_defaultTextColor = &this->fields.defaultTextColor;
    p_bgmName = &this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v9 >= LODWORD(allCreditText->max_length) )
        goto LABEL_137;
      v5 = (__int64)allCreditText->m_Items[v9];
      if ( !v5 )
LABEL_136:
        sub_1C71608(v5, v6);
      v5 = System_String__StartsWith((System_String_o *)v5, (System_String_o *)StringLiteral_1763/*"@"*/, 0);
      if ( (v5 & 1) == 0 )
        break;
      v11 = this->fields.allCreditText;
      if ( !v11 )
        goto LABEL_136;
      if ( v9 >= LODWORD(v11->max_length) )
        goto LABEL_137;
      v5 = (__int64)v11->m_Items[v9];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23765/*"start"*/, 0);
      if ( (v5 & 1) != 0 )
        goto LABEL_65;
      v12 = this->fields.allCreditText;
      if ( !v12 )
        goto LABEL_136;
      if ( v9 >= LODWORD(v12->max_length) )
        goto LABEL_137;
      v5 = (__int64)v12->m_Items[v9];
      if ( !v5 )
        goto LABEL_136;
      v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17152/*"begine_time"*/, 0);
      v13 = this->fields.allCreditText;
      if ( !v13 )
        goto LABEL_136;
      if ( v9 >= LODWORD(v13->max_length) )
        goto LABEL_137;
      v14 = v5;
      v5 = (__int64)v13->m_Items[v9];
      if ( !v5 )
        goto LABEL_136;
      if ( (v14 & 1) != 0 )
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
        v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_23336/*"scroll"*/, 0);
        v22 = this->fields.allCreditText;
        if ( !v22 )
          goto LABEL_136;
        if ( v9 >= LODWORD(v22->max_length) )
          goto LABEL_137;
        v23 = v5;
        v5 = (__int64)v22->m_Items[v9];
        if ( !v5 )
          goto LABEL_136;
        if ( (v23 & 1) != 0 )
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
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_19064/*"end"*/, 0);
          if ( (v5 & 1) != 0 )
          {
LABEL_67:
            v8 = 0;
            goto LABEL_68;
          }
          v33 = this->fields.allCreditText;
          if ( !v33 )
            goto LABEL_136;
          if ( v9 >= LODWORD(v33->max_length) )
            goto LABEL_137;
          v5 = (__int64)v33->m_Items[v9];
          if ( !v5 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_24848/*"wait"*/, 0);
          v34 = this->fields.allCreditText;
          if ( !v34 )
            goto LABEL_136;
          if ( v9 >= LODWORD(v34->max_length) )
            goto LABEL_137;
          v35 = v5;
          v5 = (__int64)v34->m_Items[v9];
          if ( !v5 )
            goto LABEL_136;
          if ( (v35 & 1) != 0 )
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
            v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18920/*"effect"*/, 0);
            v36 = this->fields.allCreditText;
            if ( !v36 )
              goto LABEL_136;
            if ( v9 >= LODWORD(v36->max_length) )
              goto LABEL_137;
            v37 = v5;
            v5 = (__int64)v36->m_Items[v9];
            if ( !v5 )
              goto LABEL_136;
            if ( (v37 & 1) != 0 )
            {
              v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 1u )
                goto LABEL_137;
              v38 = *(System_String_o **)(v5 + 40);
              if ( !v38 )
                goto LABEL_136;
              v5 = (__int64)System_String__Split(*(System_String_o **)(v5 + 40), 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( !*(_DWORD *)(v5 + 24) )
                goto LABEL_137;
              v39 = System_Single__Parse(*(System_String_o **)(v5 + 32), 0);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v39 / 10.0;
              v5 = (__int64)System_String__Split(v38, 0x7Eu, 0, 0);
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
              v41 = this->fields.effectWave;
              v5 = (__int64)System_String__Split(v38, 0x7Eu, 0, 0);
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
              if ( !v41 )
                goto LABEL_136;
              if ( LODWORD(v41->max_length) <= 1 )
                goto LABEL_137;
              v41->m_Items[1] = v5;
              v5 = (__int64)System_String__Split(v38, 0x7Eu, 0, 0);
              if ( !v5 )
                goto LABEL_136;
              if ( *(_DWORD *)(v5 + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(v5 + 48), 0);
            }
            else
            {
              v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_17167/*"bgm"*/, 0);
              v42 = this->fields.allCreditText;
              if ( !v42 )
                goto LABEL_136;
              if ( v9 >= LODWORD(v42->max_length) )
                goto LABEL_137;
              v43 = v5;
              v5 = (__int64)v42->m_Items[v9];
              if ( !v5 )
                goto LABEL_136;
              if ( (v43 & 1) != 0 )
              {
                v44 = System_String__Replace_64078288(
                        (System_String_o *)v5,
                        (System_String_o *)StringLiteral_86/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
                *p_bgmName = v44;
                sub_1C71354(p_bgmName, v44);
                v5 = (__int64)*p_bgmName;
                if ( !*p_bgmName )
                  goto LABEL_136;
                v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                if ( !v5 )
                  goto LABEL_136;
                if ( *(_DWORD *)(v5 + 24) <= 1u )
                  goto LABEL_137;
                v45 = *(struct System_String_o **)(v5 + 40);
                this->fields.bgmName = v45;
                sub_1C71354(p_bgmName, v45);
                v5 = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9371/*"NULL"*/, 0);
                this->fields.isBgmPlay = v5 & 1;
              }
              else
              {
                v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18583/*"default_font_size"*/, 0);
                v46 = this->fields.allCreditText;
                if ( !v46 )
                  goto LABEL_136;
                if ( v9 >= LODWORD(v46->max_length) )
                  goto LABEL_137;
                v47 = v5;
                v5 = (__int64)v46->m_Items[v9];
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
                  v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18582/*"default_clearance"*/, 0);
                  v48 = this->fields.allCreditText;
                  if ( !v48 )
                    goto LABEL_136;
                  if ( v9 >= LODWORD(v48->max_length) )
                    goto LABEL_137;
                  v49 = v5;
                  v5 = (__int64)v48->m_Items[v9];
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
                    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_18584/*"default_text_color"*/, 0);
                    if ( (v5 & 1) != 0 )
                    {
                      v50 = this->fields.allCreditText;
                      if ( !v50 )
                        goto LABEL_136;
                      if ( v9 >= LODWORD(v50->max_length) )
                        goto LABEL_137;
                      v5 = (__int64)v50->m_Items[v9];
                      if ( !v5 )
                        goto LABEL_136;
                      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
                      if ( !v5 )
                        goto LABEL_136;
                      if ( *(_DWORD *)(v5 + 24) <= 1u )
                        goto LABEL_137;
                      v51 = *(struct System_String_o **)(v5 + 40);
                      *p_defaultTextColor = v51;
                      v5 = sub_1C71354(p_defaultTextColor, v51);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v9 >= this->fields.txtLength )
        return;
    }
    if ( (v8 & 1) == 0 )
      goto LABEL_67;
    v15 = this->fields.allCreditText;
    if ( !v15 )
      goto LABEL_136;
    if ( v9 >= LODWORD(v15->max_length) )
      goto LABEL_137;
    v5 = (__int64)v15->m_Items[v9];
    if ( !v5 )
      goto LABEL_136;
    v5 = (__int64)System_String__Replace_64078288(
                    (System_String_o *)v5,
                    (System_String_o *)StringLiteral_86/*"\r"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
    v16 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v16->fields._size;
    v20 = v5;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)v5,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v20;
      v5 = sub_1C71354(v21 + 4, v20);
    }
    v24 = this->fields.allCreditText;
    if ( !v24 )
      goto LABEL_136;
    if ( v9 >= LODWORD(v24->max_length) )
      goto LABEL_137;
    v5 = (__int64)v24->m_Items[v9];
    if ( !v5 )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6795/*"FontSize"*/, 0);
    if ( (v5 & 1) != 0 )
    {
      v26 = this->fields.allCreditText;
      if ( !v26 )
        goto LABEL_136;
      if ( v9 >= LODWORD(v26->max_length) )
        goto LABEL_137;
      v5 = (__int64)v26->m_Items[v9];
      if ( !v5 )
        goto LABEL_136;
      v5 = (__int64)System_String__Split((System_String_o *)v5, 0x7Eu, 0, 0);
      if ( !v5 )
        goto LABEL_136;
      v27 = *(_DWORD *)(v5 + 24);
      v28 = v5;
      if ( v27 >= 1 )
      {
        v29 = 0;
        while ( v29 < v27 )
        {
          v30 = v28 + 8LL * (int)v29;
          v32 = *(_QWORD *)(v30 + 32);
          v31 = (__int64 *)(v30 + 32);
          v5 = v32;
          if ( !v32 )
            goto LABEL_136;
          v5 = System_String__Contains((System_String_o *)v5, (System_String_o *)StringLiteral_6795/*"FontSize"*/, 0);
          if ( (v5 & 1) != 0 )
          {
            if ( v29 >= *(_DWORD *)(v28 + 24) )
              break;
            v5 = *v31;
            if ( !*v31 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_64078288(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1490/*"<"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v29 >= *(_DWORD *)(v28 + 24) )
              break;
            *v31 = v5;
            v5 = sub_1C71354(v31, v5);
            if ( v29 >= *(_DWORD *)(v28 + 24) )
              break;
            v5 = *v31;
            if ( !*v31 )
              goto LABEL_136;
            v5 = (__int64)System_String__Replace_64078288(
                            (System_String_o *)v5,
                            (System_String_o *)StringLiteral_1743/*">"*/,
                            (System_String_o *)StringLiteral_1/*""*/,
                            0);
            if ( v29 >= *(_DWORD *)(v28 + 24) )
              break;
            *v31 = v5;
            v5 = sub_1C71354(v31, v5);
            if ( v29 >= *(_DWORD *)(v28 + 24) )
              break;
            v5 = *v31;
            if ( !*v31 )
              goto LABEL_136;
            v5 = (__int64)System_String__Split((System_String_o *)v5, 0x3Du, 0, 0);
            if ( !v5 )
              goto LABEL_136;
            if ( *(_DWORD *)(v5 + 24) <= 1u )
              break;
            v5 = System_Int32__Parse(*(System_String_o **)(v5 + 40), 0);
            defaultFontSize = v5;
          }
          v27 = *(_DWORD *)(v28 + 24);
          if ( (int)++v29 >= v27 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1C71610(v5);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v8 = 1;
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

  if ( (byte_4CC154A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4CC154A = 1;
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
           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C71608(creditText, v6);
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

  if ( (byte_4CC1549 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CC1549 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_49716584(endrolContentParent, gameObject, 0);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v8 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v10),
        !this->fields.creditText)
    || (v11 = (int)contentPref,
        v12 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v12,
                                                   v8,
                                                   v11,
                                                   v13),
        !v8) )
  {
LABEL_11:
    sub_1C71608(contentPref, *(_QWORD *)&index);
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

  if ( (byte_4CC1547 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1547 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
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

  if ( (byte_4CC154E & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_5424/*"ENDROLL_TITLE"*/);
    sub_1C713B0(&StringLiteral_5423/*"ENDROLL_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_5421/*"ENDROLL_CANCEL"*/);
    sub_1C713B0(&StringLiteral_5422/*"ENDROLL_DECIDE"*/);
    byte_4CC154E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5424/*"ENDROLL_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5423/*"ENDROLL_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5422/*"ENDROLL_DECIDE"*/, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5421/*"ENDROLL_CANCEL"*/, 0);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_EndrolRootComponent_callbackConfirmDlg__, 0);
  if ( !Instance )
    sub_1C71608(v9, v10);
  CommonUI__OpenConfirmDialog_31440236((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0);
}


void EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4CC1543 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_4CC1543 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
    sub_1C71608(panel, method);
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

  if ( (byte_4CC1545 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_1C713B0(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_4CC1545 = 1;
  }
  v7 = (Il2CppObject *)sub_1C715FC(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C71354(&v7[1], this);
  v7[1].monitor = endCallback;
  sub_1C71354(&v7[1].monitor, endCallback);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0);
  this->fields.lastObjectPosY = 0;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v10, v11);
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
        this = (EndrolRootComponent_o *)sub_1C71354(&v3->fields.allCreditText, v4),
        (allCreditText = v3->fields.allCreditText) == 0) )
  {
    sub_1C71608(this, assetData);
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
  Il2CppObject *Object_object__51560868; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_4CC1544 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_TextAsset____78636992);
    this = (EndrolRootComponent_o *)sub_1C713B0(&StringLiteral_18371/*"credit"*/);
    byte_4CC1544 = 1;
  }
  if ( !data
    || (Object_object__51560868 = AssetData__GetObject_object__51560868(
                                    data,
                                    (System_String_o *)StringLiteral_18371/*"credit"*/,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_TextAsset____78636992),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__51560868, v8),
        !endCallback) )
  {
    sub_1C71608(this, data);
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
  if ( (byte_4CC154C & 1) == 0 )
  {
    sub_1C713B0(&System_Enum_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&UIWidget_Pivot_var);
    sub_1C713B0(&UIWidget_Pivot_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&StringLiteral_1737/*"="*/);
    sub_1C713B0(&StringLiteral_20029/*"height"*/);
    sub_1C713B0(&StringLiteral_1490/*"<"*/);
    sub_1C713B0(&StringLiteral_21291/*"left"*/);
    sub_1C713B0(&StringLiteral_23232/*"right"*/);
    sub_1C713B0(&StringLiteral_341/*"\""*/);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_24950/*"width"*/);
    sub_1C713B0(&StringLiteral_1743/*">"*/);
    this = (EndrolRootComponent_o *)sub_1C713B0(&StringLiteral_17820/*"center"*/);
    byte_4CC154C = 1;
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
      this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1490/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v22->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1743/*">"*/,
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
          this = (EndrolRootComponent_o *)sub_1C71458(string___TypeInfo, v24);
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
                                              (System_String_o *)StringLiteral_1490/*"<"*/,
                                              0);
            if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
              break;
            v31 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v31 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1490/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C71354(p_endrolContentParent, this);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1743/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              this = (EndrolRootComponent_o *)sub_1C71354(p_endrolContentParent, this);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1737/*"="*/,
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
                                                (System_String_o *)StringLiteral_15808/*"["*/,
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
                this = (EndrolRootComponent_o *)System_String__Concat_64031724(
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
              this = (EndrolRootComponent_o *)sub_1C71354(v34 + 4, v33);
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
    sub_1C71610(this);
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
                                            (System_String_o *)StringLiteral_1490/*"<"*/,
                                            0);
          if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v19 = (char)this;
          this = *v17;
          if ( !*v17 )
            goto LABEL_145;
          if ( (v19 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1490/*"<"*/,
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
            this = (EndrolRootComponent_o *)System_String__Replace_64078288(
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
                                              (System_String_o *)StringLiteral_24950/*"width"*/,
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
                                                (System_String_o *)StringLiteral_20029/*"height"*/,
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
                v21 = System_String__Replace_64078288(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1743/*">"*/,
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
                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15808/*"["*/,
                                          0);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v57 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_64031724(defaultTextColor, (System_String_o *)v57, 0);
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
    sub_1C71608(this, nextDispString);
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
                                      (System_String_o *)StringLiteral_1490/*"<"*/,
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
                                        (System_String_o *)StringLiteral_15808/*"["*/,
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
        this = (EndrolRootComponent_o *)System_String__Concat_64031724(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v44,
                                          0);
        v40 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1490/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v44 = this;
    this = (EndrolRootComponent_o *)sub_1C71354(v44, this);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_64078288(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1743/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v44 = this;
    this = (EndrolRootComponent_o *)sub_1C71354(v44, this);
    if ( v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v44;
    if ( !*v44 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1737/*"="*/,
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
                                      (System_String_o *)StringLiteral_17820/*"center"*/,
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
                                      (System_String_o *)StringLiteral_21291/*"left"*/,
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
                                      (System_String_o *)StringLiteral_23232/*"right"*/,
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
  this = (EndrolRootComponent_o *)System_String__Substring_64077664((System_String_o *)this, 0, 1, 0);
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
  v51 = System_String__Concat_64031724((System_String_o *)v49, v50, 0);
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
  v64 = (EndrolRootComponent_o *)sub_1C719A4(this);
  EndrolRootComponent__callbackConfirmDlg(v64, v65, v66);
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
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v11; // [xsp+8h] [xbp-68h] BYREF
  int v12; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CC1542 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Hashtable_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_9979/*"OnUpdateScroll"*/);
    sub_1C713B0(&StringLiteral_19766/*"from"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22541/*"onupdate"*/);
    sub_1C713B0(&StringLiteral_9955/*"OnScrollEnd"*/);
    sub_1C713B0(&StringLiteral_24228/*"to"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC1542 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_1C715FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65394340(v4, 0);
  v12 = 0;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  if ( !v4 )
    sub_1C71608(v5, v6);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_19766/*"from"*/,
    v5,
    v4->klass->vtable._22_Add.method);
  v11 = lastPostion + 580.0;
  v7 = j_il2cpp_value_box_0(float_TypeInfo, &v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24228/*"to"*/,
    v7,
    v4->klass->vtable._22_Add.method);
  endrolTotalTime = this->fields.endrolTotalTime;
  v8 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24189/*"time"*/,
    v8,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22541/*"onupdate"*/,
    StringLiteral_9979/*"OnUpdateScroll"*/,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22533/*"oncomplete"*/,
    StringLiteral_9955/*"OnScrollEnd"*/,
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

  if ( (byte_4CC1546 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_EndrolRootComponent_EndFadeout__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1546 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


System_Collections_IEnumerator_o *EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20

  if ( (byte_4CC1548 & 1) == 0 )
  {
    sub_1C713B0(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_4CC1548 = 1;
  }
  v6 = sub_1C715FC(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1C71354(v6 + 40, callback);
  return (System_Collections_IEnumerator_o *)v6;
}


void EndrolRootComponent__callbackConfirmDlg(EndrolRootComponent_o *this, bool isSkip, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CC154D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC154D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v6);
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
  if ( (byte_4CC1552 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CC1552 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C71608(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1C71354(&v2->fields.__2__current, v5);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v9; // x20
  const MethodInfo *v10; // x2
  struct EndrolRootComponent_o *v11; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4CC1551 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_4CC1551 = 1;
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
  endCallback = this->fields.endCallback;
  _4__this->fields.mEndAct = endCallback;
  sub_1C71354(&_4__this->fields.mEndAct, endCallback);
  _4__this = (EndrolRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    _4__this = (EndrolRootComponent_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v9
    || (CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (EndrolRootComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)_4__this,
                                              0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (v11 = this->fields.__4__this) == 0) )
  {
LABEL_23:
    sub_1C71608(_4__this, method);
  }
  startWaitTime = v11->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)this, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, 0);
    this->fields.__9__1 = _9__1;
    _4__this = (EndrolRootComponent_o *)sub_1C71354(&this->fields.__9__1, _9__1);
  }
  v14 = EndrolRootComponent__Wait(_4__this, startWaitTime, _9__1, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v11, v14, 0);
}


void EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}