void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41899B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method);
    byte_41899B9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    91,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v9; // x19
  __int64 v10; // x3
  DataManager_c *klass; // x8
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  DataManager_c *v18; // x8
  DataManager_o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  LocalizationManager_c *v23; // x0
  __int64 v25; // x10
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = id;
  if ( (byte_41899BA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_41899BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v9 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v12 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v15 = sub_AC5258(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            0LL,
            v10);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(v12, v9, *(_QWORD *)(v15 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v18 = Instance->klass;
      v19 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v22 = (__int64)(&v18->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v21);
      }
      else
      {
LABEL_18:
        v22 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v17);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v22)(
                                    v19,
                                    v9,
                                    *(_QWORD *)(v22 + 8));
      if ( Instance )
      {
        v25 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v25 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v7);
        }
      }
    }
LABEL_34:
    sub_B2C434(Instance, v7);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    byte_4185BC0 = 1;
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
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v9; // x19
  __int64 v10; // x3
  DataManager_c *klass; // x8
  DataManager_o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  DataManager_c *v18; // x8
  DataManager_o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  LocalizationManager_c *v23; // x0
  __int64 v25; // x10
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = id;
  if ( (byte_41899BB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_41899BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v9 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v12 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v15 = sub_AC5258(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            0LL,
            v10);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(v12, v9, *(_QWORD *)(v15 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v18 = Instance->klass;
      v19 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v22 = (__int64)(&v18->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v21);
      }
      else
      {
LABEL_18:
        v22 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v17);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v22)(
                                    v19,
                                    v9,
                                    *(_QWORD *)(v22 + 8));
      if ( Instance )
      {
        v25 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v25 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v7);
        }
      }
    }
LABEL_34:
    sub_B2C434(Instance, v7);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    byte_4185BC0 = 1;
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