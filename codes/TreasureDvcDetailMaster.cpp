void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67774 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method);
    byte_4B67774 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v9; // x19
  DataManager_c *klass; // x8
  DataManager_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  DataManager_c *v16; // x8
  DataManager_o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x10
  __int64 v20; // x0
  LocalizationManager_c *v21; // x0
  __int64 methodPtr_low; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_4B67775 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BE4ACC(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_4B67775 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v9 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v11 = Instance;
  v12 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v14 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v14)(v11, v9, *(_QWORD *)(v14 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v16 = Instance->klass;
      v17 = Instance;
      v18 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_18;
        }
        v20 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v19);
      }
      else
      {
LABEL_18:
        v20 = sub_1C36AAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v20)(
                                    v17,
                                    v9,
                                    *(_QWORD *)(v20 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v7);
        }
      }
    }
LABEL_31:
    sub_1BE4D28(Instance, v7);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B622AA )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    byte_4B622AA = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v9; // x19
  DataManager_c *klass; // x8
  DataManager_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  DataManager_c *v16; // x8
  DataManager_o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v19; // x10
  __int64 v20; // x0
  LocalizationManager_c *v21; // x0
  __int64 methodPtr_low; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_4B67776 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BE4ACC(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_4B67776 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v9 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v11 = Instance;
  v12 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_10;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v14 = sub_1C36AAC(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v14)(v11, v9, *(_QWORD *)(v14 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v16 = Instance->klass;
      v17 = Instance;
      v18 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v19 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v19 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_18;
        }
        v20 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v19);
      }
      else
      {
LABEL_18:
        v20 = sub_1C36AAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v20)(
                                    v17,
                                    v9,
                                    *(_QWORD *)(v20 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v7);
        }
      }
    }
LABEL_31:
    sub_1BE4D28(Instance, v7);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B622AA )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    byte_4B622AA = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}