void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39589472(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct DeckServantData_array *v11; // x0
  DeckServant_Fields *p_fields; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  long double inited; // q0
  _QWORD *v27; // x23
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  struct DeckWaveServantData_array **v31; // x8
  struct DeckWaveServantData_array *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  struct DeckServantData_array *svts; // x26
  il2cpp_array_size_t v37; // w24
  DeckServantData_o *v38; // x23
  const MethodInfo *v39; // x1
  __int64 v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppClass **v47; // x0
  DeckServantData_o *v48; // x8
  __int64 v49; // x0

  if ( (byte_4B15D69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum, userEquipId);
    sub_1BCA7E0(&DeckServantData___TypeInfo, v7, v8);
    sub_1BCA7E0(&DeckServantData_TypeInfo, v9, v10);
    byte_4B15D69 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_1BCA888(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v11;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  v27 = Method_System_Array_Empty_DeckWaveServantData___;
  v28 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v28 )
  {
    sub_1C1C718(Method_System_Array_Empty_DeckWaveServantData___, v19);
    v28 = v27[7];
  }
  v29 = *(_QWORD *)(v28 + 16);
  if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
    v29 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v29 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v29, v19);
  v30 = *(_QWORD *)(v27[7] + 16LL);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1C1C6BC(inited);
  v31 = *(struct DeckWaveServantData_array ***)(v30 + 184);
  v32 = *v31;
  this->fields.waveSvts = *v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.waveSvts, (int64_t)v32, v20, v21, v22, v23, v24, v25);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v37 = 0;
    do
    {
      v38 = (DeckServantData_o *)sub_1BCAA2C(DeckServantData_TypeInfo, v33, v34, v35);
      DeckServantData___ctor(v38, v39);
      if ( !svts )
        goto LABEL_22;
      if ( v38 )
      {
        v40 = sub_1BCA91C(v38, svts->obj.klass->_1.element_class);
        if ( !v40 )
        {
          v49 = sub_1BCAA60(0LL);
          sub_1BCA908(v49, 0LL);
        }
      }
      if ( v37 >= svts->max_length )
        goto LABEL_23;
      v47 = &svts->obj.klass + (int)v37;
      v47[4] = (Il2CppClass *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v38, v41, v42, v43, v44, v45, v46);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v37 >= svts->max_length )
LABEL_23:
        sub_1BCAA44(v40, v33);
      v48 = svts->m_Items[v37];
      if ( !v48 )
