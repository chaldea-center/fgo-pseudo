void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A03C & 1) == 0 )
  {
    sub_B2C35C(&ServantLimitSpoilerProtectionMaster_TypeInfo, v1);
    byte_418A03C = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A037 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__,
      method);
    byte_418A037 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    310,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
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
  if ( (byte_418A039 & 1) == 0 )
  {
    sub_B2C35C(&ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount);
    byte_418A039 = 1;
  }
  v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( (BYTE3(ServantLimitSpoilerProtectionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo);
    v4 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v4->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      LIMIT_COUNT_THIRD_STAGE = v4->static_fields->LIMIT_COUNT_THIRD_STAGE;
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
  if ( (byte_418A038 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_B2C35C(&OptionManager_TypeInfo, v8);
    byte_418A038 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  FriendCostume = OptionManager__GetFriendCostume(0LL);
  if ( limitCount >= 11 && !FriendCostume )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    limitCount = v10->static_fields->ServantLimitMax;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  System_String_o *PK; // x1

  if ( (byte_418A035 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418A035 = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                    PK,
                                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  _DWORD *v31; // x0
  __int64 v32; // x1
  _DWORD *v33; // x24
  __int64 v34; // x9
  int v35; // w19
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  System_Collections_Generic_List_int__o *v42; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_418A03A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&ServantLimitSpoilerProtectionEntity_TypeInfo, v16);
    byte_418A03A = 1;
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                      Enumerator,
                      *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_37;
    v34 = *(&ServantLimitSpoilerProtectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) < (unsigned int)v34
      || *(ServantLimitSpoilerProtectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v34 - 8) != ServantLimitSpoilerProtectionEntity_TypeInfo )
    {
      sub_B2C728(v31);
LABEL_37:
      sub_B2C434(v31, v32);
    }
    v35 = v31[4];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v6;
    *(_QWORD *)&v43.fields.fakeValue = v5;
    if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v43, 0LL) && v33[5] == limitCount )
    {
      if ( !v42 )
        sub_B2C434(0LL, v36);
      System_Collections_Generic_List_int___Add(
        v42,
        v33[6],
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v42;
  if ( !v42 )
LABEL_39:
    sub_B2C434(list, v17);
  return System_Collections_Generic_List_int___ToArray(
           v42,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  DataManager_o *SpoilerProtectionData; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x19
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v13; // x21
  int32_t v14; // w20
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_418A03B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418A03B = 1;
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v6;
  *(_QWORD *)&v17.fields.fakeValue = v5;
  SpoilerProtectionData = (DataManager_o *)ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
                                             this,
                                             v17,
                                             limitCount,
                                             method);
  if ( !SpoilerProtectionData )
    goto LABEL_14;
  v11 = SpoilerProtectionData;
  if ( !SpoilerProtectionData->fields.datalist )
    return 1;
  datalist = SpoilerProtectionData->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)datalist )
      {
        v16 = sub_B2C460(SpoilerProtectionData);
        sub_B2C400(v16, 0LL);
      }
      v14 = *((_DWORD *)&v11->fields.lookup + v13);
      SpoilerProtectionData = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 SpoilerProtectionData,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)CommonReleaseMaster__IsOpen(
                                                 (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                 v14,
                                                 0LL,
                                                 0,
                                                 0LL);
      if ( ((unsigned __int8)SpoilerProtectionData & 1) != 0 )
        return 1;
      LODWORD(datalist) = v11->fields.datalist;
      if ( (__int64)++v13 >= (int)datalist )
        return 0;
    }
LABEL_14:
    sub_B2C434(SpoilerProtectionData, v10);
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

  if ( (byte_418A036 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__,
      entity);
    byte_418A036 = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}