void DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DeckServant___ctor_41746224(DeckServant_o *this, int32_t sum, int64_t userEquipId, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  long double inited; // q0
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  struct DeckWaveServantData_array **v18; // x8
  struct DeckWaveServantData_array *v19; // x1
  struct DeckServantData_array *svts; // x26
  unsigned int v21; // w24
  DeckServantData_o *v22; // x23
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppClass **v28; // x0
  DeckServantData_o *v29; // x8
  __int64 v30; // x0

  if ( (byte_4C5686D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_1C3E564(&DeckServantData___TypeInfo);
    sub_1C3E564(&DeckServantData_TypeInfo);
    byte_4C5686D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C3E60C(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v9, v10);
  v14 = Method_System_Array_Empty_DeckWaveServantData___;
  v15 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v15 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_DeckWaveServantData___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8EC78(inited);
  v18 = *(struct DeckWaveServantData_array ***)(v17 + 184);
  v19 = *v18;
  this->fields.waveSvts = *v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v19, v11, v12);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v21 = 0;
    do
    {
      v22 = (DeckServantData_o *)sub_1C3E7B0(DeckServantData_TypeInfo);
      DeckServantData___ctor(v22, v23);
      if ( !svts )
        goto LABEL_22;
      if ( v22 )
      {
        v24 = sub_1C3E6A0(v22, svts->obj.klass->_1.element_class);
        if ( !v24 )
        {
          v30 = sub_1C3E7E4(0);
          sub_1C3E68C(v30, 0);
        }
      }
      if ( v21 >= LODWORD(svts->max_length) )
        goto LABEL_23;
      v28 = &svts->obj.klass + (int)v21;
      v28[4] = (Il2CppClass *)v22;
      sub_1C3E508((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v26, v27);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v21 >= LODWORD(svts->max_length) )
LABEL_23:
        sub_1C3E7C8(v24, v25);
      v29 = svts->m_Items[v21];
      if ( !v29 )
LABEL_22:
        sub_1C3E7C0(v24, v25);
      v29->fields.id = ++v21;
      v29->fields.initPos = v21;
    }
    while ( sum != v21 );
  }
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_41746880(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x25
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct DeckWaveServantData_array *v12; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct DeckServantData_array *svts; // x29
  unsigned int v17; // w28
  DeckServantData_o *v18; // x26
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppClass **v24; // x0
  DeckServantData_o *v25; // x8
  unsigned int v26; // w9
  int v27; // w10
  struct DeckWaveServantData_array *v28; // x29
  unsigned int v29; // w25
  int v30; // w28
  DeckWaveServantData_o *v31; // x24
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppClass **v35; // x0
  DeckWaveServantData_o *v36; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v39; // x8
  int32_t *m_Items; // x10
  __int64 v41; // x0

  if ( (byte_4C5686E & 1) == 0 )
  {
    sub_1C3E564(&DeckServantData___TypeInfo);
    sub_1C3E564(&DeckServantData_TypeInfo);
    sub_1C3E564(&DeckWaveServantData___TypeInfo);
    sub_1C3E564(&DeckWaveServantData_TypeInfo);
    byte_4C5686E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (struct DeckServantData_array *)sub_1C3E60C(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v10, v11);
  v12 = (struct DeckWaveServantData_array *)sub_1C3E60C(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v12;
  p_waveSvts = &this->fields.waveSvts;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v12, v14, v15);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v17 = 0;
    while ( 1 )
    {
      v18 = (DeckServantData_o *)sub_1C3E7B0(DeckServantData_TypeInfo);
      DeckServantData___ctor(v18, v19);
      if ( !svts )
        break;
      if ( v18 )
      {
        v20 = sub_1C3E6A0(v18, svts->obj.klass->_1.element_class);
        if ( !v20 )
        {
LABEL_33:
          v41 = sub_1C3E7E4(v20);
          sub_1C3E68C(v41, 0);
        }
      }
      if ( v17 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v24 = &svts->obj.klass + (int)v17;
      v24[4] = (Il2CppClass *)v18;
      sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v22, v23);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v17 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v25 = svts->m_Items[v17];
      if ( !v25 )
        break;
      v26 = v17 + 1;
      v27 = v17 + 1;
      v25->fields.id = v17 + 1;
      if ( (int)(v17 + 1) > memberNum )
        v27 = (int)v17 % memberNum + 1;
      ++v17;
      v25->fields.initPos = v27;
      if ( memberNum * waveNum == v26 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1C3E7C0(v20, v21);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v28 = *p_waveSvts;
    v29 = 0;
    v30 = 1;
    while ( 1 )
    {
      v31 = (DeckWaveServantData_o *)sub_1C3E7B0(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v31, v32);
      if ( !v28 )
        goto LABEL_32;
      if ( v31 )
      {
        v20 = sub_1C3E6A0(v31, v28->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_33;
      }
      if ( v29 >= LODWORD(v28->max_length) )
        goto LABEL_31;
      v35 = &v28->obj.klass + (int)v29;
      v35[4] = (Il2CppClass *)v31;
      sub_1C3E508((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v31, v33, v34);
      v28 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v29 >= LODWORD(v28->max_length) )
        goto LABEL_31;
      v36 = v28->m_Items[v29];
      if ( !v36 )
        goto LABEL_32;
      v36->fields.wave = ++v29;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v30 += memberNum;
      if ( v29 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v36->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length_low = LODWORD(uniqueIds->max_length);
      v39 = 0;
      m_Items = uniqueIds->m_Items;
      while ( v39 < max_length_low )
      {
        m_Items[v39] = v30 + v39;
        if ( memberNum == ++v39 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1C3E7C8(v20, v21);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_41747688(DeckServant_o *this, int32_t sum, DeckServant_o *deckInfo, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  unsigned __int64 v15; // x23
  __int64 v16; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned int *v19; // x26
  DeckServantData_o *v20; // x22
  unsigned int *v21; // x0
  unsigned int *v22; // x26
  DeckServantData_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned int *v27; // x0
  struct DeckServantData_array *v28; // x8
  DeckServantData_o *v29; // x8
  __int64 v30; // x0

  if ( (byte_4C5686F & 1) == 0 )
  {
    sub_1C3E564(&DeckServantData___TypeInfo);
    sub_1C3E564(&DeckServantData_TypeInfo);
    byte_4C5686F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C3E60C(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( !deckInfo )
LABEL_24:
    sub_1C3E7C0(v11, v12);
  if ( sum >= 1 )
  {
    v15 = 0;
    v16 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length_low = LODWORD(svts->max_length), (__int64)v15 < (int)max_length_low) )
      {
        if ( v15 >= max_length_low )
          goto LABEL_25;
        v19 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v20 = svts->m_Items[v15];
        if ( v20 )
        {
          v11 = sub_1C3E6A0(v20, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
          if ( !v11 )
            goto LABEL_26;
        }
        if ( v15 >= v19[6] )
          goto LABEL_25;
        v21 = &v19[2 * v15];
        *((_QWORD *)v21 + 4) = v20;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 8), (int32_t)v20, v13, v14);
        ++v15;
      }
      else
      {
        v22 = (unsigned int *)p_fields->svts;
        v23 = (DeckServantData_o *)sub_1C3E7B0(DeckServantData_TypeInfo);
        DeckServantData___ctor(v23, v24);
        if ( !v22 )
          goto LABEL_24;
        if ( v23 )
        {
          v11 = sub_1C3E6A0(v23, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
          if ( !v11 )
          {
LABEL_26:
            v30 = sub_1C3E7E4(v11);
            sub_1C3E68C(v30, 0);
          }
        }
        if ( v15 >= v22[6] )
          goto LABEL_25;
        v27 = &v22[2 * v15];
        *((_QWORD *)v27 + 4) = v23;
        sub_1C3E508((CGThumbnailListItem_o *)(v27 + 8), (int32_t)v23, v25, v26);
        v28 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v15 >= LODWORD(v28->max_length) )
LABEL_25:
          sub_1C3E7C8(v11, v12);
        v29 = v28->m_Items[v15];
        if ( !v29 )
          goto LABEL_24;
        v29->fields.id = ++v15;
      }
    }
    while ( v15 != v16 );
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

  if ( (byte_4C56876 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56876 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_1C3E60C(long___TypeInfo, 1);
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
                   (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
                *(const MethodInfo_379D494 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
                         (const MethodInfo_379D1A4 *)Method_System_Collections_Generic_List_long__get_Item__);
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
            sub_1C3E7C8(Instance, v8);
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
            Instance = sub_1C3E60C(long___TypeInfo, 1);
            if ( !Instance )
              break;
            v8 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v25;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v10,
                         (System_Int64_array *)Instance,
                         (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
                      *(const MethodInfo_379D494 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
                               (const MethodInfo_379D1A4 *)Method_System_Collections_Generic_List_long__get_Item__);
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
          sub_1C3E7C0(Instance, v8);
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


System_Int64_array *DeckServant__GetEquipList(
        DeckServant_o *this,
        int32_t memberIdx,
        int32_t max,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  System_Int64_array *Instance; // x0
  Il2CppObject *v9; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  Il2CppObject *p_obj; // x19
  __int64 v13; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v15; // x24
  Il2CppObject *MasterData_object; // x21
  struct System_Int64_array *userSvtEquipIds; // x24
  unsigned __int64 v19; // x25
  int64_t *v20; // x27

  if ( (byte_4C56871 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56871 = 1;
  }
  if ( max <= 0 )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    max = v7->static_fields->SvtEquipMax;
  }
  Instance = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, (unsigned int)max);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_37;
  max_length = svts->max_length;
  p_obj = &Instance->obj;
  if ( max_length >= 1 )
  {
    v13 = 0;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_38;
      v15 = m_Items[v13];
      if ( !v15 )
        goto LABEL_37;
      if ( v15->fields.id == memberIdx + 1 )
        break;
      if ( (int)++v13 >= max_length )
        return (System_Int64_array *)p_obj;
    }
    if ( !v15->fields.isFollowerSvt && v15->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 1);
        if ( Instance )
        {
          v9 = &Instance->obj;
          if ( !LODWORD(Instance->max_length) )
LABEL_38:
            sub_1C3E7C8(Instance, v9);
          Instance->m_Items[0] = v15->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase_object__object__long___isEntityExistsFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   Instance,
                   (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
            {
              userSvtEquipIds = v15->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                if ( max >= 1 )
                {
                  v19 = 0;
                  v20 = userSvtEquipIds->m_Items;
                  while ( (__int64)v19 < SLODWORD(userSvtEquipIds->max_length) )
                  {
                    Instance = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 1);
                    if ( v19 >= LODWORD(userSvtEquipIds->max_length) )
                      goto LABEL_38;
                    v9 = &Instance->obj;
                    if ( !Instance )
                      goto LABEL_37;
                    if ( !LODWORD(Instance->max_length) )
                      goto LABEL_38;
                    Instance->m_Items[0] = v20[v19];
                    Instance = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                       Instance,
                                                       (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( v19 >= LODWORD(userSvtEquipIds->max_length) )
                        goto LABEL_38;
                      if ( !p_obj )
                        goto LABEL_37;
                      if ( v19 >= LODWORD(p_obj[1].monitor) )
                        goto LABEL_38;
                      *((_QWORD *)&p_obj[2].klass + v19) = v20[v19];
                    }
                    if ( max == ++v19 )
                      return (System_Int64_array *)p_obj;
                  }
                }
              }
            }
            return (System_Int64_array *)p_obj;
          }
        }
      }
LABEL_37:
      sub_1C3E7C0(Instance, v9);
    }
  }
  return (System_Int64_array *)p_obj;
}


System_Int64_array *DeckServant__GetEquipList_41748996(
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

  if ( (byte_4C56872 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C3E564(&long___TypeInfo);
    byte_4C56872 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = sub_1C3E60C(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 1);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v12 = isEntityExistsFromId;
  if ( !LODWORD(isEntityExistsFromId->max_length) )
LABEL_41:
    sub_1C3E7C8(isEntityExistsFromId, v12);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v9 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          v9,
          isEntityExistsFromId,
          (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__)
    && !isInterruption )
  {
    return (System_Int64_array *)v10;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1C3E7C0(isEntityExistsFromId, v12);
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
          isEntityExistsFromId = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 1);
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
                                                         (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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


System_Int64_array *DeckServant__GetGrandEquipList(DeckServant_o *this, int32_t memberIdx, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BalanceConfig_c *v6; // x0

  if ( (byte_4C56873 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C56873 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return DeckServant__GetEquipList(this, memberIdx, v6->static_fields->GrandSvtEquipMax, v3);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1C3E7C8(this, *(_QWORD *)&pos);
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
    sub_1C3E7C0(this, *(_QWORD *)&pos);
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
  if ( (byte_4C56870 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56870 = 1;
  }
  entity = 0;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1C3E7C0(this, *(_QWORD *)&menber);
  v6 = 0;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0;
    if ( (unsigned int)v6 >= max_length )
      sub_1C3E7C8(this, *(_QWORD *)&menber);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_33B5500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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

  if ( (byte_4C56874 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56874 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = (Il2CppObject *)sub_1C3E60C(long___TypeInfo, 1);
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
                                   (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
  Instance = (Il2CppObject *)sub_1C3E60C(long___TypeInfo, 1);
  if ( !Instance )
LABEL_32:
    sub_1C3E7C0(Instance, v6);
  v6 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1C3E7C8(Instance, v6);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v8,
           (System_Int64_array *)Instance,
           (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


bool DeckServant__IsEquip_41750232(
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

  if ( (byte_4C56875 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56875 = 1;
  }
  *equipedUserSvtId = 0;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = (Il2CppObject *)sub_1C3E60C(long___TypeInfo, 1);
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
                                   (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
  Instance = (Il2CppObject *)sub_1C3E60C(long___TypeInfo, 1);
  if ( !Instance )
LABEL_29:
    sub_1C3E7C0(Instance, v8);
  v8 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1C3E7C8(Instance, v8);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v11,
           (System_Int64_array *)Instance,
           (const MethodInfo_33B4A90 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
        sub_1C3E7C8(this, method);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3E7C0(this, method);
  }
}