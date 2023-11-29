void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB881 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method);
    byte_40FB881 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    91,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  LocalizationManager_c *v23; // x0
  TreasureDvcDetailEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x10
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = id;
  if ( (byte_40FB882 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_40FB882 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  v8 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v9 = v8;
  lookup = DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v12 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v17 = DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( v17 )
    {
      v18 = v17->klass;
      v19 = v17;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
      }
      else
      {
LABEL_18:
        v22 = sub_AAFEF8(v17, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      v25 = (TreasureDvcDetailEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                                           v19,
                                           v9,
                                           *(_QWORD *)(v22 + 8));
      if ( v25 )
      {
        v27 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (TreasureDvcDetailEntity_c *)v25->klass->_2.typeHierarchy[v27 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail(v25, v26);
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    byte_40F87E5 = 1;
  }
  v23 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  return v23->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  LocalizationManager_c *v23; // x0
  TreasureDvcDetailEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x10
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = id;
  if ( (byte_40FB883 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_40FB883 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  v8 = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v9 = v8;
  lookup = DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v12 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v17 = DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( v17 )
    {
      v18 = v17->klass;
      v19 = v17;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
      }
      else
      {
LABEL_18:
        v22 = sub_AAFEF8(v17, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      v25 = (TreasureDvcDetailEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                                           v19,
                                           v9,
                                           *(_QWORD *)(v22 + 8));
      if ( v25 )
      {
        v27 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (TreasureDvcDetailEntity_c *)v25->klass->_2.typeHierarchy[v27 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort(v25, v26);
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    byte_40F87E5 = 1;
  }
  v23 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager_TypeInfo;
  }
  return v23->static_fields->unknownNameText;
}