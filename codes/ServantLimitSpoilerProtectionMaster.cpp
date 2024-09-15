void __fastcall ServantLimitSpoilerProtectionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2E6BF & 1) == 0 )
  {
    sub_1B761C0(&ServantLimitSpoilerProtectionMaster_TypeInfo, v1);
    byte_4A2E6BF = 1;
  }
  ServantLimitSpoilerProtectionMaster_TypeInfo->static_fields->LIMIT_COUNT_THIRD_STAGE = 3;
}


void __fastcall ServantLimitSpoilerProtectionMaster___ctor(
        ServantLimitSpoilerProtectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E6BA & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__,
      method);
    byte_4A2E6BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    312,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string___ctor__);
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
  if ( (byte_4A2E6BC & 1) == 0 )
  {
    sub_1B761C0(&ServantLimitSpoilerProtectionMaster_TypeInfo, *(_QWORD *)&limitCount);
    byte_4A2E6BC = 1;
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
  if ( (byte_4A2E6BB & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1B761C0(&OptionManager_TypeInfo, v8);
    byte_4A2E6BB = 1;
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

  if ( (byte_4A2E6B8 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A2E6B8 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(
                         svtId,
                         limitCount,
                         *(const MethodInfo **)&limitCount);
  return (ServantLimitSpoilerProtectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_30FFAD8 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__GetEntity__);
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
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _DWORD *v30; // x0
  __int64 v31; // x1
  _DWORD *v32; // x24
  __int64 methodPtr_low; // x9
  int v34; // w25
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4A2E6BD & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1B761C0(&System_IDisposable_TypeInfo, v8);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B761C0(&ServantLimitSpoilerProtectionEntity_TypeInfo, v16);
    byte_4A2E6BD = 1;
  }
  v17 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantLimitSpoilerProtectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantLimitSpoilerProtectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != ServantLimitSpoilerProtectionEntity_TypeInfo )
    {
      sub_1B766DC(v30);
LABEL_39:
      sub_1B7641C(v30, v31);
    }
    v34 = v30[4];
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v6;
    *(_QWORD *)&v46.fields.fakeValue = v5;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v46, 0LL);
    if ( v34 == (_DWORD)v35 && v32[5] == limitCount )
    {
      if ( !v17 )
        sub_1B7641C(v35, v36);
      v37 = (unsigned int)v32[6];
      items = v17->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1B7641C(v35, v37);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          v37,
          *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = v37;
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_34;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_34:
    v44 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                             Enumerator,
                                                             *(_QWORD *)(v44 + 8));
  if ( !v17 )
LABEL_42:
    sub_1B7641C(list, v18);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Int32_array *v11; // x19
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  int32_t v14; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x1.16

  v5 = *(_QWORD *)&svtId.fields.fakeValue;
  v6 = *(_QWORD *)&svtId.fields.currentCryptoKey;
  if ( (byte_4A2E6BE & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&svtId.fields.currentCryptoKey);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A2E6BE = 1;
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  SpoilerProtectionData = ServantLimitSpoilerProtectionMaster__GetSpoilerProtectionData(this, v16, limitCount, method);
  if ( !SpoilerProtectionData )
    goto LABEL_16;
  v11 = SpoilerProtectionData;
  if ( *(_QWORD *)&SpoilerProtectionData->max_length )
  {
    v12 = *(_QWORD *)&SpoilerProtectionData->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v12 )
          sub_1B76424(SpoilerProtectionData, v10);
        v14 = v11->m_Items[v13 + 1];
        SpoilerProtectionData = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)SpoilerProtectionData,
                                                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !SpoilerProtectionData )
          break;
        SpoilerProtectionData = (System_Int32_array *)CommonReleaseMaster__IsOpen(
                                                        (CommonReleaseMaster_o *)SpoilerProtectionData,
                                                        v14,
                                                        0LL,
                                                        0,
                                                        0LL);
        if ( ((unsigned __int8)SpoilerProtectionData & 1) == 0 )
        {
          LODWORD(v12) = v11->max_length;
          if ( (__int64)++v13 < (int)v12 )
            continue;
        }
        return (unsigned __int8)SpoilerProtectionData & 1;
      }
LABEL_16:
      sub_1B7641C(SpoilerProtectionData, v10);
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

  if ( (byte_4A2E6B9 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__,
      entity);
    byte_4A2E6B9 = 1;
  }
  PK = (Il2CppObject *)ServantLimitSpoilerProtectionEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_ServantLimitSpoilerProtectionMaster__ServantLimitSpoilerProtectionEntity__string__TryGetEntity__);
}