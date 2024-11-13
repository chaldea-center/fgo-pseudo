void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19F69 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B19F69 = 1;
  }
  this->fields.nowDispIndex = -1;
  v4 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  this->fields.effectWave = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectWave, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall EndrolRootComponent__CheckNextDispContent(
        EndrolRootComponent_o *this,
        System_String_o *nextDispText,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_4B19F64 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18248/*"column=3"*/, nextDispText, method);
    sub_1BCA7E0(&StringLiteral_18247/*"column=2"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1594/*"<"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v8, v9);
    this = (EndrolRootComponent_o *)sub_1BCA7E0(&StringLiteral_7601/*"Image"*/, v10, v11);
    byte_4B19F64 = 1;
  }
  if ( !nextDispText )
    sub_1BCAA3C(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7601/*"Image"*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1883/*"@"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1594/*"<"*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18247/*"column=2"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18248/*"column=3"*/, 0LL) )
    return 5;
  return 4;
}


void __fastcall EndrolRootComponent__CheckOrderEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_object__o *v43; // x21
  struct System_Collections_Generic_List_string__o **p_creditText; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t klass; // x0
  __int64 v52; // x1
  int32_t txtLength; // w8
  char v54; // w24
  il2cpp_array_size_t v55; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v57; // x8
  struct System_String_array *v58; // x8
  struct System_String_array *v59; // x9
  char v60; // w8
  struct System_String_array *v61; // x8
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_List_object__o *v68; // x8
  struct System_Object_array *items; // x9
  _QWORD *v70; // x10
  __int64 size; // x11
  int64_t v72; // x1
  Il2CppClass **v73; // x0
  struct System_String_array *v74; // x9
  char v75; // w8
  struct System_String_array *v76; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v78; // x8
  int v79; // w8
  int64_t v80; // x23
  unsigned int v81; // w27
  int64_t v82; // x25
  PartyOrganizationUtility_o *v83; // x25
  int64_t v84; // t1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_String_array *v97; // x8
  struct System_String_array *v98; // x9
  char v99; // w8
  struct System_String_array *v100; // x9
  char v101; // w8
  System_String_o *v102; // x23
  float v103; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v105; // x25
  struct System_String_array *v106; // x9
  char v107; // w8
  System_String_o *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_String_o *v121; // x1
  struct System_String_array *v122; // x9
  char v123; // w8
  struct System_String_array *v124; // x9
  char v125; // w8
  struct System_String_array *v126; // x8
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x1
  PartyOrganizationUtility_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4B19F68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_19062/*"effect"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_6888/*"FontSize"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23293/*"scroll"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23728/*"start"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17347/*"bgm"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18731/*"default_text_color"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1594/*"<"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_9469/*"NULL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_19193/*"end"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_18730/*"default_font_size"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17333/*"begine_time"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_87/*"\r"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_18729/*"default_clearance"*/, v41, v42);
    byte_4B19F68 = 1;
  }
  v43 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v43;
  p_creditText = &this->fields.creditText;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.creditText, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v54 = 0;
    v55 = 0;
    p_defaultTextColor = (PartyOrganizationUtility_o *)&this->fields.defaultTextColor;
    p_bgmName = (PartyOrganizationUtility_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v55 >= allCreditText->max_length )
        goto LABEL_137;
      klass = (int64_t)allCreditText->m_Items[v55];
      if ( !klass )
