void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216825 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method);
    byte_4216825 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    91,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v8; // x19
  DataManager_c *klass; // x8
  DataManager_o *v10; // x21
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x8
  DataManager_o *v16; // x20
  unsigned __int64 v17; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x11
  __int64 v19; // x0
  LocalizationManager_c *v20; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_4216826 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_4216826 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v8 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v10 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v13)(v10, v8, *(_QWORD *)(v13 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v15 = Instance->klass;
      v16 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v17;
          v18 += 2;
          if ( v17 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
      }
      else
      {
LABEL_18:
        v19 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(
                                    v16,
                                    v8,
                                    *(_QWORD *)(v19 + 8));
      if ( Instance )
      {
        v23 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v23 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v22);
        }
      }
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    byte_4212885 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  return v20->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v8; // x19
  DataManager_c *klass; // x8
  DataManager_o *v10; // x21
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x8
  DataManager_o *v16; // x20
  unsigned __int64 v17; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x11
  __int64 v19; // x0
  LocalizationManager_c *v20; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_4216827 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_4216827 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v8 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v10 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v13)(v10, v8, *(_QWORD *)(v13 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v15 = Instance->klass;
      v16 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v17;
          v18 += 2;
          if ( v17 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
      }
      else
      {
LABEL_18:
        v19 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(
                                    v16,
                                    v8,
                                    *(_QWORD *)(v19 + 8));
      if ( Instance )
      {
        v23 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v23 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v22);
        }
      }
    }
LABEL_34:
    sub_B0D97C(Instance);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    byte_4212885 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  return v20->static_fields->unknownNameText;
}