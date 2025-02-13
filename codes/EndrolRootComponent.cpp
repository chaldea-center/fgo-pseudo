void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE03B5 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BE03B5 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectWave, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  if ( (byte_4BE03B0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18371/*"column=3"*/);
    sub_1C21E38(&StringLiteral_18370/*"column=2"*/);
    sub_1C21E38(&StringLiteral_1599/*"<"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    this = (EndrolRootComponent_o *)sub_1C21E38(&StringLiteral_7653/*"Image"*/);
    byte_4BE03B0 = 1;
  }
  if ( !nextDispText )
    sub_1C22094(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7653/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1892/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1599/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18370/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18371/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t klass; // x0
  __int64 v12; // x1
  int32_t txtLength; // w8
  char v14; // w24
  il2cpp_array_size_t v15; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v17; // x8
  struct System_String_array *v18; // x8
  struct System_String_array *v19; // x9
  char v20; // w8
  struct System_String_array *v21; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  int64_t v32; // x1
  Il2CppClass **v33; // x0
  struct System_String_array *v34; // x9
  char v35; // w8
  struct System_String_array *v36; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v38; // x8
  int v39; // w8
  int64_t v40; // x23
  unsigned int v41; // w27
  int64_t v42; // x25
  PartyOrganizationUtility_o *v43; // x25
  int64_t v44; // t1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_String_array *v57; // x8
  struct System_String_array *v58; // x9
  char v59; // w8
  struct System_String_array *v60; // x9
  char v61; // w8
  System_String_o *v62; // x23
  float v63; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v65; // x25
  struct System_String_array *v66; // x9
  char v67; // w8
  System_String_o *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_String_o *v81; // x1
  struct System_String_array *v82; // x9
  char v83; // w8
  struct System_String_array *v84; // x9
  char v85; // w8
  struct System_String_array *v86; // x8
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x1
  PartyOrganizationUtility_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4BE03B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&StringLiteral_19192/*"effect"*/);
    sub_1C21E38(&StringLiteral_6939/*"FontSize"*/);
    sub_1C21E38(&StringLiteral_23471/*"scroll"*/);
    sub_1C21E38(&StringLiteral_23908/*"start"*/);
    sub_1C21E38(&StringLiteral_17464/*"bgm"*/);
    sub_1C21E38(&StringLiteral_18857/*"default_text_color"*/);
    sub_1C21E38(&StringLiteral_1599/*"<"*/);
    sub_1C21E38(&StringLiteral_9531/*"NULL"*/);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    sub_1C21E38(&StringLiteral_19324/*"end"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_18856/*"default_font_size"*/);
    sub_1C21E38(&StringLiteral_17449/*"begine_time"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_88/*"\r"*/);
    sub_1C21E38(&StringLiteral_1871/*">"*/);
    sub_1C21E38(&StringLiteral_18855/*"default_clearance"*/);
    byte_4BE03B4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v3;
  p_creditText = &this->fields.creditText;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.creditText, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v14 = 0;
    v15 = 0;
    p_defaultTextColor = (PartyOrganizationUtility_o *)&this->fields.defaultTextColor;
    p_bgmName = (PartyOrganizationUtility_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v15 >= allCreditText->max_length )
        goto LABEL_137;
      klass = (int64_t)allCreditText->m_Items[v15];
      if ( !klass )