LABEL_136:
        sub_1BCAA3C(klass, v52);
      klass = System_String__StartsWith((System_String_o *)klass, (System_String_o *)StringLiteral_1883/*"@"*/, 0LL);
      if ( (klass & 1) == 0 )
        break;
      v57 = this->fields.allCreditText;
      if ( !v57 )
        goto LABEL_136;
      if ( v55 >= v57->max_length )
        goto LABEL_137;
      klass = (int64_t)v57->m_Items[v55];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23728/*"start"*/, 0LL);
      if ( (klass & 1) != 0 )
        goto LABEL_65;
      v58 = this->fields.allCreditText;
      if ( !v58 )
        goto LABEL_136;
      if ( v55 >= v58->max_length )
        goto LABEL_137;
      klass = (int64_t)v58->m_Items[v55];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17333/*"begine_time"*/, 0LL);
      v59 = this->fields.allCreditText;
      if ( !v59 )
        goto LABEL_136;
      if ( v55 >= v59->max_length )
        goto LABEL_137;
      v60 = klass;
      klass = (int64_t)v59->m_Items[v55];
      if ( !klass )
        goto LABEL_136;
      if ( (v60 & 1) != 0 )
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
        klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23293/*"scroll"*/, 0LL);
        v74 = this->fields.allCreditText;
        if ( !v74 )
          goto LABEL_136;
        if ( v55 >= v74->max_length )
          goto LABEL_137;
        v75 = klass;
        klass = (int64_t)v74->m_Items[v55];
        if ( !klass )
          goto LABEL_136;
        if ( (v75 & 1) != 0 )
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
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19193/*"end"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
LABEL_67:
            v54 = 0;
            goto LABEL_68;
          }
          v97 = this->fields.allCreditText;
          if ( !v97 )
            goto LABEL_136;
          if ( v55 >= v97->max_length )
            goto LABEL_137;
          klass = (int64_t)v97->m_Items[v55];
          if ( !klass )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_24854/*"wait"*/, 0LL);
          v98 = this->fields.allCreditText;
          if ( !v98 )
            goto LABEL_136;
          if ( v55 >= v98->max_length )
            goto LABEL_137;
          v99 = klass;
          klass = (int64_t)v98->m_Items[v55];
          if ( !klass )
            goto LABEL_136;
          if ( (v99 & 1) != 0 )
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
            klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19062/*"effect"*/, 0LL);
            v100 = this->fields.allCreditText;
            if ( !v100 )
              goto LABEL_136;
            if ( v55 >= v100->max_length )
              goto LABEL_137;
            v101 = klass;
            klass = (int64_t)v100->m_Items[v55];
            if ( !klass )
              goto LABEL_136;
            if ( (v101 & 1) != 0 )
            {
              klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              v102 = *(System_String_o **)(klass + 40);
              if ( !v102 )
                goto LABEL_136;
              klass = (int64_t)System_String__Split(*(System_String_o **)(klass + 40), 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !*(_DWORD *)(klass + 24) )
                goto LABEL_137;
              v103 = System_Single__Parse(*(System_String_o **)(klass + 32), 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v103 / 10.0;
              klass = (int64_t)System_String__Split(v102, 0x7Eu, 0, 0LL);
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
              v105 = this->fields.effectWave;
              klass = (int64_t)System_String__Split(v102, 0x7Eu, 0, 0LL);
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
              if ( !v105 )
                goto LABEL_136;
              if ( v105->max_length <= 1 )
                goto LABEL_137;
              v105->m_Items[2] = klass;
              klass = (int64_t)System_String__Split(v102, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(klass + 48), 0LL);
            }
            else
            {
              klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17347/*"bgm"*/, 0LL);
              v106 = this->fields.allCreditText;
              if ( !v106 )
                goto LABEL_136;
              if ( v55 >= v106->max_length )
                goto LABEL_137;
              v107 = klass;
              klass = (int64_t)v106->m_Items[v55];
              if ( !klass )
                goto LABEL_136;
              if ( (v107 & 1) != 0 )
              {
                v108 = System_String__Replace_62420848(
                         (System_String_o *)klass,
                         (System_String_o *)StringLiteral_87/*"\r"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                p_bgmName->klass = (PartyOrganizationUtility_c *)v108;
                sub_1BCA784(p_bgmName, (int64_t)v108, v109, v110, v111, v112, v113, v114);
                klass = (int64_t)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( *(_DWORD *)(klass + 24) <= 1u )
                  goto LABEL_137;
                v121 = *(struct System_String_o **)(klass + 40);
                this->fields.bgmName = v121;
                sub_1BCA784(p_bgmName, (int64_t)v121, v115, v116, v117, v118, v119, v120);
                klass = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9469/*"NULL"*/, 0LL);
                this->fields.isBgmPlay = klass & 1;
              }
              else
              {
                klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18730/*"default_font_size"*/, 0LL);
                v122 = this->fields.allCreditText;
                if ( !v122 )
                  goto LABEL_136;
                if ( v55 >= v122->max_length )
                  goto LABEL_137;
                v123 = klass;
                klass = (int64_t)v122->m_Items[v55];
                if ( !klass )
                  goto LABEL_136;
                if ( (v123 & 1) != 0 )
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
                  klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18729/*"default_clearance"*/, 0LL);
                  v124 = this->fields.allCreditText;
                  if ( !v124 )
                    goto LABEL_136;
                  if ( v55 >= v124->max_length )
                    goto LABEL_137;
                  v125 = klass;
                  klass = (int64_t)v124->m_Items[v55];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v125 & 1) != 0 )
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
                              (System_String_o *)StringLiteral_18731/*"default_text_color"*/,
                              0LL);
                    if ( (klass & 1) != 0 )
                    {
                      v126 = this->fields.allCreditText;
                      if ( !v126 )
                        goto LABEL_136;
                      if ( v55 >= v126->max_length )
                        goto LABEL_137;
                      klass = (int64_t)v126->m_Items[v55];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( *(_DWORD *)(klass + 24) <= 1u )
                        goto LABEL_137;
                      v133 = *(_QWORD *)(klass + 40);
                      p_defaultTextColor->klass = (PartyOrganizationUtility_c *)v133;
                      sub_1BCA784(p_defaultTextColor, v133, v127, v128, v129, v130, v131, v132);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v55 >= this->fields.txtLength )
        return;
    }
    if ( (v54 & 1) == 0 )
      goto LABEL_67;
    v61 = this->fields.allCreditText;
    if ( !v61 )
      goto LABEL_136;
    if ( v55 >= v61->max_length )
      goto LABEL_137;
    klass = (int64_t)v61->m_Items[v55];
    if ( !klass )
      goto LABEL_136;
    klass = (int64_t)System_String__Replace_62420848(
                       (System_String_o *)klass,
                       (System_String_o *)StringLiteral_87/*"\r"*/,
                       (System_String_o *)StringLiteral_1/*""*/,
                       0LL);
    v68 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v68->fields._items;
    v70 = Method_System_Collections_Generic_List_string__Add__;
    ++v68->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v68->fields._size;
    v72 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)klass,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &items->obj.klass + size;
      v68->fields._size = size + 1;
      v73[4] = (Il2CppClass *)v72;
      sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), v72, v62, v63, v64, v65, v66, v67);
    }
    v76 = this->fields.allCreditText;
    if ( !v76 )
      goto LABEL_136;
    if ( v55 >= v76->max_length )
      goto LABEL_137;
    klass = (int64_t)v76->m_Items[v55];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6888/*"FontSize"*/, 0LL);
    if ( (klass & 1) != 0 )
    {
      v78 = this->fields.allCreditText;
      if ( !v78 )
        goto LABEL_136;
      if ( v55 >= v78->max_length )
        goto LABEL_137;
      klass = (int64_t)v78->m_Items[v55];
      if ( !klass )
        goto LABEL_136;
      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v79 = *(_DWORD *)(klass + 24);
      v80 = klass;
      if ( v79 >= 1 )
      {
        v81 = 0;
        while ( v81 < v79 )
        {
          v82 = v80 + 8LL * (int)v81;
          v84 = *(_QWORD *)(v82 + 32);
          v83 = (PartyOrganizationUtility_o *)(v82 + 32);
          klass = v84;
          if ( !v84 )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6888/*"FontSize"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
            if ( v81 >= *(_DWORD *)(v80 + 24) )
              break;
            klass = (int64_t)v83->klass;
            if ( !v83->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_62420848(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1594/*"<"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v81 >= *(_DWORD *)(v80 + 24) )
              break;
            v83->klass = (PartyOrganizationUtility_c *)klass;
            sub_1BCA784(v83, klass, v85, v86, v87, v88, v89, v90);
            if ( v81 >= *(_DWORD *)(v80 + 24) )
              break;
            klass = (int64_t)v83->klass;
            if ( !v83->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_62420848(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1858/*">"*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v81 >= *(_DWORD *)(v80 + 24) )
              break;
            v83->klass = (PartyOrganizationUtility_c *)klass;
            sub_1BCA784(v83, klass, v91, v92, v93, v94, v95, v96);
            if ( v81 >= *(_DWORD *)(v80 + 24) )
              break;
            klass = (int64_t)v83->klass;
            if ( !v83->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( *(_DWORD *)(klass + 24) <= 1u )
              break;
            klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
            defaultFontSize = klass;
          }
          v79 = *(_DWORD *)(v80 + 24);
          if ( (int)++v81 >= v79 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1BCAA44(klass, v52);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v54 = 1;
    goto LABEL_68;
  }
}


void __fastcall EndrolRootComponent__ClippingItem(
        EndrolRootComponent_o *this,
        EndrolContentItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *creditText; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w0
  int32_t v12; // w21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x4
  int32_t lastObjectPosY; // w21

  if ( (byte_4B19F63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v5, v6);
    byte_4B19F63 = 1;
  }
  creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
  v8 = (const MethodInfo *)(unsigned int)(this->fields.nowDispIndex + 1);
  this->fields.nowDispIndex = (int)v8;
  if ( !creditText )
    goto LABEL_10;
  if ( (int)v8 < creditText->fields._size )
  {
    v9 = System_Collections_Generic_List_object___get_Item(
           creditText,
           (int32_t)v8,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
    v11 = EndrolRootComponent__CheckNextDispContent((EndrolRootComponent_o *)v9, (System_String_o *)v9, v10);
    if ( v11 != 3 )
    {
      v12 = v11;
      creditText = (System_Collections_Generic_List_object__o *)this->fields.creditText;
      if ( creditText )
      {
        v13 = System_Collections_Generic_List_object___get_Item(
                creditText,
                this->fields.nowDispIndex,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        creditText = (System_Collections_Generic_List_object__o *)EndrolRootComponent__SetItemInfo(
                                                                    this,
                                                                    (System_String_o *)v13,
                                                                    item,
                                                                    v12,
                                                                    v14);
        if ( item )
        {
          lastObjectPosY = this->fields.lastObjectPosY;
          this->fields.lastObjectPosY = lastObjectPosY
                                      - EndrolContentItem__get_contentHeight(item, v8)
                                      - this->fields.defaultClearance;
          return;
        }
      }
LABEL_10:
      sub_1BCAA3C(creditText, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EndrolRootComponent__CreateText(EndrolRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *contentPref; // x0
  UnityEngine_GameObject_o *endrolContentParent; // x21
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  EndrolContentItem_o *v13; // x21
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x2
  int32_t v16; // w22
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x4
  int32_t lastObjectPosY; // w20

  if ( (byte_4B19F62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v5, v6);
    sub_1BCA7E0(&NGUITools_TypeInfo, v7, v8);
    byte_4B19F62 = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_47424456(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v13 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v15),
        !this->fields.creditText)
    || (v16 = (int)contentPref,
        v17 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v17,
                                                   v13,
                                                   v16,
                                                   v18),
        !v13) )
  {
LABEL_11:
    sub_1BCAA3C(contentPref, *(_QWORD *)&index);
  }
  lastObjectPosY = this->fields.lastObjectPosY;
  this->fields.lastObjectPosY = lastObjectPosY
                              - EndrolContentItem__get_contentHeight(v13, *(const MethodInfo **)&index)
                              - this->fields.defaultClearance;
}


void __fastcall EndrolRootComponent__EndFadeout(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1

  if ( (byte_4B19F60 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B19F60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  UnityEngine_QualitySettings__set_vSyncCount(0, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v8);
  UnityEngine_Application__set_targetFrameRate(30, 0LL);
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall EndrolRootComponent__OnClickEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  CommonConfirmDialog_ClickDelegate_o *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1

  if ( (byte_4B19F67 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EndrolRootComponent_callbackConfirmDlg__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_5542/*"ENDROLL_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5541/*"ENDROLL_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_5539/*"ENDROLL_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5540/*"ENDROLL_DECIDE"*/, v16, v17);
    byte_4B19F67 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"ENDROLL_TITLE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"ENDROLL_MESSAGE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5540/*"ENDROLL_DECIDE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5539/*"ENDROLL_CANCEL"*/, 0LL);
  v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v24, v25, v26);
  CommonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v28, v29);
  CommonUI__OpenConfirmDialog_30766228((CommonUI_o *)Instance, v20, v21, v22, v23, v27, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  float endWaitTime; // s8
  System_Action_o *v8; // x20
  EndrolRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4B19F5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__, v5, v6);
    byte_4B19F5C = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v11 = EndrolRootComponent__Wait(v9, endWaitTime, v8, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
    sub_1BCAA3C(panel, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3

  if ( (byte_4B19F5E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetData, endCallback);
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, v9, v10);
    sub_1BCA7E0(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo, v11, v12);
    byte_4B19F5E = 1;
  }
  v13 = sub_1BCAA2C(EndrolRootComponent___c__DisplayClass30_0_TypeInfo, assetData, endCallback, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)endCallback, v22, v23, v24, v25, v26, v27);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v28);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)v13, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v32, v33);
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
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.allCreditText, (int64_t)v4, v5, v6, v7, v8, v9, v10),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1BCAA3C(this, assetData);
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
  __int64 v8; // x2
  Il2CppObject *Object_object__49237568; // x0
  const MethodInfo *v10; // x2

  v6 = this;
  if ( (byte_4B19F5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_TextAsset____76836712, data, endCallback);
    this = (EndrolRootComponent_o *)sub_1BCA7E0(&StringLiteral_18513/*"credit"*/, v7, v8);
    byte_4B19F5D = 1;
  }
  if ( !data
    || (Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    data,
                                    (System_String_o *)StringLiteral_18513/*"credit"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_TextAsset____76836712),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__49237568, v10),
        !endCallback) )
  {
    sub_1BCAA3C(this, data);
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
  EndrolContentItem_o *v6; // x28
  EndrolRootComponent_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x4
  int v42; // w8
  EndrolRootComponent_o *v43; // x21
  EndrolRootComponent_o *v44; // x22
  unsigned int v45; // w23
  float v46; // s9
  float v47; // s8
  EndrolRootComponent_c **v48; // x29
  EndrolRootComponent_o **v49; // x29
  EndrolRootComponent_o *v50; // t1
  char v51; // w8
  char v52; // w8
  System_String_o *v53; // x0
  EndrolRootComponent_o *v54; // x21
  int32_t defaultFontSize; // w22
  unsigned int v56; // w0
  const MethodInfo *v57; // x5
  int m_CancellationTokenSource; // w8
  System_String_array *v59; // x23
  il2cpp_array_size_t v60; // w27
  EndrolRootComponent_o **p_endrolContentParent; // x24
  unsigned int v62; // w28
  char v63; // w8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  unsigned int v82; // w8
  EndrolRootComponent_o *v83; // x1
  Il2CppClass **v84; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v86; // x6
  int v87; // w8
  int32_t v88; // w22
  EndrolRootComponent_o *v89; // x21
  EndrolRootComponent_o *v90; // x23
  unsigned int v91; // w27
  int klass; // w24
  EndrolRootComponent_c **v93; // x25
  EndrolRootComponent_o **v94; // x25
  EndrolRootComponent_o *v95; // t1
  char v96; // w8
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  char v109; // w8
  unsigned int v110; // w8
  EndrolRootComponent_o *v111; // x24
  System_String_o *v112; // x0
  __int64 v113; // x1
  System_String_o *v114; // x24
  intptr_t v115; // w25
  __int64 v116; // x1
  System_Type_o *TypeFromHandle; // x25
  __int64 v118; // x2
  __int64 v119; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v122; // x0
  EndrolRootComponent_o *v123; // x2
  int32_t v124; // w3
  int32_t v125; // w1
  int32_t v126; // w4
  EndrolContentItem_o *v127; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v129; // x0
  bool v130; // w1
  const MethodInfo *v131; // x2
  EndrolContentItem_o *v132; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v133; // 0:w0.4
  UnityEngine_Vector2_o v134; // 0:s0.4,4:s1.4

  v6 = item;
  v8 = this;
  if ( (byte_4B19F65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Enum_TypeInfo, nextDispString, item);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v9, v10);
    sub_1BCA7E0(&UIWidget_Pivot_var, v11, v12);
    sub_1BCA7E0(&UIWidget_Pivot_TypeInfo, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Type_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1849/*"="*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20109/*"height"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1594/*"<"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21293/*"left"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_23188/*"right"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_367/*"\""*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_24951/*"width"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v37, v38);
    this = (EndrolRootComponent_o *)sub_1BCA7E0(&StringLiteral_17978/*"center"*/, v39, v40);
    byte_4B19F65 = 1;
  }
  if ( type == 5 )
  {
    if ( !nextDispString )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Split(nextDispString, 0x7Eu, 0, 0LL);
    if ( !this )
      goto LABEL_145;
    v54 = this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      this = (EndrolRootComponent_o *)this->fields.contentPref;
      if ( !this )
        goto LABEL_145;
      defaultFontSize = v8->fields.defaultFontSize;
      this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1594/*"<"*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v54->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v54->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1858/*">"*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v132 = v6;
          v56 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1BCA888(string___TypeInfo, v56);
          m_CancellationTokenSource = (int)v54->fields.m_CancellationTokenSource;
          v59 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v59 )
              goto LABEL_145;
            v6 = v132;
            if ( !v132 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v59->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v132, lastObjectPosY, v59, defaultFontSize, v8, v57);
            else
              EndrolContentItem__SetTripleColumnText(v132, lastObjectPosY, v59, defaultFontSize, v8, v57);
            return v6;
          }
          v60 = 0;
          p_endrolContentParent = (EndrolRootComponent_o **)&v54->fields.endrolContentParent;
          v62 = 1;
          while ( v62 < m_CancellationTokenSource )
          {
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__StartsWith(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1594/*"<"*/,
                                              0LL);
            if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
              break;
            v63 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v63 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1594/*"<"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69);
              if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1858/*">"*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75);
              if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1849/*"="*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v62 >= LODWORD(v54->fields.m_CancellationTokenSource) )
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
                                                (System_String_o *)StringLiteral_15978/*"["*/,
                                                0LL);
              v82 = (unsigned int)v54->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v62 >= v82 )
                  break;
                if ( !v59 )
                  goto LABEL_145;
                if ( v60 >= v59->max_length )
                  break;
                v83 = *p_endrolContentParent;
              }
              else
              {
                if ( v62 >= v82 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_62401220(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v59 )
                  goto LABEL_145;
                if ( v60 >= v59->max_length )
                  break;
                v83 = this;
              }
              v84 = &v59->obj.klass + (int)v60;
              v84[4] = (Il2CppClass *)v83;
              sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v83, v76, v77, v78, v79, v80, v81);
              ++v60;
            }
            m_CancellationTokenSource = (int)v54->fields.m_CancellationTokenSource;
            ++v62;
            ++p_endrolContentParent;
            if ( (int)v62 >= m_CancellationTokenSource )
              goto LABEL_76;
          }
        }
      }
    }
