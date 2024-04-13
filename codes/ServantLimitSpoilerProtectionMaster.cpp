void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE54 & 1) == 0 )
  {
    sub_B5D5C4(&ServantLimitSpoilerProtectionMaster_TypeInfo, v1, v2, v3);
    byte_42EAE54 = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE4F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAE4F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    311,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
}


int32_t __fastcall ServantLimitSpoilerProtectionMaster__AdjustLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int LIMIT_COUNT_THIRD_STAGE; // w19
  ServantLimitSpoilerProtectionMaster_c *v5; // x0

  LIMIT_COUNT_THIRD_STAGE = limitCount;
  if ( (byte_42EAE51 & 1) == 0 )
  {
    sub_B5D5C4(&ServantLimitSpoilerProtectionMaster_TypeInfo, limitCount, (_DWORD)method, v3);
    byte_42EAE51 = 1;
  }
  v5 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  if ( (BYTE3(ServantLimitSpoilerProtectionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitSpoilerProtectionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitSpoilerProtectionMaster_TypeInfo);
    v5 = ServantLimitSpoilerProtectionMaster_TypeInfo;
  }
  if ( LIMIT_COUNT_THIRD_STAGE <= 10 && v5->static_fields->LIMIT_COUNT_THIRD_STAGE < LIMIT_COUNT_THIRD_STAGE )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      LIMIT_COUNT_THIRD_STAGE = v5->static_fields->LIMIT_COUNT_THIRD_STAGE;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        return ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE;
      }
    }
    else
    {
      return v5->static_fields->LIMIT_COUNT_THIRD_STAGE;
    }
  }
  return LIMIT_COUNT_THIRD_STAGE;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int ServantLimitMax; // w22
  __int64 v5; // x19
  __int64 v6; // x20
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  bool FriendCostume; // w0
  BalanceConfig_c *v12; // x0
  const MethodInfo *v13; // x4
  BalanceConfig_c *v14; // x0
  BalanceConfig_c *v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x1.16

  ServantLimitMax = limitCount;
  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42EAE50 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId.fields.currentCryptoKey, svtId.fields.fakeValue, *(_QWORD *)&limitCount);
    sub_B5D5C4(&OptionManager_TypeInfo, v8, v9, v10);
    byte_42EAE50 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  FriendCostume = OptionManager__GetFriendCostume(0LL);
  if ( ServantLimitMax >= 11 && !FriendCostume )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    ServantLimitMax = v12->static_fields->ServantLimitMax;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetFriendImageLimitCount(0LL) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    ServantLimitMax -= ServantLimitMax == v14->static_fields->ServantLimitMax;
  }
  do
  {
    *(_QWORD *)&v17.fields.currentCryptoKey = v6;
    *(_QWORD *)&v17.fields.fakeValue = v5;
    if ( ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(this, v17, ServantLimitMax, v13) )
      break;
    if ( ServantLimitMax >= 11 )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      ServantLimitMax = v15->static_fields->ServantLimitMax;
    }
    else
    {
      --ServantLimitMax;
    }
  }
  while ( ServantLimitMax > 1 );
  return ServantLimitMax;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitSpoilerProtectionEntity_o *__fastcall ServantLimitSpoilerProtectionMaster__GetEntity(
        ServantLimitSpoilerProtectionMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAE4D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__,
      svtId,
      limitCount,
      method);
    byte_42EAE4D = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                    PK,
                                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x3
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  _DWORD *v49; // x0
  __int64 v50; // x1
  _DWORD *v51; // x24
  __int64 v52; // x9
  int v53; // w19
  __int64 v54; // x1
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  System_Collections_Generic_List_int__o *v60; // [xsp+0h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42EAE52 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId.fields.currentCryptoKey,
      svtId.fields.fakeValue,
      *(_QWORD *)&limitCount);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ServantLimitSpoilerProtectionEntity_TypeInfo, v32, v33, v34);
    byte_42EAE52 = 1;
  }
  v60 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v60,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v38);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v45 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v48 = (__int64)&v45->vtable[*v47].method;
    }
    else
    {
LABEL_16:
      v48 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v44);
    }
    v49 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                      Enumerator,
                      *(_QWORD *)(v48 + 8));
    v51 = v49;
    if ( !v49 )
      goto LABEL_37;
    v52 = *(&ServantLimitSpoilerProtectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v49 + 300LL) < (unsigned int)v52
      || *(ServantLimitSpoilerProtectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * v52 - 8) != ServantLimitSpoilerProtectionEntity_TypeInfo )
    {
      sub_B5D990(v49);
LABEL_37:
      sub_B5D69C(v49, v50);
    }
    v53 = v49[4];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = v6;
    *(_QWORD *)&v61.fields.fakeValue = v5;
    if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL) && v51[5] == limitCount )
    {
      if ( !v60 )
        sub_B5D69C(0LL, v54);
      System_Collections_Generic_List_int___Add(
        v60,
        v51[6],
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_32:
    v58 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v44);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(Enumerator, *(_QWORD *)(v58 + 8));
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)v60;
  if ( !v60 )
LABEL_39:
    sub_B5D69C(list, v35);
  return System_Collections_Generic_List_int___ToArray(
           v60,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitSpoilerProtectionMaster__IsSpoilerLimitCount(
        ServantLimitSpoilerProtectionMaster_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *SpoilerProtectionData; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x19
  struct DataMasterBase_array *datalist; // x8
  unsigned __int64 v15; // x21
  int32_t v16; // w20
  __int64 v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_42EAE53 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommonReleaseMaster___,
      svtId.fields.currentCryptoKey,
      svtId.fields.fakeValue,
      *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EAE53 = 1;
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v6;
  *(_QWORD *)&v19.fields.fakeValue = v5;
  SpoilerProtectionData = (DataManager_o *)ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(
                                             this,
                                             v19,
                                             limitCount,
                                             method);
  if ( !SpoilerProtectionData )
    goto LABEL_14;
  v13 = SpoilerProtectionData;
  if ( !SpoilerProtectionData->fields.datalist )
    return 1;
  datalist = SpoilerProtectionData->fields.datalist;
  if ( (int)datalist >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)datalist )
      {
        v18 = sub_B5D6C8(SpoilerProtectionData);
        sub_B5D668(v18, 0LL);
      }
      v16 = *((_DWORD *)&v13->fields.lookup + v15);
      SpoilerProtectionData = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 SpoilerProtectionData,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !SpoilerProtectionData )
        break;
      SpoilerProtectionData = (DataManager_o *)CommonReleaseMaster__IsOpen(
                                                 (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                 v16,
                                                 0LL,
                                                 0,
                                                 0LL);
      if ( ((unsigned __int8)SpoilerProtectionData & 1) != 0 )
        return 1;
      LODWORD(datalist) = v13->fields.datalist;
      if ( (__int64)++v15 >= (int)datalist )
        return 0;
    }
LABEL_14:
    sub_B5D69C(SpoilerProtectionData, v12);
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

  if ( (byte_42EAE4E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42EAE4E = 1;
  }
  PK = ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}