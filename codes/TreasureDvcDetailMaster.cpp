void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353D9B & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
    byte_4353D9B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    92,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v5; // x19
  DataManager_c *klass; // x8
  DataManager_o *v7; // x21
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  DataManager_c *v11; // x8
  DataManager_o *v12; // x20
  unsigned __int64 v13; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v14; // x11
  __int64 v15; // x0
  LocalizationManager_c *v16; // x0
  __int64 v18; // x10
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = id;
  if ( (byte_4353D9C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TreasureDvcDetailEntity_TypeInfo);
    byte_4353D9C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v7 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v11 = Instance->klass;
      v12 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v13;
          v14 += 2;
          if ( v13 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v15 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v14);
      }
      else
      {
LABEL_18:
        v15 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(
                                    v12,
                                    v5,
                                    *(_QWORD *)(v15 + 8));
      if ( Instance )
      {
        v18 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_34:
    sub_B7076C(Instance, v3);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v5; // x19
  DataManager_c *klass; // x8
  DataManager_o *v7; // x21
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  DataManager_c *v11; // x8
  DataManager_o *v12; // x20
  unsigned __int64 v13; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v14; // x11
  __int64 v15; // x0
  LocalizationManager_c *v16; // x0
  __int64 v18; // x10
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = id;
  if ( (byte_4353D9D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TreasureDvcDetailEntity_TypeInfo);
    byte_4353D9D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v7 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v11 = Instance->klass;
      v12 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v13 = 0LL;
        v14 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v13;
          v14 += 2;
          if ( v13 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v15 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v14);
      }
      else
      {
LABEL_18:
        v15 = sub_B08590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(
                                    v12,
                                    v5,
                                    *(_QWORD *)(v15 + 8));
      if ( Instance )
      {
        v18 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_34:
    sub_B7076C(Instance, v3);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}