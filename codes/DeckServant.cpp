void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DeckServant___ctor_38870860(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  _QWORD *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  struct DeckWaveServantData_array **v17; // x8
  struct DeckWaveServantData_array *v18; // x1
  struct DeckServantData_array *svts; // x26
  il2cpp_array_size_t v20; // w24
  DeckServantData_o *v21; // x23
  const MethodInfo *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppClass **v27; // x0
  DeckServantData_o *v28; // x8
  __int64 v29; // x0

  if ( (byte_4A5ACE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_1B885B0(&DeckServantData___TypeInfo);
    sub_1B885B0(&DeckServantData_TypeInfo);
    byte_4A5ACE2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (struct DeckServantData_array *)sub_1B88658(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v9, v10);
  v13 = Method_System_Array_Empty_DeckWaveServantData___;
  v14 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v14 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_DeckWaveServantData___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BDA48C(v15);
  if ( !*(_DWORD *)(v15 + 224) )
    j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  v17 = *(struct DeckWaveServantData_array ***)(v16 + 184);
  v18 = *v17;
  this->fields.waveSvts = *v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveSvts, (int32_t)v18, v11, v12);
  if ( sum >= 1 )
  {
    svts = p_fields->svts;
    v20 = 0;
    do
    {
      v21 = (DeckServantData_o *)sub_1B887FC(DeckServantData_TypeInfo);
      DeckServantData___ctor(v21, v22);
      if ( !svts )
        goto LABEL_22;
      if ( v21 )
      {
        v23 = sub_1B886EC(v21, svts->obj.klass->_1.element_class);
        if ( !v23 )
        {
          v29 = sub_1B88830(0LL);
          sub_1B886D8(v29, 0LL);
        }
      }
      if ( v20 >= svts->max_length )
        goto LABEL_23;
      v27 = &svts->obj.klass + (int)v20;
      v27[4] = (Il2CppClass *)v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v25, v26);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v20 >= svts->max_length )
LABEL_23:
        sub_1B88814(v23, v24);
      v28 = svts->m_Items[v20];
      if ( !v28 )
LABEL_22:
        sub_1B8880C(v23, v24);
      v28->fields.id = ++v20;
      v28->fields.initPos = v20;
    }
    while ( sum != v20 );
  }
  this->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_38871516(
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
  struct DeckWaveServantData_array *v12; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  struct DeckServantData_array *svts; // x29
  il2cpp_array_size_t v17; // w28
  DeckServantData_o *v18; // x26
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppClass **v24; // x0
  DeckServantData_o *v25; // x8
  il2cpp_array_size_t v26; // w9
  int v27; // w10
  struct DeckWaveServantData_array *v28; // x29
  il2cpp_array_size_t v29; // w25
  int v30; // w28
  DeckWaveServantData_o *v31; // x24
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppClass **v35; // x0
  DeckWaveServantData_o *v36; // x8
  struct System_Int32_array *uniqueIds; // x10
  unsigned __int64 max_length; // x9
  unsigned __int64 v39; // x8
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A5ACE3 & 1) == 0 )
  {
    sub_1B885B0(&DeckServantData___TypeInfo);
    sub_1B885B0(&DeckServantData_TypeInfo);
    sub_1B885B0(&DeckWaveServantData___TypeInfo);
    sub_1B885B0(&DeckWaveServantData_TypeInfo);
    byte_4A5ACE3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_1B88658(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v8, v10, v11);
  v12 = (struct DeckWaveServantData_array *)sub_1B88658(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v12;
  p_waveSvts = &this->fields.waveSvts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveSvts, (int32_t)v12, v14, v15);
  if ( memberNum * waveNum >= 1 )
  {
    svts = p_fields->svts;
    v17 = 0;
    while ( 1 )
    {
      v18 = (DeckServantData_o *)sub_1B887FC(DeckServantData_TypeInfo);
      DeckServantData___ctor(v18, v19);
      if ( !svts )
        break;
      if ( v18 )
      {
        v20 = sub_1B886EC(v18, svts->obj.klass->_1.element_class);
        if ( !v20 )
        {
LABEL_33:
          v41 = sub_1B88830(v20);
          sub_1B886D8(v41, 0LL);
        }
      }
      if ( v17 >= svts->max_length )
        goto LABEL_31;
      v24 = &svts->obj.klass + (int)v17;
      v24[4] = (Il2CppClass *)v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v18, v22, v23);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v17 >= svts->max_length )
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
    sub_1B8880C(v20, v21);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v28 = *p_waveSvts;
    v29 = 0;
    v30 = 1;
    while ( 1 )
    {
      v31 = (DeckWaveServantData_o *)sub_1B887FC(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v31, v32);
      if ( !v28 )
        goto LABEL_32;
      if ( v31 )
      {
        v20 = sub_1B886EC(v31, v28->obj.klass->_1.element_class);
        if ( !v20 )
          goto LABEL_33;
      }
      if ( v29 >= v28->max_length )
        goto LABEL_31;
      v35 = &v28->obj.klass + (int)v29;
      v35[4] = (Il2CppClass *)v31;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v31, v33, v34);
      v28 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v29 >= v28->max_length )
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
      max_length = uniqueIds->max_length;
      v39 = 0LL;
      v40 = &uniqueIds->m_Items[1];
      while ( v39 < max_length )
      {
        v40[v39] = v30 + v39;
        if ( memberNum == ++v39 )
          goto LABEL_29;
      }
