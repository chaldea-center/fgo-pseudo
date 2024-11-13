void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D7D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__, method, v2);
    byte_4B16D7D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    93,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v14; // x19
  DataManager_c *klass; // x8
  DataManager_o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  DataManager_c *v22; // x8
  DataManager_o *v23; // x20
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  LocalizationManager_c *v27; // x0
  __int64 methodPtr_low; // x10
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = id;
  if ( (byte_4B16D7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v3, v4);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&TreasureDvcDetailEntity_TypeInfo, v9, v10);
    byte_4B16D7E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v14 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v16 = Instance;
  v17 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_10;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v19 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(v16, v14, *(_QWORD *)(v19 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v22 = Instance->klass;
      v23 = Instance;
      v24 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_18;
        }
        v26 = (__int64)(&v22->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v25);
      }
      else
      {
LABEL_18:
        v26 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v26)(
                                    v23,
                                    v14,
                                    *(_QWORD *)(v26 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v12);
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v12);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    byte_4B1194D = 1;
  }
  v27 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v27 = LocalizationManager_TypeInfo;
  }
  return v27->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v14; // x19
  DataManager_c *klass; // x8
  DataManager_o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  DataManager_c *v22; // x8
  DataManager_o *v23; // x20
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v25; // x10
  __int64 v26; // x0
  LocalizationManager_c *v27; // x0
  __int64 methodPtr_low; // x10
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = id;
  if ( (byte_4B16D7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v3, v4);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&TreasureDvcDetailEntity_TypeInfo, v9, v10);
    byte_4B16D7F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v14 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
  if ( !Instance )
    goto LABEL_31;
  klass = Instance->klass;
  v16 = Instance;
  v17 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_10;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v19 = sub_1C1C7C0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v19)(v16, v14, *(_QWORD *)(v19 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)MasterData_object, 0LL);
    if ( Instance )
    {
      v22 = Instance->klass;
      v23 = Instance;
      v24 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
      {
        v25 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_18;
        }
        v26 = (__int64)(&v22->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v25);
      }
      else
      {
LABEL_18:
        v26 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v26)(
                                    v23,
                                    v14,
                                    *(_QWORD *)(v26 + 8));
      if ( Instance )
      {
        methodPtr_low = LOBYTE(TreasureDvcDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v12);
        }
      }
    }
LABEL_31:
    sub_1BCAA3C(Instance, v12);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    byte_4B1194D = 1;
  }
  v27 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v27 = LocalizationManager_TypeInfo;
  }
  return v27->static_fields->unknownNameText;
}