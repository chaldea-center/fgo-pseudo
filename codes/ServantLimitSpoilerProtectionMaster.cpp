void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B453CF & 1) == 0 )
  {
    sub_1BDB878(&ServantLimitSpoilerProtectionMaster_TypeInfo, v1);
    byte_4B453CF = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B453CA & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__,
      method);
    byte_4B453CA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
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
  if ( (byte_4B453CC & 1) == 0 )
  {
    sub_1BDB878(&ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount);
    byte_4B453CC = 1;
  }
  v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( !ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo);
    v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
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
  bool FriendCostume; // w0
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x4
  BalanceConfig_c *v12; // x0
  BalanceConfig_c *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B453CB & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1BDB878(&OptionManager_TypeInfo, v8);
    byte_4B453CB = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  FriendCostume = OptionManager__GetFriendCostume(0LL);
  if ( limitCount >= 11 && !FriendCostume )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    limitCount = v10->static_fields->ServantLimitMax;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    limitCount -= limitCount == v12->static_fields->ServantLimitMax;
  }
  do
  {
    *(_QWORD *)&v15.fields.currentCryptoKey = v6;
    *(_QWORD *)&v15.fields.fakeValue = v5;
    if ( ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(this, v15, limitCount, v11) )
      break;
    if ( limitCount >= 11 )
    {
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      limitCount = v13->static_fields->ServantLimitMax;
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

  if ( (byte_4B453C8 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B453C8 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(
                         svtId,
                         limitCount,
                         *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_32E68F4 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *v16; // x20
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  _DWORD *v30; // x24
  int v31; // w25
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B453CD & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_ServantLimitSpoilerProtectionEntity__GetEnumerator__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo, v9);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4B453CD = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_327DBFC *)Method_System_Collections_ObjectModel_Collection_ServantLimitSpoilerProtectionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_1C2C00C(
              Enumerator,
              System_Collections_Generic_IEnumerator_ServantLimitSpoilerProtectionEntity__TypeInfo,
              0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                      Enumerator,
                      *(_QWORD *)(v28 + 8));
    if ( !v30 )
      sub_1BDBAD4(0LL, v29);
    v31 = v30[4];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v6;
    *(_QWORD *)&v43.fields.fakeValue = v5;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v43, 0LL);
    if ( v31 == (_DWORD)v32 && v30[5] == limitCount )
    {
      if ( !v16 )
        sub_1BDBAD4(v32, v33);
      v34 = (unsigned int)v30[6];
      items = v16->fields._items;
      v36 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !items )
        sub_1BDBAD4(v32, v34);
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          v34,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v16->fields._size = size + 1;
        items->m_Items[size + 1] = v34;
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_32;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_32:
    v41 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  if ( !v16 )
LABEL_39:
    sub_1BDBAD4(list, v17);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Int32_array *SpoilerProtectionData; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  int32_t v15; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4B453CE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B453CE = 1;
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
          sub_1BDBADC(SpoilerProtectionData, v10, v11);
        v15 = v12->m_Items[v14 + 1];
        SpoilerProtectionData = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)SpoilerProtectionData,
                                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
      sub_1BDBAD4(SpoilerProtectionData, v10);
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

  if ( (byte_4B453C9 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__,
      entity);
    byte_4B453C9 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}