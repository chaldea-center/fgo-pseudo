void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16121028(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct DeckServantData_array *v9; // x0
  DeckServant_Fields *p_fields; // x22
  _QWORD **v11; // x24
  __int64 v12; // x23
  __int16 v13; // w8
  __int64 v14; // x23
  __int64 v15; // x23
  __int64 v16; // x23
  struct DeckWaveServantData_array **v17; // x8
  struct DeckWaveServantData_array *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  il2cpp_array_size_t v21; // w26
  __int64 v22; // x24
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v24; // x23
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  struct DeckServantData_array *v27; // x8
  __int64 v28; // x8
  struct DeckServantData_array *v29; // x8
  il2cpp_array_size_t v30; // w9
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_4210250 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_B0D8A4(&DeckServantData___TypeInfo, v7);
    sub_B0D8A4(&DeckServantData_TypeInfo, v8);
    byte_4210250 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_B0D8BC(DeckServantData___TypeInfo, (unsigned int)sum);
  p_fields = &this->fields;
  this->fields.svts = v9;
  sub_B0D840(&this->fields, v9);
  v11 = (_QWORD **)Method_System_Array_Empty_DeckWaveServantData___;
  v12 = **((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6);
  v13 = *(_WORD *)(v12 + 306);
  if ( (v13 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6));
    v13 = *(_WORD *)(v12 + 306);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = *v11[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AA65A4(*v11[6]);
    if ( !*(_DWORD *)(v14 + 224) )
    {
      v15 = *v11[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AA65A4(*v11[6]);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = *v11[6];
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AA65A4(*v11[6]);
  v17 = *(struct DeckWaveServantData_array ***)(v16 + 184);
  v18 = *v17;
  this->fields.waveSvts = *v17;
  sub_B0D840(&this->fields.waveSvts, v18);
  if ( sum >= 1 )
  {
    v21 = 0;
    v22 = 32LL;
    do
    {
      svts = p_fields->svts;
      v24 = (DeckServantData_o *)sub_B0D974(DeckServantData_TypeInfo, v19, v20);
      DeckServantData___ctor(v24, v25);
      if ( !svts )
        goto LABEL_28;
      if ( v24 && !sub_B0D964(v24, svts->obj.klass->_1.element_class) )
      {
        v33 = sub_B0D99C();
        sub_B0D948(v33, 0LL);
      }
      if ( v21 >= svts->max_length )
        goto LABEL_29;
      *(Il2CppClass **)((char *)&svts->obj.klass + v22) = (Il2CppClass *)v24;
      v26 = sub_B0D840((char *)svts + v22, v24);
      v27 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      if ( v21 >= v27->max_length )
      {
LABEL_29:
        v32 = sub_B0D9A8();
        sub_B0D948(v32, 0LL);
      }
      v28 = *(__int64 *)((char *)&v27->obj.klass + v22);
      if ( !v28 )
        goto LABEL_28;
      *(_DWORD *)(v28 + 16) = v21 + 1;
      v29 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      v30 = v21;
      if ( v21 >= v29->max_length )
        goto LABEL_29;
      v31 = *(__int64 *)((char *)&v29->obj.klass + v22);
      if ( !v31 )
LABEL_28:
        sub_B0D97C(v26);
      ++v21;
      v22 += 8LL;
      *(_DWORD *)(v31 + 60) = v30 + 1;
    }
    while ( (int)(v30 + 1) < sum );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16121740(
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
  struct DeckWaveServantData_array *v13; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  il2cpp_array_size_t v17; // w28
  __int64 v18; // x19
  struct DeckServantData_array *svts; // x22
  DeckServantData_o *v20; // x26
  const MethodInfo *v21; // x1
  __int64 v22; // x0
  struct DeckServantData_array *v23; // x8
  __int64 v24; // x9
  int v25; // w8
  int v26; // w9
  struct DeckServantData_array *v27; // x10
  __int64 v28; // x10
  il2cpp_array_size_t v29; // w27
  int v30; // w28
  struct DeckWaveServantData_array *v31; // x19
  DeckWaveServantData_o *v32; // x24
  const MethodInfo *v33; // x1
  Il2CppClass **v34; // x0
  struct DeckWaveServantData_array *v35; // x8
  DeckWaveServantData_o *v36; // x9
  int32_t v37; // w8
  unsigned __int64 v38; // x9
  struct DeckWaveServantData_array *v39; // x10
  DeckWaveServantData_o *v40; // x10
  struct System_Int32_array *uniqueIds; // x10
  int v42; // w11
  __int64 v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  DeckServant_o *v46; // [xsp+0h] [xbp-60h]

  if ( (byte_4210251 & 1) == 0 )
  {
    sub_B0D8A4(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_B0D8A4(&DeckServantData_TypeInfo, v8);
    sub_B0D8A4(&DeckWaveServantData___TypeInfo, v9);
    sub_B0D8A4(&DeckWaveServantData_TypeInfo, v10);
    byte_4210251 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_B0D8BC(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  p_fields = &this->fields;
  this->fields.svts = v11;
  sub_B0D840(&this->fields, v11);
  v13 = (struct DeckWaveServantData_array *)sub_B0D8BC(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  p_waveSvts = &this->fields.waveSvts;
  this->fields.waveSvts = v13;
  v46 = this;
  sub_B0D840(&this->fields.waveSvts, v13);
  if ( memberNum * waveNum >= 1 )
  {
    v17 = 0;
    v18 = 32LL;
    while ( 1 )
    {
      svts = p_fields->svts;
      v20 = (DeckServantData_o *)sub_B0D974(DeckServantData_TypeInfo, v15, v16);
      DeckServantData___ctor(v20, v21);
      if ( !svts )
        break;
      if ( v20 && !sub_B0D964(v20, svts->obj.klass->_1.element_class) )
      {
LABEL_39:
        v45 = sub_B0D99C();
        sub_B0D948(v45, 0LL);
      }
      if ( v17 >= svts->max_length )
        goto LABEL_38;
      *(Il2CppClass **)((char *)&svts->obj.klass + v18) = (Il2CppClass *)v20;
      v22 = sub_B0D840((char *)svts + v18, v20);
      v23 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v17 >= v23->max_length )
      {
LABEL_38:
        v44 = sub_B0D9A8();
        sub_B0D948(v44, 0LL);
      }
      v24 = *(__int64 *)((char *)&v23->obj.klass + v18);
      if ( !v24 )
        break;
      v25 = v17 + 1;
      *(_DWORD *)(v24 + 16) = v17 + 1;
      v26 = v17 + 1;
      if ( (int)(v17 + 1) > memberNum )
        v26 = (int)v17 % memberNum + 1;
      v27 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v17 >= v27->max_length )
        goto LABEL_38;
      v28 = *(__int64 *)((char *)&v27->obj.klass + v18);
      if ( !v28 )
        break;
      v18 += 8LL;
      ++v17;
      *(_DWORD *)(v28 + 60) = v26;
      if ( v25 >= memberNum * waveNum )
        goto LABEL_18;
    }
LABEL_37:
    sub_B0D97C(v22);
  }
LABEL_18:
  if ( waveNum >= 1 )
  {
    v29 = 0;
    v30 = 1;
    while ( 1 )
    {
      v31 = *p_waveSvts;
      v32 = (DeckWaveServantData_o *)sub_B0D974(DeckWaveServantData_TypeInfo, v15, v16);
      DeckWaveServantData___ctor(v32, v33);
      if ( !v31 )
        goto LABEL_37;
      if ( v32 && !sub_B0D964(v32, v31->obj.klass->_1.element_class) )
        goto LABEL_39;
      if ( v29 >= v31->max_length )
        goto LABEL_38;
      v34 = &v31->obj.klass + (int)v29;
      v34[4] = (Il2CppClass *)v32;
      v22 = sub_B0D840(v34 + 4, v32);
      v35 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v29 >= v35->max_length )
        goto LABEL_38;
      v36 = v35->m_Items[v29];
      if ( !v36 )
        goto LABEL_37;
      v37 = v29 + 1;
      v36->fields.wave = v29 + 1;
      if ( memberNum >= 1 )
        break;
LABEL_35:
      v30 += memberNum;
      ++v29;
      if ( v37 >= waveNum )
        goto LABEL_36;
    }
    v38 = 0LL;
    while ( 1 )
    {
      v39 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v29 >= v39->max_length )
        goto LABEL_38;
      v40 = v39->m_Items[v29];
      if ( !v40 )
        goto LABEL_37;
      uniqueIds = v40->fields.uniqueIds;
      if ( !uniqueIds )
        goto LABEL_37;
      if ( v38 >= uniqueIds->max_length )
        goto LABEL_38;
      v42 = v30 + v38;
      v43 = (__int64)uniqueIds + 4 * v38++;
      *(_DWORD *)(v43 + 32) = v42;
      if ( (__int64)v38 >= memberNum )
        goto LABEL_35;
    }
  }
LABEL_36:
  v46->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16122644(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x23
  signed __int64 v14; // x24
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v17; // x26
  DeckServantData_o *v18; // x22
  unsigned int *v19; // x0
  unsigned int *v20; // x26
  DeckServantData_o *v21; // x22
  const MethodInfo *v22; // x1
  unsigned int *v23; // x0
  struct DeckServantData_array *v24; // x8
  DeckServantData_o *v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4210252 & 1) == 0 )
  {
    sub_B0D8A4(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_B0D8A4(&DeckServantData_TypeInfo, v7);
    byte_4210252 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_B0D8BC(DeckServantData___TypeInfo, (unsigned int)sum);
  p_fields = &this->fields;
  this->fields.svts = v8;
  v10 = sub_B0D840(&this->fields, v8);
  if ( !deckInfo )
LABEL_24:
    sub_B0D97C(v10);
  if ( sum >= 1 )
  {
    v13 = 0LL;
    v14 = sum;
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v13 < (int)max_length) )
      {
        if ( v13 >= max_length )
          goto LABEL_25;
        v17 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v18 = svts->m_Items[v13];
        if ( v18 )
        {
          v10 = sub_B0D964(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v10 )
            goto LABEL_26;
        }
        if ( v13 >= v17[6] )
          goto LABEL_25;
        v19 = &v17[2 * v13];
        *((_QWORD *)v19 + 4) = v18;
        v10 = sub_B0D840(v19 + 8, v18);
        ++v13;
      }
      else
      {
        v20 = (unsigned int *)p_fields->svts;
        v21 = (DeckServantData_o *)sub_B0D974(DeckServantData_TypeInfo, v11, v12);
        DeckServantData___ctor(v21, v22);
        if ( !v20 )
          goto LABEL_24;
        if ( v21 )
        {
          v10 = sub_B0D964(v21, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !v10 )
          {
LABEL_26:
            v27 = sub_B0D99C();
            sub_B0D948(v27, 0LL);
          }
        }
        if ( v13 >= v20[6] )
          goto LABEL_25;
        v23 = &v20[2 * v13];
        *((_QWORD *)v23 + 4) = v21;
        v10 = sub_B0D840(v23 + 8, v21);
        v24 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v13 >= v24->max_length )
        {
LABEL_25:
          v26 = sub_B0D9A8(v10);
          sub_B0D948(v26, 0LL);
        }
        v25 = v24->m_Items[v13];
        if ( !v25 )
          goto LABEL_24;
        v25->fields.id = ++v13;
      }
    }
    while ( (__int64)v13 < v14 );
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
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v14; // x22
  unsigned int v15; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v17; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  unsigned int v20; // w28
  __int64 v21; // x9
  DeckServantData_o *v22; // x10
  unsigned __int64 v23; // x28
  DeckServantData_o *v24; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v26; // x10
  int64_t v27; // x23
  int32_t v28; // w8
  unsigned int v29; // w26
  __int64 v30; // x0

  if ( (byte_4210258 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_B0D8A4(&long___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4210258 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_50;
    v14 = (DataMasterBase_o *)Instance;
    v15 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v15 >= (int)max_length )
        return;
      if ( v15 >= max_length )
        goto LABEL_52;
      v17 = svts->m_Items[v15];
      if ( !v17 )
        goto LABEL_50;
      userSvtId = v17->fields.userSvtId;
      Instance = sub_B0D8BC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_50;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_52;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v14 )
        goto LABEL_50;
      Instance = DataMasterBase__isEntityExistsFromId(v14, (System_Int64_array *)Instance, 0LL);
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
              (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        else
        {
          v20 = 0;
          while ( 1 )
          {
            if ( size <= v20 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            if ( svtCollectList->fields._items->m_Items[v20] == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( (int)++v20 >= size )
              goto LABEL_21;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_50;
        v21 = *(_QWORD *)&svts->max_length;
        if ( v15 >= (unsigned int)v21 )
          goto LABEL_52;
        v22 = svts->m_Items[v15];
        if ( !v22 )
          goto LABEL_50;
        if ( v22->fields.userSvtEquipIds )
        {
          if ( v15 >= (unsigned int)v21 )
          {
LABEL_52:
            v30 = sub_B0D9A8(Instance);
            sub_B0D948(v30, 0LL);
          }
          v23 = 0LL;
          while ( 1 )
          {
            v24 = svts->m_Items[v15];
            if ( !v24 )
              break;
            userSvtEquipIds = v24->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v26 = userSvtEquipIds->max_length;
            if ( (__int64)v23 >= (int)v26 )
              goto LABEL_49;
            if ( v23 >= v26 )
              goto LABEL_52;
            v27 = userSvtEquipIds->m_Items[v23];
            Instance = sub_B0D8BC(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_52;
            *(_QWORD *)(Instance + 32) = v27;
            Instance = DataMasterBase__isEntityExistsFromId(v14, (System_Int64_array *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v28 = equipCollectList->fields._size;
              if ( v28 < 1 )
              {
LABEL_43:
                if ( v27 >= 1 )
                  System_Collections_Generic_List_long___Add(
                    equipCollectList,
                    v27,
                    (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
              }
              else
              {
                v29 = 0;
                while ( 1 )
                {
                  if ( v28 <= v29 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  if ( equipCollectList->fields._items->m_Items[v29] == v27 )
                    break;
                  v28 = equipCollectList->fields._size;
                  if ( (int)++v29 >= v28 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v23;
            if ( v15 >= svts->max_length )
              goto LABEL_52;
          }
LABEL_50:
          sub_B0D97C(Instance);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_49:
      ++v15;
      if ( !svts )
        goto LABEL_50;
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
  WebViewManager_o *Instance; // x0
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v12; // x19
  __int64 v13; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v15; // x23
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v19; // x24
  int64_t *v20; // x26
  BalanceConfig_c *v21; // x0
  __int64 v22; // x0

  if ( (byte_4210254 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&long___TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4210254 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Instance = (WebViewManager_o *)sub_B0D8BC(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_39;
  max_length = svts->max_length;
  v12 = (System_Int64_array *)Instance;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        goto LABEL_40;
      v15 = m_Items[v13];
      if ( !v15 )
        goto LABEL_39;
      if ( v15->fields.id == menber + 1 )
        break;
      if ( (int)++v13 >= max_length )
        return v12;
    }
    if ( !v15->fields.isFollowerSvt && v15->fields.userSvtId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (WebViewManager_o *)sub_B0D8BC(long___TypeInfo, 1LL);
        if ( Instance )
        {
          if ( !LODWORD(Instance->fields.basePanel) )
          {
LABEL_40:
            v22 = sub_B0D9A8(Instance);
            sub_B0D948(v22, 0LL);
          }
          Instance->fields.baseWindow = (struct UIWidget_o *)v15->fields.userSvtId;
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase__isEntityExistsFromId(
                   MasterData_WarQuestSelectionMaster,
                   (System_Int64_array *)Instance,
                   0LL) )
            {
              userSvtEquipIds = v15->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v19 = 0LL;
                v20 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v21 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v21 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v19 >= v21->static_fields->SvtEquipMax
                    || (__int64)v19 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (WebViewManager_o *)sub_B0D8BC(long___TypeInfo, 1LL);
                  if ( v19 >= userSvtEquipIds->max_length )
                    goto LABEL_40;
                  if ( !Instance )
                    goto LABEL_39;
                  if ( !LODWORD(Instance->fields.basePanel) )
                    goto LABEL_40;
                  Instance->fields.baseWindow = (struct UIWidget_o *)v20[v19];
                  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_Int64_array *)Instance,
                                                   0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v19 >= userSvtEquipIds->max_length )
                      goto LABEL_40;
                    if ( !v12 )
                      goto LABEL_39;
                    if ( v19 >= v12->max_length )
                      goto LABEL_40;
                    v12->m_Items[v19] = v20[v19];
                  }
                  ++v19;
                }
              }
            }
            return v12;
          }
        }
      }
LABEL_39:
      sub_B0D97C(Instance);
    }
  }
  return v12;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_16123988(
        DeckServant_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x19
  BalanceConfig_c *v10; // x8
  System_Int64_array *v11; // x20
  struct DeckServantData_array *svts; // x10
  int max_length; // w8
  __int64 v14; // x9
  DeckServantData_o **m_Items; // x10
  DeckServantData_o *v16; // x11
  struct System_Int64_array *userSvtEquipIds; // x21
  unsigned __int64 v19; // x22
  int64_t *v20; // x26
  BalanceConfig_c *v21; // x0
  __int64 v22; // x0

  if ( (byte_4210255 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userSvtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&long___TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4210255 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (System_Int64_array *)sub_B0D8BC(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
  Instance = (WebViewManager_o *)sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_38;
  if ( !LODWORD(Instance->fields.basePanel) )
  {
LABEL_39:
    v22 = sub_B0D9A8(Instance);
    sub_B0D948(v22, 0LL);
  }
  Instance->fields.baseWindow = (struct UIWidget_o *)userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                   MasterData_WarQuestSelectionMaster,
                                   (System_Int64_array *)Instance,
                                   0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return v11;
  svts = this->fields.svts;
  if ( !svts )
LABEL_38:
    sub_B0D97C(Instance);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_39;
      v16 = m_Items[v14];
      if ( !v16 )
        goto LABEL_38;
      if ( v16->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v14 >= max_length )
        return v11;
    }
    if ( !v16->fields.isFollowerSvt )
    {
      userSvtEquipIds = v16->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v19 = 0LL;
        v20 = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v21 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v19 >= v21->static_fields->SvtEquipMax || (__int64)v19 >= (int)userSvtEquipIds->max_length )
            break;
          Instance = (WebViewManager_o *)sub_B0D8BC(long___TypeInfo, 1LL);
          if ( v19 >= userSvtEquipIds->max_length )
            goto LABEL_39;
          if ( !Instance )
            goto LABEL_38;
          if ( !LODWORD(Instance->fields.basePanel) )
            goto LABEL_39;
          Instance->fields.baseWindow = (struct UIWidget_o *)v20[v19];
          Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                           MasterData_WarQuestSelectionMaster,
                                           (System_Int64_array *)Instance,
                                           0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( v19 >= userSvtEquipIds->max_length )
              goto LABEL_39;
            if ( !v11 )
              goto LABEL_38;
            if ( v19 >= v11->max_length )
              goto LABEL_39;
            v11->m_Items[v19] = v20[v19];
          }
          ++v19;
        }
      }
    }
  }
  return v11;
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
  __int64 v13; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4210253 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4210253 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_B0D97C(this);
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
    {
      v13 = sub_B0D9A8(this);
      sub_B0D948(v13, 0LL);
    }
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
  this = (DeckServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)this,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Instance; // x0
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v9; // x21
  il2cpp_array_size_t v10; // w22
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v12; // x25
  DeckServantData_o *v13; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v15; // w9
  __int64 v16; // x10
  int64_t *m_Items; // x11
  __int64 v19; // x0

  if ( (byte_4210256 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&long___TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4210256 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v9 = (DataMasterBase_o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v10 >= (int)max_length )
      return 0;
    if ( v10 >= max_length )
      goto LABEL_33;
    v12 = svts->m_Items[v10];
    if ( !v12 )
      goto LABEL_32;
    if ( !v12->fields.isFollowerSvt && v12->fields.userSvtId >= 1 )
    {
      Instance = sub_B0D8BC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_33;
      *(_QWORD *)(Instance + 32) = v12->fields.userSvtId;
      if ( !v9 )
        goto LABEL_32;
      Instance = DataMasterBase__isEntityExistsFromId(v9, (System_Int64_array *)Instance, 0LL);
      svts = this->fields.svts;
      if ( (Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v10 >= svts->max_length )
          goto LABEL_33;
        v13 = svts->m_Items[v10];
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
    ++v10;
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
  Instance = sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_B0D97C(Instance);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_33:
    v19 = sub_B0D9A8(Instance);
    sub_B0D948(v19, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v9, (System_Int64_array *)Instance, 0LL);
}


bool __fastcall DeckServant__IsEquip_16125048(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 Instance; // x0
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v12; // x22
  il2cpp_array_size_t v13; // w24
  DeckServantData_o *v14; // x26
  struct System_Int64_array *userSvtEquipIds; // x10
  int v16; // w8
  __int64 v17; // x9
  int64_t *m_Items; // x10
  __int64 v20; // x0

  if ( (byte_4210257 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&long___TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4210257 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = (DataMasterBase_o *)Instance;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= svts->max_length )
      goto LABEL_30;
    v14 = svts->m_Items[v13];
    if ( !v14 )
      goto LABEL_29;
    if ( !v14->fields.isFollowerSvt && v14->fields.userSvtId >= 1 )
    {
      Instance = sub_B0D8BC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_30;
      *(_QWORD *)(Instance + 32) = v14->fields.userSvtId;
      if ( !v12 )
        goto LABEL_29;
      Instance = DataMasterBase__isEntityExistsFromId(v12, (System_Int64_array *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        userSvtEquipIds = v14->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v16 = userSvtEquipIds->max_length;
          if ( v16 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( (int)++v13 >= max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v17 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( m_Items[v17] != userSvtId )
  {
    if ( (int)++v17 >= v16 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v14->fields.userSvtId;
  Instance = sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_B0D97C(Instance);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_30:
    v20 = sub_B0D9A8(Instance);
    sub_B0D948(v20, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v12, (System_Int64_array *)Instance, 0LL);
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
    sub_B0D97C(this);
  v3 = 0LL;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v3 >= max_length )
      break;
    if ( (unsigned int)v3 >= max_length )
    {
      v6 = sub_B0D9A8(this);
      sub_B0D948(v6, 0LL);
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