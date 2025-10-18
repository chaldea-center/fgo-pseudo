void DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DeckServant___ctor_41697664(DeckServant_o *this, int32_t sum, int64_t userEquipId, const MethodInfo *method)
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppClass **v27; // x0
  DeckServantData_o *v28; // x8
  __int64 v29; // x0

  if ( (byte_4C42AC4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_1C37058(&DeckServantData___TypeInfo);
    sub_1C37058(&DeckServantData_TypeInfo);
    byte_4C42AC4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C37100(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v9, v10);
  v14 = Method_System_Array_Empty_DeckWaveServantData___;
  v15 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v15 )
  {
    sub_1C877C8(Method_System_Array_Empty_DeckWaveServantData___);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8776C(inited);
  v18 = *(struct DeckWaveServantData_array ***)(v17 + 184);
  v19 = *v18;
  this->fields.waveSvts = *v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v19, v11, v12);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v21 = 0;
    do
    {
      v22 = (DeckServantData_o *)sub_1C372A4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v22, v23);
      if ( !svts )
        goto LABEL_22;
      if ( v22 )
      {
        v24 = sub_1C37194(v22, svts->obj.klass->_1.element_class);
        if ( !v24 )
        {
          v29 = sub_1C372D8(0);
          sub_1C37180(v29, 0);
        }
      }
      if ( v21 >= LODWORD(svts->max_length) )
        goto LABEL_23;
      v27 = &svts->obj.klass + (int)v21;
      v27[4] = (Il2CppClass *)v22;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v22, v25, v26);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v21 >= LODWORD(svts->max_length) )
LABEL_23:
        sub_1C372BC(v24);
      v28 = svts->m_Items[v21];
      if ( !v28 )
