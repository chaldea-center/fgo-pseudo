void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_40715848(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct DeckServantData_array *v9; // x0
  DeckServant_Fields *p_fields; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  long double inited; // q0
  _QWORD *v16; // x23
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  struct DeckWaveServantData_array **v20; // x8
  struct DeckWaveServantData_array *v21; // x1
  struct DeckServantData_array *svts; // x26
  il2cpp_array_size_t v23; // w24
  DeckServantData_o *v24; // x23
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  Il2CppClass **v30; // x0
  DeckServantData_o *v31; // x8
  __int64 v32; // x0

  if ( (byte_4B01B5B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_1BC3008(&DeckServantData___TypeInfo, v7);
    sub_1BC3008(&DeckServantData_TypeInfo, v8);
    byte_4B01B5B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_1BC30B0(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v9;
  p_fields = &this->fields;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v11, v12);
  v16 = Method_System_Array_Empty_DeckWaveServantData___;
  v17 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v17 )
  {
    sub_1C134C8(Method_System_Array_Empty_DeckWaveServantData___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C1346C(inited);
  v20 = *(struct DeckWaveServantData_array ***)(v19 + 184);
  v21 = *v20;
  this->fields.waveSvts = *v20;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v21, v13, v14);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v23 = 0;
    do
    {
      v24 = (DeckServantData_o *)sub_1BC3254(DeckServantData_TypeInfo);
      DeckServantData___ctor(v24, v25);
      if ( !svts )
        goto LABEL_22;
      if ( v24 )
      {
        v26 = sub_1BC3144(v24, svts->obj.klass->_1.element_class);
        if ( !v26 )
        {
          v32 = sub_1BC3288(0LL);
          sub_1BC3130(v32, 0LL);
        }
      }
      if ( v23 >= svts->max_length )
        goto LABEL_23;
      v30 = &svts->obj.klass + (int)v23;
      v30[4] = (Il2CppClass *)v24;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v28, v29);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v23 >= svts->max_length )
LABEL_23:
        sub_1BC326C(v26, v27, v28);
      v31 = svts->m_Items[v23];
      if ( !v31 )
LABEL_22:
        sub_1BC3264(v26, v27);
      v31->fields.id = ++v23;
      v31->fields.initPos = v23;
    }
    while ( sum != v23 );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_40716504(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct DeckWaveServantData_array *v15; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct DeckServantData_array *svts; // x29
  il2cpp_array_size_t v20; // w28
  DeckServantData_o *v21; // x26
  const MethodInfo *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  Il2CppClass **v27; // x0
  DeckServantData_o *v28; // x8
  il2cpp_array_size_t v29; // w9
  int v30; // w10
  struct DeckWaveServantData_array *v31; // x29
  il2cpp_array_size_t v32; // w25
  int v33; // w28
  DeckWaveServantData_o *v34; // x24
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  Il2CppClass **v37; // x0
  DeckWaveServantData_o *v38; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v41; // x8
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B01B5C & 1) == 0 )
  {
    sub_1BC3008(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_1BC3008(&DeckServantData_TypeInfo, v8);
    sub_1BC3008(&DeckWaveServantData___TypeInfo, v9);
    sub_1BC3008(&DeckWaveServantData_TypeInfo, v10);
    byte_4B01B5C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_1BC30B0(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v11;
  p_fields = &this->fields;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v13, v14);
  v15 = (struct DeckWaveServantData_array *)sub_1BC30B0(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v15;
  p_waveSvts = &this->fields.waveSvts;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.waveSvts, (int32_t)v15, v17, v18);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v20 = 0;
    while ( 1 )
    {
      v21 = (DeckServantData_o *)sub_1BC3254(DeckServantData_TypeInfo);
      DeckServantData___ctor(v21, v22);
      if ( !svts )
        break;
      if ( v21 )
      {
        v23 = sub_1BC3144(v21, svts->obj.klass->_1.element_class);
        if ( !v23 )
        {
LABEL_33:
          v43 = sub_1BC3288(v23);
          sub_1BC3130(v43, 0LL);
        }
      }
      if ( v20 >= svts->max_length )
        goto LABEL_31;
      v27 = &svts->obj.klass + (int)v20;
      v27[4] = (Il2CppClass *)v21;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v21, v25, v26);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v20 >= svts->max_length )
        goto LABEL_31;
      v28 = svts->m_Items[v20];
      if ( !v28 )
        break;
      v29 = v20 + 1;
      v30 = v20 + 1;
      v28->fields.id = v20 + 1;
      if ( (int)(v20 + 1) > memberNum )
        v30 = (int)v20 % memberNum + 1;
      ++v20;
      v28->fields.initPos = v30;
      if ( memberNum * waveNum == v29 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1BC3264(v23, v24);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v31 = *p_waveSvts;
    v32 = 0;
    v33 = 1;
    while ( 1 )
    {
      v34 = (DeckWaveServantData_o *)sub_1BC3254(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v34, v35);
      if ( !v31 )
        goto LABEL_32;
      if ( v34 )
      {
        v23 = sub_1BC3144(v34, v31->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_33;
      }
      if ( v32 >= v31->max_length )
        goto LABEL_31;
      v37 = &v31->obj.klass + (int)v32;
      v37[4] = (Il2CppClass *)v34;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v34, v25, v36);
      v31 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v32 >= v31->max_length )
        goto LABEL_31;
      v38 = v31->m_Items[v32];
      if ( !v38 )
        goto LABEL_32;
      v38->fields.wave = ++v32;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v33 += memberNum;
      if ( v32 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v38->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length = uniqueIds->max_length;
      v41 = 0LL;
      v42 = &uniqueIds->m_Items[1];
      while ( v41 < max_length )
      {
        v42[v41] = v33 + v41;
        if ( memberNum == ++v41 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1BC326C(v23, v24, v25);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_40717312(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  unsigned __int64 v16; // x23
  __int64 v17; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v20; // x26
  DeckServantData_o *v21; // x22
  unsigned int *v22; // x0
  unsigned int *v23; // x26
  DeckServantData_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  unsigned int *v27; // x0
  struct DeckServantData_array *v28; // x8
  DeckServantData_o *v29; // x8
  __int64 v30; // x0

  if ( (byte_4B01B5D & 1) == 0 )
  {
    sub_1BC3008(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_1BC3008(&DeckServantData_TypeInfo, v7);
    byte_4B01B5D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_1BC30B0(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v8, v10, v11);
  if ( !deckInfo )
LABEL_24:
    sub_1BC3264(v12, v13);
  if ( sum >= 1 )
  {
    v16 = 0LL;
    v17 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v16 < (int)max_length) )
      {
        if ( v16 >= max_length )
          goto LABEL_25;
        v20 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v21 = svts->m_Items[v16];
        if ( v21 )
        {
          v12 = sub_1BC3144(v21, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !v12 )
            goto LABEL_26;
        }
        if ( v16 >= v20[6] )
          goto LABEL_25;
        v22 = &v20[2 * v16];
        *((_QWORD *)v22 + 4) = v21;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 8), (int32_t)v21, v14, v15);
        ++v16;
      }
      else
      {
        v23 = (unsigned int *)p_fields->svts;
        v24 = (DeckServantData_o *)sub_1BC3254(DeckServantData_TypeInfo);
        DeckServantData___ctor(v24, v25);
        if ( !v23 )
          goto LABEL_24;
        if ( v24 )
        {
          v12 = sub_1BC3144(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !v12 )
          {
LABEL_26:
            v30 = sub_1BC3288(v12);
            sub_1BC3130(v30, 0LL);
          }
        }
        if ( v16 >= v23[6] )
          goto LABEL_25;
        v27 = &v23[2 * v16];
        *((_QWORD *)v27 + 4) = v24;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 8), (int32_t)v24, v14, v26);
        v28 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v16 >= v28->max_length )
LABEL_25:
          sub_1BC326C(v12, v13, v14);
        v29 = v28->m_Items[v16];
        if ( !v29 )
          goto LABEL_24;
        v29->fields.id = ++v16;
      }
    }
    while ( v16 != v17 );
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
  __int64 v12; // x1
  __int64 Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  unsigned int v18; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v20; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  int32_t v23; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v25; // x10
  __int64 v26; // x9
  DeckServantData_o *v27; // x10
  unsigned __int64 v28; // x26
  DeckServantData_o *v29; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v31; // x10
  int64_t v32; // x23
  int32_t v33; // w8
  int32_t v34; // w24
  struct System_Int64_array *v35; // x9
  _QWORD *v36; // x10

  if ( (byte_4B01B64 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v7);
    sub_1BC3008(&long___TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Item__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B01B64 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v18 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v18 >= (int)max_length )
        return;
      if ( v18 >= max_length )
        goto LABEL_54;
      v20 = svts->m_Items[v18];
      if ( !v20 )
        goto LABEL_52;
      userSvtId = v20->fields.userSvtId;
      Instance = sub_1BC30B0(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_52;
      v14 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v17 )
        goto LABEL_52;
      Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v17,
                   (System_Int64_array *)Instance,
                   (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
            v25 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_3688E74 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
          v23 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v23,
                         (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v23 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v26 = *(_QWORD *)&svts->max_length;
        if ( v18 >= (unsigned int)v26 )
          goto LABEL_54;
        v27 = svts->m_Items[v18];
        if ( !v27 )
          goto LABEL_52;
        if ( v27->fields.userSvtEquipIds )
        {
          if ( v18 >= (unsigned int)v26 )
LABEL_54:
            sub_1BC326C(Instance, v14, v15);
          v28 = 0LL;
          while ( 1 )
          {
            v29 = svts->m_Items[v18];
            if ( !v29 )
              break;
            userSvtEquipIds = v29->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v31 = userSvtEquipIds->max_length;
            if ( (__int64)v28 >= (int)v31 )
              goto LABEL_51;
            if ( v28 >= v31 )
              goto LABEL_54;
            v32 = userSvtEquipIds->m_Items[v28];
            Instance = sub_1BC30B0(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v14 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v32;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v17,
                         (System_Int64_array *)Instance,
                         (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v33 = equipCollectList->fields._size;
              if ( v33 < 1 )
              {
LABEL_43:
                if ( v32 >= 1 )
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
                      v32,
                      *(const MethodInfo_3688E74 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v33 + 1;
                    v35->m_Items[v33] = v32;
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
                               (const MethodInfo_3688B84 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v32 )
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
            ++v28;
            if ( v18 >= svts->max_length )
              goto LABEL_54;
          }
LABEL_52:
          sub_1BC3264(Instance, v14);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_51:
      ++v18;
      if ( !svts )
        goto LABEL_52;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetEquipList(
        DeckServant_o *this,
        int32_t memberIdx,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  System_Int64_array *Instance; // x0
  System_Int64_array *v13; // x1
  __int64 v14; // x2
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v17; // x19
  __int64 v18; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v20; // x24
  Il2CppObject *MasterData_object; // x21
  struct System_Int64_array *userSvtEquipIds; // x24
  unsigned __int64 v24; // x25
  int64_t *v25; // x27

  if ( (byte_4B01B5F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&memberIdx);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v8);
    sub_1BC3008(&long___TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B01B5F = 1;
  }
  if ( max <= 0 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    max = v11->static_fields->SvtEquipMax;
  }
  Instance = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, (unsigned int)max);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_37;
  max_length = svts->max_length;
  v17 = Instance;
  if ( max_length >= 1 )
  {
    v18 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= max_length )
        goto LABEL_38;
      v20 = m_Items[v18];
      if ( !v20 )
        goto LABEL_37;
      if ( v20->fields.id == memberIdx + 1 )
        break;
      if ( (int)++v18 >= max_length )
        return v17;
    }
    if ( !v20->fields.isFollowerSvt && v20->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v13 = Instance;
          if ( !Instance->max_length )
LABEL_38:
            sub_1BC326C(Instance, v13, v14);
          Instance->m_Items[0] = v20->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase_object__object__long___isEntityExistsFromId(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   Instance,
                   (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
            {
              userSvtEquipIds = v20->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                if ( max >= 1 )
                {
                  v24 = 0LL;
                  v25 = userSvtEquipIds->m_Items;
                  while ( (__int64)v24 < (int)userSvtEquipIds->max_length )
                  {
                    Instance = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, 1LL);
                    if ( v24 >= userSvtEquipIds->max_length )
                      goto LABEL_38;
                    v13 = Instance;
                    if ( !Instance )
                      goto LABEL_37;
                    if ( !Instance->max_length )
                      goto LABEL_38;
                    Instance->m_Items[0] = v25[v24];
                    Instance = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                       Instance,
                                                       (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( v24 >= userSvtEquipIds->max_length )
                        goto LABEL_38;
                      if ( !v17 )
                        goto LABEL_37;
                      if ( v24 >= v17->max_length )
                        goto LABEL_38;
                      v17->m_Items[v24] = v25[v24];
                    }
                    if ( max == ++v24 )
                      return v17;
                  }
                }
              }
            }
            return v17;
          }
        }
      }
LABEL_37:
      sub_1BC3264(Instance, v13);
    }
  }
  return v17;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_40718620(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  BalanceConfig_c *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  System_Int64_array *v15; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v17; // x1
  __int64 v18; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v21; // w10
  DeckServantData_o *v22; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v25; // x23
  int64_t *m_Items; // x27
  BalanceConfig_c *v27; // x0

  if ( (byte_4B01B60 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userSvtId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v10);
    sub_1BC3008(&long___TypeInfo, v11);
    byte_4B01B60 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = BalanceConfig_TypeInfo;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v15 = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, (unsigned int)v13->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v17 = isEntityExistsFromId;
  if ( !isEntityExistsFromId->max_length )
LABEL_41:
    sub_1BC326C(isEntityExistsFromId, v17, v18);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v14 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          v14,
          isEntityExistsFromId,
          (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__)
    && !isInterruption )
  {
    return v15;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1BC3264(isEntityExistsFromId, v17);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( max_length == v21 )
        goto LABEL_41;
      v22 = svts->m_Items[v21];
      if ( !v22 )
        goto LABEL_40;
      if ( v22->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v21 )
        return v15;
    }
    if ( !v22->fields.isFollowerSvt )
    {
      userSvtEquipIds = v22->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v25 = 0LL;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v27 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v27 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v25 >= v27->static_fields->SvtEquipMax || (__int64)v25 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, 1LL);
          if ( v25 >= userSvtEquipIds->max_length )
            goto LABEL_41;
          v17 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !isEntityExistsFromId->max_length )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v25];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                         v14,
                                                         isEntityExistsFromId,
                                                         (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v25 >= userSvtEquipIds->max_length )
              goto LABEL_41;
            if ( !v15 )
              goto LABEL_40;
            if ( v25 >= v15->max_length )
              goto LABEL_41;
            v15->m_Items[v25] = m_Items[v25];
          }
          ++v25;
        }
      }
    }
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetGrandEquipList(
        DeckServant_o *this,
        int32_t memberIdx,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BalanceConfig_c *v6; // x0

  if ( (byte_4B01B61 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&memberIdx);
    byte_4B01B61 = 1;
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
        sub_1BC326C(this, *(_QWORD *)&pos, method);
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
    sub_1BC3264(this, pos);
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
  if ( (byte_4B01B5E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B01B5E = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1BC3264(this, *(_QWORD *)&menber);
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
      sub_1BC326C(this, *(_QWORD *)&menber, method);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v9; // x1
  __int64 v10; // x2
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  il2cpp_array_size_t v13; // w24
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v15; // x26
  DeckServantData_o *v16; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v18; // w9
  __int64 v19; // x10
  int64_t *m_Items; // x11

  if ( (byte_4B01B62 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v5);
    sub_1BC3008(&long___TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B01B62 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
      Instance = (Il2CppObject *)sub_1BC30B0(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v9 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v15->fields.userSvtId;
      if ( !v12 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v12,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v13 >= svts->max_length )
          goto LABEL_33;
        v16 = svts->m_Items[v13];
        if ( !v16 )
          goto LABEL_32;
        userSvtEquipIds = v16->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v18 = userSvtEquipIds->max_length;
          if ( v18 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v13;
    if ( !svts )
      goto LABEL_32;
  }
  v19 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v19 >= v18 )
      goto LABEL_33;
    if ( m_Items[v19] == userSvtId )
      break;
    if ( (int)++v19 >= v18 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1BC30B0(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_1BC3264(Instance, v9);
  v9 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1BC326C(Instance, v9, v10);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v12,
           (System_Int64_array *)Instance,
           (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


bool __fastcall DeckServant__IsEquip_40719856(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v11; // x1
  __int64 v12; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  il2cpp_array_size_t v16; // w25
  DeckServantData_o *v17; // x27
  struct System_Int64_array *userSvtEquipIds; // x8
  int v19; // w9
  int v20; // w10

  if ( (byte_4B01B63 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v7);
    sub_1BC3008(&long___TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B01B63 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
      Instance = (Il2CppObject *)sub_1BC30B0(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v11 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v17->fields.userSvtId;
      if ( !v15 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v15,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
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
    if ( ++v16 == max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v20 = 0;
  while ( userSvtEquipIds->m_Items[v20] != userSvtId )
  {
    if ( v19 == ++v20 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v17->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1BC30B0(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_1BC3264(Instance, v11);
  v11 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1BC326C(Instance, v11, v12);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(
           v15,
           (System_Int64_array *)Instance,
           (const MethodInfo_32B0BA8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
}


void __fastcall DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v5; // w10
  DeckServantData_o *v6; // x11

  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_9;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1BC326C(this, method, v2);
      v6 = svts->m_Items[v5];
      if ( !v6 )
        break;
      v6->fields.initPos = ++v5;
      if ( v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BC3264(this, method);
  }
}