LABEL_31:
      sub_1B88814(v20, v21);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_38872324(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  unsigned __int64 v15; // x23
  __int64 v16; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v19; // x26
  DeckServantData_o *v20; // x22
  unsigned int *v21; // x0
  unsigned int *v22; // x26
  DeckServantData_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned int *v27; // x0
  struct DeckServantData_array *v28; // x8
  DeckServantData_o *v29; // x8
  __int64 v30; // x0

  if ( (byte_4A5ACE4 & 1) == 0 )
  {
    sub_1B885B0(&DeckServantData___TypeInfo);
    sub_1B885B0(&DeckServantData_TypeInfo);
    byte_4A5ACE4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (struct DeckServantData_array *)sub_1B88658(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v9, v10);
  if ( !deckInfo )
LABEL_24:
    sub_1B8880C(v11, v12);
  if ( sum >= 1 )
  {
    v15 = 0LL;
    v16 = sum & (unsigned int)~(sum >> 31);
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v15 < (int)max_length) )
      {
        if ( v15 >= max_length )
          goto LABEL_25;
        v19 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v20 = svts->m_Items[v15];
        if ( v20 )
        {
          v11 = sub_1B886EC(v20, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
          if ( !v11 )
            goto LABEL_26;
        }
        if ( v15 >= v19[6] )
          goto LABEL_25;
        v21 = &v19[2 * v15];
        *((_QWORD *)v21 + 4) = v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 8), (int32_t)v20, v13, v14);
        ++v15;
      }
      else
      {
        v22 = (unsigned int *)p_fields->svts;
        v23 = (DeckServantData_o *)sub_1B887FC(DeckServantData_TypeInfo);
        DeckServantData___ctor(v23, v24);
        if ( !v22 )
          goto LABEL_24;
        if ( v23 )
        {
          v11 = sub_1B886EC(v23, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
          if ( !v11 )
          {
LABEL_26:
            v30 = sub_1B88830(v11);
            sub_1B886D8(v30, 0LL);
          }
        }
        if ( v15 >= v22[6] )
          goto LABEL_25;
        v27 = &v22[2 * v15];
        *((_QWORD *)v27 + 4) = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 8), (int32_t)v23, v25, v26);
        v28 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v15 >= v28->max_length )
LABEL_25:
          sub_1B88814(v11, v12);
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


