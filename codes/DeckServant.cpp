void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39661344(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct DeckServantData_array *v9; // x0
  DeckServant_Fields *p_fields; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  long double inited; // q0
  _QWORD *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  struct DeckWaveServantData_array **v28; // x8
  struct DeckWaveServantData_array *v29; // x1
  struct DeckServantData_array *svts; // x26
  il2cpp_array_size_t v31; // w24
  DeckServantData_o *v32; // x23
  const MethodInfo *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppClass **v42; // x0
  DeckServantData_o *v43; // x8
  __int64 v44; // x0

  if ( (byte_4B36D06 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_1BD3458(&DeckServantData___TypeInfo, v7);
    sub_1BD3458(&DeckServantData_TypeInfo, v8);
    byte_4B36D06 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_1BD3500(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v9;
  p_fields = &this->fields;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  v24 = Method_System_Array_Empty_DeckWaveServantData___;
  v25 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v25 )
  {
    sub_1C25390(Method_System_Array_Empty_DeckWaveServantData___);
    v25 = v24[7];
  }
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C25334(inited);
  if ( !*(_DWORD *)(v26 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v26);
  v27 = *(_QWORD *)(v24[7] + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C25334(inited);
  v28 = *(struct DeckWaveServantData_array ***)(v27 + 184);
  v29 = *v28;
  this->fields.waveSvts = *v28;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.waveSvts, (int64_t)v29, v17, v18, v19, v20, v21, v22);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v31 = 0;
    do
    {
      v32 = (DeckServantData_o *)sub_1BD36A4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v32, v33);
      if ( !svts )
        goto LABEL_22;
      if ( v32 )
      {
        v34 = sub_1BD3594(v32, svts->obj.klass->_1.element_class);
        if ( !v34 )
        {
          v44 = sub_1BD36D8(0LL);
          sub_1BD3580(v44, 0LL);
        }
      }
      if ( v31 >= svts->max_length )
        goto LABEL_23;
      v42 = &svts->obj.klass + (int)v31;
      v42[4] = (Il2CppClass *)v32;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v32, v36, v37, v38, v39, v40, v41);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v31 >= svts->max_length )
LABEL_23:
        sub_1BD36BC(v34, v35);
      v43 = svts->m_Items[v31];
      if ( !v43 )
LABEL_22:
        sub_1BD36B4(v34, v35);
      v43->fields.id = ++v31;
      v43->fields.initPos = v31;
    }
    while ( sum != v31 );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39662000(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct DeckServantData_array *v11; // x0
  DeckServant_Fields *p_fields; // x25
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct DeckWaveServantData_array *v19; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct DeckServantData_array *svts; // x29
  il2cpp_array_size_t v28; // w28
  DeckServantData_o *v29; // x26
  const MethodInfo *v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppClass **v39; // x0
  DeckServantData_o *v40; // x8
  il2cpp_array_size_t v41; // w9
  int v42; // w10
  struct DeckWaveServantData_array *v43; // x29
  il2cpp_array_size_t v44; // w25
  int v45; // w28
  DeckWaveServantData_o *v46; // x24
  const MethodInfo *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppClass **v54; // x0
  DeckWaveServantData_o *v55; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v58; // x8
  int32_t *v59; // x10
  __int64 v60; // x0

  if ( (byte_4B36D07 & 1) == 0 )
  {
    sub_1BD3458(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_1BD3458(&DeckServantData_TypeInfo, v8);
    sub_1BD3458(&DeckWaveServantData___TypeInfo, v9);
    sub_1BD3458(&DeckWaveServantData_TypeInfo, v10);
    byte_4B36D07 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_1BD3500(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v11;
  p_fields = &this->fields;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  v19 = (struct DeckWaveServantData_array *)sub_1BD3500(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v19;
  p_waveSvts = &this->fields.waveSvts;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.waveSvts, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v28 = 0;
    while ( 1 )
    {
      v29 = (DeckServantData_o *)sub_1BD36A4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v29, v30);
      if ( !svts )
        break;
      if ( v29 )
      {
        v31 = sub_1BD3594(v29, svts->obj.klass->_1.element_class);
        if ( !v31 )
        {
LABEL_33:
          v60 = sub_1BD36D8(v31);
          sub_1BD3580(v60, 0LL);
        }
      }
      if ( v28 >= svts->max_length )
        goto LABEL_31;
      v39 = &svts->obj.klass + (int)v28;
      v39[4] = (Il2CppClass *)v29;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v29, v33, v34, v35, v36, v37, v38);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v28 >= svts->max_length )
        goto LABEL_31;
      v40 = svts->m_Items[v28];
      if ( !v40 )
        break;
      v41 = v28 + 1;
      v42 = v28 + 1;
      v40->fields.id = v28 + 1;
      if ( (int)(v28 + 1) > memberNum )
        v42 = (int)v28 % memberNum + 1;
      ++v28;
      v40->fields.initPos = v42;
      if ( memberNum * waveNum == v41 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1BD36B4(v31, v32);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v43 = *p_waveSvts;
    v44 = 0;
    v45 = 1;
    while ( 1 )
    {
      v46 = (DeckWaveServantData_o *)sub_1BD36A4(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v46, v47);
      if ( !v43 )
        goto LABEL_32;
      if ( v46 )
      {
        v31 = sub_1BD3594(v46, v43->obj.klass->_1.element_class);
        if ( !v31 )
          goto LABEL_33;
      }
      if ( v44 >= v43->max_length )
        goto LABEL_31;
      v54 = &v43->obj.klass + (int)v44;
      v54[4] = (Il2CppClass *)v46;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v46, v48, v49, v50, v51, v52, v53);
      v43 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v44 >= v43->max_length )
        goto LABEL_31;
      v55 = v43->m_Items[v44];
      if ( !v55 )
        goto LABEL_32;
      v55->fields.wave = ++v44;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v45 += memberNum;
      if ( v44 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v55->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length = uniqueIds->max_length;
      v58 = 0LL;
      v59 = &uniqueIds->m_Items[1];
      while ( v58 < max_length )
      {
        v59[v58] = v45 + v58;
        if ( memberNum == ++v58 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1BD36BC(v31, v32);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_39662808(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  unsigned __int64 v24; // x23
  __int64 v25; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v28; // x26
  int64_t v29; // x22
  unsigned int *v30; // x0
  unsigned int *v31; // x26
  DeckServantData_o *v32; // x22
  const MethodInfo *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  unsigned int *v40; // x0
  struct DeckServantData_array *v41; // x8
  DeckServantData_o *v42; // x8
  __int64 v43; // x0

  if ( (byte_4B36D08 & 1) == 0 )
  {
    sub_1BD3458(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_1BD3458(&DeckServantData_TypeInfo, v7);
    byte_4B36D08 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_1BD3500(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  if ( !deckInfo )
LABEL_24:
    sub_1BD36B4(v16, v17);
  if ( sum >= 1 )
  {
    v24 = 0LL;
    v25 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v24 < (int)max_length) )
      {
        if ( v24 >= max_length )
          goto LABEL_25;
        v28 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v29 = (int64_t)svts->m_Items[v24];
        if ( v29 )
        {
          v16 = sub_1BD3594(v29, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !v16 )
            goto LABEL_26;
        }
        if ( v24 >= v28[6] )
          goto LABEL_25;
        v30 = &v28[2 * v24];
        *((_QWORD *)v30 + 4) = v29;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 8), v29, v18, v19, v20, v21, v22, v23);
        ++v24;
      }
      else
      {
        v31 = (unsigned int *)p_fields->svts;
        v32 = (DeckServantData_o *)sub_1BD36A4(DeckServantData_TypeInfo);
        DeckServantData___ctor(v32, v33);
        if ( !v31 )
          goto LABEL_24;
        if ( v32 )
        {
          v16 = sub_1BD3594(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
          if ( !v16 )
          {
LABEL_26:
            v43 = sub_1BD36D8(v16);
            sub_1BD3580(v43, 0LL);
          }
        }
        if ( v24 >= v31[6] )
          goto LABEL_25;
        v40 = &v31[2 * v24];
        *((_QWORD *)v40 + 4) = v32;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v40 + 8), (int64_t)v32, v34, v35, v36, v37, v38, v39);
        v41 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v24 >= v41->max_length )
LABEL_25:
          sub_1BD36BC(v16, v17);
        v42 = v41->m_Items[v24];
        if ( !v42 )
          goto LABEL_24;
        v42->fields.id = ++v24;
      }
    }
    while ( v24 != v25 );
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 Instance; // x0
  __int64 v13; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v15; // x22
  unsigned int v16; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v18; // x8
  int64_t userSvtId; // x23
  const MethodInfo *v20; // x2
  int32_t size; // w8
  int32_t v22; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v24; // x10
  __int64 v25; // x9
  DeckServantData_o *v26; // x10
  unsigned __int64 v27; // x28
  DeckServantData_o *v28; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v30; // x10
  int64_t v31; // x23
  const MethodInfo *v32; // x2
  int32_t v33; // w8
  int32_t v34; // w24
  struct System_Int64_array *v35; // x9
  _QWORD *v36; // x10

  if ( (byte_4B36D0E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_1BD3458(&long___TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B36D0E = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v15 = (DataMasterBase_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v16 >= (int)max_length )
        return;
      if ( v16 >= max_length )
        goto LABEL_54;
      v18 = svts->m_Items[v16];
      if ( !v18 )
        goto LABEL_52;
      userSvtId = v18->fields.userSvtId;
      Instance = sub_1BD3500(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_52;
      v13 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v15 )
        goto LABEL_52;
      Instance = DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, v20);
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
            v24 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
          v22 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v22,
                         (const MethodInfo_35A8AD4 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v22 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v25 = *(_QWORD *)&svts->max_length;
        if ( v16 >= (unsigned int)v25 )
          goto LABEL_54;
        v26 = svts->m_Items[v16];
        if ( !v26 )
          goto LABEL_52;
        if ( v26->fields.userSvtEquipIds )
        {
          if ( v16 >= (unsigned int)v25 )
LABEL_54:
            sub_1BD36BC(Instance, v13);
          v27 = 0LL;
          while ( 1 )
          {
            v28 = svts->m_Items[v16];
            if ( !v28 )
              break;
            userSvtEquipIds = v28->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v30 = userSvtEquipIds->max_length;
            if ( (__int64)v27 >= (int)v30 )
              goto LABEL_51;
            if ( v27 >= v30 )
              goto LABEL_54;
            v31 = userSvtEquipIds->m_Items[v27];
            Instance = sub_1BD3500(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v13 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v31;
            Instance = DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, v32);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v33 = equipCollectList->fields._size;
              if ( v33 < 1 )
              {
LABEL_43:
                if ( v31 >= 1 )
                {
                  v35 = equipCollectList->fields._items;
                  v36 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v35 )
                    break;
                  if ( v33 >= v35->max_length )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v31,
                      *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v33 + 1;
                    v35->m_Items[v33] = v31;
                  }
                }
              }
              else
              {
                v34 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v34,
                               (const MethodInfo_35A8AD4 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v31 )
                    break;
                  v33 = equipCollectList->fields._size;
                  if ( ++v34 >= v33 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v27;
            if ( v16 >= svts->max_length )
              goto LABEL_54;
          }
LABEL_52:
          sub_1BD36B4(Instance, v13);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_51:
      ++v16;
      if ( !svts )
        goto LABEL_52;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  System_Int64_array *Instance; // x0
  System_Int64_array *v10; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v13; // x19
  __int64 v14; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v16; // x23
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v19; // x2
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v21; // x24
  int64_t *v22; // x25
  BalanceConfig_c *v23; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4B36D0A & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BD3458(&long___TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B36D0A = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Instance = (System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_36;
  max_length = svts->max_length;
  v13 = Instance;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_37;
      v16 = m_Items[v14];
      if ( !v16 )
        goto LABEL_36;
      if ( v16->fields.id == menber + 1 )
        break;
      if ( (int)++v14 >= max_length )
        return v13;
    }
    if ( !v16->fields.isFollowerSvt && v16->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v10 = Instance;
          if ( !Instance->max_length )
LABEL_37:
            sub_1BD36BC(Instance, v10);
          Instance->m_Items[0] = v16->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)MasterData_object, Instance, v19) )
            {
              userSvtEquipIds = v16->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v21 = 0LL;
                v22 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v23 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v23 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v21 >= v23->static_fields->SvtEquipMax
                    || (__int64)v21 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 1LL);
                  if ( v21 >= userSvtEquipIds->max_length )
                    goto LABEL_37;
                  v10 = Instance;
                  if ( !Instance )
                    goto LABEL_36;
                  if ( !Instance->max_length )
                    goto LABEL_37;
                  Instance->m_Items[0] = v22[v21];
                  Instance = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                     (DataMasterBase_o *)MasterData_object,
                                                     Instance,
                                                     v24);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v21 >= userSvtEquipIds->max_length )
                      goto LABEL_37;
                    if ( !v13 )
                      goto LABEL_36;
                    if ( v21 >= v13->max_length )
                      goto LABEL_37;
                    v13->m_Items[v21] = v22[v21];
                  }
                  ++v21;
                }
              }
            }
            return v13;
          }
        }
      }
