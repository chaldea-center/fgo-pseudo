void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DeckServant___ctor_16952084(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DeckServant_Fields *p_fields; // x22
  _QWORD **v14; // x24
  __int64 v15; // x23
  __int16 v16; // w8
  __int64 v17; // x23
  __int64 v18; // x23
  __int64 v19; // x23
  il2cpp_array_size_t v20; // w26
  __int64 v21; // x24
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v23; // x23
  const MethodInfo *v24; // x1
  __int64 v25; // x0
  __int64 v26; // x1
  struct DeckServantData_array *v27; // x8
  __int64 v28; // x8
  struct DeckServantData_array *v29; // x8
  il2cpp_array_size_t v30; // w9
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_42E44E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_DeckWaveServantData___, sum, userEquipId, method);
    sub_B5D5C4(&DeckServantData___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&DeckServantData_TypeInfo, v10, v11, v12);
    byte_42E44E2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5D5DC(DeckServantData___TypeInfo, (unsigned int)sum);
  sub_B5D560(&this->fields);
  v14 = (_QWORD **)Method_System_Array_Empty_DeckWaveServantData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AF52C4(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AF52C4(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(*v14[6]);
  this->fields.waveSvts = **(struct DeckWaveServantData_array ***)(v19 + 184);
  sub_B5D560(&this->fields.waveSvts);
  if ( sum >= 1 )
  {
    v20 = 0;
    v21 = 32LL;
    do
    {
      svts = p_fields->svts;
      v23 = (DeckServantData_o *)sub_B5D694(DeckServantData_TypeInfo);
      DeckServantData___ctor(v23, v24);
      if ( !svts )
        goto LABEL_28;
      if ( v23 && !sub_B5D684(v23, svts->obj.klass->_1.element_class) )
      {
        v33 = sub_B5D6BC();
        sub_B5D668(v33, 0LL);
      }
      if ( v20 >= svts->max_length )
        goto LABEL_29;
      *(Il2CppClass **)((char *)&svts->obj.klass + v21) = (Il2CppClass *)v23;
      v25 = sub_B5D560((char *)svts + v21);
      v27 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      if ( v20 >= v27->max_length )
      {
LABEL_29:
        v32 = sub_B5D6C8();
        sub_B5D668(v32, 0LL);
      }
      v28 = *(__int64 *)((char *)&v27->obj.klass + v21);
      if ( !v28 )
        goto LABEL_28;
      *(_DWORD *)(v28 + 16) = v20 + 1;
      v29 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      v30 = v20;
      if ( v20 >= v29->max_length )
        goto LABEL_29;
      v31 = *(__int64 *)((char *)&v29->obj.klass + v21);
      if ( !v31 )
LABEL_28:
        sub_B5D69C(v25, v26);
      ++v20;
      v21 += 8LL;
      *(_DWORD *)(v31 + 76) = v30 + 1;
    }
    while ( (int)(v30 + 1) < sum );
  }
  this->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_16952852(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DeckServant_Fields *p_fields; // x25
  struct DeckWaveServantData_array **p_waveSvts; // x23
  il2cpp_array_size_t v19; // w28
  __int64 v20; // x19
  struct DeckServantData_array *svts; // x22
  DeckServantData_o *v22; // x26
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  struct DeckServantData_array *v26; // x8
  __int64 v27; // x9
  int v28; // w8
  int v29; // w9
  struct DeckServantData_array *v30; // x10
  __int64 v31; // x10
  il2cpp_array_size_t v32; // w27
  int v33; // w28
  struct DeckWaveServantData_array *v34; // x19
  DeckWaveServantData_o *v35; // x24
  const MethodInfo *v36; // x1
  Il2CppClass **v37; // x0
  struct DeckWaveServantData_array *v38; // x8
  DeckWaveServantData_o *v39; // x9
  int32_t v40; // w8
  unsigned __int64 v41; // x9
  struct DeckWaveServantData_array *v42; // x10
  DeckWaveServantData_o *v43; // x10
  struct System_Int32_array *uniqueIds; // x10
  int v45; // w11
  __int64 v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  DeckServant_o *v49; // [xsp+0h] [xbp-60h]

  if ( (byte_42E44E3 & 1) == 0 )
  {
    sub_B5D5C4(&DeckServantData___TypeInfo, waveNum, memberNum, userEquipId);
    sub_B5D5C4(&DeckServantData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DeckWaveServantData___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&DeckWaveServantData_TypeInfo, v14, v15, v16);
    byte_42E44E3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5D5DC(
                                                        DeckServantData___TypeInfo,
                                                        (unsigned int)(memberNum * waveNum));
  sub_B5D560(&this->fields);
  p_waveSvts = &this->fields.waveSvts;
  this->fields.waveSvts = (struct DeckWaveServantData_array *)sub_B5D5DC(
                                                                DeckWaveServantData___TypeInfo,
                                                                (unsigned int)waveNum);
  v49 = this;
  sub_B5D560(&this->fields.waveSvts);
  if ( memberNum * waveNum >= 1 )
  {
    v19 = 0;
    v20 = 32LL;
    while ( 1 )
    {
      svts = p_fields->svts;
      v22 = (DeckServantData_o *)sub_B5D694(DeckServantData_TypeInfo);
      DeckServantData___ctor(v22, v23);
      if ( !svts )
        break;
      if ( v22 && !sub_B5D684(v22, svts->obj.klass->_1.element_class) )
      {
LABEL_39:
        v48 = sub_B5D6BC();
        sub_B5D668(v48, 0LL);
      }
      if ( v19 >= svts->max_length )
        goto LABEL_38;
      *(Il2CppClass **)((char *)&svts->obj.klass + v20) = (Il2CppClass *)v22;
      v24 = sub_B5D560((char *)svts + v20);
      v26 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v19 >= v26->max_length )
      {
LABEL_38:
        v47 = sub_B5D6C8();
        sub_B5D668(v47, 0LL);
      }
      v27 = *(__int64 *)((char *)&v26->obj.klass + v20);
      if ( !v27 )
        break;
      v28 = v19 + 1;
      *(_DWORD *)(v27 + 16) = v19 + 1;
      v29 = v19 + 1;
      if ( (int)(v19 + 1) > memberNum )
        v29 = (int)v19 % memberNum + 1;
      v30 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v19 >= v30->max_length )
        goto LABEL_38;
      v31 = *(__int64 *)((char *)&v30->obj.klass + v20);
      if ( !v31 )
        break;
      v20 += 8LL;
      ++v19;
      *(_DWORD *)(v31 + 76) = v29;
      if ( v28 >= memberNum * waveNum )
        goto LABEL_18;
    }
LABEL_37:
    sub_B5D69C(v24, v25);
  }
LABEL_18:
  if ( waveNum >= 1 )
  {
    v32 = 0;
    v33 = 1;
    while ( 1 )
    {
      v34 = *p_waveSvts;
      v35 = (DeckWaveServantData_o *)sub_B5D694(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v35, v36);
      if ( !v34 )
        goto LABEL_37;
      if ( v35 && !sub_B5D684(v35, v34->obj.klass->_1.element_class) )
        goto LABEL_39;
      if ( v32 >= v34->max_length )
        goto LABEL_38;
      v37 = &v34->obj.klass + (int)v32;
      v37[4] = (Il2CppClass *)v35;
      v24 = sub_B5D560(v37 + 4);
      v38 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v32 >= v38->max_length )
        goto LABEL_38;
      v39 = v38->m_Items[v32];
      if ( !v39 )
        goto LABEL_37;
      v40 = v32 + 1;
      v39->fields.wave = v32 + 1;
      if ( memberNum >= 1 )
        break;
LABEL_35:
      v33 += memberNum;
      ++v32;
      if ( v40 >= waveNum )
        goto LABEL_36;
    }
    v41 = 0LL;
    while ( 1 )
    {
      v42 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v32 >= v42->max_length )
        goto LABEL_38;
      v43 = v42->m_Items[v32];
      if ( !v43 )
        goto LABEL_37;
      uniqueIds = v43->fields.uniqueIds;
      if ( !uniqueIds )
        goto LABEL_37;
      if ( v41 >= uniqueIds->max_length )
        goto LABEL_38;
      v45 = v33 + v41;
      v46 = (__int64)uniqueIds + 4 * v41++;
      *(_DWORD *)(v46 + 32) = v45;
      if ( (__int64)v41 >= memberNum )
        goto LABEL_35;
    }
  }
