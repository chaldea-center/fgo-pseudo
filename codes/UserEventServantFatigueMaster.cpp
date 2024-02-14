void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42136BA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_42136BA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    295,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t __fastcall UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t result; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_long__o *v22; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x20
  __int64 v27; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *klass; // x0
  int64_t v29; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x0
  _DWORD *monitor; // x19
  int v34; // w8
  unsigned int v35; // w25
  __int64 v36; // x26
  int v37; // w27
  __int64 v38; // x21
  __int64 v39; // x22
  int64_t v40; // x19
  int64_t Time; // x0
  __int64 v42; // x0
  System_Collections_Generic_List_long__o *v43; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v44; // [xsp+10h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v46; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_42136BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B0D8A4(&long_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_42136BF = 1;
  }
  memset(&v46, 0, sizeof(v46));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v20,
                                                         v21);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v22
        || (System_Collections_Generic_List_long___Add(
              v22,
              0LL,
              (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v26 = Item,
            v27 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v27)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B0D97C(Item);
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v26[2].monitor )
      {
        v43 = v22;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v44,
          klass,
          (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v46 = v44;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v46,
                  (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v46.fields.current.fields.value )
            sub_B0D97C(0LL);
          if ( v46.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            v32 = sub_B0DC70(v46.fields.current.fields.value);
LABEL_46:
            sub_B0D97C(v32);
          }
          v29 = *(_QWORD *)j_il2cpp_object_unbox_0(v46.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B0D97C(0LL);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B0D97C(0LL);
          v32 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v29,
                  (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v32 & 1) != 0 )
          {
            monitor = v26[2].monitor;
            if ( !monitor )
              goto LABEL_46;
            v34 = monitor[6];
            if ( v34 >= 1 )
            {
              v35 = 0;
              while ( 1 )
              {
                if ( v35 >= v34 )
                {
                  v42 = sub_B0D9A8(v32);
                  sub_B0D948(v42, 0LL);
                }
                v36 = *(_QWORD *)&monitor[2 * v35 + 8];
                if ( !v36 )
                  sub_B0D97C(v32);
                if ( !entity )
                  sub_B0D97C(v32);
                v37 = *(_DWORD *)(v36 + 16);
                v39 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
                v38 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v47.fields.currentCryptoKey = v39;
                *(_QWORD *)&v47.fields.fakeValue = v38;
                v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
                if ( v37 == (_DWORD)v32 )
                  break;
                v34 = monitor[6];
                if ( (int)++v35 >= v34 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v43,
                *(_QWORD *)(v36 + 24),
                (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v46,
          (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v22 = v43;
      }
      v40 = System_Linq_Enumerable__Max_40215928((System_Collections_Generic_IEnumerable_long__o *)v22, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      return (v40 - Time) & ~((v40 - Time) >> 63);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserEventServantFatigueMaster__GetFatigueInfo(
        UserEventServantFatigueMaster_o *this,
        int64_t *recoverAt,
        bool *isRecover,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x22
  __int64 v22; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v24; // x23
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v28; // x24
  __int64 v29; // x10
  int64_t v30; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v36; // x10
  int v37; // w8
  __int64 v38; // x9
  __int64 v39; // x10
  __int64 v40; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v42; // [xsp+10h] [xbp-C0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v44; // [xsp+40h] [xbp-90h] BYREF
  _QWORD *v45; // [xsp+70h] [xbp-60h] BYREF
  int32_t v46; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v46 = eventId;
  if ( (byte_42136BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_B0D8A4(&long_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&UserEventServantFatigueEntity_TypeInfo, v20);
    byte_42136BB = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v22 = (__int64)System_Int32__ToString((int32_t)&v46, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v24 = v22;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v25;
      p_offset += 2;
      if ( v25 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
          lookup,
          v24,
          &v45,
          *(_QWORD *)(p_method + 8));
  if ( (v22 & 1) == 0 )
    return 0;
  v28 = v45;
  if ( !v45
    || (v29 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v45 + 300LL) < (unsigned int)v29)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v45 + 200LL) + 8 * v29 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B0D97C(v22);
  }
  v22 = v45[4];
  if ( !v22 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v42,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v22,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v44 = v42;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v44,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v44.fields.current.fields.value )
      sub_B0D97C(0LL);
    if ( v44.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v22 = sub_B0DC70(v44.fields.current.fields.value);
      goto LABEL_42;
    }
    v30 = *(_QWORD *)j_il2cpp_object_unbox_0(v44.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    v33 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v30,
            (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v33 )
    {
      if ( !entity )
        sub_B0D97C(v33);
      v35 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v35;
      *(_QWORD *)&v47.fields.fakeValue = v34;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v44,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
  v36 = v28[5];
  if ( !v36 )
    return 0;
  v37 = *(_DWORD *)(v36 + 24);
  if ( v37 < 1 )
    return 0;
  v38 = 0LL;
  v39 = v36 + 32;
  while ( 1 )
  {
    v40 = *(_QWORD *)(v39 + 8 * v38);
    if ( !v40 )
      goto LABEL_42;
    if ( *(_DWORD *)(v40 + 16) == svtId )
      break;
    if ( (int)++v38 >= v37 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v40 + 24);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  __int64 Instance; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  _QWORD *v27; // x20
  __int64 v28; // x10
  System_Collections_Generic_List_long__o *v29; // x19
  _BOOL8 v30; // x0
  int64_t *v31; // x0
  int32_t v33; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v35; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v36; // [xsp+60h] [xbp-30h] BYREF
  int32_t v37; // [xsp+6Ch] [xbp-24h] BYREF

  v37 = eventId;
  if ( (byte_42136BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_B0D8A4(&long_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&UserEventServantFatigueEntity_TypeInfo, v17);
    byte_42136BD = 1;
  }
  v36 = 0LL;
  memset(&v35, 0, sizeof(v35));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&v37, 0LL);
  if ( !lookup )
    goto LABEL_35;
  klass = lookup->klass;
  v21 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v21,
               &v36,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v27 = v36;
  if ( !v36 )
    goto LABEL_35;
  v28 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v36 + 300LL) < (unsigned int)v28
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v36 + 200LL) + 8 * v28 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v36[4] )
    return 0LL;
  v29 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v25, v26);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v27[4];
  if ( !Instance )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v34,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v35,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v30 )
      break;
    if ( !v29 )
      sub_B0D97C(v30);
    if ( !v35.fields.current.fields.value )
      sub_B0D97C(0LL);
    if ( v35.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Instance = sub_B0DC70(v35.fields.current.fields.value);
      goto LABEL_35;
    }
    v31 = (int64_t *)j_il2cpp_object_unbox_0(v35.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v29,
      *v31,
      (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v35,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              v37,
                              0LL)) == 0
    || !v29 )
  {
LABEL_35:
    sub_B0D97C(Instance);
  }
  v33 = *(_DWORD *)(Instance + 24);
  while ( v29->fields._size < v33 )
    System_Collections_Generic_List_long___Add(
      v29,
      0LL,
      (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v29,
           (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__long__o *__fastcall UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v23; // x21
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  _QWORD *v29; // x21
  __int64 v30; // x10
  System_Collections_Generic_Dictionary_int__long__o *v31; // x20
  Il2CppObject *value; // x22
  __int64 v33; // x0
  int32_t v34; // w21
  int64_t *v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x21
  int32_t *v38; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x21
  int32_t *v41; // x22
  __int64 v43; // x0
  void *v44; // x0
  int v45; // w1
  __int64 v46; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v48; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v49; // [xsp+58h] [xbp-48h] BYREF
  int32_t v50; // [xsp+6Ch] [xbp-34h] BYREF

  v50 = eventId;
  if ( (byte_42136BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&long_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_42136BE = 1;
  }
  v49 = 0LL;
  memset(&v48, 0, sizeof(v48));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v50, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v23 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v23,
                                &v49,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v29 = v49;
    if ( !v49 )
      goto LABEL_48;
    v30 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v49 + 300LL) < (unsigned int)v30
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v49 + 200LL) + 8 * v30 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v49[4] )
    {
      v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B0D974(
                                                                    System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                    v27,
                                                                    v28);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v31,
        (const MethodInfo_2E8BBDC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v29[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v47,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
          (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v48 = v47;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v48,
                  (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v48,
              (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v48.fields.current.fields.value;
          v33 = System_Int32__Parse((System_String_o *)v48.fields.current.fields.key, 0LL);
          if ( !v31 )
            sub_B0D97C(v33);
          if ( !value )
            sub_B0D97C(v33);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v34 = v33;
          v35 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v31,
            v34,
            *v35,
            (const MethodInfo_2E8C790 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v44 = (void *)sub_B0DC70(value);
        if ( v45 != 1 )
          _Unwind_Resume(v44);
        v46 = *(_QWORD *)__cxa_begin_catch(v44);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v48,
          (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v46 )
          sub_B0D948(v46, 0LL);
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v39 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v39 >= 1 )
          {
            v40 = 0LL;
            v41 = &OpenRecoveryNum->m_Items[1];
            while ( v40 < (unsigned int)v39 )
            {
              if ( !v31 )
                goto LABEL_48;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v31,
                                            v41[v40],
                                            (const MethodInfo_2E8CA04 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v40 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v31,
                  v41[v40],
                  0LL,
                  (const MethodInfo_2E8C790 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v39) = OpenRecoveryNum->max_length;
              if ( (__int64)++v40 >= (int)v39 )
                return v31;
            }
            goto LABEL_47;
          }
          return v31;
        }
      }
LABEL_48:
      sub_B0D97C(Instance);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v31,
    (const MethodInfo_2E8BBDC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v36 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    v38 = &OpenRecoveryNum->m_Items[1];
    while ( v37 < (unsigned int)v36 )
    {
      if ( !v31 )
        goto LABEL_48;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v31,
                                    v38[v37],
                                    (const MethodInfo_2E8CA04 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v37 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v31,
          v38[v37],
          0LL,
          (const MethodInfo_2E8C790 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v36) = OpenRecoveryNum->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        return v31;
    }
LABEL_47:
    v43 = sub_B0D9A8(Instance);
    sub_B0D948(v43, 0LL);
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v10; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v12; // x21
  unsigned __int64 v13; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x11
  System_Collections_Generic_Dictionary_string__ResourceSet__o *v17; // x20
  System_Resources_ResourceSet_o *v18; // x0
  int64_t v21; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-14h] BYREF

  v23 = eventId;
  if ( (byte_42136BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&long_TypeInfo, v7);
    sub_B0D8A4(&UserEventServantFatigueEntity_TypeInfo, v8);
    byte_42136BC = 1;
  }
  v22 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v10 = System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v12 = v10;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v12,
                             &v22,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v22
    || (v16 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v16)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v16 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_B0D97C(v10);
  }
  v17 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v22[4];
  if ( !v17 )
    return 0;
  v21 = userSvtId;
  v18 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v17,
           v18,
           (const MethodInfo_2E4AF10 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}