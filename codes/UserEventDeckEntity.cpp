void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA202 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA202 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEventDeckEntity___ctor_28072316(
        UserEventDeckEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        int64_t userEquipId,
        int32_t waveNum,
        int32_t memberNum,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DeckServant_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct DeckServant_o **p_deckInfo; // x0
  System_Int32_array **v29; // x1
  BalanceConfig_c *v30; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v32; // x22

  if ( (byte_42EA203 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userId, eventId, *(_QWORD *)&deckNo);
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, v15, v16, v17);
    sub_B5D5C4(&DeckServant_TypeInfo, v18, v19, v20);
    byte_42EA203 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v30->static_fields->DeckMemberMax;
    v32 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
    DeckServant___ctor_16952084(v32, DeckMemberMax, userEquipId, 0LL);
    this->fields.deckInfo = v32;
    p_deckInfo = &this->fields.deckInfo;
    v29 = (System_Int32_array **)v32;
  }
  else
  {
    v21 = (DeckServant_o *)sub_B5D694(DeckServant_TypeInfo);
    DeckServant___ctor_16952852(v21, waveNum, memberNum, userEquipId, 0LL);
    this->fields.deckInfo = v21;
    p_deckInfo = &this->fields.deckInfo;
    v29 = (System_Int32_array **)v21;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_deckInfo, v29, v22, v23, v24, v25, v26, v27);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_42EA204 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, eventId, deckNo, method);
    byte_42EA204 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePrimaryKey(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v11; // x0

  if ( (byte_42EA205 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, menber, (_DWORD)method, v3);
    sub_B5D5C4(&long___TypeInfo, v6, v7, v8);
    byte_42EA205 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_28072948(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v12; // x0

  if ( (byte_42EA206 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, userSvtId, isInterruption, method);
    sub_B5D5C4(&long___TypeInfo, v7, v8, v9);
    byte_42EA206 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16955100(deckInfo, userSvtId, isInterruption, 0LL);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v12->static_fields->SvtEquipMax);
}


int32_t __fastcall UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserEventDeckEntity_o *v4; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v6; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v9; // x22
  int id; // w23
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42EA209 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA209 = 1;
  }
  deckInfo = v4->fields.deckInfo;
  if ( !deckInfo )
LABEL_17:
    sub_B5D69C(this, method);
  v6 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_17;
    max_length = svts->max_length;
    if ( (int)v6 >= max_length )
      return 0;
    if ( (unsigned int)v6 >= max_length )
    {
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
    }
    v9 = svts->m_Items[v6];
    if ( !v9 )
      goto LABEL_17;
    id = v9->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL)
        && v9->fields.isFollowerSvt
        && !v9->fields.npcFollowerSvtId )
      {
        return v9->fields.id;
      }
    }
    deckInfo = v4->fields.deckInfo;
    ++v6;
    if ( !deckInfo )
      goto LABEL_17;
  }
}


System_Collections_Generic_List_int__o *__fastcall UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  BalanceConfig_c *v15; // x0
  __int64 v16; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v20; // w21
  DeckServantData_o *v21; // x24
  int id; // w25
  __int64 v24; // x0

  if ( (byte_42EA20A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42EA20A = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_19;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_19;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v24 = sub_B5D6C8(v15);
        sub_B5D668(v24, 0LL);
      }
      v21 = svts->m_Items[v20];
      if ( !v21 )
        break;
      id = v21->fields.id;
      if ( id >= 1 )
      {
        v15 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v15 = BalanceConfig_TypeInfo;
        }
        if ( id <= v15->static_fields->DeckMemberMax && v21->fields.isFollowerSvt )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_int___Add(
            v14,
            v21->fields.id,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = svts->max_length;
      if ( (int)++v20 >= max_length )
        return v14;
    }
LABEL_19:
    sub_B5D69C(v15, v16);
  }
  return v14;
}


System_Int64_array *__fastcall UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_long__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v20; // w21
  DeckServantData_o *v21; // x8
  __int64 v23; // x0

  if ( (byte_42EA208 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v11, v12, v13);
    byte_42EA208 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_13;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_13;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v23 = sub_B5D6C8(v15);
        sub_B5D668(v23, 0LL);
      }
      v21 = svts->m_Items[v20];
      if ( !v21 || !v14 )
        break;
      System_Collections_Generic_List_long___Add(
        v14,
        v21->fields.npcFollowerSvtId,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      max_length = svts->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_B5D69C(v15, v16);
  }
LABEL_11:
  if ( !v14 )
    goto LABEL_13;
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
}


UserServantEntity_o *__fastcall UserEventDeckEntity__GetUserServant(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0LL);
  return result;
}


