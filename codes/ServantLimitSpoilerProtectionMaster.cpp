void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  if ( (byte_42B24F7 & 1) == 0 )
  {
    sub_B52984(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    byte_42B24F7 = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B24F2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
    byte_42B24F2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    311,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
}


int32_t __fastcall ServantLimitSpoilerProtectionMaster__AdjustLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitSpoilerProtectionMaster_c *v4; // x0

  if ( (byte_42B24F4 & 1) == 0 )
  {
    sub_B52984(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    byte_42B24F4 = 1;
  }
  v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( (BYTE3(ServantLimitSpoilerProtectionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo);
    v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( limitCount <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < limitCount )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      limitCount = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        return ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
      }
    }
    else
    {
      return v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return limitCount;
}


int32_t __fastcall ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x20
  bool FriendCostume; // w0
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x4
  BalanceConfig_c *v11; // x0
  BalanceConfig_c *v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42B24F3 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B24F3 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  FriendCostume = OptionManager__GetFriendCostume(0LL);
  if ( limitCount >= 11 && !FriendCostume )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    limitCount = v9->static_fields->ServantLimitMax;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    limitCount -= limitCount == v11->static_fields->ServantLimitMax;
  }
  do
  {
    *(_QWORD *)&v14.fields.currentCryptoKey = v6;
    *(_QWORD *)&v14.fields.fakeValue = v5;
    if ( ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(this, v14, limitCount, v10) )
      break;
    if ( limitCount >= 11 )
    {
      v12 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      limitCount = v12->static_fields->ServantLimitMax;
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
  System_String_o *PK; // x1

  if ( (byte_42B24F0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
    byte_42B24F0 = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                    PK,
                                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  _DWORD *v24; // x24
  __int64 v25; // x9
  int v26; // w19
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  System_Collections_Generic_List_int__o *v33; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42B24F5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantLimitSpoilerProtectionEntity_TypeInfo);
    byte_42B24F5 = 1;
  }
  v33 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      Enumerator,
                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      goto LABEL_37;
    v25 = *(&ServantLimitSpoilerProtectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v25
      || *(ServantLimitSpoilerProtectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v25 - 8) != ServantLimitSpoilerProtectionEntity_TypeInfo )
    {
      sub_B52D50(v22);
LABEL_37:
      sub_B52A5C(v22, v23);
    }
    v26 = v22[4];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v6;
    *(_QWORD *)&v34.fields.fakeValue = v5;
    if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL) && v24[5] == limitCount )
    {
      if ( !v33 )
        sub_B52A5C(0LL, v27);
      System_Collections_Generic_List_int___Add(
        v33,
        v24[6],
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_32:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v33;
  if ( !v33 )
LABEL_39:
    sub_B52A5C(list, v8);
  return System_Collections_Generic_List_int___ToArray(
           v33,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  DataManager_o *SpoilerProtectionData; // x0
  __int64 v9; // x1
  DataManager_o *v10; // x19
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v12; // x21
  int32_t v13; // w20
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42B24F6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B24F6 = 1;
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  SpoilerProtectionData = (DataManager_o *)ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
                                             this,
                                             v16,
                                             limitCount,
                                             method);
  if ( !SpoilerProtectionData )
    goto LABEL_14;
  v10 = SpoilerProtectionData;
  if ( !SpoilerProtectionData->fields.datalist )
    return 1;
  datalist = SpoilerProtectionData->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)datalist )
      {
        v15 = sub_B52A88(SpoilerProtectionData);
        sub_B52A28(v15, 0LL);
      }
      v13 = *((_DWORD *)&v10->fields.lookup + v12);
      SpoilerProtectionData = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 SpoilerProtectionData,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)CommonReleaseMaster__IsOpen(
                                                 (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                 v13,
                                                 0LL,
                                                 0,
                                                 0LL);
      if ( ((unsigned __int8)SpoilerProtectionData & 1) != 0 )
        return 1;
      LODWORD(datalist) = v10->fields.datalist;
      if ( (__int64)++v12 >= (int)datalist )
        return 0;
    }
LABEL_14:
    sub_B52A5C(SpoilerProtectionData, v9);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitSpoilerProtectionMaster__TryGetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        ServantLimitSpoilerProtectionEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B24F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
    byte_42B24F1 = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}