LABEL_144:
    sub_1BCAA44(this, nextDispString);
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
      v42 = (int)this->fields.m_CancellationTokenSource;
      v43 = this;
      v44 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
      if ( v42 < 1 )
      {
        v47 = 0.0;
        v46 = 0.0;
        if ( !v6 )
          goto LABEL_145;
      }
      else
      {
        v45 = 0;
        v46 = 0.0;
        v47 = 0.0;
        do
        {
          if ( v45 >= v42 )
            goto LABEL_144;
          v48 = &v43->klass + (int)v45;
          v50 = (EndrolRootComponent_o *)v48[4];
          v49 = (EndrolRootComponent_o **)(v48 + 4);
          this = v50;
          if ( !v50 )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_String__StartsWith(
                                            (System_String_o *)this,
                                            (System_String_o *)StringLiteral_1594/*"<"*/,
                                            0LL);
          if ( v45 >= LODWORD(v43->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v51 = (char)this;
          this = *v49;
          if ( !*v49 )
            goto LABEL_145;
          if ( (v51 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1594/*"<"*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            if ( v45 >= LODWORD(v43->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            this = *v49;
            if ( !*v49 )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
            if ( !this )
              goto LABEL_145;
            if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_144;
            this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
            if ( !this )
              goto LABEL_145;
            this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_367/*"\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v44 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_24951/*"width"*/,
                                              0LL);
            if ( v45 >= LODWORD(v43->fields.m_CancellationTokenSource) )
              goto LABEL_144;
            v52 = (char)this;
            this = *v49;
            if ( !*v49 )
              goto LABEL_145;
            if ( (v52 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
              if ( !this )
                goto LABEL_145;
              if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                goto LABEL_144;
              v47 = System_Single__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
            }
            else
            {
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_20109/*"height"*/,
                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v45 >= LODWORD(v43->fields.m_CancellationTokenSource) )
                  goto LABEL_144;
                this = *v49;
                if ( !*v49 )
                  goto LABEL_145;
                this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
                if ( !this )
                  goto LABEL_145;
                if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
                  goto LABEL_144;
                this = (EndrolRootComponent_o *)this->fields.endrolContentParent;
                if ( !this )
                  goto LABEL_145;
                v53 = System_String__Replace_62420848(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1858/*">"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                v46 = System_Single__Parse(v53, 0LL);
              }
            }
          }
          v42 = (int)v43->fields.m_CancellationTokenSource;
          ++v45;
        }
        while ( (int)v45 < v42 );
        if ( !v6 )
          goto LABEL_145;
      }
      v134.fields.x = v47;
      v134.fields.y = v46;
      EndrolContentItem__SetImage(v6, v8->fields.lastObjectPosY, (System_String_o *)v44, v134, v8, v41);
      return v6;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_15978/*"["*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v122 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                   v8->fields.nowDispIndex,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_62401220(defaultTextColor, (System_String_o *)v122, 0LL);
        }
        v123 = this;
        if ( v6 )
        {
          v124 = v8->fields.defaultFontSize;
          v125 = v8->fields.lastObjectPosY;
          v126 = 4;
          v127 = v6;
LABEL_142:
          EndrolContentItem__SetText(v127, v125, (System_String_o *)v123, v124, v126, v8, v86);
          return v6;
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
  v87 = (int)this->fields.m_CancellationTokenSource;
  v88 = v8->fields.defaultFontSize;
  v89 = this;
  v90 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v87 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( v6 )
    {
      v125 = v8->fields.lastObjectPosY;
      v127 = v6;
      v123 = v90;
      v124 = v88;
      v126 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1BCAA3C(this, nextDispString);
  }
  v91 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v91 >= v87 )
      goto LABEL_144;
    v93 = &v89->klass + (int)v91;
    v95 = (EndrolRootComponent_o *)v93[4];
    v94 = (EndrolRootComponent_o **)(v93 + 4);
    this = v95;
    if ( !v95 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1594/*"<"*/,
                                      0LL);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v96 = (char)this;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    if ( (v96 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_15978/*"["*/,
                                        0LL);
      v110 = (unsigned int)v89->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v91 >= v110 )
          goto LABEL_144;
        v90 = *v94;
      }
      else
      {
        if ( v91 >= v110 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_62401220(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v94,
                                          0LL);
        v90 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1594/*"<"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v94 = this;
    sub_1BCA784((PartyOrganizationUtility_o *)v94, (int64_t)this, v97, v98, v99, v100, v101, v102);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_62420848(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1858/*">"*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v94 = this;
    sub_1BCA784((PartyOrganizationUtility_o *)v94, (int64_t)this, v103, v104, v105, v106, v107, v108);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1849/*"="*/,
                                      0LL);
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v109 = (char)this;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    if ( (v109 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v88 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_17978/*"center"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21293/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v94;
    if ( !*v94 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_23188/*"right"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v87 = (int)v89->fields.m_CancellationTokenSource;
    if ( (int)++v91 >= v87 )
      goto LABEL_140;
  }
  if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v94;
  if ( !*v94 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_62420224((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v91 >= LODWORD(v89->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v111 = this;
  this = *v94;
  if ( !*v94 )
    goto LABEL_145;
  v112 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v114 = System_String__Concat_62401220((System_String_o *)v111, v112, 0LL);
  v115 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v113);
  v133.fields.value = v115;
  TypeFromHandle = System_Type__GetTypeFromHandle(v133, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v116);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v114, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v118, v119);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1BCACFC(this);
  EndrolRootComponent__callbackConfirmDlg(v129, v130, v131);
  return result;
}


void __fastcall EndrolRootComponent__StartEndroll(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  float lastPostion; // s8
  System_Collections_Hashtable_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  float endrolTotalTime; // [xsp+4h] [xbp-6Ch] BYREF
  float v34; // [xsp+8h] [xbp-68h] BYREF
  int v35; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B19F5B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&float_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10104/*"OnUpdateScroll"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10081/*"OnScrollEnd"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v21, v22);
    sub_1BCA7E0(&iTween_TypeInfo, v23, v24);
    byte_4B19F5B = 1;
  }
  lastPostion = this->fields.lastPostion;
  v26 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v2, v3);
  System_Collections_Hashtable___ctor_62980980(v26, 0LL);
  v35 = 0;
  v27 = j_il2cpp_value_box_0(int_TypeInfo, &v35);
  if ( !v26 )
    sub_1BCAA3C(v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_19858/*"from"*/,
    v27,
    v26->klass->vtable._24_Clear.methodPtr);
  v34 = lastPostion + 580.0;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_24219/*"to"*/,
    v29,
    v26->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_24178/*"time"*/,
    v30,
    v26->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_22521/*"onupdate"*/,
    StringLiteral_10104/*"OnUpdateScroll"*/,
    v26->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_10081/*"OnScrollEnd"*/,
    v26->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v31);
  iTween__ValueTo(gameObject, v26, 0LL);
}


void __fastcall EndrolRootComponent__StopEndrol(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B19F5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EndrolRootComponent_EndFadeout__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19F5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


System_Collections_IEnumerator_o *__fastcall EndrolRootComponent__Wait(
        EndrolRootComponent_o *this,
        float waitTime,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19F61 & 1) == 0 )
  {
    sub_1BCA7E0(&EndrolRootComponent__Wait_d__33_TypeInfo, callback, method);
    byte_4B19F61 = 1;
  }
  v7 = sub_1BCAA2C(EndrolRootComponent__Wait_d__33_TypeInfo, callback, method, v4);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(float *)(v7 + 32) = waitTime;
  *(_QWORD *)(v7 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)callback, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
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

  if ( (byte_4B19F66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip, method);
    byte_4B19F66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  __int64 v3; // x3
  EndrolRootComponent__Wait_d__33_o *v4; // x19
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4B19F6B & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B19F6B = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v4->fields.callback;
    v4->fields.__1__state = -1;
    if ( !callback )
      sub_1BCAA3C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    waitTime = v4->fields.waitTime;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v7, waitTime, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v7;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    result = 1;
    v4->fields.__1__state = 1;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  char *_4__this; // x0
  struct EndrolRootComponent_o *v13; // x8
  System_String_o *bgmName; // x20
  const MethodInfo *v15; // x2
  int32_t i; // w20
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v23; // x20
  const MethodInfo *v24; // x2
  __int64 v25; // x3
  struct EndrolRootComponent_o *v26; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_IEnumerator_o *v35; // x1

  if ( (byte_4B19F6A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, v10, v11);
    byte_4B19F6A = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  EndrolRootComponent__CheckOrderEndrol((EndrolRootComponent_o *)_4__this, method);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_23;
  if ( v13->fields.isBgmPlay )
  {
    bgmName = v13->fields.bgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__playJingle(bgmName, 0LL);
    v13 = this->fields.__4__this;
    if ( !v13 )
      goto LABEL_23;
  }
  _4__this = (char *)v13->fields.effectManager;
  if ( !_4__this )
    goto LABEL_23;
  EndrolEffectManager__EndEffect((EndrolEffectManager_o *)_4__this, method);
  _4__this = (char *)this->fields.__4__this;
  for ( i = 0; i != 30; ++i )
  {
    if ( !_4__this )
      goto LABEL_23;
    EndrolRootComponent__CreateText((EndrolRootComponent_o *)_4__this, i, v15);
    _4__this = (char *)this->fields.__4__this;
  }
  if ( !_4__this )
    goto LABEL_23;
  endCallback = this->fields.endCallback;
  *((_QWORD *)_4__this + 20) = endCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(_4__this + 160),
    (int64_t)endCallback,
    (int64_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v23
    || (CommonUI__maskFadein(v23, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v26 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(_4__this, method);
  }
  startWaitTime = v26->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v24, v25);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v29, v30, v31, v32, v33, v34);
  }
  v35 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v26, v35, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}