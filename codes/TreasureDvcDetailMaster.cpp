void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2357 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
    byte_42B2357 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    92,
    (const MethodInfo_23E223C *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v5; // x19
  __int64 v6; // x3
  DataManager_c *klass; // x8
  DataManager_o *v8; // x21
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x3
  DataManager_c *v13; // x8
  DataManager_o *v14; // x20
  unsigned __int64 v15; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v16; // x11
  __int64 v17; // x0
  LocalizationManager_c *v18; // x0
  __int64 v20; // x10
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = id;
  if ( (byte_42B2358 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TreasureDvcDetailEntity_TypeInfo);
    byte_42B2358 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v21, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v8 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_AEB880(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v6);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v11)(v8, v5, *(_QWORD *)(v11 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v13 = Instance->klass;
      v14 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v17 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v16);
      }
      else
      {
LABEL_18:
        v17 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v12);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v17)(
                                    v14,
                                    v5,
                                    *(_QWORD *)(v17 + 8));
      if ( Instance )
      {
        v20 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v20 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_34:
    sub_B52A5C(Instance, v3);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v18 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager_TypeInfo;
  }
  return v18->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v5; // x19
  __int64 v6; // x3
  DataManager_c *klass; // x8
  DataManager_o *v8; // x21
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x3
  DataManager_c *v13; // x8
  DataManager_o *v14; // x20
  unsigned __int64 v15; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v16; // x11
  __int64 v17; // x0
  LocalizationManager_c *v18; // x0
  __int64 v20; // x10
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v21 = id;
  if ( (byte_42B2359 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TreasureDvcDetailEntity_TypeInfo);
    byte_42B2359 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v21, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v8 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_AEB880(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v6);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v11)(v8, v5, *(_QWORD *)(v11 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v13 = Instance->klass;
      v14 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v13->_1.interfaceOffsets->offset;
        while ( *(v16 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v17 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v16);
      }
      else
      {
LABEL_18:
        v17 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v12);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v17)(
                                    v14,
                                    v5,
                                    *(_QWORD *)(v17 + 8));
      if ( Instance )
      {
        v20 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v20 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_34:
    sub_B52A5C(Instance, v3);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v18 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager_TypeInfo;
  }
  return v18->static_fields->unknownNameText;
}