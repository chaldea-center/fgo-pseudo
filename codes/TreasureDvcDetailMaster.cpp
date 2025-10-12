void TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C386BD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
    byte_4C386BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_3394514 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v4; // x19
  DataManager_c *klass; // x8
  DataManager_o *v6; // x21
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  DataManager_c *v10; // x8
  DataManager_o *v11; // x20
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **v13; // x10
  __int64 v14; // x0
  LocalizationManager_c *v15; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v18 = id;
  if ( (byte_4C386BE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C386BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v18, 0);
  if ( !MasterData_object )
    goto LABEL_29;
  v4 = Instance;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (const MethodInfo_339462C *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance->klass;
  v6 = Instance;
  v7 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v9 = sub_1C83438(
           Instance,
           System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
           0);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v9)(v6, v4, *(_QWORD *)(v9 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (const MethodInfo_339462C *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    if ( Instance )
    {
      v10 = Instance->klass;
      v11 = Instance;
      v12 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        v13 = (System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)&v10->_1.interfaceOffsets->offset;
        while ( *(v13 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
        {
          --v12;
          v13 += 2;
          if ( !v12 )
            goto LABEL_18;
        }
        v14 = (__int64)(&v10->vtable._2_GetHashCode + *(_DWORD *)v13);
      }
      else
      {
LABEL_18:
        v14 = sub_1C83438(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
                2);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v14)(
                                    v11,
                                    v4,
                                    *(_QWORD *)(v14 + 8));
      if ( Instance )
        return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v17);
    }
LABEL_29:
    sub_1C32E7C(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  return v15->static_fields->unknownNameText;
}


System_String_o *TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v4; // x19
  DataManager_c *klass; // x8
  DataManager_o *v6; // x21
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  DataManager_c *v10; // x8
  DataManager_o *v11; // x20
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **v13; // x10
  __int64 v14; // x0
  LocalizationManager_c *v15; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v18 = id;
  if ( (byte_4C386BF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C386BF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v18, 0);
  if ( !MasterData_object )
    goto LABEL_29;
  v4 = Instance;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (const MethodInfo_339462C *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance->klass;
  v6 = Instance;
  v7 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v9 = sub_1C83438(
           Instance,
           System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
           0);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v9)(v6, v4, *(_QWORD *)(v9 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (const MethodInfo_339462C *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    if ( Instance )
    {
      v10 = Instance->klass;
      v11 = Instance;
      v12 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        v13 = (System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)&v10->_1.interfaceOffsets->offset;
        while ( *(v13 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
        {
          --v12;
          v13 += 2;
          if ( !v12 )
            goto LABEL_18;
        }
        v14 = (__int64)(&v10->vtable._2_GetHashCode + *(_DWORD *)v13);
      }
      else
      {
LABEL_18:
        v14 = sub_1C83438(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
                2);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v14)(
                                    v11,
                                    v4,
                                    *(_QWORD *)(v14 + 8));
      if ( Instance )
        return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v17);
    }
LABEL_29:
    sub_1C32E7C(Instance);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  return v15->static_fields->unknownNameText;
}