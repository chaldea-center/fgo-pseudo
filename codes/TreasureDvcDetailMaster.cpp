void TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939400 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
    byte_5939400 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
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
  __int64 v11; // x1
  DataManager_c *v12; // x8
  DataManager_o *v13; // x20
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **v15; // x10
  __int64 v16; // x0
  LocalizationManager_c *v17; // x0
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v19 = id;
  if ( (byte_5939401 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939401 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0);
  if ( !MasterData_object )
    goto LABEL_29;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (const MethodInfo_3EDB054 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance->klass;
  v7 = Instance;
  v8 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v10 = sub_2237E2C(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
            0);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (const MethodInfo_3EDB054 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    if ( Instance )
    {
      v12 = Instance->klass;
      v13 = Instance;
      v14 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        v15 = (System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_18;
        }
        v16 = (__int64)(&v12->vtable._2_GetHashCode + *(_DWORD *)v15);
      }
      else
      {
LABEL_18:
        v16 = sub_2237E2C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
                2);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v16)(
                                    v13,
                                    v5,
                                    *(_QWORD *)(v16 + 8));
      if ( Instance )
        return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v3);
    }
LABEL_29:
    sub_21FFECC(Instance, v3);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  if ( !byte_593385D )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_593385D = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v17 = LocalizationManager_TypeInfo;
  }
  return v17->static_fields->unknownNameText;
}


System_String_o *TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
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
  __int64 v11; // x1
  DataManager_c *v12; // x8
  DataManager_o *v13; // x20
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **v15; // x10
  __int64 v16; // x0
  LocalizationManager_c *v17; // x0
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v19 = id;
  if ( (byte_5939402 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939402 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0);
  if ( !MasterData_object )
    goto LABEL_29;
  v5 = Instance;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                (const MethodInfo_3EDB054 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
  if ( !Instance )
    goto LABEL_29;
  klass = Instance->klass;
  v7 = Instance;
  v8 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_10;
    }
    v10 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v10 = sub_2237E2C(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
            0);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v10)(v7, v5, *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase_object__object__int___get_lookup(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  (const MethodInfo_3EDB054 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int__get_lookup__);
    if ( Instance )
    {
      v12 = Instance->klass;
      v13 = Instance;
      v14 = *(unsigned __int16 *)&Instance->klass->_2.rank;
      if ( *(_WORD *)&Instance->klass->_2.rank )
      {
        v15 = (System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__c **)&v12->_1.interfaceOffsets->offset;
        while ( *(v15 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo )
        {
          --v14;
          v15 += 2;
          if ( !v14 )
            goto LABEL_18;
        }
        v16 = (__int64)(&v12->vtable._2_GetHashCode + *(_DWORD *)v15);
      }
      else
      {
LABEL_18:
        v16 = sub_2237E2C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__TreasureDvcDetailEntity__TypeInfo,
                2);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v16)(
                                    v13,
                                    v5,
                                    *(_QWORD *)(v16 + 8));
      if ( Instance )
        return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v3);
    }
LABEL_29:
    sub_21FFECC(Instance, v3);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  if ( !byte_593385D )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_593385D = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v17 = LocalizationManager_TypeInfo;
  }
  return v17->static_fields->unknownNameText;
}