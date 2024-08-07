void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_38558956(
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  _QWORD *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  struct DeckWaveServantData_array **v19; // x8
  struct DeckWaveServantData_array *v20; // x1
  struct DeckServantData_array *svts; // x26
  il2cpp_array_size_t v22; // w24
  DeckServantData_o *v23; // x23
  const MethodInfo *v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppClass **v29; // x0
  DeckServantData_o *v30; // x8
  __int64 v31; // x0

  if ( (byte_49FE6B9 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_1B64A00(&DeckServantData___TypeInfo, v7);
    sub_1B64A00(&DeckServantData_TypeInfo, v8);
    byte_49FE6B9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_1B64AA8(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v9;
  p_fields = &this->fields;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v11, v12);
  v15 = Method_System_Array_Empty_DeckWaveServantData___;
  v16 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v16 )
  {
    sub_1BB6938(Method_System_Array_Empty_DeckWaveServantData___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB68DC(v17);
  if ( !*(_DWORD *)(v17 + 224) )
    j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB68DC(v18);
  v19 = *(struct DeckWaveServantData_array ***)(v18 + 184);
  v20 = *v19;
  this->fields.waveSvts = *v19;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.waveSvts, (int32_t)v20, v13, v14);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v22 = 0;
    do
    {
      v23 = (DeckServantData_o *)sub_1B64C4C(DeckServantData_TypeInfo);
      DeckServantData___ctor(v23, v24);
      if ( !svts )
        goto LABEL_22;
      if ( v23 )
      {
        v25 = sub_1B64B3C(v23, svts->obj.klass->_1.element_class);
        if ( !v25 )
        {
          v31 = sub_1B64C80(0LL);
          sub_1B64B28(v31, 0LL);
        }
      }
      if ( v22 >= svts->max_length )
        goto LABEL_23;
      v29 = &svts->obj.klass + (int)v22;
      v29[4] = (Il2CppClass *)v23;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v23, v27, v28);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v22 >= svts->max_length )
LABEL_23:
        sub_1B64C64(v25, v26);
      v30 = svts->m_Items[v22];
      if ( !v30 )
LABEL_22:
        sub_1B64C5C(v25, v26);
      v30->fields.id = ++v22;
      v30->fields.initPos = v22;
    }
    while ( sum != v22 );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_38559612(
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
  int32_t v14; // w3
  struct DeckWaveServantData_array *v15; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  struct DeckServantData_array *svts; // x29
  il2cpp_array_size_t v20; // w28
  DeckServantData_o *v21; // x26
  const MethodInfo *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppClass **v27; // x0
  DeckServantData_o *v28; // x8
  il2cpp_array_size_t v29; // w9
  int v30; // w10
  struct DeckWaveServantData_array *v31; // x29
  il2cpp_array_size_t v32; // w25
  int v33; // w28
  DeckWaveServantData_o *v34; // x24
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppClass **v38; // x0
  DeckWaveServantData_o *v39; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v42; // x8
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_49FE6BA & 1) == 0 )
  {
    sub_1B64A00(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_1B64A00(&DeckServantData_TypeInfo, v8);
    sub_1B64A00(&DeckWaveServantData___TypeInfo, v9);
    sub_1B64A00(&DeckWaveServantData_TypeInfo, v10);
    byte_49FE6BA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_1B64AA8(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v11;
  p_fields = &this->fields;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v13, v14);
  v15 = (struct DeckWaveServantData_array *)sub_1B64AA8(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v15;
  p_waveSvts = &this->fields.waveSvts;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.waveSvts, (int32_t)v15, v17, v18);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v20 = 0;
    while ( 1 )
    {
      v21 = (DeckServantData_o *)sub_1B64C4C(DeckServantData_TypeInfo);
      DeckServantData___ctor(v21, v22);
      if ( !svts )
        break;
      if ( v21 )
      {
        v23 = sub_1B64B3C(v21, svts->obj.klass->_1.element_class);
        if ( !v23 )
        {
LABEL_33:
          v44 = sub_1B64C80(v23);
          sub_1B64B28(v44, 0LL);
        }
      }
      if ( v20 >= svts->max_length )
        goto LABEL_31;
      v27 = &svts->obj.klass + (int)v20;
      v27[4] = (Il2CppClass *)v21;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v25, v26);
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
    sub_1B64C5C(v23, v24);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v31 = *p_waveSvts;
    v32 = 0;
    v33 = 1;
    while ( 1 )
    {
      v34 = (DeckWaveServantData_o *)sub_1B64C4C(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v34, v35);
      if ( !v31 )
        goto LABEL_32;
      if ( v34 )
      {
        v23 = sub_1B64B3C(v34, v31->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_33;
      }
      if ( v32 >= v31->max_length )
        goto LABEL_31;
      v38 = &v31->obj.klass + (int)v32;
      v38[4] = (Il2CppClass *)v34;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v34, v36, v37);
      v31 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v32 >= v31->max_length )
        goto LABEL_31;
      v39 = v31->m_Items[v32];
      if ( !v39 )
        goto LABEL_32;
      v39->fields.wave = ++v32;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v33 += memberNum;
      if ( v32 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v39->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length = uniqueIds->max_length;
      v42 = 0LL;
      v43 = &uniqueIds->m_Items[1];
      while ( v42 < max_length )
      {
        v43[v42] = v33 + v42;
        if ( memberNum == ++v42 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1B64C64(v23, v24);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_38560420(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
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
  int32_t v26; // w2
  int32_t v27; // w3
  unsigned int *v28; // x0
  struct DeckServantData_array *v29; // x8
  DeckServantData_o *v30; // x8
  __int64 v31; // x0

  if ( (byte_49FE6BB & 1) == 0 )
  {
    sub_1B64A00(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_1B64A00(&DeckServantData_TypeInfo, v7);
    byte_49FE6BB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_1B64AA8(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v10, v11);
  if ( !deckInfo )
LABEL_24:
    sub_1B64C5C(v12, v13);
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
          v12 = sub_1B64B3C(v21, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !v12 )
            goto LABEL_26;
        }
        if ( v16 >= v20[6] )
          goto LABEL_25;
        v22 = &v20[2 * v16];
        *((_QWORD *)v22 + 4) = v21;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 8), (int32_t)v21, v14, v15);
        ++v16;
      }
      else
      {
        v23 = (unsigned int *)p_fields->svts;
        v24 = (DeckServantData_o *)sub_1B64C4C(DeckServantData_TypeInfo);
        DeckServantData___ctor(v24, v25);
        if ( !v23 )
          goto LABEL_24;
        if ( v24 )
        {
          v12 = sub_1B64B3C(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !v12 )
          {
LABEL_26:
            v31 = sub_1B64C80(v12);
            sub_1B64B28(v31, 0LL);
          }
        }
        if ( v16 >= v23[6] )
          goto LABEL_25;
        v28 = &v23[2 * v16];
        *((_QWORD *)v28 + 4) = v24;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 8), (int32_t)v24, v26, v27);
        v29 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v16 >= v29->max_length )
LABEL_25:
          sub_1B64C64(v12, v13);
        v30 = v29->m_Items[v16];
        if ( !v30 )
          goto LABEL_24;
        v30->fields.id = ++v16;
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

  if ( (byte_49FE6C1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_1B64A00(&long___TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FE6C1 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_1B64AA8(long___TypeInfo, 1LL);
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
                *(const MethodInfo_3497968 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
                         (const MethodInfo_3497678 *)Method_System_Collections_Generic_List_long__get_Item__);
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
            sub_1B64C64(Instance, v13);
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
            Instance = sub_1B64AA8(long___TypeInfo, 1LL);
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
                      *(const MethodInfo_3497968 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
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
                               (const MethodInfo_3497678 *)Method_System_Collections_Generic_List_long__get_Item__);
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
          sub_1B64C5C(Instance, v13);
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

  if ( (byte_49FE6BD & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B64A00(&long___TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FE6BD = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Instance = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
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
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v10 = Instance;
          if ( !Instance->max_length )
LABEL_37:
            sub_1B64C64(Instance, v10);
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
                  Instance = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, 1LL);
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
      sub_1B64C5C(Instance, v10);
    }
  }
  return v13;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_38561900(
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

  if ( (byte_49FE6BE & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, userSvtId);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B64A00(&DataManager_TypeInfo, v9);
    sub_1B64A00(&long___TypeInfo, v10);
    byte_49FE6BE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantMaster___);
  v12 = BalanceConfig_TypeInfo;
  v13 = (DataMasterBase_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v14 = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, (unsigned int)v12->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v16 = isEntityExistsFromId;
  if ( !isEntityExistsFromId->max_length )
LABEL_41:
    sub_1B64C64(isEntityExistsFromId, v16);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v13 )
    goto LABEL_40;
  if ( !DataMasterBase__isEntityExistsFromId(v13, isEntityExistsFromId, v17) && !isInterruption )
    return v14;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1B64C5C(isEntityExistsFromId, v16);
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
          isEntityExistsFromId = (System_Int64_array *)sub_1B64AA8(long___TypeInfo, 1LL);
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
  if ( (byte_49FE6BC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FE6BC = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1B64C5C(this, *(_QWORD *)&menber);
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
      sub_1B64C64(this, *(_QWORD *)&menber);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_30D6998 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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

  if ( (byte_49FE6BF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B64A00(&long___TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FE6BF = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = (Il2CppObject *)sub_1B64AA8(long___TypeInfo, 1LL);
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
  Instance = (Il2CppObject *)sub_1B64AA8(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_1B64C5C(Instance, v8);
  v8 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1B64C64(Instance, v8);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, v21);
}


bool __fastcall DeckServant__IsEquip_38562948(
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

  if ( (byte_49FE6C0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B64A00(&long___TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FE6C0 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = (Il2CppObject *)sub_1B64AA8(long___TypeInfo, 1LL);
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
  Instance = (Il2CppObject *)sub_1B64AA8(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_1B64C5C(Instance, v10);
  v10 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1B64C64(Instance, v10);
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
        sub_1B64C64(this, method);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64C5C(this, method);
  }
}