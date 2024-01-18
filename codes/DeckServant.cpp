void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16762468(
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
  il2cpp_array_size_t v19; // w26
  __int64 v20; // x24
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v22; // x23
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  struct DeckServantData_array *v26; // x8
  __int64 v27; // x8
  struct DeckServantData_array *v28; // x8
  il2cpp_array_size_t v29; // w9
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_4183682 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_B2C35C(&DeckServantData___TypeInfo, v7);
    sub_B2C35C(&DeckServantData_TypeInfo, v8);
    byte_4183682 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_B2C374(DeckServantData___TypeInfo, (unsigned int)sum);
  p_fields = &this->fields;
  this->fields.svts = v9;
  sub_B2C2F8(&this->fields, v9);
  v11 = (_QWORD **)Method_System_Array_Empty_DeckWaveServantData___;
  v12 = **((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6);
  v13 = *(_WORD *)(v12 + 306);
  if ( (v13 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6));
    v13 = *(_WORD *)(v12 + 306);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = *v11[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AC505C(*v11[6]);
    if ( !*(_DWORD *)(v14 + 224) )
    {
      v15 = *v11[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AC505C(*v11[6]);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = *v11[6];
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AC505C(*v11[6]);
  v17 = *(struct DeckWaveServantData_array ***)(v16 + 184);
  v18 = *v17;
  this->fields.waveSvts = *v17;
  sub_B2C2F8(&this->fields.waveSvts, v18);
  if ( sum >= 1 )
  {
    v19 = 0;
    v20 = 32LL;
    do
    {
      svts = p_fields->svts;
      v22 = (DeckServantData_o *)sub_B2C42C(DeckServantData_TypeInfo);
      DeckServantData___ctor(v22, v23);
      if ( !svts )
        goto LABEL_28;
      if ( v22 && !sub_B2C41C(v22, svts->obj.klass->_1.element_class) )
      {
        v32 = sub_B2C454();
        sub_B2C400(v32, 0LL);
      }
      if ( v19 >= svts->max_length )
        goto LABEL_29;
      *(Il2CppClass **)((char *)&svts->obj.klass + v20) = (Il2CppClass *)v22;
      v24 = sub_B2C2F8((char *)svts + v20, v22);
      v26 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      if ( v19 >= v26->max_length )
      {
LABEL_29:
        v31 = sub_B2C460();
        sub_B2C400(v31, 0LL);
      }
      v27 = *(__int64 *)((char *)&v26->obj.klass + v20);
      if ( !v27 )
        goto LABEL_28;
      *(_DWORD *)(v27 + 16) = v19 + 1;
      v28 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      v29 = v19;
      if ( v19 >= v28->max_length )
        goto LABEL_29;
      v30 = *(__int64 *)((char *)&v28->obj.klass + v20);
      if ( !v30 )
LABEL_28:
        sub_B2C434(v24, v25);
      ++v19;
      v20 += 8LL;
      *(_DWORD *)(v30 + 60) = v29 + 1;
    }
    while ( (int)(v29 + 1) < sum );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16763180(
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
  il2cpp_array_size_t v15; // w28
  __int64 v16; // x19
  struct DeckServantData_array *svts; // x22
  DeckServantData_o *v18; // x26
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  struct DeckServantData_array *v22; // x8
  __int64 v23; // x9
  int v24; // w8
  int v25; // w9
  struct DeckServantData_array *v26; // x10
  __int64 v27; // x10
  il2cpp_array_size_t v28; // w27
  int v29; // w28
  struct DeckWaveServantData_array *v30; // x19
  DeckWaveServantData_o *v31; // x24
  const MethodInfo *v32; // x1
  Il2CppClass **v33; // x0
  struct DeckWaveServantData_array *v34; // x8
  DeckWaveServantData_o *v35; // x9
  int32_t v36; // w8
  unsigned __int64 v37; // x9
  struct DeckWaveServantData_array *v38; // x10
  DeckWaveServantData_o *v39; // x10
  struct System_Int32_array *uniqueIds; // x10
  int v41; // w11
  __int64 v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  DeckServant_o *v45; // [xsp+0h] [xbp-60h]

  if ( (byte_4183683 & 1) == 0 )
  {
    sub_B2C35C(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_B2C35C(&DeckServantData_TypeInfo, v8);
    sub_B2C35C(&DeckWaveServantData___TypeInfo, v9);
    sub_B2C35C(&DeckWaveServantData_TypeInfo, v10);
    byte_4183683 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (struct DeckServantData_array *)sub_B2C374(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  p_fields = &this->fields;
  this->fields.svts = v11;
  sub_B2C2F8(&this->fields, v11);
  v13 = (struct DeckWaveServantData_array *)sub_B2C374(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  p_waveSvts = &this->fields.waveSvts;
  this->fields.waveSvts = v13;
  v45 = this;
  sub_B2C2F8(&this->fields.waveSvts, v13);
  if ( memberNum * waveNum >= 1 )
  {
    v15 = 0;
    v16 = 32LL;
    while ( 1 )
    {
      svts = p_fields->svts;
      v18 = (DeckServantData_o *)sub_B2C42C(DeckServantData_TypeInfo);
      DeckServantData___ctor(v18, v19);
      if ( !svts )
        break;
      if ( v18 && !sub_B2C41C(v18, svts->obj.klass->_1.element_class) )
      {
LABEL_39:
        v44 = sub_B2C454();
        sub_B2C400(v44, 0LL);
      }
      if ( v15 >= svts->max_length )
        goto LABEL_38;
      *(Il2CppClass **)((char *)&svts->obj.klass + v16) = (Il2CppClass *)v18;
      v20 = sub_B2C2F8((char *)svts + v16, v18);
      v22 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v15 >= v22->max_length )
      {
LABEL_38:
        v43 = sub_B2C460();
        sub_B2C400(v43, 0LL);
      }
      v23 = *(__int64 *)((char *)&v22->obj.klass + v16);
      if ( !v23 )
        break;
      v24 = v15 + 1;
      *(_DWORD *)(v23 + 16) = v15 + 1;
      v25 = v15 + 1;
      if ( (int)(v15 + 1) > memberNum )
        v25 = (int)v15 % memberNum + 1;
      v26 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v15 >= v26->max_length )
        goto LABEL_38;
      v27 = *(__int64 *)((char *)&v26->obj.klass + v16);
      if ( !v27 )
        break;
      v16 += 8LL;
      ++v15;
      *(_DWORD *)(v27 + 60) = v25;
      if ( v24 >= memberNum * waveNum )
        goto LABEL_18;
    }
LABEL_37:
    sub_B2C434(v20, v21);
  }
LABEL_18:
  if ( waveNum >= 1 )
  {
    v28 = 0;
    v29 = 1;
    while ( 1 )
    {
      v30 = *p_waveSvts;
      v31 = (DeckWaveServantData_o *)sub_B2C42C(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v31, v32);
      if ( !v30 )
        goto LABEL_37;
      if ( v31 && !sub_B2C41C(v31, v30->obj.klass->_1.element_class) )
        goto LABEL_39;
      if ( v28 >= v30->max_length )
        goto LABEL_38;
      v33 = &v30->obj.klass + (int)v28;
      v33[4] = (Il2CppClass *)v31;
      v20 = sub_B2C2F8(v33 + 4, v31);
      v34 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v28 >= v34->max_length )
        goto LABEL_38;
      v35 = v34->m_Items[v28];
      if ( !v35 )
        goto LABEL_37;
      v36 = v28 + 1;
      v35->fields.wave = v28 + 1;
      if ( memberNum >= 1 )
        break;
LABEL_35:
      v29 += memberNum;
      ++v28;
      if ( v36 >= waveNum )
        goto LABEL_36;
    }
    v37 = 0LL;
    while ( 1 )
    {
      v38 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v28 >= v38->max_length )
        goto LABEL_38;
      v39 = v38->m_Items[v28];
      if ( !v39 )
        goto LABEL_37;
      uniqueIds = v39->fields.uniqueIds;
      if ( !uniqueIds )
        goto LABEL_37;
      if ( v37 >= uniqueIds->max_length )
        goto LABEL_38;
      v41 = v29 + v37;
      v42 = (__int64)uniqueIds + 4 * v37++;
      *(_DWORD *)(v42 + 32) = v41;
      if ( (__int64)v37 >= memberNum )
        goto LABEL_35;
    }
  }
LABEL_36:
  v45->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16764084(
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
  unsigned __int64 v12; // x23
  signed __int64 v13; // x24
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v16; // x26
  DeckServantData_o *v17; // x22
  unsigned int *v18; // x0
  unsigned int *v19; // x26
  DeckServantData_o *v20; // x22
  const MethodInfo *v21; // x1
  unsigned int *v22; // x0
  struct DeckServantData_array *v23; // x8
  DeckServantData_o *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_4183684 & 1) == 0 )
  {
    sub_B2C35C(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_B2C35C(&DeckServantData_TypeInfo, v7);
    byte_4183684 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (struct DeckServantData_array *)sub_B2C374(DeckServantData___TypeInfo, (unsigned int)sum);
  p_fields = &this->fields;
  this->fields.svts = v8;
  v10 = sub_B2C2F8(&this->fields, v8);
  if ( !deckInfo )
LABEL_24:
    sub_B2C434(v10, v11);
  if ( sum >= 1 )
  {
    v12 = 0LL;
    v13 = sum;
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v12 < (int)max_length) )
      {
        if ( v12 >= max_length )
          goto LABEL_25;
        v16 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v17 = svts->m_Items[v12];
        if ( v17 )
        {
          v10 = sub_B2C41C(v17, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
          if ( !v10 )
            goto LABEL_26;
        }
        if ( v12 >= v16[6] )
          goto LABEL_25;
        v18 = &v16[2 * v12];
        *((_QWORD *)v18 + 4) = v17;
        v10 = sub_B2C2F8(v18 + 8, v17);
        ++v12;
      }
      else
      {
        v19 = (unsigned int *)p_fields->svts;
        v20 = (DeckServantData_o *)sub_B2C42C(DeckServantData_TypeInfo);
        DeckServantData___ctor(v20, v21);
        if ( !v19 )
          goto LABEL_24;
        if ( v20 )
        {
          v10 = sub_B2C41C(v20, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
          if ( !v10 )
          {
LABEL_26:
            v26 = sub_B2C454();
            sub_B2C400(v26, 0LL);
          }
        }
        if ( v12 >= v19[6] )
          goto LABEL_25;
        v22 = &v19[2 * v12];
        *((_QWORD *)v22 + 4) = v20;
        v10 = sub_B2C2F8(v22 + 8, v20);
        v23 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v12 >= v23->max_length )
        {
LABEL_25:
          v25 = sub_B2C460(v10);
          sub_B2C400(v25, 0LL);
        }
        v24 = v23->m_Items[v12];
        if ( !v24 )
          goto LABEL_24;
        v24->fields.id = ++v12;
      }
    }
    while ( (__int64)v12 < v13 );
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
  unsigned int v16; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v18; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  unsigned int v21; // w28
  __int64 v22; // x9
  DeckServantData_o *v23; // x10
  unsigned __int64 v24; // x28
  DeckServantData_o *v25; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v27; // x10
  int64_t v28; // x23
  int32_t v29; // w8
  unsigned int v30; // w26
  __int64 v31; // x0

  if ( (byte_418368A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_B2C35C(&long___TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418368A = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_50;
    v15 = (DataMasterBase_o *)Instance;
    v16 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v16 >= (int)max_length )
        return;
      if ( v16 >= max_length )
        goto LABEL_52;
      v18 = svts->m_Items[v16];
      if ( !v18 )
        goto LABEL_50;
      userSvtId = v18->fields.userSvtId;
      Instance = sub_B2C374(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_50;
      v13 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_52;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v15 )
        goto LABEL_50;
      Instance = DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, 0LL);
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
              (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
        else
        {
          v21 = 0;
          while ( 1 )
          {
            if ( size <= v21 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( svtCollectList->fields._items->m_Items[v21] == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( (int)++v21 >= size )
              goto LABEL_21;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_50;
        v22 = *(_QWORD *)&svts->max_length;
        if ( v16 >= (unsigned int)v22 )
          goto LABEL_52;
        v23 = svts->m_Items[v16];
        if ( !v23 )
          goto LABEL_50;
        if ( v23->fields.userSvtEquipIds )
        {
          if ( v16 >= (unsigned int)v22 )
          {
LABEL_52:
            v31 = sub_B2C460(Instance);
            sub_B2C400(v31, 0LL);
          }
          v24 = 0LL;
          while ( 1 )
          {
            v25 = svts->m_Items[v16];
            if ( !v25 )
              break;
            userSvtEquipIds = v25->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v27 = userSvtEquipIds->max_length;
            if ( (__int64)v24 >= (int)v27 )
              goto LABEL_49;
            if ( v24 >= v27 )
              goto LABEL_52;
            v28 = userSvtEquipIds->m_Items[v24];
            Instance = sub_B2C374(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_52;
            *(_QWORD *)(Instance + 32) = v28;
            Instance = DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v29 = equipCollectList->fields._size;
              if ( v29 < 1 )
              {
LABEL_43:
                if ( v28 >= 1 )
                  System_Collections_Generic_List_long___Add(
                    equipCollectList,
                    v28,
                    (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
              }
              else
              {
                v30 = 0;
                while ( 1 )
                {
                  if ( v29 <= v30 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                  if ( equipCollectList->fields._items->m_Items[v30] == v28 )
                    break;
                  v29 = equipCollectList->fields._size;
                  if ( (int)++v30 >= v29 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v24;
            if ( v16 >= svts->max_length )
              goto LABEL_52;
          }
LABEL_50:
          sub_B2C434(Instance, v13);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_49:
      ++v16;
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
  WebViewManager_o *v10; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v13; // x19
  __int64 v14; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v16; // x23
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v20; // x24
  int64_t *v21; // x26
  BalanceConfig_c *v22; // x0
  __int64 v23; // x0

  if ( (byte_4183686 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&long___TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4183686 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_39;
  max_length = svts->max_length;
  v13 = (System_Int64_array *)Instance;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        goto LABEL_40;
      v16 = m_Items[v14];
      if ( !v16 )
        goto LABEL_39;
      if ( v16->fields.id == menber + 1 )
        break;
      if ( (int)++v14 >= max_length )
        return v13;
    }
    if ( !v16->fields.isFollowerSvt && v16->fields.userSvtId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v10 = Instance;
          if ( !LODWORD(Instance->fields.basePanel) )
          {
LABEL_40:
            v23 = sub_B2C460(Instance);
            sub_B2C400(v23, 0LL);
          }
          Instance->fields.baseWindow = (struct UIWidget_o *)v16->fields.userSvtId;
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase__isEntityExistsFromId(
                   MasterData_WarQuestSelectionMaster,
                   (System_Int64_array *)Instance,
                   0LL) )
            {
              userSvtEquipIds = v16->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v20 = 0LL;
                v21 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v22 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v22 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v20 >= v22->static_fields->SvtEquipMax
                    || (__int64)v20 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, 1LL);
                  if ( v20 >= userSvtEquipIds->max_length )
                    goto LABEL_40;
                  v10 = Instance;
                  if ( !Instance )
                    goto LABEL_39;
                  if ( !LODWORD(Instance->fields.basePanel) )
                    goto LABEL_40;
                  Instance->fields.baseWindow = (struct UIWidget_o *)v21[v20];
                  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_Int64_array *)Instance,
                                                   0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v20 >= userSvtEquipIds->max_length )
                      goto LABEL_40;
                    if ( !v13 )
                      goto LABEL_39;
                    if ( v20 >= v13->max_length )
                      goto LABEL_40;
                    v13->m_Items[v20] = v21[v20];
                  }
                  ++v20;
                }
              }
            }
            return v13;
          }
        }
      }
LABEL_39:
      sub_B2C434(Instance, v10);
    }
  }
  return v13;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_16765428(
        DeckServant_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v9; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x19
  BalanceConfig_c *v11; // x8
  System_Int64_array *v12; // x20
  struct DeckServantData_array *svts; // x10
  int max_length; // w8
  __int64 v15; // x9
  DeckServantData_o **m_Items; // x10
  DeckServantData_o *v17; // x11
  struct System_Int64_array *userSvtEquipIds; // x21
  unsigned __int64 v20; // x22
  int64_t *v21; // x26
  BalanceConfig_c *v22; // x0
  __int64 v23; // x0

  if ( (byte_4183687 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&long___TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4183687 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
  Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_38;
  v9 = Instance;
  if ( !LODWORD(Instance->fields.basePanel) )
  {
LABEL_39:
    v23 = sub_B2C460(Instance);
    sub_B2C400(v23, 0LL);
  }
  Instance->fields.baseWindow = (struct UIWidget_o *)userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                   MasterData_WarQuestSelectionMaster,
                                   (System_Int64_array *)Instance,
                                   0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return v12;
  svts = this->fields.svts;
  if ( !svts )
LABEL_38:
    sub_B2C434(Instance, v9);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        goto LABEL_39;
      v17 = m_Items[v15];
      if ( !v17 )
        goto LABEL_38;
      if ( v17->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v15 >= max_length )
        return v12;
    }
    if ( !v17->fields.isFollowerSvt )
    {
      userSvtEquipIds = v17->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v20 = 0LL;
        v21 = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v22 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v20 >= v22->static_fields->SvtEquipMax || (__int64)v20 >= (int)userSvtEquipIds->max_length )
            break;
          Instance = (WebViewManager_o *)sub_B2C374(long___TypeInfo, 1LL);
          if ( v20 >= userSvtEquipIds->max_length )
            goto LABEL_39;
          v9 = Instance;
          if ( !Instance )
            goto LABEL_38;
          if ( !LODWORD(Instance->fields.basePanel) )
            goto LABEL_39;
          Instance->fields.baseWindow = (struct UIWidget_o *)v21[v20];
          Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                           MasterData_WarQuestSelectionMaster,
                                           (System_Int64_array *)Instance,
                                           0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( v20 >= userSvtEquipIds->max_length )
              goto LABEL_39;
            if ( !v12 )
              goto LABEL_38;
            if ( v20 >= v12->max_length )
              goto LABEL_39;
            v12->m_Items[v20] = v21[v20];
          }
          ++v20;
        }
      }
    }
  }
  return v12;
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
  if ( (byte_4183685 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4183685 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&menber);
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
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
  this = (DeckServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)this,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
  __int64 v8; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v10; // x21
  il2cpp_array_size_t v11; // w22
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v13; // x25
  DeckServantData_o *v14; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v16; // w9
  __int64 v17; // x10
  int64_t *m_Items; // x11
  __int64 v20; // x0

  if ( (byte_4183688 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4183688 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_B2C374(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_33;
      *(_QWORD *)(Instance + 32) = v13->fields.userSvtId;
      if ( !v10 )
        goto LABEL_32;
      Instance = DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, 0LL);
      svts = this->fields.svts;
      if ( (Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v11 >= svts->max_length )
          goto LABEL_33;
        v14 = svts->m_Items[v11];
        if ( !v14 )
          goto LABEL_32;
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
    ++v11;
    if ( !svts )
      goto LABEL_32;
  }
  v17 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_33;
    if ( m_Items[v17] == userSvtId )
      break;
    if ( (int)++v17 >= v16 )
      goto LABEL_11;
  }
  Instance = sub_B2C374(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_B2C434(Instance, v8);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_33:
    v20 = sub_B2C460(Instance);
    sub_B2C400(v20, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v10, (System_Int64_array *)Instance, 0LL);
}


bool __fastcall DeckServant__IsEquip_16766488(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 Instance; // x0
  __int64 v10; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v13; // x22
  il2cpp_array_size_t v14; // w24
  DeckServantData_o *v15; // x26
  struct System_Int64_array *userSvtEquipIds; // x10
  int v17; // w8
  __int64 v18; // x9
  int64_t *m_Items; // x10
  __int64 v21; // x0

  if ( (byte_4183689 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&long___TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4183689 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = sub_B2C374(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v10 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_30;
      *(_QWORD *)(Instance + 32) = v15->fields.userSvtId;
      if ( !v13 )
        goto LABEL_29;
      Instance = DataMasterBase__isEntityExistsFromId(v13, (System_Int64_array *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
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
    if ( (int)++v14 >= max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v18 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( m_Items[v18] != userSvtId )
  {
    if ( (int)++v18 >= v17 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v15->fields.userSvtId;
  Instance = sub_B2C374(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_B2C434(Instance, v10);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_30:
    v21 = sub_B2C460(Instance);
    sub_B2C400(v21, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v13, (System_Int64_array *)Instance, 0LL);
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
    sub_B2C434(this, method);
  v3 = 0LL;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v3 >= max_length )
      break;
    if ( (unsigned int)v3 >= max_length )
    {
      v6 = sub_B2C460(this);
      sub_B2C400(v6, 0LL);
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