LABEL_22:
        sub_1BCAA3C(v40, v33);
      v48->fields.id = ++v37;
      v48->fields.initPos = v37;
    }
    while ( sum != v37 );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39590128(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct DeckServantData_array *v14; // x0
  DeckServant_Fields *p_fields; // x25
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct DeckWaveServantData_array *v22; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  struct DeckServantData_array *svts; // x29
  il2cpp_array_size_t v34; // w28
  DeckServantData_o *v35; // x26
  const MethodInfo *v36; // x1
  __int64 v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  Il2CppClass **v44; // x0
  DeckServantData_o *v45; // x8
  il2cpp_array_size_t v46; // w9
  int v47; // w10
  struct DeckWaveServantData_array *v48; // x29
  il2cpp_array_size_t v49; // w25
  int v50; // w28
  DeckWaveServantData_o *v51; // x24
  const MethodInfo *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppClass **v59; // x0
  DeckWaveServantData_o *v60; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v63; // x8
  int32_t *v64; // x10
  __int64 v65; // x0

  if ( (byte_4B15D6A & 1) == 0 )
  {
    sub_1BCA7E0(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum, *(_QWORD *)&memberNum);
    sub_1BCA7E0(&DeckServantData_TypeInfo, v8, v9);
    sub_1BCA7E0(&DeckWaveServantData___TypeInfo, v10, v11);
    sub_1BCA7E0(&DeckWaveServantData_TypeInfo, v12, v13);
    byte_4B15D6A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14 = (struct DeckServantData_array *)sub_1BCA888(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v14;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = (struct DeckWaveServantData_array *)sub_1BCA888(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v22;
  p_waveSvts = &this->fields.waveSvts;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.waveSvts, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v34 = 0;
    while ( 1 )
    {
      v35 = (DeckServantData_o *)sub_1BCAA2C(DeckServantData_TypeInfo, v30, v31, v32);
      DeckServantData___ctor(v35, v36);
      if ( !svts )
        break;
      if ( v35 )
      {
        v37 = sub_1BCA91C(v35, svts->obj.klass->_1.element_class);
        if ( !v37 )
        {
LABEL_33:
          v65 = sub_1BCAA60(v37);
          sub_1BCA908(v65, 0LL);
        }
      }
      if ( v34 >= svts->max_length )
        goto LABEL_31;
      v44 = &svts->obj.klass + (int)v34;
      v44[4] = (Il2CppClass *)v35;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v35, v38, v39, v40, v41, v42, v43);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v34 >= svts->max_length )
        goto LABEL_31;
      v45 = svts->m_Items[v34];
      if ( !v45 )
        break;
      v46 = v34 + 1;
      v47 = v34 + 1;
      v45->fields.id = v34 + 1;
      if ( (int)(v34 + 1) > memberNum )
        v47 = (int)v34 % memberNum + 1;
      ++v34;
      v45->fields.initPos = v47;
      if ( memberNum * waveNum == v46 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1BCAA3C(v37, v30);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v48 = *p_waveSvts;
    v49 = 0;
    v50 = 1;
    while ( 1 )
    {
      v51 = (DeckWaveServantData_o *)sub_1BCAA2C(DeckWaveServantData_TypeInfo, v30, v31, v32);
      DeckWaveServantData___ctor(v51, v52);
      if ( !v48 )
        goto LABEL_32;
      if ( v51 )
      {
        v37 = sub_1BCA91C(v51, v48->obj.klass->_1.element_class);
        if ( !v37 )
          goto LABEL_33;
      }
      if ( v49 >= v48->max_length )
        goto LABEL_31;
      v59 = &v48->obj.klass + (int)v49;
      v59[4] = (Il2CppClass *)v51;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v51, v53, v54, v55, v56, v57, v58);
      v48 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v49 >= v48->max_length )
        goto LABEL_31;
      v60 = v48->m_Items[v49];
      if ( !v60 )
        goto LABEL_32;
      v60->fields.wave = ++v49;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v50 += memberNum;
      if ( v49 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v60->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length = uniqueIds->max_length;
      v63 = 0LL;
      v64 = &uniqueIds->m_Items[1];
      while ( v63 < max_length )
      {
        v64[v63] = v50 + v63;
        if ( memberNum == ++v63 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1BCAA44(v37, v30);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39590936(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct DeckServantData_array *v9; // x0
  DeckServant_Fields *p_fields; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  __int64 v20; // x3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  unsigned __int64 v25; // x23
  __int64 v26; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v29; // x26
  int64_t v30; // x22
  unsigned int *v31; // x0
  unsigned int *v32; // x26
  DeckServantData_o *v33; // x22
  const MethodInfo *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  unsigned int *v41; // x0
  struct DeckServantData_array *v42; // x8
  DeckServantData_o *v43; // x8
  __int64 v44; // x0

  if ( (byte_4B15D6B & 1) == 0 )
  {
    sub_1BCA7E0(&DeckServantData___TypeInfo, *(_QWORD *)&sum, deckInfo);
    sub_1BCA7E0(&DeckServantData_TypeInfo, v7, v8);
    byte_4B15D6B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_1BCA888(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v9;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  if ( !deckInfo )
LABEL_24:
    sub_1BCAA3C(v17, v18);
  if ( sum >= 1 )
  {
    v25 = 0LL;
    v26 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v25 < (int)max_length) )
      {
        if ( v25 >= max_length )
          goto LABEL_25;
        v29 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v30 = (int64_t)svts->m_Items[v25];
        if ( v30 )
        {
          v17 = sub_1BCA91C(v30, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
          if ( !v17 )
            goto LABEL_26;
        }
        if ( v25 >= v29[6] )
          goto LABEL_25;
        v31 = &v29[2 * v25];
        *((_QWORD *)v31 + 4) = v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 8), v30, v19, v20, v21, v22, v23, v24);
        ++v25;
      }
      else
      {
        v32 = (unsigned int *)p_fields->svts;
        v33 = (DeckServantData_o *)sub_1BCAA2C(DeckServantData_TypeInfo, v18, v19, v20);
        DeckServantData___ctor(v33, v34);
        if ( !v32 )
          goto LABEL_24;
        if ( v33 )
        {
          v17 = sub_1BCA91C(v33, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
          if ( !v17 )
          {
LABEL_26:
            v44 = sub_1BCAA60(v17);
            sub_1BCA908(v44, 0LL);
          }
        }
        if ( v25 >= v32[6] )
          goto LABEL_25;
        v41 = &v32[2 * v25];
        *((_QWORD *)v41 + 4) = v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 8), (int64_t)v33, v35, v36, v37, v38, v39, v40);
        v42 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v25 >= v42->max_length )
LABEL_25:
          sub_1BCAA44(v17, v18);
        v43 = v42->m_Items[v25];
        if ( !v43 )
          goto LABEL_24;
        v43->fields.id = ++v25;
      }
    }
    while ( v25 != v26 );
  }
  this->fields.userEquipId = deckInfo->fields.userEquipId;
}


void __fastcall DeckServant__CollectUserSvtId(
        DeckServant_o *this,
        System_Collections_Generic_List_long__o *svtCollectList,
        System_Collections_Generic_List_long__o *equipCollectList,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 v18; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v20; // x22
  unsigned int v21; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v23; // x8
  int64_t userSvtId; // x23
  const MethodInfo *v25; // x2
  int32_t size; // w8
  int32_t v27; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v29; // x10
  __int64 v30; // x9
  DeckServantData_o *v31; // x10
  unsigned __int64 v32; // x28
  DeckServantData_o *v33; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v35; // x10
  int64_t v36; // x23
  const MethodInfo *v37; // x2
  int32_t v38; // w8
  int32_t v39; // w24
  struct System_Int64_array *v40; // x9
  _QWORD *v41; // x10

  if ( (byte_4B15D71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList, equipCollectList);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B15D71 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v20 = (DataMasterBase_o *)Instance;
    v21 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v21 >= (int)max_length )
        return;
      if ( v21 >= max_length )
        goto LABEL_54;
      v23 = svts->m_Items[v21];
      if ( !v23 )
        goto LABEL_52;
      userSvtId = v23->fields.userSvtId;
      Instance = sub_1BCA888(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_52;
      v18 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v20 )
        goto LABEL_52;
      Instance = DataMasterBase__isEntityExistsFromId(v20, (System_Int64_array *)Instance, v25);
      if ( (Instance & 1) != 0 )
      {
        if ( !svtCollectList )
          goto LABEL_52;
        size = svtCollectList->fields._size;
        if ( size < 1 )
        {
LABEL_19:
          if ( userSvtId >= 1 )
          {
            items = svtCollectList->fields._items;
            v29 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_3589C90 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              svtCollectList->fields._size = size + 1;
              items->m_Items[size] = userSvtId;
            }
          }
        }
        else
        {
          v27 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v27,
                         (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v27 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v30 = *(_QWORD *)&svts->max_length;
        if ( v21 >= (unsigned int)v30 )
          goto LABEL_54;
        v31 = svts->m_Items[v21];
        if ( !v31 )
          goto LABEL_52;
        if ( v31->fields.userSvtEquipIds )
        {
          if ( v21 >= (unsigned int)v30 )
LABEL_54:
            sub_1BCAA44(Instance, v18);
          v32 = 0LL;
          while ( 1 )
          {
            v33 = svts->m_Items[v21];
            if ( !v33 )
              break;
            userSvtEquipIds = v33->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v35 = userSvtEquipIds->max_length;
            if ( (__int64)v32 >= (int)v35 )
              goto LABEL_51;
            if ( v32 >= v35 )
              goto LABEL_54;
            v36 = userSvtEquipIds->m_Items[v32];
            Instance = sub_1BCA888(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v18 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v36;
            Instance = DataMasterBase__isEntityExistsFromId(v20, (System_Int64_array *)Instance, v37);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v38 = equipCollectList->fields._size;
              if ( v38 < 1 )
              {
LABEL_43:
                if ( v36 >= 1 )
                {
                  v40 = equipCollectList->fields._items;
                  v41 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v40 )
                    break;
                  if ( v38 >= v40->max_length )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v36,
                      *(const MethodInfo_3589C90 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v38 + 1;
                    v40->m_Items[v38] = v36;
                  }
                }
              }
              else
              {
                v39 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v39,
                               (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v36 )
                    break;
                  v38 = equipCollectList->fields._size;
                  if ( ++v39 >= v38 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v32;
            if ( v21 >= svts->max_length )
              goto LABEL_54;
          }
LABEL_52:
          sub_1BCAA3C(Instance, v18);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_51:
      ++v21;
      if ( !svts )
        goto LABEL_52;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BalanceConfig_c *v11; // x0
  System_Int64_array *Instance; // x0
  System_Int64_array *v13; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v16; // x19
  __int64 v17; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v19; // x23
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v22; // x2
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v24; // x24
  int64_t *v25; // x25
  BalanceConfig_c *v26; // x0
  const MethodInfo *v27; // x2

  if ( (byte_4B15D6D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menber, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15D6D = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    v11 = BalanceConfig_TypeInfo;
  }
  Instance = (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_36;
  max_length = svts->max_length;
  v16 = Instance;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        goto LABEL_37;
      v19 = m_Items[v17];
      if ( !v19 )
        goto LABEL_36;
      if ( v19->fields.id == menber + 1 )
        break;
      if ( (int)++v17 >= max_length )
        return v16;
    }
    if ( !v19->fields.isFollowerSvt && v19->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v13 = Instance;
          if ( !Instance->max_length )
LABEL_37:
            sub_1BCAA44(Instance, v13);
          Instance->m_Items[0] = v19->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)MasterData_object, Instance, v22) )
            {
              userSvtEquipIds = v19->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v24 = 0LL;
                v25 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v26 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
                    v26 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v24 >= v26->static_fields->SvtEquipMax
                    || (__int64)v24 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
                  if ( v24 >= userSvtEquipIds->max_length )
                    goto LABEL_37;
                  v13 = Instance;
                  if ( !Instance )
                    goto LABEL_36;
                  if ( !Instance->max_length )
                    goto LABEL_37;
                  Instance->m_Items[0] = v25[v24];
                  Instance = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                     (DataMasterBase_o *)MasterData_object,
                                                     Instance,
                                                     v27);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v24 >= userSvtEquipIds->max_length )
                      goto LABEL_37;
                    if ( !v16 )
                      goto LABEL_36;
                    if ( v24 >= v16->max_length )
                      goto LABEL_37;
                    v16->m_Items[v24] = v25[v24];
                  }
                  ++v24;
                }
              }
            }
            return v16;
          }
        }
      }
