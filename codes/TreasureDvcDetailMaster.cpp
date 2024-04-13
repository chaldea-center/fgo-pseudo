void __fastcall TreasureDvcDetailMaster___ctor(TreasureDvcDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACB8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EACB8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    92,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_TreasureDvcDetailMaster__TreasureDvcDetailEntity__int___ctor__);
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetail(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v19; // x19
  __int64 v20; // x3
  DataManager_c *klass; // x8
  DataManager_o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x3
  DataManager_c *v30; // x8
  DataManager_o *v31; // x20
  unsigned __int64 v32; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x11
  __int64 v34; // x0
  LocalizationManager_c *v35; // x0
  __int64 v37; // x10
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF

  v38 = id;
  if ( (byte_42EACB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&TreasureDvcDetailEntity_TypeInfo, v13, v14, v15);
    byte_42EACB9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v38, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v19 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v22 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v25 = sub_AF54C0(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            0LL,
            v20);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v25)(v22, v19, *(_QWORD *)(v25 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v30 = Instance->klass;
      v31 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v32;
          v33 += 2;
          if ( v32 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
      }
      else
      {
LABEL_18:
        v34 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v29);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v34)(
                                    v31,
                                    v19,
                                    *(_QWORD *)(v34 + 8));
      if ( Instance )
      {
        v37 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v37
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v37 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetail((TreasureDvcDetailEntity_o *)Instance, v17);
        }
      }
    }
LABEL_34:
    sub_B5D69C(Instance, v17);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    byte_42E6772 = 1;
  }
  v35 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager_TypeInfo;
  }
  return v35->static_fields->unknownNameText;
}


System_String_o *__fastcall TreasureDvcDetailMaster__getDetailShort(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v19; // x19
  __int64 v20; // x3
  DataManager_c *klass; // x8
  DataManager_o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x3
  DataManager_c *v30; // x8
  DataManager_o *v31; // x20
  unsigned __int64 v32; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x11
  __int64 v34; // x0
  LocalizationManager_c *v35; // x0
  __int64 v37; // x10
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF

  v38 = id;
  if ( (byte_42EACBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&TreasureDvcDetailEntity_TypeInfo, v13, v14, v15);
    byte_42EACBA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcDetailMaster___);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v38, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_34;
  v19 = Instance;
  Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !Instance )
    goto LABEL_34;
  klass = Instance->klass;
  v22 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v25 = sub_AF54C0(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            0LL,
            v20);
  }
  if ( ((*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v25)(v22, v19, *(_QWORD *)(v25 + 8)) & 1) != 0 )
  {
    Instance = (DataManager_o *)DataMasterBase__get_lookup(MasterData_WarQuestSelectionMaster, 0LL);
    if ( Instance )
    {
      v30 = Instance->klass;
      v31 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v32;
          v33 += 2;
          if ( v32 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
      }
      else
      {
LABEL_18:
        v34 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v29);
      }
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, DataManager_o *, _QWORD))v34)(
                                    v31,
                                    v19,
                                    *(_QWORD *)(v34 + 8));
      if ( Instance )
      {
        v37 = *(&TreasureDvcDetailEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v37
          && (TreasureDvcDetailEntity_c *)Instance->klass->_2.typeHierarchy[v37 - 1] == TreasureDvcDetailEntity_TypeInfo )
        {
          return TreasureDvcDetailEntity__getDetailShort((TreasureDvcDetailEntity_o *)Instance, v17);
        }
      }
    }
LABEL_34:
    sub_B5D69C(Instance, v17);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    byte_42E6772 = 1;
  }
  v35 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager_TypeInfo;
  }
  return v35->static_fields->unknownNameText;
}