LABEL_22:
        sub_1C372B4(v24);
      v28->fields.id = ++v21;
      v28->fields.initPos = v21;
    }
    while ( sum != v21 );
  }
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_41698320(
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppClass **v23; // x0
  DeckServantData_o *v24; // x8
  unsigned int v25; // w9
  int v26; // w10
  struct DeckWaveServantData_array *v27; // x29
  unsigned int v28; // w25
  int v29; // w28
  DeckWaveServantData_o *v30; // x24
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppClass **v34; // x0
  DeckWaveServantData_o *v35; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v38; // x8
  int32_t *m_Items; // x10
  __int64 v40; // x0

  if ( (byte_4C42AC5 & 1) == 0 )
  {
    sub_1C37058(&DeckServantData___TypeInfo);
    sub_1C37058(&DeckServantData_TypeInfo);
    sub_1C37058(&DeckWaveServantData___TypeInfo);
    sub_1C37058(&DeckWaveServantData_TypeInfo);
    byte_4C42AC5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (struct DeckServantData_array *)sub_1C37100(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v10, v11);
  v12 = (struct DeckWaveServantData_array *)sub_1C37100(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v12;
  p_waveSvts = &this->fields.waveSvts;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v12, v14, v15);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v17 = 0;
    while ( 1 )
    {
      v18 = (DeckServantData_o *)sub_1C372A4(DeckServantData_TypeInfo);
      DeckServantData___ctor(v18, v19);
      if ( !svts )
        break;
      if ( v18 )
      {
        v20 = sub_1C37194(v18, svts->obj.klass->_1.element_class);
        if ( !v20 )
        {
LABEL_33:
          v40 = sub_1C372D8(v20);
          sub_1C37180(v40, 0);
        }
      }
      if ( v17 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v23 = &svts->obj.klass + (int)v17;
      v23[4] = (Il2CppClass *)v18;
      sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v18, v21, v22);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v17 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v24 = svts->m_Items[v17];
      if ( !v24 )
        break;
      v25 = v17 + 1;
      v26 = v17 + 1;
      v24->fields.id = v17 + 1;
      if ( (int)(v17 + 1) > memberNum )
        v26 = (int)v17 % memberNum + 1;
      ++v17;
      v24->fields.initPos = v26;
      if ( memberNum * waveNum == v25 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1C372B4(v20);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v27 = *p_waveSvts;
    v28 = 0;
    v29 = 1;
    while ( 1 )
    {
      v30 = (DeckWaveServantData_o *)sub_1C372A4(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v30, v31);
      if ( !v27 )
        goto LABEL_32;
      if ( v30 )
      {
        v20 = sub_1C37194(v30, v27->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_33;
      }
      if ( v28 >= LODWORD(v27->max_length) )
        goto LABEL_31;
      v34 = &v27->obj.klass + (int)v28;
      v34[4] = (Il2CppClass *)v30;
      sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v30, v32, v33);
      v27 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v28 >= LODWORD(v27->max_length) )
        goto LABEL_31;
      v35 = v27->m_Items[v28];
      if ( !v35 )
        goto LABEL_32;
      v35->fields.wave = ++v28;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v29 += memberNum;
      if ( v28 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v35->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length_low = LODWORD(uniqueIds->max_length);
      v38 = 0;
      m_Items = uniqueIds->m_Items;
      while ( v38 < max_length_low )
      {
        m_Items[v38] = v29 + v38;
        if ( memberNum == ++v38 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1C372BC(v20);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_41699128(DeckServant_o *this, int32_t sum, DeckServant_o *deckInfo, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned __int64 v14; // x23
  __int64 v15; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned int *v18; // x26
  DeckServantData_o *v19; // x22
  unsigned int *v20; // x0
  unsigned int *v21; // x26
  DeckServantData_o *v22; // x22
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  unsigned int *v26; // x0
  struct DeckServantData_array *v27; // x8
  DeckServantData_o *v28; // x8
  __int64 v29; // x0

  if ( (byte_4C42AC6 & 1) == 0 )
  {
    sub_1C37058(&DeckServantData___TypeInfo);
    sub_1C37058(&DeckServantData_TypeInfo);
    byte_4C42AC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_1C37100(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( !deckInfo )
LABEL_24:
    sub_1C372B4(v11);
  if ( sum >= 1 )
  {
    v14 = 0;
    v15 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length_low = LODWORD(svts->max_length), (__int64)v14 < (int)max_length_low) )
      {
        if ( v14 >= max_length_low )
          goto LABEL_25;
        v18 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v19 = svts->m_Items[v14];
        if ( v19 )
        {
          v11 = sub_1C37194(v19, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
          if ( !v11 )
            goto LABEL_26;
        }
        if ( v14 >= v18[6] )
          goto LABEL_25;
        v20 = &v18[2 * v14];
        *((_QWORD *)v20 + 4) = v19;
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 8), (int32_t)v19, v12, v13);
        ++v14;
      }
      else
      {
        v21 = (unsigned int *)p_fields->svts;
        v22 = (DeckServantData_o *)sub_1C372A4(DeckServantData_TypeInfo);
        DeckServantData___ctor(v22, v23);
        if ( !v21 )
          goto LABEL_24;
        if ( v22 )
        {
          v11 = sub_1C37194(v22, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v11 )
          {
LABEL_26:
            v29 = sub_1C372D8(v11);
            sub_1C37180(v29, 0);
          }
        }
        if ( v14 >= v21[6] )
          goto LABEL_25;
        v26 = &v21[2 * v14];
        *((_QWORD *)v26 + 4) = v22;
        sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 8), (int32_t)v22, v24, v25);
        v27 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v14 >= LODWORD(v27->max_length) )
LABEL_25:
          sub_1C372BC(v11);
        v28 = v27->m_Items[v14];
        if ( !v28 )
          goto LABEL_24;
        v28->fields.id = ++v14;
      }
    }
    while ( v14 != v15 );
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
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  unsigned int v10; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v12; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  int32_t v15; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v17; // x10
  il2cpp_array_size_t v18; // x9
  DeckServantData_o *v19; // x10
  unsigned __int64 v20; // x26
  DeckServantData_o *v21; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 max_length_low; // x10
  int64_t v24; // x23
  int32_t v25; // w8
  int32_t v26; // w24
  struct System_Int64_array *v27; // x9
  _QWORD *v28; // x10

  if ( (byte_4C42ACD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42ACD = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v10 >= (int)max_length )
        return;
      if ( v10 >= max_length )
        goto LABEL_54;
      v12 = svts->m_Items[v10];
      if ( !v12 )
        goto LABEL_52;
      userSvtId = v12->fields.userSvtId;
      Instance = sub_1C37100(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_52;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v9 )
        goto LABEL_52;
      Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v9,
                   (System_Int64_array *)Instance,
                   (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
            v17 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_378B058 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
          v15 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v15,
                         (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v15 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v18 = svts->max_length;
        if ( v10 >= (unsigned int)v18 )
          goto LABEL_54;
        v19 = svts->m_Items[v10];
        if ( !v19 )
          goto LABEL_52;
        if ( v19->fields.userSvtEquipIds )
        {
          if ( v10 >= (unsigned int)v18 )
LABEL_54:
            sub_1C372BC(Instance);
          v20 = 0;
          while ( 1 )
          {
            v21 = svts->m_Items[v10];
            if ( !v21 )
              break;
            userSvtEquipIds = v21->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            max_length_low = LODWORD(userSvtEquipIds->max_length);
            if ( (__int64)v20 >= (int)max_length_low )
              goto LABEL_51;
            if ( v20 >= max_length_low )
              goto LABEL_54;
            v24 = userSvtEquipIds->m_Items[v20];
            Instance = sub_1C37100(long___TypeInfo, 1);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v24;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v9,
                         (System_Int64_array *)Instance,
                         (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v25 = equipCollectList->fields._size;
              if ( v25 < 1 )
              {
LABEL_43:
                if ( v24 >= 1 )
                {
                  v27 = equipCollectList->fields._items;
                  v28 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v27 )
                    break;
                  if ( (unsigned int)v25 >= LODWORD(v27->max_length) )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v24,
                      *(const MethodInfo_378B058 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v25 + 1;
                    v27->m_Items[v25] = v24;
                  }
                }
              }
              else
              {
                v26 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v26,
                               (const MethodInfo_378AD68 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v24 )
                    break;
                  v25 = equipCollectList->fields._size;
                  if ( ++v26 >= v25 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v20;
            if ( v10 >= LODWORD(svts->max_length) )
              goto LABEL_54;
          }
LABEL_52:
          sub_1C372B4(Instance);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_51:
      ++v10;
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
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  Il2CppObject *p_obj; // x19
  __int64 v12; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v14; // x24
  Il2CppObject *MasterData_object; // x21
  struct System_Int64_array *userSvtEquipIds; // x24
  unsigned __int64 v18; // x25
  int64_t *v19; // x27

  if ( (byte_4C42AC8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AC8 = 1;
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
  Instance = (System_Int64_array *)sub_1C37100(long___TypeInfo, (unsigned int)max);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_37;
  max_length = svts->max_length;
  p_obj = &Instance->obj;
  if ( max_length >= 1 )
  {
    v12 = 0;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_38;
      v14 = m_Items[v12];
      if ( !v14 )
        goto LABEL_37;
      if ( v14->fields.id == memberIdx + 1 )
        break;
      if ( (int)++v12 >= max_length )
        return (System_Int64_array *)p_obj;
    }
    if ( !v14->fields.isFollowerSvt && v14->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1C37100(long___TypeInfo, 1);
        if ( Instance )
        {
          if ( !LODWORD(Instance->max_length) )
LABEL_38:
            sub_1C372BC(Instance);
          Instance->m_Items[0] = v14->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase_object__object__long___isEntityExistsFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   Instance,
                   (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
            {
              userSvtEquipIds = v14->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                if ( max >= 1 )
                {
                  v18 = 0;
                  v19 = userSvtEquipIds->m_Items;
                  while ( (__int64)v18 < SLODWORD(userSvtEquipIds->max_length) )
                  {
                    Instance = (System_Int64_array *)sub_1C37100(long___TypeInfo, 1);
                    if ( v18 >= LODWORD(userSvtEquipIds->max_length) )
                      goto LABEL_38;
                    if ( !Instance )
                      goto LABEL_37;
                    if ( !LODWORD(Instance->max_length) )
                      goto LABEL_38;
                    Instance->m_Items[0] = v19[v18];
                    Instance = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                       Instance,
                                                       (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( v18 >= LODWORD(userSvtEquipIds->max_length) )
                        goto LABEL_38;
                      if ( !p_obj )
                        goto LABEL_37;
                      if ( v18 >= LODWORD(p_obj[1].monitor) )
                        goto LABEL_38;
                      *((_QWORD *)&p_obj[2].klass + v18) = v19[v18];
                    }
                    if ( max == ++v18 )
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
      sub_1C372B4(Instance);
    }
  }
  return (System_Int64_array *)p_obj;
}


System_Int64_array *DeckServant__GetEquipList_41700436(
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
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v14; // w10
  DeckServantData_o *v15; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v18; // x23
  int64_t *m_Items; // x27
  BalanceConfig_c *v20; // x0

  if ( (byte_4C42AC9 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    byte_4C42AC9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = sub_1C37100(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1C37100(long___TypeInfo, 1);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  if ( !LODWORD(isEntityExistsFromId->max_length) )
LABEL_41:
    sub_1C372BC(isEntityExistsFromId);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v9 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          v9,
          isEntityExistsFromId,
          (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__)
    && !isInterruption )
  {
    return (System_Int64_array *)v10;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1C372B4(isEntityExistsFromId);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( max_length == v14 )
        goto LABEL_41;
      v15 = svts->m_Items[v14];
      if ( !v15 )
        goto LABEL_40;
      if ( v15->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v14 )
        return (System_Int64_array *)v10;
    }
    if ( !v15->fields.isFollowerSvt )
    {
      userSvtEquipIds = v15->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v18 = 0;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v20 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v20 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v18 >= v20->static_fields->SvtEquipMax || (__int64)v18 >= SLODWORD(userSvtEquipIds->max_length) )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1C37100(long___TypeInfo, 1);
          if ( v18 >= LODWORD(userSvtEquipIds->max_length) )
            goto LABEL_41;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !LODWORD(isEntityExistsFromId->max_length) )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v18];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                         v9,
                                                         isEntityExistsFromId,
                                                         (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v18 >= LODWORD(userSvtEquipIds->max_length) )
              goto LABEL_41;
            if ( !v10 )
              goto LABEL_40;
            if ( v18 >= *(unsigned int *)(v10 + 24) )
              goto LABEL_41;
            *(_QWORD *)(v10 + 32 + 8 * v18) = m_Items[v18];
          }
          ++v18;
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

  if ( (byte_4C42ACA & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C42ACA = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return DeckServant__GetEquipList(this, memberIdx, v6->static_fields->GrandSvtEquipMax, v3);
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
        sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
  return 0;
}


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
  if ( (byte_4C42AC7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42AC7 = 1;
  }
  entity = 0;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1C372B4(this);
  v6 = 0;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0;
    if ( (unsigned int)v6 >= max_length )
      sub_1C372BC(this);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  unsigned int v8; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v10; // x26
  DeckServantData_o *v11; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v13; // w9
  __int64 v14; // x10
  int64_t *m_Items; // x11

  if ( (byte_4C42ACB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42ACB = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= (int)max_length )
      return 0;
    if ( v8 >= max_length )
      goto LABEL_33;
    v10 = svts->m_Items[v8];
    if ( !v10 )
      goto LABEL_32;
    if ( !v10->fields.isFollowerSvt && v10->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1C37100(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_32;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v10->fields.userSvtId;
      if ( !v7 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v7,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v8 >= LODWORD(svts->max_length) )
          goto LABEL_33;
        v11 = svts->m_Items[v8];
        if ( !v11 )
          goto LABEL_32;
        userSvtEquipIds = v11->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v13 = userSvtEquipIds->max_length;
          if ( v13 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v8;
    if ( !svts )
      goto LABEL_32;
  }
  v14 = 0;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_33;
    if ( m_Items[v14] == userSvtId )
      break;
    if ( (int)++v14 >= v13 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1C37100(long___TypeInfo, 1);
  if ( !Instance )
LABEL_32:
    sub_1C372B4(Instance);
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1C372BC(Instance);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v7,
           (System_Int64_array *)Instance,
           (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


bool DeckServant__IsEquip_41701672(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct DeckServantData_array *svts; // x8
  int max_length; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  unsigned int v11; // w25
  DeckServantData_o *v12; // x27
  struct System_Int64_array *userSvtEquipIds; // x8
  int v14; // w9
  int v15; // w10

  if ( (byte_4C42ACC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42ACC = 1;
  }
  *equipedUserSvtId = 0;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= LODWORD(svts->max_length) )
      goto LABEL_30;
    v12 = svts->m_Items[v11];
    if ( !v12 )
      goto LABEL_29;
    if ( !v12->fields.isFollowerSvt && v12->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1C37100(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_29;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v12->fields.userSvtId;
      if ( !v10 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v10,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
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
    if ( ++v11 == max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v15 = 0;
  while ( userSvtEquipIds->m_Items[v15] != userSvtId )
  {
    if ( v14 == ++v15 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v12->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1C37100(long___TypeInfo, 1);
  if ( !Instance )
LABEL_29:
    sub_1C372B4(Instance);
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1C372BC(Instance);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v10,
           (System_Int64_array *)Instance,
           (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
        sub_1C372BC(this);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C372B4(this);
  }
}