LABEL_36:
      sub_1BD36B4(Instance, v10);
    }
  }
  return v13;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_39664288(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  BalanceConfig_c *v12; // x8
  DataMasterBase_o *v13; // x20
  System_Int64_array *v14; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v16; // x1
  const MethodInfo *v17; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v20; // w10
  DeckServantData_o *v21; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v24; // x23
  int64_t *m_Items; // x26
  BalanceConfig_c *v26; // x0
  const MethodInfo *v27; // x2

  if ( (byte_4B36D0B & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BD3458(&DataManager_TypeInfo, v9);
    sub_1BD3458(&long___TypeInfo, v10);
    byte_4B36D0B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
  v12 = BalanceConfig_TypeInfo;
  v13 = (DataMasterBase_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v14 = (System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v12->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v16 = isEntityExistsFromId;
  if ( !isEntityExistsFromId->max_length )
LABEL_41:
    sub_1BD36BC(isEntityExistsFromId, v16);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v13 )
    goto LABEL_40;
  if ( !DataMasterBase__isEntityExistsFromId(v13, isEntityExistsFromId, v17) && !isInterruption )
    return v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1BD36B4(isEntityExistsFromId, v16);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( max_length == v20 )
        goto LABEL_41;
      v21 = svts->m_Items[v20];
      if ( !v21 )
        goto LABEL_40;
      if ( v21->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v20 )
        return v14;
    }
    if ( !v21->fields.isFollowerSvt )
    {
      userSvtEquipIds = v21->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v24 = 0LL;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v26 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v26 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v24 >= v26->static_fields->SvtEquipMax || (__int64)v24 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 1LL);
          if ( v24 >= userSvtEquipIds->max_length )
            goto LABEL_41;
          v16 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !isEntityExistsFromId->max_length )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v24];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                         v13,
                                                         isEntityExistsFromId,
                                                         v27);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v24 >= userSvtEquipIds->max_length )
              goto LABEL_41;
            if ( !v14 )
              goto LABEL_40;
            if ( v24 >= v14->max_length )
              goto LABEL_41;
            v14->m_Items[v24] = m_Items[v24];
          }
          ++v24;
        }
      }
    }
  }
  return v14;
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
        sub_1BD36BC(this, *(_QWORD *)&pos);
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
    sub_1BD36B4(this, pos);
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
  __int64 v6; // x1
  struct DeckServantData_array *svts; // x8
  __int64 v8; // x21
  int v9; // w20
  int max_length; // w9
  DeckServantData_o *v11; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B36D09 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B36D09 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1BD36B4(this, *(_QWORD *)&menber);
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
      sub_1BD36BC(this, *(_QWORD *)&menber);
    v11 = svts->m_Items[v8];
    if ( !v11 )
      goto LABEL_16;
    if ( v11->fields.id == v9 && !v11->fields.isFollowerSvt && v11->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v8;
    if ( !svts )
      goto LABEL_16;
  }
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v8; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v10; // x21
  il2cpp_array_size_t v11; // w23
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v13; // x25
  const MethodInfo *v14; // x2
  DeckServantData_o *v15; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v17; // w9
  __int64 v18; // x10
  int64_t *m_Items; // x11
  const MethodInfo *v21; // x2

  if ( (byte_4B36D0C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BD3458(&long___TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B36D0C = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v10 = (DataMasterBase_o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v11 >= (int)max_length )
      return 0;
    if ( v11 >= max_length )
      goto LABEL_33;
    v13 = svts->m_Items[v11];
    if ( !v13 )
      goto LABEL_32;
    if ( !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1BD3500(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v8 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v13->fields.userSvtId;
      if ( !v10 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, v14);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v11 >= svts->max_length )
          goto LABEL_33;
        v15 = svts->m_Items[v11];
        if ( !v15 )
          goto LABEL_32;
        userSvtEquipIds = v15->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v17 = userSvtEquipIds->max_length;
          if ( v17 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v11;
    if ( !svts )
      goto LABEL_32;
  }
  v18 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v18 >= v17 )
      goto LABEL_33;
    if ( m_Items[v18] == userSvtId )
      break;
    if ( (int)++v18 >= v17 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1BD3500(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_1BD36B4(Instance, v8);
  v8 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1BD36BC(Instance, v8);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, v21);
}


bool __fastcall DeckServant__IsEquip_39665336(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v10; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v13; // x22
  il2cpp_array_size_t v14; // w24
  DeckServantData_o *v15; // x26
  const MethodInfo *v16; // x2
  struct System_Int64_array *userSvtEquipIds; // x8
  int v18; // w9
  int v19; // w10
  const MethodInfo *v21; // x2

  if ( (byte_4B36D0D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BD3458(&long___TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B36D0D = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_o *)Instance;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= svts->max_length )
      goto LABEL_30;
    v15 = svts->m_Items[v14];
    if ( !v15 )
      goto LABEL_29;
    if ( !v15->fields.isFollowerSvt && v15->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1BD3500(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v10 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v15->fields.userSvtId;
      if ( !v13 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v13, (System_Int64_array *)Instance, v16);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        userSvtEquipIds = v15->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v18 = userSvtEquipIds->max_length;
          if ( v18 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( ++v14 == max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v19 = 0;
  while ( userSvtEquipIds->m_Items[v19] != userSvtId )
  {
    if ( v18 == ++v19 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v15->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1BD3500(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_1BD36B4(Instance, v10);
  v10 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1BD36BC(Instance, v10);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v13, (System_Int64_array *)Instance, v21);
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
        sub_1BD36BC(this, method);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BD36B4(this, method);
  }
}