UserServantEntity_array *__fastcall UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        bool isInterruption,
        const MethodInfo *method)
{
  int v5; // w1
  char v6; // w2
  __int64 v7; // x3
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v33; // x19
  BalanceConfig_c *v34; // x8
  __int64 v35; // x0
  __int64 v36; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x28
  int max_length; // w8
  UserServantEntity_array *v40; // x24
  int i; // w19
  DeckServantData_o *v42; // x21
  int id; // w25
  int v44; // w27
  struct DeckServant_o *v45; // x8
  struct DeckWaveServantData_array *waveSvts; // x25
  int v47; // w8
  unsigned int v48; // w26
  DeckWaveServantData_o *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x25
  Il2CppClass **v57; // x0
  int64_t UserId; // x2
  UserServantCollectionEntity_o *v59; // x26
  __int64 v60; // x25
  int64_t userSvtId; // x26
  __int128 v62; // q1
  __int64 v64; // x0
  __int64 v65; // x0
  UserServantCollectionMaster_o *v66; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-80h]
  UserServantCollectionEntity_o *v71; // [xsp+60h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42EA207 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, wave, isInterruption, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v29, v30, v31);
    byte_42EA207 = 1;
  }
  entity = 0LL;
  v71 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v33 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v34 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  v35 = sub_B5D5DC(UserServantEntity___TypeInfo, (unsigned int)v34->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v66 = (UserServantCollectionMaster_o *)v33, !svts) )
LABEL_58:
    sub_B5D69C(v35, v36);
  max_length = svts->max_length;
  v40 = (UserServantEntity_array *)v35;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_59:
        v64 = sub_B5D6C8(v35);
        sub_B5D668(v64, 0LL);
      }
      v42 = svts->m_Items[i];
      if ( !v42 )
        goto LABEL_58;
      id = v42->fields.id;
      if ( id >= 1 )
      {
        if ( wave )
          goto LABEL_21;
        v35 = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v35 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id <= *(_DWORD *)(*(_QWORD *)(v35 + 184) + 156LL) )
        {
LABEL_21:
          if ( v42->fields.userSvtId >= 1 )
          {
            v44 = v42->fields.id - 1;
            if ( wave >= 1 )
            {
              v45 = this->fields.deckInfo;
              if ( !v45 )
                goto LABEL_58;
              waveSvts = v45->fields.waveSvts;
              if ( !waveSvts )
                goto LABEL_58;
              v47 = waveSvts->max_length;
              if ( v47 < 1 )
                goto LABEL_56;
              v48 = 0;
              while ( 1 )
              {
                if ( v48 >= v47 )
                  goto LABEL_59;
                v49 = waveSvts->m_Items[v48];
                if ( !v49 )
                  goto LABEL_58;
                if ( v49->fields.wave == wave )
                {
                  v35 = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)v49->fields.uniqueIds,
                          v42->fields.id,
                          (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
                  if ( (v35 & 1) != 0 )
                    break;
                }
                v47 = waveSvts->max_length;
                if ( (int)++v48 >= v47 )
                  goto LABEL_56;
              }
              v35 = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v35 = (__int64)BalanceConfig_TypeInfo;
              }
              v44 %= *(_DWORD *)(*(_QWORD *)(v35 + 184) + 160LL);
            }
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_58;
            v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    Master_WarQuestSelectionMaster,
                    &entity,
                    v42->fields.userSvtId,
                    (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( (v35 & 1) != 0 )
            {
              if ( !v40 )
                goto LABEL_58;
LABEL_40:
              v56 = (System_Int32_array **)entity;
              if ( entity )
              {
                v35 = sub_B5D684(entity, v40->obj.klass->_1.element_class);
                if ( !v35 )
                {
                  v65 = sub_B5D6BC(0LL);
                  sub_B5D668(v65, 0LL);
                }
              }
              if ( v44 >= v40->max_length )
                goto LABEL_59;
              v57 = &v40->obj.klass + v44;
              v57[4] = (Il2CppClass *)v56;
              sub_B5D560((BattleServantConfConponent_o *)(v57 + 4), v56, v50, v51, v52, v53, v54, v55);
              goto LABEL_56;
            }
            if ( isInterruption )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              v35 = (__int64)v66;
              if ( !v66 )
                goto LABEL_58;
              v35 = UserServantCollectionMaster__TryGetEntity(v66, &v71, UserId, v42->fields.svtId, 0LL);
              if ( (v35 & 1) != 0 )
              {
                v59 = v71;
                v60 = sub_B5D694(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21827392((UserServantEntity_o *)v60, v59, 0LL);
                entity = (UserServantEntity_o *)v60;
                userSvtId = v42->fields.userSvtId;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v35 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, userSvtId, 0LL);
                v70 = v69;
                if ( !v60 )
                  goto LABEL_58;
                v62 = *(_OWORD *)&v70.fields.fakeValue;
                *(_OWORD *)(v60 + 16) = *(_OWORD *)&v70.fields.currentCryptoKey;
                *(_OWORD *)(v60 + 32) = v62;
                if ( !v40 )
                  goto LABEL_58;
                goto LABEL_40;
              }
            }
          }
        }
      }
LABEL_56:
      max_length = svts->max_length;
    }
  }
  return v40;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}