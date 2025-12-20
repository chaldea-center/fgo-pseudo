void DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DeckServant___ctor_42460708(DeckServant_o *this, int32_t sum, int64_t userEquipId, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  long double inited; // q0
  _QWORD *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  struct DeckWaveServantData_array **v26; // x8
  struct DeckWaveServantData_array *v27; // x1
  struct DeckServantData_array *svts; // x26
  unsigned int v29; // w24
  DeckServantData_o *v30; // x23
  const MethodInfo *v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppClass **v40; // x0
  DeckServantData_o *v41; // x8
  __int64 v42; // x0

  if ( (byte_4D2C35D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_1C94098(&DeckServantData___TypeInfo);
    sub_1C94098(&DeckServantData_TypeInfo);
    byte_4D2C35D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C94140(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v22 = Method_System_Array_Empty_DeckWaveServantData___;
  v23 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v23 )
  {
    sub_1C6A188(Method_System_Array_Empty_DeckWaveServantData___);
    v23 = v22[7];
  }
  v24 = *(_QWORD *)(v23 + 16);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v24 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v24);
  v25 = *(_QWORD *)(v22[7] + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C6A12C(inited);
  v26 = *(struct DeckWaveServantData_array ***)(v25 + 184);
  v27 = *v26;
  this->fields.waveSvts = *v26;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.waveSvts, (int32_t)v27, v15, v16, v17, v18, v19, v20);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v29 = 0;
    do
    {
      v30 = (DeckServantData_o *)sub_1C942E4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v30, v31);
      if ( !svts )
        goto LABEL_22;
      if ( v30 )
      {
        v32 = sub_1C941D4(v30, svts->obj.klass->_1.element_class);
        if ( !v32 )
        {
          v42 = sub_1C94314(0);
          sub_1C941C0(v42, 0);
        }
      }
      if ( v29 >= LODWORD(svts->max_length) )
        goto LABEL_23;
      v40 = &svts->obj.klass + (int)v29;
      v40[4] = (Il2CppClass *)v30;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v30, v34, v35, v36, v37, v38, v39);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v29 >= LODWORD(svts->max_length) )
LABEL_23:
        sub_1C942F8(v32);
      v41 = svts->m_Items[v29];
      if ( !v41 )
