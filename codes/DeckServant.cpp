void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DeckServant___ctor_16909640(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  DeckServant_Fields *p_fields; // x22
  _QWORD **v8; // x24
  __int64 v9; // x23
  __int16 v10; // w8
  __int64 v11; // x23
  __int64 v12; // x23
  __int64 v13; // x23
  il2cpp_array_size_t v14; // w26
  __int64 v15; // x24
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v17; // x23
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  struct DeckServantData_array *v21; // x8
  __int64 v22; // x8
  struct DeckServantData_array *v23; // x8
  il2cpp_array_size_t v24; // w9
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_42ABC6F & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_B52984(&DeckServantData___TypeInfo);
    sub_B52984(&DeckServantData_TypeInfo);
    byte_42ABC6F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5299C(DeckServantData___TypeInfo, (unsigned int)sum);
  sub_B52920(&this->fields);
  v8 = (_QWORD **)Method_System_Array_Empty_DeckWaveServantData___;
  v9 = **((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AEB684(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AEB684(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AEB684(*v8[6]);
  this->fields.waveSvts = **(struct DeckWaveServantData_array ***)(v13 + 184);
  sub_B52920(&this->fields.waveSvts);
  if ( sum >= 1 )
  {
    v14 = 0;
    v15 = 32LL;
    do
    {
      svts = p_fields->svts;
      v17 = (DeckServantData_o *)sub_B52A54(DeckServantData_TypeInfo);
      DeckServantData___ctor(v17, v18);
      if ( !svts )
        goto LABEL_28;
      if ( v17 && !sub_B52A44(v17, svts->obj.klass->_1.element_class) )
      {
        v27 = sub_B52A7C();
        sub_B52A28(v27, 0LL);
      }
      if ( v14 >= svts->max_length )
        goto LABEL_29;
      *(Il2CppClass **)((char *)&svts->obj.klass + v15) = (Il2CppClass *)v17;
      v19 = sub_B52920((char *)svts + v15);
      v21 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      if ( v14 >= v21->max_length )
      {
LABEL_29:
        v26 = sub_B52A88();
        sub_B52A28(v26, 0LL);
      }
      v22 = *(__int64 *)((char *)&v21->obj.klass + v15);
      if ( !v22 )
        goto LABEL_28;
      *(_DWORD *)(v22 + 16) = v14 + 1;
      v23 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      v24 = v14;
      if ( v14 >= v23->max_length )
        goto LABEL_29;
      v25 = *(__int64 *)((char *)&v23->obj.klass + v15);
      if ( !v25 )
LABEL_28:
        sub_B52A5C(v19, v20);
      ++v14;
      v15 += 8LL;
      *(_DWORD *)(v25 + 60) = v24 + 1;
    }
    while ( (int)(v24 + 1) < sum );
  }
  this->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_16910352(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  DeckServant_Fields *p_fields; // x25
  struct DeckWaveServantData_array **p_waveSvts; // x23
  il2cpp_array_size_t v10; // w28
  __int64 v11; // x19
  struct DeckServantData_array *svts; // x22
  DeckServantData_o *v13; // x26
  const MethodInfo *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  struct DeckServantData_array *v17; // x8
  __int64 v18; // x9
  int v19; // w8
  int v20; // w9
  struct DeckServantData_array *v21; // x10
  __int64 v22; // x10
  il2cpp_array_size_t v23; // w27
  int v24; // w28
  struct DeckWaveServantData_array *v25; // x19
  DeckWaveServantData_o *v26; // x24
  const MethodInfo *v27; // x1
  Il2CppClass **v28; // x0
  struct DeckWaveServantData_array *v29; // x8
  DeckWaveServantData_o *v30; // x9
  int32_t v31; // w8
  unsigned __int64 v32; // x9
  struct DeckWaveServantData_array *v33; // x10
  DeckWaveServantData_o *v34; // x10
  struct System_Int32_array *uniqueIds; // x10
  int v36; // w11
  __int64 v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  DeckServant_o *v40; // [xsp+0h] [xbp-60h]

  if ( (byte_42ABC70 & 1) == 0 )
  {
    sub_B52984(&DeckServantData___TypeInfo);
    sub_B52984(&DeckServantData_TypeInfo);
    sub_B52984(&DeckWaveServantData___TypeInfo);
    sub_B52984(&DeckWaveServantData_TypeInfo);
    byte_42ABC70 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5299C(
                                                        DeckServantData___TypeInfo,
                                                        (unsigned int)(memberNum * waveNum));
  sub_B52920(&this->fields);
  p_waveSvts = &this->fields.waveSvts;
  this->fields.waveSvts = (struct DeckWaveServantData_array *)sub_B5299C(
                                                                DeckWaveServantData___TypeInfo,
                                                                (unsigned int)waveNum);
  v40 = this;
  sub_B52920(&this->fields.waveSvts);
  if ( memberNum * waveNum >= 1 )
  {
    v10 = 0;
    v11 = 32LL;
    while ( 1 )
    {
      svts = p_fields->svts;
      v13 = (DeckServantData_o *)sub_B52A54(DeckServantData_TypeInfo);
      DeckServantData___ctor(v13, v14);
      if ( !svts )
        break;
      if ( v13 && !sub_B52A44(v13, svts->obj.klass->_1.element_class) )
      {
LABEL_39:
        v39 = sub_B52A7C();
        sub_B52A28(v39, 0LL);
      }
      if ( v10 >= svts->max_length )
        goto LABEL_38;
      *(Il2CppClass **)((char *)&svts->obj.klass + v11) = (Il2CppClass *)v13;
      v15 = sub_B52920((char *)svts + v11);
      v17 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v10 >= v17->max_length )
      {
LABEL_38:
        v38 = sub_B52A88();
        sub_B52A28(v38, 0LL);
      }
      v18 = *(__int64 *)((char *)&v17->obj.klass + v11);
      if ( !v18 )
        break;
      v19 = v10 + 1;
      *(_DWORD *)(v18 + 16) = v10 + 1;
      v20 = v10 + 1;
      if ( (int)(v10 + 1) > memberNum )
        v20 = (int)v10 % memberNum + 1;
      v21 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v10 >= v21->max_length )
        goto LABEL_38;
      v22 = *(__int64 *)((char *)&v21->obj.klass + v11);
      if ( !v22 )
        break;
      v11 += 8LL;
      ++v10;
      *(_DWORD *)(v22 + 60) = v20;
      if ( v19 >= memberNum * waveNum )
        goto LABEL_18;
    }
LABEL_37:
    sub_B52A5C(v15, v16);
  }
LABEL_18:
  if ( waveNum >= 1 )
  {
    v23 = 0;
    v24 = 1;
    while ( 1 )
    {
      v25 = *p_waveSvts;
      v26 = (DeckWaveServantData_o *)sub_B52A54(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v26, v27);
      if ( !v25 )
        goto LABEL_37;
      if ( v26 && !sub_B52A44(v26, v25->obj.klass->_1.element_class) )
        goto LABEL_39;
      if ( v23 >= v25->max_length )
        goto LABEL_38;
      v28 = &v25->obj.klass + (int)v23;
      v28[4] = (Il2CppClass *)v26;
      v15 = sub_B52920(v28 + 4);
      v29 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v23 >= v29->max_length )
        goto LABEL_38;
      v30 = v29->m_Items[v23];
      if ( !v30 )
        goto LABEL_37;
      v31 = v23 + 1;
      v30->fields.wave = v23 + 1;
      if ( memberNum >= 1 )
        break;
LABEL_35:
      v24 += memberNum;
      ++v23;
      if ( v31 >= waveNum )
        goto LABEL_36;
    }
    v32 = 0LL;
    while ( 1 )
    {
      v33 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v23 >= v33->max_length )
        goto LABEL_38;
      v34 = v33->m_Items[v23];
      if ( !v34 )
        goto LABEL_37;
      uniqueIds = v34->fields.uniqueIds;
      if ( !uniqueIds )
        goto LABEL_37;
      if ( v32 >= uniqueIds->max_length )
        goto LABEL_38;
      v36 = v24 + v32;
      v37 = (__int64)uniqueIds + 4 * v32++;
      *(_DWORD *)(v37 + 32) = v36;
      if ( (__int64)v32 >= memberNum )
        goto LABEL_35;
    }
  }
LABEL_36:
  v40->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_16911256(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  DeckServant_Fields *p_fields; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x23
  signed __int64 v11; // x24
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v14; // x26
  DeckServantData_o *v15; // x22
  unsigned int *v16; // x0
  unsigned int *v17; // x26
  DeckServantData_o *v18; // x22
  const MethodInfo *v19; // x1
  unsigned int *v20; // x0
  struct DeckServantData_array *v21; // x8
  DeckServantData_o *v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_42ABC71 & 1) == 0 )
  {
    sub_B52984(&DeckServantData___TypeInfo);
    sub_B52984(&DeckServantData_TypeInfo);
    byte_42ABC71 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5299C(DeckServantData___TypeInfo, (unsigned int)sum);
  v8 = sub_B52920(&this->fields);
  if ( !deckInfo )
LABEL_24:
    sub_B52A5C(v8, v9);
  if ( sum >= 1 )
  {
    v10 = 0LL;
    v11 = sum;
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v10 < (int)max_length) )
      {
        if ( v10 >= max_length )
          goto LABEL_25;
        v14 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v15 = svts->m_Items[v10];
        if ( v15 )
        {
          v8 = sub_B52A44(v15, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
          if ( !v8 )
            goto LABEL_26;
        }
        if ( v10 >= v14[6] )
          goto LABEL_25;
        v16 = &v14[2 * v10];
        *((_QWORD *)v16 + 4) = v15;
        v8 = sub_B52920(v16 + 8);
        ++v10;
      }
      else
      {
        v17 = (unsigned int *)p_fields->svts;
        v18 = (DeckServantData_o *)sub_B52A54(DeckServantData_TypeInfo);
        DeckServantData___ctor(v18, v19);
        if ( !v17 )
          goto LABEL_24;
        if ( v18 )
        {
          v8 = sub_B52A44(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v8 )
          {
LABEL_26:
            v24 = sub_B52A7C();
            sub_B52A28(v24, 0LL);
          }
        }
        if ( v10 >= v17[6] )
          goto LABEL_25;
        v20 = &v17[2 * v10];
        *((_QWORD *)v20 + 4) = v18;
        v8 = sub_B52920(v20 + 8);
        v21 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v10 >= v21->max_length )
        {
LABEL_25:
          v23 = sub_B52A88(v8);
          sub_B52A28(v23, 0LL);
        }
        v22 = v21->m_Items[v10];
        if ( !v22 )
          goto LABEL_24;
        v22->fields.id = ++v10;
      }
    }
    while ( (__int64)v10 < v11 );
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
  unsigned int v11; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v13; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  unsigned int v16; // w28
  __int64 v17; // x9
  DeckServantData_o *v18; // x10
  unsigned __int64 v19; // x28
  DeckServantData_o *v20; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v22; // x10
  int64_t v23; // x23
  int32_t v24; // w8
  unsigned int v25; // w26
  __int64 v26; // x0

  if ( (byte_42ABC77 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC77 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_50;
    v10 = (DataMasterBase_o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v11 >= (int)max_length )
        return;
      if ( v11 >= max_length )
        goto LABEL_52;
      v13 = svts->m_Items[v11];
      if ( !v13 )
        goto LABEL_50;
      userSvtId = v13->fields.userSvtId;
      Instance = sub_B5299C(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_50;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_52;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v10 )
        goto LABEL_50;
      Instance = DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !svtCollectList )
          goto LABEL_50;
        size = svtCollectList->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          if ( userSvtId >= 1 )
            System_Collections_Generic_List_long___Add(
              svtCollectList,
              userSvtId,
              (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            if ( size <= v16 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            if ( svtCollectList->fields._items->m_Items[v16] == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( (int)++v16 >= size )
              goto LABEL_21;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_50;
        v17 = *(_QWORD *)&svts->max_length;
        if ( v11 >= (unsigned int)v17 )
          goto LABEL_52;
        v18 = svts->m_Items[v11];
        if ( !v18 )
          goto LABEL_50;
        if ( v18->fields.userSvtEquipIds )
        {
          if ( v11 >= (unsigned int)v17 )
          {
LABEL_52:
            v26 = sub_B52A88(Instance);
            sub_B52A28(v26, 0LL);
          }
          v19 = 0LL;
          while ( 1 )
          {
            v20 = svts->m_Items[v11];
            if ( !v20 )
              break;
            userSvtEquipIds = v20->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v22 = userSvtEquipIds->max_length;
            if ( (__int64)v19 >= (int)v22 )
              goto LABEL_49;
            if ( v19 >= v22 )
              goto LABEL_52;
            v23 = userSvtEquipIds->m_Items[v19];
            Instance = sub_B5299C(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_52;
            *(_QWORD *)(Instance + 32) = v23;
            Instance = DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v24 = equipCollectList->fields._size;
              if ( v24 < 1 )
              {
LABEL_43:
                if ( v23 >= 1 )
                  System_Collections_Generic_List_long___Add(
                    equipCollectList,
                    v23,
                    (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
              }
              else
              {
                v25 = 0;
                while ( 1 )
                {
                  if ( v24 <= v25 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                  if ( equipCollectList->fields._items->m_Items[v25] == v23 )
                    break;
                  v24 = equipCollectList->fields._size;
                  if ( (int)++v25 >= v24 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v19;
            if ( v11 >= svts->max_length )
              goto LABEL_52;
          }
LABEL_50:
          sub_B52A5C(Instance, v8);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_49:
      ++v11;
      if ( !svts )
        goto LABEL_50;
    }
  }
}


System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v7; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v10; // x19
  __int64 v11; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v13; // x23
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v17; // x24
  int64_t *v18; // x26
  BalanceConfig_c *v19; // x0
  __int64 v20; // x0

  if ( (byte_42ABC73 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC73 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, (unsigned int)v5->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_39;
  max_length = svts->max_length;
  v10 = (System_Int64_array *)Instance;
  if ( max_length >= 1 )
  {
    v11 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        goto LABEL_40;
      v13 = m_Items[v11];
      if ( !v13 )
        goto LABEL_39;
      if ( v13->fields.id == menber + 1 )
        break;
      if ( (int)++v11 >= max_length )
        return v10;
    }
    if ( !v13->fields.isFollowerSvt && v13->fields.userSvtId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v7 = Instance;
          if ( !LODWORD(Instance->fields.basePanel) )
          {
LABEL_40:
            v20 = sub_B52A88(Instance);
            sub_B52A28(v20, 0LL);
          }
          Instance->fields.baseWindow = (struct UIWidget_o *)v13->fields.userSvtId;
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase__isEntityExistsFromId(
                   MasterData_WarQuestSelectionMaster,
                   (System_Int64_array *)Instance,
                   0LL) )
            {
              userSvtEquipIds = v13->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v17 = 0LL;
                v18 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v19 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v19 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v17 >= v19->static_fields->SvtEquipMax
                    || (__int64)v17 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, 1LL);
                  if ( v17 >= userSvtEquipIds->max_length )
                    goto LABEL_40;
                  v7 = Instance;
                  if ( !Instance )
                    goto LABEL_39;
                  if ( !LODWORD(Instance->fields.basePanel) )
                    goto LABEL_40;
                  Instance->fields.baseWindow = (struct UIWidget_o *)v18[v17];
                  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_Int64_array *)Instance,
                                                   0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v17 >= userSvtEquipIds->max_length )
                      goto LABEL_40;
                    if ( !v10 )
                      goto LABEL_39;
                    if ( v17 >= v10->max_length )
                      goto LABEL_40;
                    v10->m_Items[v17] = v18[v17];
                  }
                  ++v17;
                }
              }
            }
            return v10;
          }
        }
      }
LABEL_39:
      sub_B52A5C(Instance, v7);
    }
  }
  return v10;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_16912600(
        DeckServant_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x19
  BalanceConfig_c *v8; // x8
  System_Int64_array *v9; // x20
  struct DeckServantData_array *svts; // x10
  int max_length; // w8
  __int64 v12; // x9
  DeckServantData_o **m_Items; // x10
  DeckServantData_o *v14; // x11
  struct System_Int64_array *userSvtEquipIds; // x21
  unsigned __int64 v17; // x22
  int64_t *v18; // x26
  BalanceConfig_c *v19; // x0
  __int64 v20; // x0

  if ( (byte_42ABC74 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC74 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_38;
  v6 = Instance;
  if ( !LODWORD(Instance->fields.basePanel) )
  {
LABEL_39:
    v20 = sub_B52A88(Instance);
    sub_B52A28(v20, 0LL);
  }
  Instance->fields.baseWindow = (struct UIWidget_o *)userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                   MasterData_WarQuestSelectionMaster,
                                   (System_Int64_array *)Instance,
                                   0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return v9;
  svts = this->fields.svts;
  if ( !svts )
LABEL_38:
    sub_B52A5C(Instance, v6);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        goto LABEL_39;
      v14 = m_Items[v12];
      if ( !v14 )
        goto LABEL_38;
      if ( v14->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v12 >= max_length )
        return v9;
    }
    if ( !v14->fields.isFollowerSvt )
    {
      userSvtEquipIds = v14->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v17 = 0LL;
        v18 = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v19 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v19 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v17 >= v19->static_fields->SvtEquipMax || (__int64)v17 >= (int)userSvtEquipIds->max_length )
            break;
          Instance = (WebViewManager_o *)sub_B5299C(long___TypeInfo, 1LL);
          if ( v17 >= userSvtEquipIds->max_length )
            goto LABEL_39;
          v6 = Instance;
          if ( !Instance )
            goto LABEL_38;
          if ( !LODWORD(Instance->fields.basePanel) )
            goto LABEL_39;
          Instance->fields.baseWindow = (struct UIWidget_o *)v18[v17];
          Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                           MasterData_WarQuestSelectionMaster,
                                           (System_Int64_array *)Instance,
                                           0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( v17 >= userSvtEquipIds->max_length )
              goto LABEL_39;
            if ( !v9 )
              goto LABEL_38;
            if ( v17 >= v9->max_length )
              goto LABEL_39;
            v9->m_Items[v17] = v18[v17];
          }
          ++v17;
        }
      }
    }
  }
  return v9;
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
  __int64 v11; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42ABC72 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC72 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_B52A5C(this, *(_QWORD *)&menber);
  v6 = 0LL;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0LL;
    if ( (unsigned int)v6 >= max_length )
    {
      v11 = sub_B52A88(this);
      sub_B52A28(v11, 0LL);
    }
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
  this = (DeckServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)this,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v8; // x21
  il2cpp_array_size_t v9; // w22
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v11; // x25
  DeckServantData_o *v12; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v14; // w9
  __int64 v15; // x10
  int64_t *m_Items; // x11
  __int64 v18; // x0

  if ( (byte_42ABC75 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC75 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_B5299C(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v6 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_33;
      *(_QWORD *)(Instance + 32) = v11->fields.userSvtId;
      if ( !v8 )
        goto LABEL_32;
      Instance = DataMasterBase__isEntityExistsFromId(v8, (System_Int64_array *)Instance, 0LL);
      svts = this->fields.svts;
      if ( (Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v9 >= svts->max_length )
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
  v15 = 0LL;
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
  Instance = sub_B5299C(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_B52A5C(Instance, v6);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_33:
    v18 = sub_B52A88(Instance);
    sub_B52A28(v18, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v8, (System_Int64_array *)Instance, 0LL);
}


bool __fastcall DeckServant__IsEquip_16913660(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v11; // x22
  il2cpp_array_size_t v12; // w24
  DeckServantData_o *v13; // x26
  struct System_Int64_array *userSvtEquipIds; // x10
  int v15; // w8
  __int64 v16; // x9
  int64_t *m_Items; // x10
  __int64 v19; // x0

  if ( (byte_42ABC76 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ABC76 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_B5299C(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_30;
      *(_QWORD *)(Instance + 32) = v13->fields.userSvtId;
      if ( !v11 )
        goto LABEL_29;
      Instance = DataMasterBase__isEntityExistsFromId(v11, (System_Int64_array *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
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
    if ( (int)++v12 >= max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v16 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( m_Items[v16] != userSvtId )
  {
    if ( (int)++v16 >= v15 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v13->fields.userSvtId;
  Instance = sub_B5299C(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_B52A5C(Instance, v8);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_30:
    v19 = sub_B52A88(Instance);
    sub_B52A28(v19, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v11, (System_Int64_array *)Instance, 0LL);
}


void __fastcall DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
{
  struct DeckServantData_array *svts; // x9
  __int64 v3; // x8
  int max_length; // w10
  DeckServantData_o *v5; // x9
  __int64 v6; // x0

  svts = this->fields.svts;
  if ( !svts )
LABEL_7:
    sub_B52A5C(this, method);
  v3 = 0LL;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v3 >= max_length )
      break;
    if ( (unsigned int)v3 >= max_length )
    {
      v6 = sub_B52A88(this);
      sub_B52A28(v6, 0LL);
    }
    v5 = svts->m_Items[v3];
    if ( v5 )
    {
      v5->fields.initPos = ++v3;
      svts = this->fields.svts;
      if ( svts )
        continue;
    }
    goto LABEL_7;
  }
}