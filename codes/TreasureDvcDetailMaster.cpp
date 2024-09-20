void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BCC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
    byte_4A5BCC8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    93,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v5; // x19
  DataManager_c *klass; // x8
  DataManager_o *v7; // x21
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  DataManager_c *v11; // x8
  DataManager_o *v12; // x20
  __int64 v13; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v14; // x10
  __int64 v15; // x0
  LocalizationManager_c *v16; // x0
  __int64 methodPtr_low; // x10
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = id;
  if ( (byte_4A5BCC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TreasureDvcDetailEntity_TypeInfo);
    byte_4A5BCC9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v7 = Instance;
  v8 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v11 = Instance->klass;
      v12 = Instance;
      v13 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v14 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v13;
          v14 += 2;
          if ( !v13 )
            goto LABEL_18;
        }
        v15 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v14);
      }
      else
      {
LABEL_18:
        v15 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(
                                    v12,
                                    v5,
                                    *(_QWORD *)(v15 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_31:
    sub_1B8880C(Instance, v3);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v5; // x19
  DataManager_c *klass; // x8
  DataManager_o *v7; // x21
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  DataManager_c *v11; // x8
  DataManager_o *v12; // x20
  __int64 v13; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v14; // x10
  __int64 v15; // x0
  LocalizationManager_c *v16; // x0
  __int64 methodPtr_low; // x10
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = id;
  if ( (byte_4A5BCCA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TreasureDvcDetailEntity_TypeInfo);
    byte_4A5BCCA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v7 = Instance;
  v8 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v10 = sub_1BDA590(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v11 = Instance->klass;
      v12 = Instance;
      v13 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v14 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v11->_1.interfaceOffsets->offset;
        while ( *(v14 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v13;
          v14 += 2;
          if ( !v13 )
            goto LABEL_18;
        }
        v15 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v14);
      }
      else
      {
LABEL_18:
        v15 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v15)(
                                    v12,
                                    v5,
                                    *(_QWORD *)(v15 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v3);
        }
      }
    }
LABEL_31:
    sub_1B8880C(Instance, v3);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}