LABEL_22:
        sub_1C942F0(v32, v33);
      v41->fields.id = ++v29;
      v41->fields.initPos = v29;
    }
    while ( sum != v29 );
  }
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_42461364(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x25
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct DeckWaveServantData_array *v16; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct DeckServantData_array *svts; // x29
  unsigned int v25; // w28
  DeckServantData_o *v26; // x26
  const MethodInfo *v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppClass **v36; // x0
  DeckServantData_o *v37; // x8
  unsigned int v38; // w9
  int v39; // w10
  struct DeckWaveServantData_array *v40; // x29
  unsigned int v41; // w25
  int v42; // w28
  DeckWaveServantData_o *v43; // x24
  const MethodInfo *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppClass **v51; // x0
  DeckWaveServantData_o *v52; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v55; // x8
  int32_t *m_Items; // x10
  __int64 v57; // x0

  if ( (byte_4D2C35E & 1) == 0 )
  {
    sub_1C94098(&DeckServantData___TypeInfo);
    sub_1C94098(&DeckServantData_TypeInfo);
    sub_1C94098(&DeckWaveServantData___TypeInfo);
    sub_1C94098(&DeckWaveServantData_TypeInfo);
    byte_4D2C35E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (struct DeckServantData_array *)sub_1C94140(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (struct DeckWaveServantData_array *)sub_1C94140(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v16;
  p_waveSvts = &this->fields.waveSvts;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.waveSvts, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v25 = 0;
    while ( 1 )
    {
      v26 = (DeckServantData_o *)sub_1C942E4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v26, v27);
      if ( !svts )
        break;
      if ( v26 )
      {
        v28 = sub_1C941D4(v26, svts->obj.klass->_1.element_class);
        if ( !v28 )
        {
LABEL_33:
          v57 = sub_1C94314(v28);
          sub_1C941C0(v57, 0);
        }
      }
      if ( v25 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v36 = &svts->obj.klass + (int)v25;
      v36[4] = (Il2CppClass *)v26;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v26, v30, v31, v32, v33, v34, v35);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v25 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v37 = svts->m_Items[v25];
      if ( !v37 )
        break;
      v38 = v25 + 1;
      v39 = v25 + 1;
      v37->fields.id = v25 + 1;
      if ( (int)(v25 + 1) > memberNum )
        v39 = (int)v25 % memberNum + 1;
      ++v25;
      v37->fields.initPos = v39;
      if ( memberNum * waveNum == v38 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1C942F0(v28, v29);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v40 = *p_waveSvts;
    v41 = 0;
    v42 = 1;
    while ( 1 )
    {
      v43 = (DeckWaveServantData_o *)sub_1C942E4(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v43, v44);
      if ( !v40 )
        goto LABEL_32;
      if ( v43 )
      {
        v28 = sub_1C941D4(v43, v40->obj.klass->_1.element_class);
        if ( !v28 )
          goto LABEL_33;
      }
      if ( v41 >= LODWORD(v40->max_length) )
        goto LABEL_31;
      v51 = &v40->obj.klass + (int)v41;
      v51[4] = (Il2CppClass *)v43;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v51 + 4), (int32_t)v43, v45, v46, v47, v48, v49, v50);
      v40 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v41 >= LODWORD(v40->max_length) )
        goto LABEL_31;
      v52 = v40->m_Items[v41];
      if ( !v52 )
        goto LABEL_32;
      v52->fields.wave = ++v41;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v42 += memberNum;
      if ( v41 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v52->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length_low = LODWORD(uniqueIds->max_length);
      v55 = 0;
      m_Items = uniqueIds->m_Items;
      while ( v55 < max_length_low )
      {
        m_Items[v55] = v42 + v55;
        if ( memberNum == ++v55 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1C942F8(v28);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_42462172(DeckServant_o *this, int32_t sum, DeckServant_o *deckInfo, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  unsigned __int64 v23; // x23
  __int64 v24; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned int *v27; // x26
  DeckServantData_o *v28; // x22
  unsigned int *v29; // x0
  unsigned int *v30; // x26
  DeckServantData_o *v31; // x22
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  unsigned int *v39; // x0
  struct DeckServantData_array *v40; // x8
  DeckServantData_o *v41; // x8
  __int64 v42; // x0

  if ( (byte_4D2C35F & 1) == 0 )
  {
    sub_1C94098(&DeckServantData___TypeInfo);
    sub_1C94098(&DeckServantData_TypeInfo);
    byte_4D2C35F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C94140(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !deckInfo )
LABEL_24:
    sub_1C942F0(v15, v16);
  if ( sum >= 1 )
  {
    v23 = 0;
    v24 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length_low = LODWORD(svts->max_length), (__int64)v23 < (int)max_length_low) )
      {
        if ( v23 >= max_length_low )
          goto LABEL_25;
        v27 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v28 = svts->m_Items[v23];
        if ( v28 )
        {
          v15 = sub_1C941D4(v28, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
          if ( !v15 )
            goto LABEL_26;
        }
        if ( v23 >= v27[6] )
          goto LABEL_25;
        v29 = &v27[2 * v23];
        *((_QWORD *)v29 + 4) = v28;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v29 + 8), (int32_t)v28, v17, v18, v19, v20, v21, v22);
        ++v23;
      }
      else
      {
        v30 = (unsigned int *)p_fields->svts;
        v31 = (DeckServantData_o *)sub_1C942E4(DeckServantData_TypeInfo);
        DeckServantData___ctor(v31, v32);
        if ( !v30 )
          goto LABEL_24;
        if ( v31 )
        {
          v15 = sub_1C941D4(v31, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
          if ( !v15 )
          {
LABEL_26:
            v42 = sub_1C94314(v15);
            sub_1C941C0(v42, 0);
          }
        }
        if ( v23 >= v30[6] )
          goto LABEL_25;
        v39 = &v30[2 * v23];
        *((_QWORD *)v39 + 4) = v31;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 8), (int32_t)v31, v33, v34, v35, v36, v37, v38);
        v40 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v23 >= LODWORD(v40->max_length) )
LABEL_25:
          sub_1C942F8(v15);
        v41 = v40->m_Items[v23];
        if ( !v41 )
          goto LABEL_24;
        v41->fields.id = ++v23;
      }
    }
    while ( v23 != v24 );
  }
  this->fields.userEquipId = deckInfo->fields.userEquipId;
}


void DeckServant__CollectUserSvtId(
        DeckServant_o *this,
        System_Collections_Generic_List_long__o *svtCollectList,
        System_Collections_Generic_List_long__o *equipCollectList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  unsigned int v11; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v13; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  int32_t v16; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v18; // x10
  il2cpp_array_size_t v19; // x9
  DeckServantData_o *v20; // x10
  unsigned __int64 v21; // x26
  DeckServantData_o *v22; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 max_length_low; // x10
  int64_t v25; // x23
  int32_t v26; // w8
  int32_t v27; // w24
  struct System_Int64_array *v28; // x9
  _QWORD *v29; // x10

  if ( (byte_4D2C365 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C365 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v11 >= (int)max_length )
        return;
      if ( v11 >= max_length )
        goto LABEL_54;
      v13 = svts->m_Items[v11];
      if ( !v13 )
        goto LABEL_52;
      userSvtId = v13->fields.userSvtId;
      Instance = sub_1C94140(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_52;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v10 )
        goto LABEL_52;
      Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v10,
                   (System_Int64_array *)Instance,
                   (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
            v18 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_3852E68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
          v16 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v16,
                         (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v16 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v19 = svts->max_length;
        if ( v11 >= (unsigned int)v19 )
          goto LABEL_54;
        v20 = svts->m_Items[v11];
        if ( !v20 )
          goto LABEL_52;
        if ( v20->fields.userSvtEquipIds )
        {
          if ( v11 >= (unsigned int)v19 )
LABEL_54:
            sub_1C942F8(Instance);
          v21 = 0;
          while ( 1 )
          {
            v22 = svts->m_Items[v11];
            if ( !v22 )
              break;
            userSvtEquipIds = v22->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            max_length_low = LODWORD(userSvtEquipIds->max_length);
            if ( (__int64)v21 >= (int)max_length_low )
              goto LABEL_51;
            if ( v21 >= max_length_low )
              goto LABEL_54;
            v25 = userSvtEquipIds->m_Items[v21];
            Instance = sub_1C94140(long___TypeInfo, 1);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v25;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v10,
                         (System_Int64_array *)Instance,
                         (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v26 = equipCollectList->fields._size;
              if ( v26 < 1 )
              {
LABEL_43:
                if ( v25 >= 1 )
                {
                  v28 = equipCollectList->fields._items;
                  v29 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v28 )
                    break;
                  if ( (unsigned int)v26 >= LODWORD(v28->max_length) )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v25,
                      *(const MethodInfo_3852E68 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v26 + 1;
                    v28->m_Items[v26] = v25;
                  }
                }
              }
              else
              {
                v27 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v27,
                               (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v25 )
                    break;
                  v26 = equipCollectList->fields._size;
                  if ( ++v27 >= v26 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v21;
            if ( v11 >= LODWORD(svts->max_length) )
              goto LABEL_54;
          }
LABEL_52:
          sub_1C942F0(Instance, v8);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_51:
      ++v11;
      if ( !svts )
        goto LABEL_52;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *DeckServant__GetEquipList(DeckServant_o *this, int32_t memberIdx, const MethodInfo *method)
{
  int32_t v3; // w19
  DeckServant_o *v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v7; // w10
  DeckServantData_o *v8; // x20
  BalanceConfig_c *v9; // x0
  Il2CppObject *Master_object; // x19
  struct System_Int64_array *userSvtEquipIds; // x20
  __int64 v13; // x21
  unsigned __int64 v14; // x24
  int64_t *m_Items; // x25

  v3 = memberIdx;
  v4 = this;
  if ( (byte_4D2C361 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    this = (DeckServant_o *)sub_1C94098(&long___TypeInfo);
    byte_4D2C361 = 1;
  }
  svts = v4->fields.svts;
  if ( !svts )
    goto LABEL_36;
  max_length = svts->max_length;
  if ( max_length < 1 )
    goto LABEL_12;
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      goto LABEL_37;
    v8 = svts->m_Items[v7];
    if ( !v8 )
      goto LABEL_36;
    if ( v8->fields.id == v3 + 1 && !v8->fields.isFollowerSvt && v8->fields.userSvtId >= 1 )
      break;
    if ( max_length == ++v7 )
      goto LABEL_12;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (DeckServant_o *)sub_1C94140(long___TypeInfo, 1);
  if ( !this )
    goto LABEL_36;
  *(_QWORD *)&memberIdx = this;
  if ( !LODWORD(this->fields.userEquipId) )
    goto LABEL_37;
  this->fields.waveSvts = (struct DeckWaveServantData_array *)v8->fields.userSvtId;
  if ( !Master_object )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (System_Int64_array *)this,
          (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    goto LABEL_12;
  userSvtEquipIds = v8->fields.userSvtEquipIds;
  this = (DeckServant_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEquipIds, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  if ( !userSvtEquipIds )
LABEL_36:
    sub_1C942F0(this, *(_QWORD *)&memberIdx);
  v13 = sub_1C94140(long___TypeInfo, LODWORD(userSvtEquipIds->max_length));
  if ( SLODWORD(userSvtEquipIds->max_length) >= 1 )
  {
    v14 = 0;
    m_Items = userSvtEquipIds->m_Items;
    while ( 1 )
    {
      this = (DeckServant_o *)sub_1C94140(long___TypeInfo, 1);
      if ( v14 >= LODWORD(userSvtEquipIds->max_length) )
        break;
      *(_QWORD *)&memberIdx = this;
      if ( !this )
        goto LABEL_36;
      if ( !LODWORD(this->fields.userEquipId) )
        break;
      this->fields.waveSvts = (struct DeckWaveServantData_array *)m_Items[v14];
      this = (DeckServant_o *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                (System_Int64_array *)this,
                                (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v14 >= LODWORD(userSvtEquipIds->max_length) )
          break;
        if ( !v13 )
          goto LABEL_36;
        if ( v14 >= *(unsigned int *)(v13 + 24) )
          break;
        *(_QWORD *)(v13 + 32 + 8 * v14) = m_Items[v14];
      }
      if ( (__int64)++v14 >= SLODWORD(userSvtEquipIds->max_length) )
        goto LABEL_34;
    }
LABEL_37:
    sub_1C942F8(this);
  }
LABEL_34:
  if ( v13 )
    return (System_Int64_array *)v13;
LABEL_12:
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


System_Int64_array *DeckServant__GetEquipList_42463504(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  BalanceConfig_c *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v12; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v15; // w10
  DeckServantData_o *v16; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v19; // x23
  int64_t *m_Items; // x27
  BalanceConfig_c *v21; // x0

  if ( (byte_4D2C362 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C94098(&long___TypeInfo);
    byte_4D2C362 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = sub_1C94140(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1C94140(long___TypeInfo, 1);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v12 = isEntityExistsFromId;
  if ( !LODWORD(isEntityExistsFromId->max_length) )
LABEL_41:
    sub_1C942F8(isEntityExistsFromId);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v9 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          v9,
          isEntityExistsFromId,
          (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__)
    && !isInterruption )
  {
    return (System_Int64_array *)v10;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1C942F0(isEntityExistsFromId, v12);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( max_length == v15 )
        goto LABEL_41;
      v16 = svts->m_Items[v15];
      if ( !v16 )
        goto LABEL_40;
      if ( v16->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v15 )
        return (System_Int64_array *)v10;
    }
    if ( !v16->fields.isFollowerSvt )
    {
      userSvtEquipIds = v16->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v19 = 0;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v21 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v19 >= v21->static_fields->SvtEquipMax || (__int64)v19 >= SLODWORD(userSvtEquipIds->max_length) )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1C94140(long___TypeInfo, 1);
          if ( v19 >= LODWORD(userSvtEquipIds->max_length) )
            goto LABEL_41;
          v12 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !LODWORD(isEntityExistsFromId->max_length) )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v19];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                         v9,
                                                         isEntityExistsFromId,
                                                         (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v19 >= LODWORD(userSvtEquipIds->max_length) )
              goto LABEL_41;
            if ( !v10 )
              goto LABEL_40;
            if ( v19 >= *(unsigned int *)(v10 + 24) )
              goto LABEL_41;
            *(_QWORD *)(v10 + 32 + 8 * v19) = m_Items[v19];
          }
          ++v19;
        }
      }
    }
  }
  return (System_Int64_array *)v10;
}


int64_t DeckServant__GetNpcFollowerServantId(DeckServant_o *this, int32_t pos, const MethodInfo *method)
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
        sub_1C942F8(this);
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
        return 0;
    }
LABEL_12:
    sub_1C942F0(this, pos);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *DeckServant__GetUserServant(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  DeckServant_o *v4; // x19
  struct DeckServantData_array *svts; // x8
  __int64 v6; // x21
  int v7; // w20
  int max_length; // w9
  DeckServantData_o *v9; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4D2C360 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C360 = 1;
  }
  entity = 0;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1C942F0(this, *(_QWORD *)&menber);
  v6 = 0;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0;
    if ( (unsigned int)v6 >= max_length )
      sub_1C942F8(this);
    v9 = svts->m_Items[v6];
    if ( !v9 )
      goto LABEL_16;
    if ( v9->fields.id == v7 && !v9->fields.isFollowerSvt && v9->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v6;
    if ( !svts )
      goto LABEL_16;
  }
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return (UserServantEntity_o *)entity;
}


bool DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned int v9; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v11; // x26
  DeckServantData_o *v12; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v14; // w9
  __int64 v15; // x10
  int64_t *m_Items; // x11

  if ( (byte_4D2C363 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C363 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v9 >= (int)max_length )
      return 0;
    if ( v9 >= max_length )
      goto LABEL_33;
    v11 = svts->m_Items[v9];
    if ( !v11 )
      goto LABEL_32;
    if ( !v11->fields.isFollowerSvt && v11->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1C94140(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_32;
      v6 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v11->fields.userSvtId;
      if ( !v8 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v8,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v9 >= LODWORD(svts->max_length) )
          goto LABEL_33;
        v12 = svts->m_Items[v9];
        if ( !v12 )
          goto LABEL_32;
        userSvtEquipIds = v12->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v14 = userSvtEquipIds->max_length;
          if ( v14 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v9;
    if ( !svts )
      goto LABEL_32;
  }
  v15 = 0;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v15 >= v14 )
      goto LABEL_33;
    if ( m_Items[v15] == userSvtId )
      break;
    if ( (int)++v15 >= v14 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1C94140(long___TypeInfo, 1);
  if ( !Instance )
LABEL_32:
    sub_1C942F0(Instance, v6);
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1C942F8(Instance);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v8,
           (System_Int64_array *)Instance,
           (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


bool DeckServant__IsEquip_42464628(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v8; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  unsigned int v12; // w25
  DeckServantData_o *v13; // x27
  struct System_Int64_array *userSvtEquipIds; // x8
  int v15; // w9
  int v16; // w10

  if ( (byte_4D2C364 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C364 = 1;
  }
  *equipedUserSvtId = 0;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= LODWORD(svts->max_length) )
      goto LABEL_30;
    v13 = svts->m_Items[v12];
    if ( !v13 )
      goto LABEL_29;
    if ( !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1C94140(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_29;
      v8 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v13->fields.userSvtId;
      if ( !v11 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v11,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        userSvtEquipIds = v13->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v15 = userSvtEquipIds->max_length;
          if ( v15 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( ++v12 == max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v16 = 0;
  while ( userSvtEquipIds->m_Items[v16] != userSvtId )
  {
    if ( v15 == ++v16 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v13->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1C94140(long___TypeInfo, 1);
  if ( !Instance )
LABEL_29:
    sub_1C942F0(Instance, v8);
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1C942F8(Instance);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v11,
           (System_Int64_array *)Instance,
           (const MethodInfo_345CFF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


void DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
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
        sub_1C942F8(this);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, method);
  }
}