LABEL_36:
      sub_1BCAA3C(Instance, v13);
    }
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetEquipList_39592416(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  BalanceConfig_c *v17; // x8
  DataMasterBase_o *v18; // x20
  System_Int64_array *v19; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v26; // w10
  DeckServantData_o *v27; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v30; // x23
  int64_t *m_Items; // x26
  BalanceConfig_c *v32; // x0
  const MethodInfo *v33; // x2

  if ( (byte_4B15D6E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userSvtId, isInterruption);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    byte_4B15D6E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v17 = BalanceConfig_TypeInfo;
  v18 = (DataMasterBase_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v17 = BalanceConfig_TypeInfo;
  }
  v19 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v17->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v21 = isEntityExistsFromId;
  if ( !isEntityExistsFromId->max_length )
LABEL_41:
    sub_1BCAA44(isEntityExistsFromId, v21);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v18 )
    goto LABEL_40;
  if ( !DataMasterBase__isEntityExistsFromId(v18, isEntityExistsFromId, v22) && !isInterruption )
    return v19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1BCAA3C(isEntityExistsFromId, v21);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( max_length == v26 )
        goto LABEL_41;
      v27 = svts->m_Items[v26];
      if ( !v27 )
        goto LABEL_40;
      if ( v27->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v26 )
        return v19;
    }
    if ( !v27->fields.isFollowerSvt )
    {
      userSvtEquipIds = v27->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v30 = 0LL;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v32 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21);
            v32 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v30 >= v32->static_fields->SvtEquipMax || (__int64)v30 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 1LL);
          if ( v30 >= userSvtEquipIds->max_length )
            goto LABEL_41;
          v21 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !isEntityExistsFromId->max_length )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v30];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                         v18,
                                                         isEntityExistsFromId,
                                                         v33);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v30 >= userSvtEquipIds->max_length )
              goto LABEL_41;
            if ( !v19 )
              goto LABEL_40;
            if ( v30 >= v19->max_length )
              goto LABEL_41;
            v19->m_Items[v30] = m_Items[v30];
          }
          ++v30;
        }
      }
    }
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall DeckServant__GetNpcFollowerServantId(DeckServant_o *this, int32_t pos, const MethodInfo *method)
{
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v5; // w10
  DeckServantData_o *v6; // x12

  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_12;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1BCAA44(this, pos);
      v6 = svts->m_Items[v5];
      if ( !v6 )
        break;
      if ( v6->fields.id == pos + 1 )
      {
        this = (DeckServant_o *)v6->fields.npcFollowerSvtId;
        if ( (__int64)this > 0 )
          return (int64_t)this;
      }
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&pos);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall DeckServant__GetUserServant(
        DeckServant_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct DeckServantData_array *svts; // x8
  __int64 v10; // x21
  int v11; // w20
  int max_length; // w9
  DeckServantData_o *v13; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B15D6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5, v6);
    this = (DeckServant_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15D6C = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&menber);
  v10 = 0LL;
  v11 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v10 >= max_length )
      return 0LL;
    if ( (unsigned int)v10 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&menber);
    v13 = svts->m_Items[v10];
    if ( !v13 )
      goto LABEL_16;
    if ( v13->fields.id == v11 && !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v10;
    if ( !svts )
      goto LABEL_16;
  }
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v13->fields.userSvtId,
                            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return (UserServantEntity_o *)entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *v10; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v12; // x21
  il2cpp_array_size_t v13; // w23
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v15; // x25
  const MethodInfo *v16; // x2
  DeckServantData_o *v17; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v19; // w9
  __int64 v20; // x10
  int64_t *m_Items; // x11
  const MethodInfo *v23; // x2

  if ( (byte_4B15D6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15D6F = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v12 = (DataMasterBase_o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v13 >= (int)max_length )
      return 0;
    if ( v13 >= max_length )
      goto LABEL_33;
    v15 = svts->m_Items[v13];
    if ( !v15 )
      goto LABEL_32;
    if ( !v15->fields.isFollowerSvt && v15->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v10 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v15->fields.userSvtId;
      if ( !v12 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v12, (System_Int64_array *)Instance, v16);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v13 >= svts->max_length )
          goto LABEL_33;
        v17 = svts->m_Items[v13];
        if ( !v17 )
          goto LABEL_32;
        userSvtEquipIds = v17->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v19 = userSvtEquipIds->max_length;
          if ( v19 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v13;
    if ( !svts )
      goto LABEL_32;
  }
  v20 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= v19 )
      goto LABEL_33;
    if ( m_Items[v20] == userSvtId )
      break;
    if ( (int)++v20 >= v19 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_1BCAA3C(Instance, v10);
  v10 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1BCAA44(Instance, v10);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v12, (System_Int64_array *)Instance, v23);
}