LABEL_136:
        sub_1C22094(klass, v12);
      klass = System_String__StartsWith((System_String_o *)klass, (System_String_o *)StringLiteral_1892/*"@"*/, 0LL);
      if ( (klass & 1) == 0 )
        break;
      v17 = this->fields.allCreditText;
      if ( !v17 )
        goto LABEL_136;
      if ( v15 >= v17->max_length )
        goto LABEL_137;
      klass = (int64_t)v17->m_Items[v15];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23908/*"start"*/, 0LL);
      if ( (klass & 1) != 0 )
        goto LABEL_65;
      v18 = this->fields.allCreditText;
      if ( !v18 )
        goto LABEL_136;
      if ( v15 >= v18->max_length )
        goto LABEL_137;
      klass = (int64_t)v18->m_Items[v15];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17449/*"begine_time"*/, 0LL);
      v19 = this->fields.allCreditText;
      if ( !v19 )
        goto LABEL_136;
      if ( v15 >= v19->max_length )
        goto LABEL_137;
      v20 = klass;
      klass = (int64_t)v19->m_Items[v15];
      if ( !klass )
        goto LABEL_136;
      if ( (v20 & 1) != 0 )
      {
        klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
        if ( !klass )
          goto LABEL_136;
        if ( *(_DWORD *)(klass + 24) <= 1u )
          goto LABEL_137;
        this->fields.startWaitTime = System_Single__Parse(*(System_String_o **)(klass + 40), 0LL) / 10.0;
      }
      else
      {
        klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23471/*"scroll"*/, 0LL);
        v34 = this->fields.allCreditText;
        if ( !v34 )
          goto LABEL_136;
        if ( v15 >= v34->max_length )
          goto LABEL_137;
        v35 = klass;
        klass = (int64_t)v34->m_Items[v15];
        if ( !klass )
          goto LABEL_136;
        if ( (v35 & 1) != 0 )
        {
          klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
          if ( !klass )
            goto LABEL_136;
          if ( *(_DWORD *)(klass + 24) <= 1u )
            goto LABEL_137;
          this->fields.endrolTotalTime = System_Single__Parse(*(System_String_o **)(klass + 40), 0LL) / 10.0;
        }
        else
        {
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19324/*"end"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
LABEL_67:
            v14 = 0;
            goto LABEL_68;
          }
          v57 = this->fields.allCreditText;
          if ( !v57 )
            goto LABEL_136;
          if ( v15 >= v57->max_length )
            goto LABEL_137;
          klass = (int64_t)v57->m_Items[v15];
          if ( !klass )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_25041/*"wait"*/, 0LL);
          v58 = this->fields.allCreditText;
          if ( !v58 )
            goto LABEL_136;
          if ( v15 >= v58->max_length )
            goto LABEL_137;
          v59 = klass;
          klass = (int64_t)v58->m_Items[v15];
          if ( !klass )
            goto LABEL_136;
          if ( (v59 & 1) != 0 )
          {
            klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( *(_DWORD *)(klass + 24) <= 1u )
              goto LABEL_137;
            this->fields.endWaitTime = System_Single__Parse(*(System_String_o **)(klass + 40), 0LL) / 10.0;
          }
          else
          {
            klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19192/*"effect"*/, 0LL);
            v60 = this->fields.allCreditText;
            if ( !v60 )
              goto LABEL_136;
            if ( v15 >= v60->max_length )
              goto LABEL_137;
            v61 = klass;
            klass = (int64_t)v60->m_Items[v15];
            if ( !klass )
              goto LABEL_136;
            if ( (v61 & 1) != 0 )
            {
              klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              v62 = *(System_String_o **)(klass + 40);
              if ( !v62 )
                goto LABEL_136;
              klass = (int64_t)System_String__Split(*(System_String_o **)(klass + 40), 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !*(_DWORD *)(klass + 24) )
                goto LABEL_137;
              v63 = System_Single__Parse(*(System_String_o **)(klass + 32), 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v63 / 10.0;
              klass = (int64_t)System_String__Split(v62, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              klass = *(_QWORD *)(klass + 40);
              if ( !klass )
                goto LABEL_136;
              klass = (int64_t)System_String__Split((System_String_o *)klass, 0x2Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !*(_DWORD *)(klass + 24) )
                goto LABEL_137;
              klass = System_Int32__Parse(*(System_String_o **)(klass + 32), 0LL);
              if ( !effectWave )
                goto LABEL_136;
              if ( !effectWave->max_length )
                goto LABEL_137;
              effectWave->m_Items[1] = klass;
              v65 = this->fields.effectWave;
              klass = (int64_t)System_String__Split(v62, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              klass = *(_QWORD *)(klass + 40);
              if ( !klass )
                goto LABEL_136;
              klass = (int64_t)System_String__Split((System_String_o *)klass, 0x2Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
              if ( !v65 )
                goto LABEL_136;
              if ( v65->max_length <= 1 )
                goto LABEL_137;
              v65->m_Items[2] = klass;
              klass = (int64_t)System_String__Split(v62, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(klass + 48), 0LL);
            }
            else
            {
              klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17464/*"bgm"*/, 0LL);
              v66 = this->fields.allCreditText;
              if ( !v66 )
                goto LABEL_136;
              if ( v15 >= v66->max_length )
                goto LABEL_137;
              v67 = klass;
              klass = (int64_t)v66->m_Items[v15];
              if ( !klass )
                goto LABEL_136;
              if ( (v67 & 1) != 0 )
              {
                v68 = System_String__Replace_63135104(
                        (System_String_o *)klass,
                        (System_String_o *)StringLiteral_88/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (PartyOrganizationUtility_c *)v68;
                sub_1C21DDC(p_bgmName, (int64_t)v68, v69, v70, v71, v72, v73, v74);
                klass = (int64_t)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( *(_DWORD *)(klass + 24) <= 1u )
                  goto LABEL_137;
                v81 = *(struct System_String_o **)(klass + 40);
                this->fields.bgmName = v81;
                sub_1C21DDC(p_bgmName, (int64_t)v81, v75, v76, v77, v78, v79, v80);
                klass = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9531/*"NULL"*/, 0LL);
                this->fields.isBgmPlay = klass & 1;
              }
              else
              {
                klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18856/*"default_font_size"*/, 0LL);
                v82 = this->fields.allCreditText;
                if ( !v82 )
                  goto LABEL_136;
                if ( v15 >= v82->max_length )
                  goto LABEL_137;
                v83 = klass;
                klass = (int64_t)v82->m_Items[v15];
                if ( !klass )
                  goto LABEL_136;
                if ( (v83 & 1) != 0 )
                {
                  klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                  if ( !klass )
                    goto LABEL_136;
                  if ( *(_DWORD *)(klass + 24) <= 1u )
                    goto LABEL_137;
                  klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
                  this->fields.defaultFontSize = klass;
                }
                else
                {
                  klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18855/*"default_clearance"*/, 0LL);
                  v84 = this->fields.allCreditText;
                  if ( !v84 )
                    goto LABEL_136;
                  if ( v15 >= v84->max_length )
                    goto LABEL_137;
                  v85 = klass;
                  klass = (int64_t)v84->m_Items[v15];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v85 & 1) != 0 )
                  {
                    klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                    if ( !klass )
                      goto LABEL_136;
                    if ( *(_DWORD *)(klass + 24) <= 1u )
                      goto LABEL_137;
                    klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
                    this->fields.defaultClearance = klass;
                  }
                  else
                  {
                    klass = System_String__Contains(
                              (System_String_o *)klass,
                              (System_String_o *)StringLiteral_18857/*"default_text_color"*/,
                              0LL);
                    if ( (klass & 1) != 0 )
                    {
                      v86 = this->fields.allCreditText;
                      if ( !v86 )
                        goto LABEL_136;
                      if ( v15 >= v86->max_length )
                        goto LABEL_137;
                      klass = (int64_t)v86->m_Items[v15];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( *(_DWORD *)(klass + 24) <= 1u )
                        goto LABEL_137;
                      v93 = *(_QWORD *)(klass + 40);
                      p_defaultTextColor->klass = (PartyOrganizationUtility_c *)v93;
                      sub_1C21DDC(p_defaultTextColor, v93, v87, v88, v89, v90, v91, v92);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v15 >= this->fields.txtLength )
        return;
    }
    if ( (v14 & 1) == 0 )
      goto LABEL_67;
    v21 = this->fields.allCreditText;
    if ( !v21 )
      goto LABEL_136;
    if ( v15 >= v21->max_length )
      goto LABEL_137;
    klass = (int64_t)v21->m_Items[v15];
    if ( !klass )
      goto LABEL_136;
    klass = (int64_t)System_String__Replace_63135104(
                       (System_String_o *)klass,
                       (System_String_o *)StringLiteral_88/*"\r"*/,
                       (System_String_o *)StringLiteral_1/*""*/,
                       0LL);
    v28 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v28->fields._items;
    v30 = Method_System_Collections_Generic_List_string__Add__;
    ++v28->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v28->fields._size;
    v32 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v28,
        (Il2CppObject *)klass,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      v28->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v32;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 4), v32, v22, v23, v24, v25, v26, v27);
    }
    v36 = this->fields.allCreditText;
    if ( !v36 )
      goto LABEL_136;
    if ( v15 >= v36->max_length )
      goto LABEL_137;
    klass = (int64_t)v36->m_Items[v15];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6939/*"FontSize"*/, 0LL);
    if ( (klass & 1) != 0 )
    {
      v38 = this->fields.allCreditText;
      if ( !v38 )
        goto LABEL_136;
      if ( v15 >= v38->max_length )
        goto LABEL_137;
      klass = (int64_t)v38->m_Items[v15];
      if ( !klass )
        goto LABEL_136;
      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v39 = *(_DWORD *)(klass + 24);
      v40 = klass;
      if ( v39 >= 1 )
      {
        v41 = 0;
        while ( v41 < v39 )
        {
          v42 = v40 + 8LL * (int)v41;
          v44 = *(_QWORD *)(v42 + 32);
          v43 = (PartyOrganizationUtility_o *)(v42 + 32);
          klass = v44;
          if ( !v44 )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6939/*"FontSize"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
            if ( v41 >= *(_DWORD *)(v40 + 24) )
              break;
            klass = (int64_t)v43->klass;
            if ( !v43->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_63135104(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1599/*"<"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v41 >= *(_DWORD *)(v40 + 24) )
              break;
            v43->klass = (PartyOrganizationUtility_c *)klass;
            sub_1C21DDC(v43, klass, v45, v46, v47, v48, v49, v50);
            if ( v41 >= *(_DWORD *)(v40 + 24) )
              break;
            klass = (int64_t)v43->klass;
            if ( !v43->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_63135104(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1871/*">"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v41 >= *(_DWORD *)(v40 + 24) )
              break;
            v43->klass = (PartyOrganizationUtility_c *)klass;
            sub_1C21DDC(v43, klass, v51, v52, v53, v54, v55, v56);
            if ( v41 >= *(_DWORD *)(v40 + 24) )
              break;
            klass = (int64_t)v43->klass;
            if ( !v43->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( *(_DWORD *)(klass + 24) <= 1u )
              break;
            klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
            defaultFontSize = klass;
          }
          v39 = *(_DWORD *)(v40 + 24);
          if ( (int)++v41 >= v39 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1C2209C(klass, v12);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v14 = 1;
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

  if ( (byte_4BE03AF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4BE03AF = 1;
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
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C22094(creditText, v6);
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

  if ( (byte_4BE03AE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&NGUITools_TypeInfo);
    byte_4BE03AE = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_48037168(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v8 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v10),
        !this->fields.creditText)
    || (v11 = (int)contentPref,
        v12 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v12,
                                                   v8,
                                                   v11,
                                                   v13),
        !v8) )
  {
LABEL_11:
    sub_1C22094(contentPref, *(_QWORD *)&index);
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

  if ( (byte_4BE03AC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE03AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BE03B3 & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_EndrolRootComponent_callbackConfirmDlg__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_5581/*"ENDROLL_TITLE"*/);
    sub_1C21E38(&StringLiteral_5580/*"ENDROLL_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_5578/*"ENDROLL_CANCEL"*/);
    sub_1C21E38(&StringLiteral_5579/*"ENDROLL_DECIDE"*/);
    byte_4BE03B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_5581/*"ENDROLL_TITLE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5580/*"ENDROLL_MESSAGE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5579/*"ENDROLL_DECIDE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5578/*"ENDROLL_CANCEL"*/, 0LL);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1C22094(v9, v10);
  CommonUI__OpenConfirmDialog_31128088((CommonUI_o *)Instance, v4, v5, v6, v7, v8, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  float endWaitTime; // s8
  System_Action_o *v4; // x20
  EndrolRootComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4BE03A8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__);
    byte_4BE03A8 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v7 = EndrolRootComponent__Wait(v5, endWaitTime, v4, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
    sub_1C22094(panel, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3

  if ( (byte_4BE03AA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__);
    sub_1C21E38(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
    byte_4BE03AA = 1;
  }
  v7 = sub_1C22084(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)endCallback, v16, v17, v18, v19, v20, v21);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v7, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v22, v23);
}


void __fastcall EndrolRootComponent__OpenTextFile(
        EndrolRootComponent_o *this,
        UnityEngine_TextAsset_o *assetData,
        const MethodInfo *method)
{
  EndrolRootComponent_o *v3; // x19
  System_String_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_String_array *allCreditText; // x8

  if ( !assetData
    || (v3 = this, (this = (EndrolRootComponent_o *)UnityEngine_TextAsset__get_text(assetData, 0LL)) == 0LL)
    || (v4 = System_String__Split((System_String_o *)this, 0xAu, 0, 0LL),
        v3->fields.allCreditText = v4,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.allCreditText, (int64_t)v4, v5, v6, v7, v8, v9, v10),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1C22094(this, assetData);
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
  Il2CppObject *Object_object__49880776; // x0
  const MethodInfo *v8; // x2

  v6 = this;
  if ( (byte_4BE03A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_TextAsset____77626304);
    this = (EndrolRootComponent_o *)sub_1C21E38(&StringLiteral_18638/*"credit"*/);
    byte_4BE03A9 = 1;
  }
  if ( !data
    || (Object_object__49880776 = AssetData__GetObject_object__49880776(
                                    data,
                                    (System_String_o *)StringLiteral_18638/*"credit"*/,
                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_TextAsset____77626304),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__49880776, v8),
        !endCallback) )
  {
    sub_1C22094(this, data);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  unsigned int v50; // w8
  EndrolRootComponent_o *v51; // x1
  Il2CppClass **v52; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v54; // x6
  int v55; // w8
  int32_t v56; // w22
  EndrolRootComponent_o *v57; // x21
  EndrolRootComponent_o *v58; // x23
  unsigned int v59; // w27
  int klass; // w24
  EndrolRootComponent_c **v61; // x25
  EndrolRootComponent_o **v62; // x25
  EndrolRootComponent_o *v63; // t1
  char v64; // w8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  char v77; // w8
  unsigned int v78; // w8
  EndrolRootComponent_o *v79; // x24
  System_String_o *v80; // x0
  System_String_o *v81; // x24
  intptr_t v82; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v84; // x2
  __int64 v85; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v88; // x0
  EndrolRootComponent_o *v89; // x2
  int32_t v90; // w3
  int32_t v91; // w1
  int32_t v92; // w4
  EndrolContentItem_o *v93; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v95; // x0
  bool v96; // w1
  const MethodInfo *v97; // x2
  EndrolContentItem_o *v98; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v99; // 0:w0.4
  UnityEngine_Vector2_o v100; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4BE03B1 & 1) == 0 )
  {
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&UIWidget_Pivot_var);
    sub_1C21E38(&UIWidget_Pivot_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&StringLiteral_1862/*"="*/);
    sub_1C21E38(&StringLiteral_20250/*"height"*/);
    sub_1C21E38(&StringLiteral_1599/*"<"*/);
    sub_1C21E38(&StringLiteral_21445/*"left"*/);
    sub_1C21E38(&StringLiteral_23360/*"right"*/);
    sub_1C21E38(&StringLiteral_369/*"\""*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_25139/*"width"*/);
    sub_1C21E38(&StringLiteral_1871/*">"*/);
    this = (EndrolRootComponent_o *)sub_1C21E38(&StringLiteral_18098/*"center"*/);
    byte_4BE03B1 = 1;
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
      this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1599/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v22->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v22->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1871/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v98 = item;
          v24 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1C21EE0(string___TypeInfo, v24);
          m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
          v27 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v27 )
              goto LABEL_145;
            item = v98;
            if ( !v98 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v27->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v98, lastObjectPosY, v27, defaultFontSize, v8, v25);
            else
              EndrolContentItem__SetTripleColumnText(v98, lastObjectPosY, v27, defaultFontSize, v8, v25);
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
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
                                              0LL);
            if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
              break;
            v31 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v31 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1599/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1871/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              if ( v30 >= LODWORD(v22->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1862/*"="*/,
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
                                                (System_String_o *)StringLiteral_16086/*"["*/,
                                                0LL);
              v50 = (unsigned int)v22->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v30 >= v50 )
                  break;
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= v27->max_length )
                  break;
                v51 = *p_endrolContentParent;
              }
              else
              {
                if ( v30 >= v50 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_63115476(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v27 )
                  goto LABEL_145;
                if ( v28 >= v27->max_length )
                  break;
                v51 = this;
              }
              v52 = &v27->obj.klass + (int)v28;
              v52[4] = (Il2CppClass *)v51;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v51, v44, v45, v46, v47, v48, v49);
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
    sub_1C2209C(this, nextDispString);
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
                                            (System_String_o *)StringLiteral_1599/*"<"*/,
                                            0LL);
          if ( v13 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v19 = (char)this;
          this = *v17;
          if ( !*v17 )
            goto LABEL_145;
          if ( (v19 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1599/*"<"*/,
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
            this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_369/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v12 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_25139/*"width"*/,
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
                                                (System_String_o *)StringLiteral_20250/*"height"*/,
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
                v21 = System_String__Replace_63135104(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1871/*">"*/,
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
      v100.fields.x = v15;
      v100.fields.y = v14;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v12, v100, v8, v9);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_16086/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v88 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                  v8->fields.nowDispIndex,
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_63115476(defaultTextColor, (System_String_o *)v88, 0LL);
        }
        v89 = this;
        if ( item )
        {
          v90 = v8->fields.defaultFontSize;
          v91 = v8->fields.lastObjectPosY;
          v92 = 4;
          v93 = item;
LABEL_142:
          EndrolContentItem__SetText(v93, v91, (System_String_o *)v89, v90, v92, v8, v54);
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
  v55 = (int)this->fields.m_CancellationTokenSource;
  v56 = v8->fields.defaultFontSize;
  v57 = this;
  v58 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v55 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v91 = v8->fields.lastObjectPosY;
      v93 = item;
      v89 = v58;
      v90 = v56;
      v92 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1C22094(this, nextDispString);
  }
  v59 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v59 >= v55 )
      goto LABEL_144;
    v61 = &v57->klass + (int)v59;
    v63 = (EndrolRootComponent_o *)v61[4];
    v62 = (EndrolRootComponent_o **)(v61 + 4);
    this = v63;
    if ( !v63 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      0LL);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v64 = (char)this;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    if ( (v64 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_16086/*"["*/,
                                        0LL);
      v78 = (unsigned int)v57->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v59 >= v78 )
          goto LABEL_144;
        v58 = *v62;
      }
      else
      {
        if ( v59 >= v78 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_63115476(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v62,
                                          0LL);
        v58 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1599/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v62 = this;
    sub_1C21DDC((PartyOrganizationUtility_o *)v62, (int64_t)this, v65, v66, v67, v68, v69, v70);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_63135104(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1871/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v62 = this;
    sub_1C21DDC((PartyOrganizationUtility_o *)v62, (int64_t)this, v71, v72, v73, v74, v75, v76);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1862/*"="*/,
                                      0LL);
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v77 = (char)this;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    if ( (v77 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v56 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_18098/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21445/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v62;
    if ( !*v62 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_23360/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v55 = (int)v57->fields.m_CancellationTokenSource;
    if ( (int)++v59 >= v55 )
      goto LABEL_140;
  }
  if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v62;
  if ( !*v62 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_63134480((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v79 = this;
  this = *v62;
  if ( !*v62 )
    goto LABEL_145;
  v80 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v81 = System_String__Concat_63115476((System_String_o *)v79, v80, 0LL);
  v82 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v99.fields.value = v82;
  TypeFromHandle = System_Type__GetTypeFromHandle(v99, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v81, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v84, v85);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1C22354(this);
  EndrolRootComponent__callbackConfirmDlg(v95, v96, v97);
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

  if ( (byte_4BE03A7 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_10168/*"OnUpdateScroll"*/);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_10145/*"OnScrollEnd"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BE03A7 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v4 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v4, 0LL);
  v21 = 0;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v21, v5, v6, v7);
  if ( !v4 )
    sub_1C22094(v8, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_19990/*"from"*/,
    v8,
    v4->klass->vtable._24_Clear.methodPtr);
  v20 = lastPostion + 580.0;
  v13 = j_il2cpp_value_box_0(float_TypeInfo, &v20, v10, v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_24401/*"to"*/,
    v13,
    v4->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v14, v15, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_24360/*"time"*/,
    v17,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22688/*"onupdate"*/,
    StringLiteral_10168/*"OnUpdateScroll"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22680/*"oncomplete"*/,
    StringLiteral_10145/*"OnScrollEnd"*/,
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

  if ( (byte_4BE03AB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_EndrolRootComponent_EndFadeout__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE03AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v5 )
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BE03AD & 1) == 0 )
  {
    sub_1C21E38(&EndrolRootComponent__Wait_d__33_TypeInfo);
    byte_4BE03AD = 1;
  }
  v6 = sub_1C22084(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BE03B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE03B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v6);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v2 = this;
  if ( (byte_4BE03B7 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BE03B7 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C22094(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v14; // x20
  const MethodInfo *v15; // x2
  struct EndrolRootComponent_o *v16; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4BE03B6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__);
    byte_4BE03B6 = 1;
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
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 160), (int64_t)endCallback, (int64_t)v6, v8, v9, v10, v11, v12);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C22094(_4__this, method);
  }
  startWaitTime = v16->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
  }
  v25 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v16, v25, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}