void __fastcall DeckServant__CollectUserSvtId(
        DeckServant_o *this,
        System_Collections_Generic_List_long__o *svtCollectList,
        System_Collections_Generic_List_long__o *equipCollectList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v10; // x22
  unsigned int v11; // w25
  unsigned int max_length; // w9
  DeckServantData_o *v13; // x8
  int64_t userSvtId; // x23
  const MethodInfo *v15; // x2
  int32_t size; // w8
  int32_t v17; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v19; // x10
  __int64 v20; // x9
  DeckServantData_o *v21; // x10
  unsigned __int64 v22; // x28
  DeckServantData_o *v23; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v25; // x10
  int64_t v26; // x23
  const MethodInfo *v27; // x2
  int32_t v28; // w8
  int32_t v29; // w24
  struct System_Int64_array *v30; // x9
  _QWORD *v31; // x10

  if ( (byte_4A5ACEA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ACEA = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_52;
    v10 = (DataMasterBase_o *)Instance;
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
      Instance = sub_1B88658(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_52;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_54;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v10 )
        goto LABEL_52;
      Instance = DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, v15);
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
            v19 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_52;
            if ( size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_34E5868 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
          v17 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v17,
                         (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v17 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_52;
        v20 = *(_QWORD *)&svts->max_length;
        if ( v11 >= (unsigned int)v20 )
          goto LABEL_54;
        v21 = svts->m_Items[v11];
        if ( !v21 )
          goto LABEL_52;
        if ( v21->fields.userSvtEquipIds )
        {
          if ( v11 >= (unsigned int)v20 )
LABEL_54:
            sub_1B88814(Instance, v8);
          v22 = 0LL;
          while ( 1 )
          {
            v23 = svts->m_Items[v11];
            if ( !v23 )
              break;
            userSvtEquipIds = v23->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v25 = userSvtEquipIds->max_length;
            if ( (__int64)v22 >= (int)v25 )
              goto LABEL_51;
            if ( v22 >= v25 )
              goto LABEL_54;
            v26 = userSvtEquipIds->m_Items[v22];
            Instance = sub_1B88658(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v8 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_QWORD *)(Instance + 32) = v26;
            Instance = DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, v27);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v28 = equipCollectList->fields._size;
              if ( v28 < 1 )
              {
LABEL_43:
                if ( v26 >= 1 )
                {
                  v30 = equipCollectList->fields._items;
                  v31 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v30 )
                    break;
                  if ( v28 >= v30->max_length )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v26,
                      *(const MethodInfo_34E5868 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v28 + 1;
                    v30->m_Items[v28] = v26;
                  }
                }
              }
              else
              {
                v29 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v29,
                               (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v26 )
                    break;
                  v28 = equipCollectList->fields._size;
                  if ( ++v29 >= v28 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v22;
            if ( v11 >= svts->max_length )
              goto LABEL_54;
          }
LABEL_52:
          sub_1B8880C(Instance, v8);
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


System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  System_Int64_array *Instance; // x0
  System_Int64_array *v7; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v10; // x19
  __int64 v11; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v13; // x23
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x2
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v18; // x24
  int64_t *v19; // x25
  BalanceConfig_c *v20; // x0
  const MethodInfo *v21; // x2

  if ( (byte_4A5ACE6 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ACE6 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  Instance = (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_36;
  max_length = svts->max_length;
  v10 = Instance;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_37;
      v13 = m_Items[v11];
      if ( !v13 )
        goto LABEL_36;
      if ( v13->fields.id == menber + 1 )
        break;
      if ( (int)++v11 >= max_length )
        return v10;
    }
    if ( !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
    {
      Instance = (System_Int64_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (System_Int64_array *)sub_1B88658(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v7 = Instance;
          if ( !Instance->max_length )
LABEL_37:
            sub_1B88814(Instance, v7);
          Instance->m_Items[0] = v13->fields.userSvtId;
          if ( MasterData_object )
          {
            if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)MasterData_object, Instance, v16) )
            {
              userSvtEquipIds = v13->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v18 = 0LL;
                v19 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v20 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v20 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v18 >= v20->static_fields->SvtEquipMax
                    || (__int64)v18 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (System_Int64_array *)sub_1B88658(long___TypeInfo, 1LL);
                  if ( v18 >= userSvtEquipIds->max_length )
                    goto LABEL_37;
                  v7 = Instance;
                  if ( !Instance )
                    goto LABEL_36;
                  if ( !Instance->max_length )
                    goto LABEL_37;
                  Instance->m_Items[0] = v19[v18];
                  Instance = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                     (DataMasterBase_o *)MasterData_object,
                                                     Instance,
                                                     v21);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v18 >= userSvtEquipIds->max_length )
                      goto LABEL_37;
                    if ( !v10 )
                      goto LABEL_36;
                    if ( v18 >= v10->max_length )
                      goto LABEL_37;
                    v10->m_Items[v18] = v19[v18];
                  }
                  ++v18;
                }
              }
            }
            return v10;
          }
        }
      }
LABEL_36:
      sub_1B8880C(Instance, v7);
    }
  }
  return v10;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_38873804(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  BalanceConfig_c *v8; // x8
  DataMasterBase_o *v9; // x20
  System_Int64_array *v10; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v12; // x1
  const MethodInfo *v13; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v16; // w10
  DeckServantData_o *v17; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v20; // x23
  int64_t *m_Items; // x26
  BalanceConfig_c *v22; // x0
  const MethodInfo *v23; // x2

  if ( (byte_4A5ACE7 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A5ACE7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v8 = BalanceConfig_TypeInfo;
  v9 = (DataMasterBase_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v12 = isEntityExistsFromId;
  if ( !isEntityExistsFromId->max_length )
LABEL_41:
    sub_1B88814(isEntityExistsFromId, v12);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v9 )
    goto LABEL_40;
  if ( !DataMasterBase__isEntityExistsFromId(v9, isEntityExistsFromId, v13) && !isInterruption )
    return v10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_1B8880C(isEntityExistsFromId, v12);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( max_length == v16 )
        goto LABEL_41;
      v17 = svts->m_Items[v16];
      if ( !v17 )
        goto LABEL_40;
      if ( v17->fields.userSvtId == userSvtId )
        break;
      if ( max_length == ++v16 )
        return v10;
    }
    if ( !v17->fields.isFollowerSvt )
    {
      userSvtEquipIds = v17->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v20 = 0LL;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v22 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v20 >= v22->static_fields->SvtEquipMax || (__int64)v20 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_1B88658(long___TypeInfo, 1LL);
          if ( v20 >= userSvtEquipIds->max_length )
            goto LABEL_41;
          v12 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !isEntityExistsFromId->max_length )
            goto LABEL_41;
          isEntityExistsFromId->m_Items[0] = m_Items[v20];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase__isEntityExistsFromId(
                                                         v9,
                                                         isEntityExistsFromId,
                                                         v23);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v20 >= userSvtEquipIds->max_length )
              goto LABEL_41;
            if ( !v10 )
              goto LABEL_40;
            if ( v20 >= v10->max_length )
              goto LABEL_41;
            v10->m_Items[v20] = m_Items[v20];
          }
          ++v20;
        }
      }
    }
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall DeckServant__GetUserServant(
        DeckServant_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *v4; // x19
  struct DeckServantData_array *svts; // x8
  __int64 v6; // x21
  int v7; // w20
  int max_length; // w9
  DeckServantData_o *v9; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A5ACE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ACE5 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_1B8880C(this, *(_QWORD *)&menber);
  v6 = 0LL;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0LL;
    if ( (unsigned int)v6 >= max_length )
      sub_1B88814(this, *(_QWORD *)&menber);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return (UserServantEntity_o *)entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v8; // x21
  il2cpp_array_size_t v9; // w23
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v11; // x25
  const MethodInfo *v12; // x2
  DeckServantData_o *v13; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v15; // w9
  __int64 v16; // x10
  int64_t *m_Items; // x11
  const MethodInfo *v19; // x2

  if ( (byte_4A5ACE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ACE8 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v8 = (DataMasterBase_o *)Instance;
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
      Instance = (Il2CppObject *)sub_1B88658(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v6 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_33;
      Instance[2].klass = (Il2CppClass *)v11->fields.userSvtId;
      if ( !v8 )
        goto LABEL_32;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v8, (System_Int64_array *)Instance, v12);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v9 >= svts->max_length )
          goto LABEL_33;
        v13 = svts->m_Items[v9];
        if ( !v13 )
          goto LABEL_32;
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
    ++v9;
    if ( !svts )
      goto LABEL_32;
  }
  v16 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= v15 )
      goto LABEL_33;
    if ( m_Items[v16] == userSvtId )
      break;
    if ( (int)++v16 >= v15 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_1B8880C(Instance, v6);
  v6 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_33:
    sub_1B88814(Instance, v6);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v8, (System_Int64_array *)Instance, v19);
}