LABEL_36:
  v49->fields.userEquipId = userEquipId;
}


void __fastcall DeckServant___ctor_16953756(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DeckServant_Fields *p_fields; // x21
  __int64 v11; // x0
  __int64 v12; // x1
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

  if ( (byte_42E44E4 & 1) == 0 )
  {
    sub_B5D5C4(&DeckServantData___TypeInfo, sum, (_DWORD)deckInfo, method);
    sub_B5D5C4(&DeckServantData_TypeInfo, v7, v8, v9);
    byte_42E44E4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  p_fields = &this->fields;
  this->fields.svts = (struct DeckServantData_array *)sub_B5D5DC(DeckServantData___TypeInfo, (unsigned int)sum);
  v11 = sub_B5D560(&this->fields);
  if ( !deckInfo )
LABEL_24:
    sub_B5D69C(v11, v12);
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
          v11 = sub_B5D684(v18, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !v11 )
            goto LABEL_26;
        }
        if ( v13 >= v17[6] )
          goto LABEL_25;
        v19 = &v17[2 * v13];
        *((_QWORD *)v19 + 4) = v18;
        v11 = sub_B5D560(v19 + 8);
        ++v13;
      }
      else
      {
        v20 = (unsigned int *)p_fields->svts;
        v21 = (DeckServantData_o *)sub_B5D694(DeckServantData_TypeInfo);
        DeckServantData___ctor(v21, v22);
        if ( !v20 )
          goto LABEL_24;
        if ( v21 )
        {
          v11 = sub_B5D684(v21, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
          if ( !v11 )
          {
LABEL_26:
            v27 = sub_B5D6BC();
            sub_B5D668(v27, 0LL);
          }
        }
        if ( v13 >= v20[6] )
          goto LABEL_25;
        v23 = &v20[2 * v13];
        *((_QWORD *)v23 + 4) = v21;
        v11 = sub_B5D560(v23 + 8);
        v24 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v13 >= v24->max_length )
        {
LABEL_25:
          v26 = sub_B5D6C8(v11);
          sub_B5D668(v26, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 Instance; // x0
  __int64 v23; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v25; // x22
  unsigned int v26; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v28; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  unsigned int v31; // w28
  __int64 v32; // x9
  DeckServantData_o *v33; // x10
  unsigned __int64 v34; // x28
  DeckServantData_o *v35; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v37; // x10
  int64_t v38; // x23
  int32_t v39; // w8
  unsigned int v40; // w26
  __int64 v41; // x0

  if ( (byte_42E44EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)svtCollectList,
      (_DWORD)equipCollectList,
      method);
    sub_B5D5C4(&long___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42E44EA = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_50;
    v25 = (DataMasterBase_o *)Instance;
    v26 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v26 >= (int)max_length )
        return;
      if ( v26 >= max_length )
        goto LABEL_52;
      v28 = svts->m_Items[v26];
      if ( !v28 )
        goto LABEL_50;
      userSvtId = v28->fields.userSvtId;
      Instance = sub_B5D5DC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_50;
      v23 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_52;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v25 )
        goto LABEL_50;
      Instance = DataMasterBase__isEntityExistsFromId(v25, (System_Int64_array *)Instance, 0LL);
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
              (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
        else
        {
          v31 = 0;
          while ( 1 )
          {
            if ( size <= v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            if ( svtCollectList->fields._items->m_Items[v31] == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( (int)++v31 >= size )
              goto LABEL_21;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_50;
        v32 = *(_QWORD *)&svts->max_length;
        if ( v26 >= (unsigned int)v32 )
          goto LABEL_52;
        v33 = svts->m_Items[v26];
        if ( !v33 )
          goto LABEL_50;
        if ( v33->fields.userSvtEquipIds )
        {
          if ( v26 >= (unsigned int)v32 )
          {
LABEL_52:
            v41 = sub_B5D6C8(Instance);
            sub_B5D668(v41, 0LL);
          }
          v34 = 0LL;
          while ( 1 )
          {
            v35 = svts->m_Items[v26];
            if ( !v35 )
              break;
            userSvtEquipIds = v35->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v37 = userSvtEquipIds->max_length;
            if ( (__int64)v34 >= (int)v37 )
              goto LABEL_49;
            if ( v34 >= v37 )
              goto LABEL_52;
            v38 = userSvtEquipIds->m_Items[v34];
            Instance = sub_B5D5DC(long___TypeInfo, 1LL);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_52;
            *(_QWORD *)(Instance + 32) = v38;
            Instance = DataMasterBase__isEntityExistsFromId(v25, (System_Int64_array *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v39 = equipCollectList->fields._size;
              if ( v39 < 1 )
              {
LABEL_43:
                if ( v38 >= 1 )
                  System_Collections_Generic_List_long___Add(
                    equipCollectList,
                    v38,
                    (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
              }
              else
              {
                v40 = 0;
                while ( 1 )
                {
                  if ( v39 <= v40 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  if ( equipCollectList->fields._items->m_Items[v40] == v38 )
                    break;
                  v39 = equipCollectList->fields._size;
                  if ( (int)++v40 >= v39 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v34;
            if ( v26 >= svts->max_length )
              goto LABEL_52;
          }
LABEL_50:
          sub_B5D69C(Instance, v23);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_49:
      ++v26;
      if ( !svts )
        goto LABEL_50;
    }
  }
}


System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BalanceConfig_c *v15; // x0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v17; // x1
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v20; // x19
  __int64 v21; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v23; // x23
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v27; // x24
  int64_t *v28; // x26
  BalanceConfig_c *v29; // x0
  __int64 v30; // x0

  if ( (byte_42E44E6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menber, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&long___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E44E6 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  Instance = (WebViewManager_o *)sub_B5D5DC(long___TypeInfo, (unsigned int)v15->static_fields->SvtEquipMax);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_39;
  max_length = svts->max_length;
  v20 = (System_Int64_array *)Instance;
  if ( max_length >= 1 )
  {
    v21 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= max_length )
        goto LABEL_40;
      v23 = m_Items[v21];
      if ( !v23 )
        goto LABEL_39;
      if ( v23->fields.id == menber + 1 )
        break;
      if ( (int)++v21 >= max_length )
        return v20;
    }
    if ( !v23->fields.isFollowerSvt && v23->fields.userSvtId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        Instance = (WebViewManager_o *)sub_B5D5DC(long___TypeInfo, 1LL);
        if ( Instance )
        {
          v17 = Instance;
          if ( !LODWORD(Instance->fields.basePanel) )
          {
LABEL_40:
            v30 = sub_B5D6C8(Instance);
            sub_B5D668(v30, 0LL);
          }
          Instance->fields.baseWindow = (struct UIWidget_o *)v23->fields.userSvtId;
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase__isEntityExistsFromId(
                   MasterData_WarQuestSelectionMaster,
                   (System_Int64_array *)Instance,
                   0LL) )
            {
              userSvtEquipIds = v23->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v27 = 0LL;
                v28 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v29 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v29 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v27 >= v29->static_fields->SvtEquipMax
                    || (__int64)v27 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  Instance = (WebViewManager_o *)sub_B5D5DC(long___TypeInfo, 1LL);
                  if ( v27 >= userSvtEquipIds->max_length )
                    goto LABEL_40;
                  v17 = Instance;
                  if ( !Instance )
                    goto LABEL_39;
                  if ( !LODWORD(Instance->fields.basePanel) )
                    goto LABEL_40;
                  Instance->fields.baseWindow = (struct UIWidget_o *)v28[v27];
                  Instance = (WebViewManager_o *)DataMasterBase__isEntityExistsFromId(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (System_Int64_array *)Instance,
                                                   0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( v27 >= userSvtEquipIds->max_length )
                      goto LABEL_40;
                    if ( !v20 )
                      goto LABEL_39;
                    if ( v27 >= v20->max_length )
                      goto LABEL_40;
                    v20->m_Items[v27] = v28[v27];
                  }
                  ++v27;
                }
              }
            }
            return v20;
          }
        }
      }
LABEL_39:
      sub_B5D69C(Instance, v17);
    }
  }
  return v20;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_16955100(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x20
  BalanceConfig_c *v20; // x8
  System_Int64_array *v21; // x21
  WarQuestSelectionMaster_o *isEntityExistsFromId; // x0
  WarQuestSelectionMaster_o *v23; // x1
  struct DeckServantData_array *svts; // x10
  int max_length; // w8
  __int64 v26; // x9
  DeckServantData_o **m_Items; // x10
  DeckServantData_o *v28; // x11
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v31; // x23
  int64_t *v32; // x27
  BalanceConfig_c *v33; // x0
  __int64 v34; // x0

  if ( (byte_42E44E7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, isInterruption, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&long___TypeInfo, v16, v17, v18);
    byte_42E44E7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v20->static_fields->SvtEquipMax);
  isEntityExistsFromId = (WarQuestSelectionMaster_o *)sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !isEntityExistsFromId )
    goto LABEL_45;
  v23 = isEntityExistsFromId;
  if ( !LODWORD(isEntityExistsFromId->fields._MasterName_k__BackingField) )
  {
LABEL_46:
    v34 = sub_B5D6C8(isEntityExistsFromId);
    sub_B5D668(v34, 0LL);
  }
  isEntityExistsFromId->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)userSvtId;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  if ( !DataMasterBase__isEntityExistsFromId(
          Master_WarQuestSelectionMaster,
          (System_Int64_array *)isEntityExistsFromId,
          0LL)
    && !isInterruption )
  {
    return v21;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isEntityExistsFromId = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_45:
    sub_B5D69C(isEntityExistsFromId, v23);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= max_length )
        goto LABEL_46;
      v28 = m_Items[v26];
      if ( !v28 )
        goto LABEL_45;
      if ( v28->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v26 >= max_length )
        return v21;
    }
    if ( !v28->fields.isFollowerSvt )
    {
      userSvtEquipIds = v28->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v31 = 0LL;
        v32 = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v33 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v33 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v31 >= v33->static_fields->SvtEquipMax || (__int64)v31 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = (WarQuestSelectionMaster_o *)sub_B5D5DC(long___TypeInfo, 1LL);
          if ( v31 >= userSvtEquipIds->max_length )
            goto LABEL_46;
          v23 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_45;
          if ( !LODWORD(isEntityExistsFromId->fields._MasterName_k__BackingField) )
            goto LABEL_46;
          isEntityExistsFromId->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v32[v31];
          isEntityExistsFromId = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                Master_WarQuestSelectionMaster,
                                                                (System_Int64_array *)isEntityExistsFromId,
                                                                0LL);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v31 >= userSvtEquipIds->max_length )
              goto LABEL_46;
            if ( !v21 )
              goto LABEL_45;
            if ( v31 >= v21->max_length )
              goto LABEL_46;
            v21->m_Items[v31] = v32[v31];
          }
          ++v31;
        }
      }
    }
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall DeckServant__GetUserServant(
        DeckServant_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DeckServant_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct DeckServantData_array *svts; // x8
  __int64 v13; // x21
  int v14; // w20
  int max_length; // w9
  DeckServantData_o *v16; // x25
  __int64 v18; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E44E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, menber, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7, v8);
    this = (DeckServant_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E44E5 = 1;
  }
  entity = 0LL;
  svts = v5->fields.svts;
  if ( !svts )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&menber);
  v13 = 0LL;
  v14 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v13 >= max_length )
      return 0LL;
    if ( (unsigned int)v13 >= max_length )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
    }
    v16 = svts->m_Items[v13];
    if ( !v16 )
      goto LABEL_16;
    if ( v16->fields.id == v14 && !v16->fields.isFollowerSvt && v16->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v13;
    if ( !svts )
      goto LABEL_16;
  }
  this = (DeckServant_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)this,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                            &entity,
                            v16->fields.userSvtId,
                            (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v5->fields.svts;
    goto LABEL_15;
  }
  return entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 Instance; // x0
  __int64 v13; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v15; // x21
  il2cpp_array_size_t v16; // w22
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v18; // x25
  DeckServantData_o *v19; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v21; // w9
  __int64 v22; // x10
  int64_t *m_Items; // x11
  __int64 v25; // x0

  if ( (byte_42E44E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E44E8 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v15 = (DataMasterBase_o *)Instance;
  v16 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v16 >= (int)max_length )
      return 0;
    if ( v16 >= max_length )
      goto LABEL_33;
    v18 = svts->m_Items[v16];
    if ( !v18 )
      goto LABEL_32;
    if ( !v18->fields.isFollowerSvt && v18->fields.userSvtId >= 1 )
    {
      Instance = sub_B5D5DC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_32;
      v13 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_33;
      *(_QWORD *)(Instance + 32) = v18->fields.userSvtId;
      if ( !v15 )
        goto LABEL_32;
      Instance = DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, 0LL);
      svts = this->fields.svts;
      if ( (Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v16 >= svts->max_length )
          goto LABEL_33;
        v19 = svts->m_Items[v16];
        if ( !v19 )
          goto LABEL_32;
        userSvtEquipIds = v19->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v21 = userSvtEquipIds->max_length;
          if ( v21 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v16;
    if ( !svts )
      goto LABEL_32;
  }
  v22 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v22 >= v21 )
      goto LABEL_33;
    if ( m_Items[v22] == userSvtId )
      break;
    if ( (int)++v22 >= v21 )
      goto LABEL_11;
  }
  Instance = sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_32:
    sub_B5D69C(Instance, v13);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_33:
    v25 = sub_B5D6C8(Instance);
    sub_B5D668(v25, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)Instance, 0LL);
}


