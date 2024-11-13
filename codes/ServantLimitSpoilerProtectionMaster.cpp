void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16A7B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLimitSpoilerProtectionMaster_TypeInfo, v1, v2);
    byte_4B16A7B = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A76 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__,
      method,
      v2);
    byte_4B16A76 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    312,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitSpoilerProtectionMaster__AdjustLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int LIMIT_COUNT_THIRD_STAGE; // w19
  ServantLimitSpoilerProtectionMaster_c *v4; // x0

  LIMIT_COUNT_THIRD_STAGE = limitCount;
  if ( (byte_4B16A78 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount, method);
    byte_4B16A78 = 1;
  }
  v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( !ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount);
    v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, *(_QWORD *)&limitCount);
      return ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return LIMIT_COUNT_THIRD_STAGE;
}


int32_t __fastcall ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  bool FriendCostume; // w0
  __int64 v11; // x1
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  BalanceConfig_c *v15; // x0
  __int64 v16; // x1
  BalanceConfig_c *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B16A77 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey, *(_QWORD *)&svtId.fields.fakeValue);
    sub_1BCA7E0(&OptionManager_TypeInfo, v8, v9);
    byte_4B16A77 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey);
  FriendCostume = OptionManager__GetFriendCostume(0LL);
  if ( limitCount >= 11 && !FriendCostume )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11);
      v12 = BalanceConfig_TypeInfo;
    }
    limitCount = v12->static_fields->ServantLimitMax;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
  if ( !OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
      v15 = BalanceConfig_TypeInfo;
    }
    limitCount -= limitCount == v15->static_fields->ServantLimitMax;
  }
  do
  {
    *(_QWORD *)&v19.fields.currentCryptoKey = v6;
    *(_QWORD *)&v19.fields.fakeValue = v5;
    if ( ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(this, v19, limitCount, v14) )
      break;
    if ( limitCount >= 11 )
    {
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
        v17 = BalanceConfig_TypeInfo;
      }
      limitCount = v17->static_fields->ServantLimitMax;
    }
    else
    {
      --limitCount;
    }
  }
  while ( limitCount > 1 );
  return limitCount;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitSpoilerProtectionEntity_o *__fastcall ServantLimitSpoilerProtectionMaster__GetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16A74 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B16A74 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(
                         svtId,
                         limitCount,
                         *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x20
  __int64 v27; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  _DWORD *v39; // x0
  __int64 v40; // x1
  _DWORD *v41; // x24
  __int64 methodPtr_low; // x9
  int v43; // w25
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B16A79 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId.fields.currentCryptoKey,
      *(_QWORD *)&svtId.fields.fakeValue);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&ServantLimitSpoilerProtectionEntity_TypeInfo, v24, v25);
    byte_4B16A79 = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svtId.fields.currentCryptoKey,
                                                    *(_QWORD *)&svtId.fields.fakeValue,
                                                    *(_QWORD *)&limitCount);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                      Enumerator,
                      *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantLimitSpoilerProtectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitSpoilerProtectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v39 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitSpoilerProtectionEntity_TypeInfo )
    {
      sub_1BCACFC(v39);
LABEL_39:
      sub_1BCAA3C(v39, v40);
    }
    v43 = v39[4];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        ServantLimitSpoilerProtectionEntity_TypeInfo);
    *(_QWORD *)&v55.fields.currentCryptoKey = v6;
    *(_QWORD *)&v55.fields.fakeValue = v5;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v55, 0LL);
    if ( v43 == (_DWORD)v44 && v41[5] == limitCount )
    {
      if ( !v26 )
        sub_1BCAA3C(v44, v45);
      v46 = (unsigned int)v41[6];
      items = v26->fields._items;
      v48 = Method_System_Collections_Generic_List_int__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1BCAA3C(v44, v46);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v26,
          v46,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = size + 1;
        items->m_Items[size + 1] = v46;
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_34;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_34:
    v53 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                                             Enumerator,
                                                             *(_QWORD *)(v53 + 8));
  if ( !v26 )
LABEL_42:
    sub_1BCAA3C(list, v27);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *SpoilerProtectionData; // x0
  __int64 v11; // x1
  System_Int32_array *v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  int32_t v15; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B16A7A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_CommonReleaseMaster___,
      *(_QWORD *)&svtId.fields.currentCryptoKey,
      *(_QWORD *)&svtId.fields.fakeValue);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16A7A = 1;
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  SpoilerProtectionData = ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(this, v17, limitCount, method);
  if ( !SpoilerProtectionData )
    goto LABEL_16;
  v12 = SpoilerProtectionData;
  if ( *(_QWORD *)&SpoilerProtectionData->max_length )
  {
    v13 = *(_QWORD *)&SpoilerProtectionData->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          sub_1BCAA44(SpoilerProtectionData, v11);
        v15 = v12->m_Items[v14 + 1];
        SpoilerProtectionData = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)SpoilerProtectionData,
                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)CommonReleaseMaster__IsOpen(
                                                        (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                        v15,
                                                        0LL,
                                                        0,
                                                        0LL);
        if ( ((unsigned __int8)SpoilerProtectionData & 1) == 0 )
        {
          LODWORD(v13) = v12->max_length;
          if ( (__int64)++v14 < (int)v13 )
            continue;
        }
        return (unsigned __int8)SpoilerProtectionData & 1;
      }
LABEL_16:
      sub_1BCAA3C(SpoilerProtectionData, v11);
    }
    LOBYTE(SpoilerProtectionData) = 0;
  }
  else
  {
    LOBYTE(SpoilerProtectionData) = 1;
  }
  return (unsigned __int8)SpoilerProtectionData & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitSpoilerProtectionMaster__TryGetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        ServantLimitSpoilerProtectionEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16A75 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16A75 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}