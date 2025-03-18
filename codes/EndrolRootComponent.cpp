void __fastcall EndrolRootComponent___ctor(EndrolRootComponent_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C25E82 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    byte_4C25E82 = 1;
  }
  this->fields.nowDispIndex = -1;
  v3 = (struct System_Int32_array *)sub_1C3B80C(int___TypeInfo, 2LL);
  this->fields.effectWave = v3;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectWave, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4C25E7D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18417/*"ebcdic-cp-fr"*/, nextDispText);
    sub_1C3B764(&StringLiteral_18416/*"ebcdic-cp-fi"*/, v4);
    sub_1C3B764(&StringLiteral_1578/*"<b>Position</b>: "*/, v5);
    sub_1C3B764(&StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, v6);
    this = (EndrolRootComponent_o *)sub_1C3B764(&StringLiteral_7646/*"Invalid constraint."*/, v7);
    byte_4C25E7D = 1;
  }
  if ( !nextDispText )
    sub_1C3B9C0(this, nextDispText);
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_7646/*"Invalid constraint."*/, 0LL) )
    return 2;
  if ( System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, 0LL) )
    return 3;
  if ( !System_String__StartsWith(nextDispText, (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/, 0LL) )
    return 1;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18416/*"ebcdic-cp-fi"*/, 0LL) )
    return 5;
  if ( System_String__Contains(nextDispText, (System_String_o *)StringLiteral_18417/*"ebcdic-cp-fr"*/, 0LL) )
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t klass; // x0
  __int64 v31; // x1
  int32_t txtLength; // w8
  char v33; // w24
  il2cpp_array_size_t v34; // w26
  struct System_String_array *allCreditText; // x8
  struct System_String_array *v36; // x8
  struct System_String_array *v37; // x8
  struct System_String_array *v38; // x9
  char v39; // w8
  struct System_String_array *v40; // x8
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x8
  struct System_Object_array *items; // x9
  _QWORD *v49; // x10
  __int64 size; // x11
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  struct System_String_array *v53; // x9
  char v54; // w8
  struct System_String_array *v55; // x8
  int32_t defaultFontSize; // w24
  struct System_String_array *v57; // x8
  int v58; // w8
  int64_t v59; // x23
  unsigned int v60; // w27
  int64_t v61; // x25
  PartyOrganizationUtility_o *v62; // x25
  int64_t v63; // t1
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
  struct System_String_array *v76; // x8
  struct System_String_array *v77; // x9
  char v78; // w8
  struct System_String_array *v79; // x9
  char v80; // w8
  System_String_o *v81; // x23
  float v82; // s0
  struct System_Int32_array *effectWave; // x25
  struct System_Int32_array *v84; // x25
  struct System_String_array *v85; // x9
  char v86; // w8
  System_String_o *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct System_String_o *v100; // x1
  struct System_String_array *v101; // x9
  char v102; // w8
  struct System_String_array *v103; // x9
  char v104; // w8
  struct System_String_array *v105; // x8
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  PartyOrganizationUtility_o *p_defaultTextColor; // [xsp+8h] [xbp-78h]
  PartyOrganizationUtility_o *p_bgmName; // [xsp+18h] [xbp-68h]

  if ( (byte_4C25E81 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1C3B764(&StringLiteral_19236/*"formation_framebg_5"*/, v5);
    sub_1C3B764(&StringLiteral_6932/*"GetResponse"*/, v6);
    sub_1C3B764(&StringLiteral_23535/*"tdPlayed"*/, v7);
    sub_1C3B764(&StringLiteral_23973/*"updateNp"*/, v8);
    sub_1C3B764(&StringLiteral_17509/*"charaCutinPause"*/, v9);
    sub_1C3B764(&StringLiteral_18901/*"event_rewardframe_{0}"*/, v10);
    sub_1C3B764(&StringLiteral_1578/*"<b>Position</b>: "*/, v11);
    sub_1C3B764(&StringLiteral_9527/*"OVER_KILL_STAR_ADD"*/, v12);
    sub_1C3B764(&StringLiteral_25109/*"﹐ﹰ"*/, v13);
    sub_1C3B764(&StringLiteral_19369/*"gd"*/, v14);
    sub_1C3B764(&StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, v15);
    sub_1C3B764(&StringLiteral_18900/*"event_reset_digging"*/, v16);
    sub_1C3B764(&StringLiteral_17494/*"charValue"*/, v17);
    sub_1C3B764(&StringLiteral_1/*""*/, v18);
    sub_1C3B764(&StringLiteral_88/*"\r"*/, v19);
    sub_1C3B764(&StringLiteral_1847/*"A.D."*/, v20);
    sub_1C3B764(&StringLiteral_18899/*"event_reset_data_lost_battle"*/, v21);
    byte_4C25E81 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.creditText = (struct System_Collections_Generic_List_string__o *)v22;
  p_creditText = &this->fields.creditText;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.creditText, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  txtLength = this->fields.txtLength;
  this->fields.lastPostion = 0.0;
  if ( txtLength >= 1 )
  {
    v33 = 0;
    v34 = 0;
    p_defaultTextColor = (PartyOrganizationUtility_o *)&this->fields.defaultTextColor;
    p_bgmName = (PartyOrganizationUtility_o *)&this->fields.bgmName;
    while ( 1 )
    {
      allCreditText = this->fields.allCreditText;
      if ( !allCreditText )
        goto LABEL_136;
      if ( v34 >= allCreditText->max_length )
        goto LABEL_137;
      klass = (int64_t)allCreditText->m_Items[v34];
      if ( !klass )
LABEL_136:
        sub_1C3B9C0(klass, v31);
      klass = System_String__StartsWith((System_String_o *)klass, (System_String_o *)StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, 0LL);
      if ( (klass & 1) == 0 )
        break;
      v36 = this->fields.allCreditText;
      if ( !v36 )
        goto LABEL_136;
      if ( v34 >= v36->max_length )
        goto LABEL_137;
      klass = (int64_t)v36->m_Items[v34];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23973/*"updateNp"*/, 0LL);
      if ( (klass & 1) != 0 )
        goto LABEL_65;
      v37 = this->fields.allCreditText;
      if ( !v37 )
        goto LABEL_136;
      if ( v34 >= v37->max_length )
        goto LABEL_137;
      klass = (int64_t)v37->m_Items[v34];
      if ( !klass )
        goto LABEL_136;
      klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17494/*"charValue"*/, 0LL);
      v38 = this->fields.allCreditText;
      if ( !v38 )
        goto LABEL_136;
      if ( v34 >= v38->max_length )
        goto LABEL_137;
      v39 = klass;
      klass = (int64_t)v38->m_Items[v34];
      if ( !klass )
        goto LABEL_136;
      if ( (v39 & 1) != 0 )
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
        klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_23535/*"tdPlayed"*/, 0LL);
        v53 = this->fields.allCreditText;
        if ( !v53 )
          goto LABEL_136;
        if ( v34 >= v53->max_length )
          goto LABEL_137;
        v54 = klass;
        klass = (int64_t)v53->m_Items[v34];
        if ( !klass )
          goto LABEL_136;
        if ( (v54 & 1) != 0 )
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
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19369/*"gd"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
LABEL_67:
            v33 = 0;
            goto LABEL_68;
          }
          v76 = this->fields.allCreditText;
          if ( !v76 )
            goto LABEL_136;
          if ( v34 >= v76->max_length )
            goto LABEL_137;
          klass = (int64_t)v76->m_Items[v34];
          if ( !klass )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_25109/*"﹐ﹰ"*/, 0LL);
          v77 = this->fields.allCreditText;
          if ( !v77 )
            goto LABEL_136;
          if ( v34 >= v77->max_length )
            goto LABEL_137;
          v78 = klass;
          klass = (int64_t)v77->m_Items[v34];
          if ( !klass )
            goto LABEL_136;
          if ( (v78 & 1) != 0 )
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
            klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_19236/*"formation_framebg_5"*/, 0LL);
            v79 = this->fields.allCreditText;
            if ( !v79 )
              goto LABEL_136;
            if ( v34 >= v79->max_length )
              goto LABEL_137;
            v80 = klass;
            klass = (int64_t)v79->m_Items[v34];
            if ( !klass )
              goto LABEL_136;
            if ( (v80 & 1) != 0 )
            {
              klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 1u )
                goto LABEL_137;
              v81 = *(System_String_o **)(klass + 40);
              if ( !v81 )
                goto LABEL_136;
              klass = (int64_t)System_String__Split(*(System_String_o **)(klass + 40), 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( !*(_DWORD *)(klass + 24) )
                goto LABEL_137;
              v82 = System_Single__Parse(*(System_String_o **)(klass + 32), 0LL);
              effectWave = this->fields.effectWave;
              this->fields.effectTime = v82 / 10.0;
              klass = (int64_t)System_String__Split(v81, 0x7Eu, 0, 0LL);
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
              v84 = this->fields.effectWave;
              klass = (int64_t)System_String__Split(v81, 0x7Eu, 0, 0LL);
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
              if ( !v84 )
                goto LABEL_136;
              if ( v84->max_length <= 1 )
                goto LABEL_137;
              v84->m_Items[2] = klass;
              klass = (int64_t)System_String__Split(v81, 0x7Eu, 0, 0LL);
              if ( !klass )
                goto LABEL_136;
              if ( *(_DWORD *)(klass + 24) <= 2u )
                goto LABEL_137;
              this->fields.effectOverlap = System_Single__Parse(*(System_String_o **)(klass + 48), 0LL);
            }
            else
            {
              klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_17509/*"charaCutinPause"*/, 0LL);
              v85 = this->fields.allCreditText;
              if ( !v85 )
                goto LABEL_136;
              if ( v34 >= v85->max_length )
                goto LABEL_137;
              v86 = klass;
              klass = (int64_t)v85->m_Items[v34];
              if ( !klass )
                goto LABEL_136;
              if ( (v86 & 1) != 0 )
              {
                v87 = System_String__Replace_63388240(
                        (System_String_o *)klass,
                        (System_String_o *)StringLiteral_88/*"\r"*/,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
                p_bgmName->klass = (PartyOrganizationUtility_c *)v87;
                sub_1C3B708(p_bgmName, (int64_t)v87, v88, v89, v90, v91, v92, v93);
                klass = (int64_t)p_bgmName->klass;
                if ( !p_bgmName->klass )
                  goto LABEL_136;
                klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                if ( !klass )
                  goto LABEL_136;
                if ( *(_DWORD *)(klass + 24) <= 1u )
                  goto LABEL_137;
                v100 = *(struct System_String_o **)(klass + 40);
                this->fields.bgmName = v100;
                sub_1C3B708(p_bgmName, (int64_t)v100, v94, v95, v96, v97, v98, v99);
                klass = System_String__op_Inequality(this->fields.bgmName, (System_String_o *)StringLiteral_9527/*"OVER_KILL_STAR_ADD"*/, 0LL);
                this->fields.isBgmPlay = klass & 1;
              }
              else
              {
                klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18900/*"event_reset_digging"*/, 0LL);
                v101 = this->fields.allCreditText;
                if ( !v101 )
                  goto LABEL_136;
                if ( v34 >= v101->max_length )
                  goto LABEL_137;
                v102 = klass;
                klass = (int64_t)v101->m_Items[v34];
                if ( !klass )
                  goto LABEL_136;
                if ( (v102 & 1) != 0 )
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
                  klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_18899/*"event_reset_data_lost_battle"*/, 0LL);
                  v103 = this->fields.allCreditText;
                  if ( !v103 )
                    goto LABEL_136;
                  if ( v34 >= v103->max_length )
                    goto LABEL_137;
                  v104 = klass;
                  klass = (int64_t)v103->m_Items[v34];
                  if ( !klass )
                    goto LABEL_136;
                  if ( (v104 & 1) != 0 )
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
                              (System_String_o *)StringLiteral_18901/*"event_rewardframe_{0}"*/,
                              0LL);
                    if ( (klass & 1) != 0 )
                    {
                      v105 = this->fields.allCreditText;
                      if ( !v105 )
                        goto LABEL_136;
                      if ( v34 >= v105->max_length )
                        goto LABEL_137;
                      klass = (int64_t)v105->m_Items[v34];
                      if ( !klass )
                        goto LABEL_136;
                      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
                      if ( !klass )
                        goto LABEL_136;
                      if ( *(_DWORD *)(klass + 24) <= 1u )
                        goto LABEL_137;
                      v112 = *(_QWORD *)(klass + 40);
                      p_defaultTextColor->klass = (PartyOrganizationUtility_c *)v112;
                      sub_1C3B708(p_defaultTextColor, v112, v106, v107, v108, v109, v110, v111);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_68:
      if ( (signed int)++v34 >= this->fields.txtLength )
        return;
    }
    if ( (v33 & 1) == 0 )
      goto LABEL_67;
    v40 = this->fields.allCreditText;
    if ( !v40 )
      goto LABEL_136;
    if ( v34 >= v40->max_length )
      goto LABEL_137;
    klass = (int64_t)v40->m_Items[v34];
    if ( !klass )
      goto LABEL_136;
    klass = (int64_t)System_String__Replace_63388240(
                       (System_String_o *)klass,
                       (System_String_o *)StringLiteral_88/*"\r"*/,
                       (System_String_o *)StringLiteral_1/*""*/,
                       0LL);
    v47 = (System_Collections_Generic_List_object__o *)*p_creditText;
    if ( !*p_creditText )
      goto LABEL_136;
    items = v47->fields._items;
    v49 = Method_System_Collections_Generic_List_string__Add__;
    ++v47->fields._version;
    if ( !items )
      goto LABEL_136;
    size = v47->fields._size;
    v51 = klass;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v47,
        (Il2CppObject *)klass,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = &items->obj.klass + size;
      v47->fields._size = size + 1;
      v52[4] = (Il2CppClass *)v51;
      sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 4), v51, v41, v42, v43, v44, v45, v46);
    }
    v55 = this->fields.allCreditText;
    if ( !v55 )
      goto LABEL_136;
    if ( v34 >= v55->max_length )
      goto LABEL_137;
    klass = (int64_t)v55->m_Items[v34];
    if ( !klass )
      goto LABEL_136;
    defaultFontSize = this->fields.defaultFontSize;
    klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6932/*"GetResponse"*/, 0LL);
    if ( (klass & 1) != 0 )
    {
      v57 = this->fields.allCreditText;
      if ( !v57 )
        goto LABEL_136;
      if ( v34 >= v57->max_length )
        goto LABEL_137;
      klass = (int64_t)v57->m_Items[v34];
      if ( !klass )
        goto LABEL_136;
      klass = (int64_t)System_String__Split((System_String_o *)klass, 0x7Eu, 0, 0LL);
      if ( !klass )
        goto LABEL_136;
      v58 = *(_DWORD *)(klass + 24);
      v59 = klass;
      if ( v58 >= 1 )
      {
        v60 = 0;
        while ( v60 < v58 )
        {
          v61 = v59 + 8LL * (int)v60;
          v63 = *(_QWORD *)(v61 + 32);
          v62 = (PartyOrganizationUtility_o *)(v61 + 32);
          klass = v63;
          if ( !v63 )
            goto LABEL_136;
          klass = System_String__Contains((System_String_o *)klass, (System_String_o *)StringLiteral_6932/*"GetResponse"*/, 0LL);
          if ( (klass & 1) != 0 )
          {
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              break;
            klass = (int64_t)v62->klass;
            if ( !v62->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_63388240(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              break;
            v62->klass = (PartyOrganizationUtility_c *)klass;
            sub_1C3B708(v62, klass, v64, v65, v66, v67, v68, v69);
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              break;
            klass = (int64_t)v62->klass;
            if ( !v62->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Replace_63388240(
                               (System_String_o *)klass,
                               (System_String_o *)StringLiteral_1847/*"A.D."*/,
                               (System_String_o *)StringLiteral_1/*""*/,
                               0LL);
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              break;
            v62->klass = (PartyOrganizationUtility_c *)klass;
            sub_1C3B708(v62, klass, v70, v71, v72, v73, v74, v75);
            if ( v60 >= *(_DWORD *)(v59 + 24) )
              break;
            klass = (int64_t)v62->klass;
            if ( !v62->klass )
              goto LABEL_136;
            klass = (int64_t)System_String__Split((System_String_o *)klass, 0x3Du, 0, 0LL);
            if ( !klass )
              goto LABEL_136;
            if ( *(_DWORD *)(klass + 24) <= 1u )
              break;
            klass = System_Int32__Parse(*(System_String_o **)(klass + 40), 0LL);
            defaultFontSize = klass;
          }
          v58 = *(_DWORD *)(v59 + 24);
          if ( (int)++v60 >= v58 )
            goto LABEL_64;
        }
LABEL_137:
        sub_1C3B9C8(klass, v31);
      }
    }
LABEL_64:
    this->fields.lastPostion = this->fields.lastPostion + (float)(this->fields.defaultClearance + defaultFontSize);
LABEL_65:
    v33 = 1;
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

  if ( (byte_4C25E7C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, item);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    byte_4C25E7C = 1;
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
           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
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
                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
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
      sub_1C3B9C0(creditText, v7);
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

  if ( (byte_4C25E7B & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1C3B764(&NGUITools_TypeInfo, v6);
    byte_4C25E7B = 1;
  }
  contentPref = (UnityEngine_Component_o *)this->fields.contentPref;
  ++this->fields.nowDispIndex;
  if ( !contentPref )
    goto LABEL_11;
  endrolContentParent = this->fields.endrolContentParent;
  gameObject = UnityEngine_Component__get_gameObject(contentPref, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  contentPref = (UnityEngine_Component_o *)NGUITools__AddChild_48298364(endrolContentParent, gameObject, 0LL);
  if ( !contentPref
    || (contentPref = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)contentPref,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EndrolContentItem___),
        !this->fields.creditText)
    || (v10 = (EndrolContentItem_o *)contentPref,
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this->fields.creditText,
                 index,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__CheckNextDispContent(
                                                   (EndrolRootComponent_o *)Item,
                                                   (System_String_o *)Item,
                                                   v12),
        !this->fields.creditText)
    || (v13 = (int)contentPref,
        v14 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.creditText,
                index,
                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__),
        contentPref = (UnityEngine_Component_o *)EndrolRootComponent__SetItemInfo(
                                                   this,
                                                   (System_String_o *)v14,
                                                   v10,
                                                   v13,
                                                   v15),
        !v10) )
  {
LABEL_11:
    sub_1C3B9C0(contentPref, *(_QWORD *)&index);
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

  if ( (byte_4C25E79 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4C25E79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C25E80 & 1) == 0 )
  {
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1C3B764(&Method_EndrolRootComponent_callbackConfirmDlg__, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_5573/*"EVENT_RACE_RESULT_TIME_STR"*/, v6);
    sub_1C3B764(&StringLiteral_5572/*"EVENT_RACE_RESULT_TIME_NONE"*/, v7);
    sub_1C3B764(&StringLiteral_5570/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/, v8);
    sub_1C3B764(&StringLiteral_5571/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/, v9);
    byte_4C25E80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5573/*"EVENT_RACE_RESULT_TIME_STR"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5572/*"EVENT_RACE_RESULT_TIME_NONE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5571/*"EVENT_RACE_RESULT_REWARD_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_RACE_RESULT_REWARD_DLG_MESSAGE"*/, 0LL);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EndrolRootComponent_callbackConfirmDlg__,
    0LL);
  if ( !Instance )
    sub_1C3B9C0(v16, v17);
  CommonUI__OpenConfirmDialog_31231772((CommonUI_o *)Instance, v11, v12, v13, v14, v15, 0, 0, 0, 0LL);
}


void __fastcall EndrolRootComponent__OnScrollEnd(EndrolRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float endWaitTime; // s8
  System_Action_o *v5; // x20
  EndrolRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4C25E75 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EndrolRootComponent__OnScrollEnd_b__28_0__, v3);
    byte_4C25E75 = 1;
  }
  endWaitTime = this->fields.endWaitTime;
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EndrolRootComponent__OnScrollEnd_b__28_0__, 0LL);
  v8 = EndrolRootComponent__Wait(v6, endWaitTime, v5, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
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
    sub_1C3B9C0(panel, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_4C25E77 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, assetData);
    sub_1C3B764(&UnityEngine_Application_TypeInfo, v7);
    sub_1C3B764(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, v8);
    sub_1C3B764(&EndrolRootComponent___c__DisplayClass30_0_TypeInfo, v9);
    byte_4C25E77 = 1;
  }
  v10 = sub_1C3B9B0(EndrolRootComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endCallback, v19, v20, v21, v22, v23, v24);
  UnityEngine_QualitySettings__set_vSyncCount(1, 0LL);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__set_targetFrameRate(60, 0LL);
  this->fields.lastObjectPosY = 0;
  v25 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v10, Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__0__, 0LL);
  EndrolRootComponent__SetAssetStorageData(this, assetData, v25, v26);
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
        sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.allCreditText, (int64_t)v4, v5, v6, v7, v8, v9, v10),
        (allCreditText = v3->fields.allCreditText) == 0LL) )
  {
    sub_1C3B9C0(this, assetData);
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
  Il2CppObject *Object_object__50142412; // x0
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4C25E76 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_TextAsset____77902872, data);
    this = (EndrolRootComponent_o *)sub_1C3B764(&StringLiteral_18684/*"enemy_icon_leader"*/, v7);
    byte_4C25E76 = 1;
  }
  if ( !data
    || (Object_object__50142412 = AssetData__GetObject_object__50142412(
                                    data,
                                    (System_String_o *)StringLiteral_18684/*"enemy_icon_leader"*/,
                                    (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_TextAsset____77902872),
        EndrolRootComponent__OpenTextFile(v6, (UnityEngine_TextAsset_o *)Object_object__50142412, v9),
        !endCallback) )
  {
    sub_1C3B9C0(this, data);
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  unsigned int v66; // w8
  EndrolRootComponent_o *v67; // x1
  Il2CppClass **v68; // x0
  int32_t lastObjectPosY; // w1
  const MethodInfo *v70; // x6
  int v71; // w8
  int32_t v72; // w22
  EndrolRootComponent_o *v73; // x21
  EndrolRootComponent_o *v74; // x23
  unsigned int v75; // w27
  int klass; // w24
  EndrolRootComponent_c **v77; // x25
  EndrolRootComponent_o **v78; // x25
  EndrolRootComponent_o *v79; // t1
  char v80; // w8
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  char v93; // w8
  unsigned int v94; // w8
  EndrolRootComponent_o *v95; // x24
  System_String_o *v96; // x0
  System_String_o *v97; // x24
  intptr_t v98; // w25
  System_Type_o *TypeFromHandle; // x25
  __int64 v100; // x2
  __int64 v101; // x3
  struct System_Collections_Generic_List_string__o *creditText; // x8
  System_String_o *defaultTextColor; // x21
  Il2CppObject *v104; // x0
  EndrolRootComponent_o *v105; // x2
  int32_t v106; // w3
  int32_t v107; // w1
  int32_t v108; // w4
  EndrolContentItem_o *v109; // x0
  EndrolContentItem_o *result; // x0
  EndrolRootComponent_o *v111; // x0
  bool v112; // w1
  const MethodInfo *v113; // x2
  EndrolContentItem_o *v114; // [xsp+8h] [xbp-78h]
  System_RuntimeTypeHandle_o v115; // 0:w0.4
  UnityEngine_Vector2_o v116; // 0:s0.4,4:s1.4

  v8 = this;
  if ( (byte_4C25E7E & 1) == 0 )
  {
    sub_1C3B764(&System_Enum_TypeInfo, nextDispString);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_1C3B764(&UIWidget_Pivot_var, v10);
    sub_1C3B764(&UIWidget_Pivot_TypeInfo, v11);
    sub_1C3B764(&string___TypeInfo, v12);
    sub_1C3B764(&System_Type_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_1841/*"A time zone was specified. SqlDateTime does not support time zones."*/, v14);
    sub_1C3B764(&StringLiteral_20296/*"index + count > dest_buffer.Length"*/, v15);
    sub_1C3B764(&StringLiteral_1578/*"<b>Position</b>: "*/, v16);
    sub_1C3B764(&StringLiteral_21492/*"mstQuestUseItemGroup"*/, v17);
    sub_1C3B764(&StringLiteral_23423/*"system.memory.swap.free"*/, v18);
    sub_1C3B764(&StringLiteral_348/*"\" standalone=\""*/, v19);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v20);
    sub_1C3B764(&StringLiteral_1/*""*/, v21);
    sub_1C3B764(&StringLiteral_25209, v22);
    sub_1C3B764(&StringLiteral_1847/*"A.D."*/, v23);
    this = (EndrolRootComponent_o *)sub_1C3B764(&StringLiteral_18143/*"dayTimeDuration"*/, v24);
    byte_4C25E7E = 1;
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
      this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                        (System_String_o *)StringLiteral_1/*""*/,
                                        0LL);
      if ( LODWORD(v38->fields.m_CancellationTokenSource) )
      {
        this = (EndrolRootComponent_o *)v38->fields.contentPref;
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_1847/*"A.D."*/,
                                          (System_String_o *)StringLiteral_1/*""*/,
                                          0LL);
        if ( !this )
          goto LABEL_145;
        this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
        if ( !this )
          goto LABEL_145;
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          v114 = item;
          v40 = System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
          this = (EndrolRootComponent_o *)sub_1C3B80C(string___TypeInfo, v40);
          m_CancellationTokenSource = (int)v38->fields.m_CancellationTokenSource;
          v43 = (System_String_array *)this;
          if ( m_CancellationTokenSource < 2 )
          {
LABEL_76:
            if ( !v43 )
              goto LABEL_145;
            item = v114;
            if ( !v114 )
              goto LABEL_145;
            lastObjectPosY = v8->fields.lastObjectPosY;
            if ( v43->max_length == 2 )
              EndrolContentItem__SetDoubleColumnText(v114, lastObjectPosY, v43, defaultFontSize, v8, v41);
            else
              EndrolContentItem__SetTripleColumnText(v114, lastObjectPosY, v43, defaultFontSize, v8, v41);
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
                                              (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                              0LL);
            if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
              break;
            v47 = (char)this;
            this = *p_endrolContentParent;
            if ( !*p_endrolContentParent )
              goto LABEL_145;
            if ( (v47 & 1) != 0 )
            {
              this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1847/*"A.D."*/,
                                                (System_String_o *)StringLiteral_1/*""*/,
                                                0LL);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              *p_endrolContentParent = this;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)p_endrolContentParent,
                (int64_t)this,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59);
              if ( v46 >= LODWORD(v38->fields.m_CancellationTokenSource) )
                break;
              this = *p_endrolContentParent;
              if ( !*p_endrolContentParent )
                goto LABEL_145;
              this = (EndrolRootComponent_o *)System_String__Contains(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1841/*"A time zone was specified. SqlDateTime does not support time zones."*/,
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
                                                (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                                                0LL);
              v66 = (unsigned int)v38->fields.m_CancellationTokenSource;
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v46 >= v66 )
                  break;
                if ( !v43 )
                  goto LABEL_145;
                if ( v44 >= v43->max_length )
                  break;
                v67 = *p_endrolContentParent;
              }
              else
              {
                if ( v46 >= v66 )
                  break;
                this = (EndrolRootComponent_o *)System_String__Concat_63368612(
                                                  v8->fields.defaultTextColor,
                                                  (System_String_o *)*p_endrolContentParent,
                                                  0LL);
                if ( !v43 )
                  goto LABEL_145;
                if ( v44 >= v43->max_length )
                  break;
                v67 = this;
              }
              v68 = &v43->obj.klass + (int)v44;
              v68[4] = (Il2CppClass *)v67;
              sub_1C3B708((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v67, v60, v61, v62, v63, v64, v65);
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
    sub_1C3B9C8(this, nextDispString);
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
                                            (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                            0LL);
          if ( v29 >= LODWORD(v27->fields.m_CancellationTokenSource) )
            goto LABEL_144;
          v35 = (char)this;
          this = *v33;
          if ( !*v33 )
            goto LABEL_145;
          if ( (v35 & 1) != 0 )
          {
            this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
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
            this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_348/*"\" standalone=\""*/,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
            v28 = this;
          }
          else
          {
            this = (EndrolRootComponent_o *)System_String__Contains(
                                              (System_String_o *)this,
                                              (System_String_o *)StringLiteral_25209,
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
                                                (System_String_o *)StringLiteral_20296/*"index + count > dest_buffer.Length"*/,
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
                v37 = System_String__Replace_63388240(
                        (System_String_o *)this,
                        (System_String_o *)StringLiteral_1847/*"A.D."*/,
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
      v116.fields.x = v31;
      v116.fields.y = v30;
      EndrolContentItem__SetImage(item, v8->fields.lastObjectPosY, (System_String_o *)v28, v116, v8, v25);
      return item;
    }
    this = (EndrolRootComponent_o *)v8->fields.creditText;
    if ( this )
    {
      this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        v8->fields.nowDispIndex,
                                        (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        this = (EndrolRootComponent_o *)System_String__Contains(
                                          (System_String_o *)this,
                                          (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                                          0LL);
        creditText = v8->fields.creditText;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !creditText )
            goto LABEL_145;
          this = (EndrolRootComponent_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                                            v8->fields.nowDispIndex,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
        }
        else
        {
          if ( !creditText )
            goto LABEL_145;
          defaultTextColor = v8->fields.defaultTextColor;
          v104 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v8->fields.creditText,
                   v8->fields.nowDispIndex,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
          this = (EndrolRootComponent_o *)System_String__Concat_63368612(defaultTextColor, (System_String_o *)v104, 0LL);
        }
        v105 = this;
        if ( item )
        {
          v106 = v8->fields.defaultFontSize;
          v107 = v8->fields.lastObjectPosY;
          v108 = 4;
          v109 = item;
LABEL_142:
          EndrolContentItem__SetText(v109, v107, (System_String_o *)v105, v106, v108, v8, v70);
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
  v71 = (int)this->fields.m_CancellationTokenSource;
  v72 = v8->fields.defaultFontSize;
  v73 = this;
  v74 = (EndrolRootComponent_o *)StringLiteral_1/*""*/;
  if ( v71 < 1 )
  {
    klass = 4;
LABEL_140:
    if ( item )
    {
      v107 = v8->fields.lastObjectPosY;
      v109 = item;
      v105 = v74;
      v106 = v72;
      v108 = klass;
      goto LABEL_142;
    }
LABEL_145:
    sub_1C3B9C0(this, nextDispString);
  }
  v75 = 0;
  klass = 4;
  while ( 1 )
  {
    if ( v75 >= v71 )
      goto LABEL_144;
    v77 = &v73->klass + (int)v75;
    v79 = (EndrolRootComponent_o *)v77[4];
    v78 = (EndrolRootComponent_o **)(v77 + 4);
    this = v79;
    if ( !v79 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__StartsWith(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                      0LL);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v80 = (char)this;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    if ( (v80 & 1) == 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Contains(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                                        0LL);
      v94 = (unsigned int)v73->fields.m_CancellationTokenSource;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v75 >= v94 )
          goto LABEL_144;
        v74 = *v78;
      }
      else
      {
        if ( v75 >= v94 )
          goto LABEL_144;
        this = (EndrolRootComponent_o *)System_String__Concat_63368612(
                                          v8->fields.defaultTextColor,
                                          (System_String_o *)*v78,
                                          0LL);
        v74 = this;
      }
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1578/*"<b>Position</b>: "*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v78 = this;
    sub_1C3B708((PartyOrganizationUtility_o *)v78, (int64_t)this, v81, v82, v83, v84, v85, v86);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Replace_63388240(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1847/*"A.D."*/,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    *v78 = this;
    sub_1C3B708((PartyOrganizationUtility_o *)v78, (int64_t)this, v87, v88, v89, v90, v91, v92);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_1841/*"A time zone was specified. SqlDateTime does not support time zones."*/,
                                      0LL);
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    v93 = (char)this;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    if ( (v93 & 1) != 0 )
    {
      this = (EndrolRootComponent_o *)System_String__Split((System_String_o *)this, 0x3Du, 0, 0LL);
      if ( !this )
        goto LABEL_145;
      if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_144;
      this = (EndrolRootComponent_o *)System_Int32__Parse((System_String_o *)this->fields.endrolContentParent, 0LL);
      v72 = (int)this;
      goto LABEL_125;
    }
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_18143/*"dayTimeDuration"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_21492/*"mstQuestUseItemGroup"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_144;
    this = *v78;
    if ( !*v78 )
      goto LABEL_145;
    this = (EndrolRootComponent_o *)System_String__Contains(
                                      (System_String_o *)this,
                                      (System_String_o *)StringLiteral_23423/*"system.memory.swap.free"*/,
                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_125:
    v71 = (int)v73->fields.m_CancellationTokenSource;
    if ( (int)++v75 >= v71 )
      goto LABEL_140;
  }
  if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  this = *v78;
  if ( !*v78 )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__Substring_63387616((System_String_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_145;
  this = (EndrolRootComponent_o *)System_String__ToUpper((System_String_o *)this, 0LL);
  if ( v75 >= LODWORD(v73->fields.m_CancellationTokenSource) )
    goto LABEL_144;
  v95 = this;
  this = *v78;
  if ( !*v78 )
    goto LABEL_145;
  v96 = System_String__Substring((System_String_o *)this, 1, 0LL);
  v97 = System_String__Concat_63368612((System_String_o *)v95, v96, 0LL);
  v98 = (int)UIWidget_Pivot_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v115.fields.value = v98;
  TypeFromHandle = System_Type__GetTypeFromHandle(v115, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (EndrolRootComponent_o *)System_Enum__Parse(TypeFromHandle, v97, 0LL);
  if ( !this )
    goto LABEL_145;
  if ( this->klass->_1.element_class == UIWidget_Pivot_TypeInfo->_1.element_class )
  {
    this = (EndrolRootComponent_o *)j_il2cpp_object_unbox_0(this, UIWidget_Pivot_TypeInfo, v100, v101);
    klass = (int)this->klass;
    goto LABEL_125;
  }
  sub_1C3BC80(this);
  EndrolRootComponent__callbackConfirmDlg(v111, v112, v113);
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

  if ( (byte_4C25E74 & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Hashtable_TypeInfo, method);
    sub_1C3B764(&int_TypeInfo, v3);
    sub_1C3B764(&float_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_10164/*"POSSESSION_NUM"*/, v5);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v6);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v7);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v8);
    sub_1C3B764(&StringLiteral_10141/*"PI"*/, v9);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v10);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v11);
    sub_1C3B764(&iTween_TypeInfo, v12);
    byte_4C25E74 = 1;
  }
  lastPostion = this->fields.lastPostion;
  v14 = (System_Collections_Hashtable_o *)sub_1C3B9B0(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63948372(v14, 0LL);
  v31 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v15, v16, v17);
  if ( !v14 )
    sub_1C3B9C0(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_20040/*"img_parameter_D"*/,
    v18,
    v14->klass->vtable._24_Clear.methodPtr);
  v30 = lastPostion + 580.0;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_24469/*"x/("*/,
    v23,
    v14->klass->vtable._24_Clear.methodPtr);
  endrolTotalTime = this->fields.endrolTotalTime;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &endrolTotalTime, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_24427/*"x-cp20936"*/,
    v27,
    v14->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22739/*"seagreen"*/,
    StringLiteral_10164/*"POSSESSION_NUM"*/,
    v14->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22731/*"se-NO"*/,
    StringLiteral_10141/*"PI"*/,
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

  if ( (byte_4C25E78 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_EndrolRootComponent_EndFadeout__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C25E78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EndrolRootComponent_EndFadeout__, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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

  if ( (byte_4C25E7A & 1) == 0 )
  {
    sub_1C3B764(&EndrolRootComponent__Wait_d__33_TypeInfo, callback);
    byte_4C25E7A = 1;
  }
  v6 = sub_1C3B9B0(EndrolRootComponent__Wait_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4C25E7F & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isSkip);
    byte_4C25E7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
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
  if ( (byte_4C25E84 & 1) == 0 )
  {
    this = (EndrolRootComponent__Wait_d__33_o *)sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4C25E84 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = v2->fields.callback;
    v2->fields.__1__state = -1;
    if ( !callback )
      sub_1C3B9C0(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    waitTime = v2->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v5;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_EndrolRootComponent__Wait_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Action_o *endCallback; // x1
  CommonUI_o *v18; // x20
  const MethodInfo *v19; // x2
  struct EndrolRootComponent_o *v20; // x20
  float startWaitTime; // s8
  System_Action_o *_9__1; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_4C25E83 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&SoundManager_TypeInfo, v5);
    sub_1C3B764(&Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__, v6);
    byte_4C25E83 = 1;
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)(_4__this + 160),
    (int64_t)endCallback,
    (int64_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16);
  _4__this = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (CommonUI_o *)_4__this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v18
    || (CommonUI__maskFadein(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (_4__this = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (v20 = this->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1C3B9C0(_4__this, method);
  }
  startWaitTime = v20->fields.startWaitTime;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EndrolRootComponent___c__DisplayClass30_0__Open_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v23, v24, v25, v26, v27, v28);
  }
  v29 = EndrolRootComponent__Wait((EndrolRootComponent_o *)_4__this, startWaitTime, _9__1, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)v20, v29, 0LL);
}


void __fastcall EndrolRootComponent___c__DisplayClass30_0___Open_b__1(
        EndrolRootComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  EndrolRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  EndrolRootComponent__StartEndroll(_4__this, method);
}