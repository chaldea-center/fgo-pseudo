void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCE75 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method);
    byte_49FCE75 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    93,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v8; // x19
  DataManager_c *klass; // x8
  DataManager_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x8
  DataManager_o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  LocalizationManager_c *v20; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_49FCE76 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_49FCE76 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v8 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v10 = Instance;
  v11 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_1BB60A8(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v13)(v10, v8, *(_QWORD *)(v13 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v15 = Instance->klass;
      v16 = Instance;
      v17 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v17;
          v18 += 2;
          if ( !v17 )
            goto LABEL_18;
        }
        v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
      }
      else
      {
LABEL_18:
        v19 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(
                                    v16,
                                    v8,
                                    *(_QWORD *)(v19 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v22);
        }
      }
    }
LABEL_31:
    sub_1B64324(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    byte_49F7D6A = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v8; // x19
  DataManager_c *klass; // x8
  DataManager_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  DataManager_c *v15; // x8
  DataManager_o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  LocalizationManager_c *v20; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x10
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v24 = id;
  if ( (byte_49FCE77 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v2);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&TreasureDvcDetailEntity_TypeInfo, v5);
    byte_49FCE77 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v8 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v10 = Instance;
  v11 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_1BB60A8(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v13)(v10, v8, *(_QWORD *)(v13 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v15 = Instance->klass;
      v16 = Instance;
      v17 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v17;
          v18 += 2;
          if ( !v17 )
            goto LABEL_18;
        }
        v19 = (__int64)(&v15->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
      }
      else
      {
LABEL_18:
        v19 = sub_1BB60A8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(
                                    v16,
                                    v8,
                                    *(_QWORD *)(v19 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v22);
        }
      }
    }
LABEL_31:
    sub_1B64324(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    byte_49F7D6A = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  return v20->static_fields->unknownNameText;
}