bool __fastcall DeckServant__IsEquip_16956244(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 Instance; // x0
  __int64 v14; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v17; // x22
  il2cpp_array_size_t v18; // w24
  DeckServantData_o *v19; // x26
  struct System_Int64_array *userSvtEquipIds; // x10
  int v21; // w8
  __int64 v22; // x9
  int64_t *m_Items; // x10
  __int64 v25; // x0

  if ( (byte_42E44E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)equipedUserSvtId, method);
    sub_B5D5C4(&long___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E44E9 = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v17 = (DataMasterBase_o *)Instance;
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= svts->max_length )
      goto LABEL_30;
    v19 = svts->m_Items[v18];
    if ( !v19 )
      goto LABEL_29;
    if ( !v19->fields.isFollowerSvt && v19->fields.userSvtId >= 1 )
    {
      Instance = sub_B5D5DC(long___TypeInfo, 1LL);
      if ( !Instance )
        goto LABEL_29;
      v14 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_30;
      *(_QWORD *)(Instance + 32) = v19->fields.userSvtId;
      if ( !v17 )
        goto LABEL_29;
      Instance = DataMasterBase__isEntityExistsFromId(v17, (System_Int64_array *)Instance, 0LL);
      if ( (Instance & 1) != 0 )
      {
        userSvtEquipIds = v19->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v21 = userSvtEquipIds->max_length;
          if ( v21 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( (int)++v18 >= max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v22 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( m_Items[v22] != userSvtId )
  {
    if ( (int)++v22 >= v21 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v19->fields.userSvtId;
  Instance = sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !Instance )
LABEL_29:
    sub_B5D69C(Instance, v14);
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_30:
    v25 = sub_B5D6C8(Instance);
    sub_B5D668(v25, 0LL);
  }
  *(_QWORD *)(Instance + 32) = userSvtId;
  return DataMasterBase__isEntityExistsFromId(v17, (System_Int64_array *)Instance, 0LL);
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
    sub_B5D69C(this, method);
  v3 = 0LL;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v3 >= max_length )
      break;
    if ( (unsigned int)v3 >= max_length )
    {
      v6 = sub_B5D6C8(this);
      sub_B5D668(v6, 0LL);
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