bool __fastcall DeckServant__IsEquip_38874852(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v8; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v11; // x22
  il2cpp_array_size_t v12; // w24
  DeckServantData_o *v13; // x26
  const MethodInfo *v14; // x2
  struct System_Int64_array *userSvtEquipIds; // x8
  int v16; // w9
  int v17; // w10
  const MethodInfo *v19; // x2

  if ( (byte_4A5ACE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ACE9 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = (DataMasterBase_o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= svts->max_length )
      goto LABEL_30;
    v13 = svts->m_Items[v12];
    if ( !v13 )
      goto LABEL_29;
    if ( !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_1B88658(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v8 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_30;
      Instance[2].klass = (Il2CppClass *)v13->fields.userSvtId;
      if ( !v11 )
        goto LABEL_29;
      Instance = (Il2CppObject *)DataMasterBase__isEntityExistsFromId(v11, (System_Int64_array *)Instance, v14);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        userSvtEquipIds = v13->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v16 = userSvtEquipIds->max_length;
          if ( v16 >= 1 )
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
  v17 = 0;
  while ( userSvtEquipIds->m_Items[v17] != userSvtId )
  {
    if ( v16 == ++v17 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v13->fields.userSvtId;
  Instance = (Il2CppObject *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_1B8880C(Instance, v8);
  v8 = Instance;
  if ( !LODWORD(Instance[1].monitor) )
LABEL_30:
    sub_1B88814(Instance, v8);
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v11, (System_Int64_array *)Instance, v19);
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
        sub_1B88814(this, method);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
  }
}