bool __fastcall DeckServant__IsEquip_39593464(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *v12; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v15; // x22
  il2cpp_array_size_t v16; // w24
  DeckServantData_o *v17; // x26
  const MethodInfo *v18; // x2
  struct System_Int64_array *userSvtEquipIds; // x8
  int v20; // w9
  int v21; // w10
  const MethodInfo *v23; // x2

  if ( (byte_4B15D70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, equipedUserSvtId);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15D70 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (DataMasterBase_o *)Instance;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= svts->max_length )
      goto LABEL_30;
    v17 = svts->m_Items[v16];
    if ( !v17 )
      goto LABEL_29;
    if ( !v17->fields.isFollowerSvt && v17->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v12 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v17->fields.userSvtId;
      if ( !v15 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, v18);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        userSvtEquipIds = v17->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v20 = userSvtEquipIds->max_length;
          if ( v20 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( ++v16 == max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v21 = 0;
  while ( userSvtEquipIds->m_Items[v21] != userSvtId )
  {
    if ( v20 == ++v21 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v17->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1BCA888(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_1BCAA3C(Instance, v12);
  v12 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1BCAA44(Instance, v12);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, v23);
}


void __fastcall DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
{
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v4; // w10
  DeckServantData_o *v5; // x11

  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_9;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= (unsigned int)max_length )
        sub_1BCAA44(this, method);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}