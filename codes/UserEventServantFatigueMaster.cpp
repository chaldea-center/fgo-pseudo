void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9683 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_40F9683 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    295,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_long__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v28; // x20
  __int64 v29; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *klass; // x0
  int64_t v31; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  _DWORD *monitor; // x19
  int v38; // w8
  unsigned int v39; // w25
  __int64 v40; // x26
  int v41; // w27
  __int64 v42; // x21
  __int64 v43; // x22
  int64_t v44; // x19
  int64_t Time; // x0
  System_Collections_Generic_List_long__o *v46; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v47; // [xsp+10h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v49; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40F9688 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B16FFC(&long_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_40F9688 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v24 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22,
                                                         v23);
      System_Collections_Generic_List_long____ctor(
        v24,
        (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v24
        || (System_Collections_Generic_List_long___Add(
              v24,
              0LL,
              (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v28 = Item,
            v29 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v29)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B170D4();
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v28[2].monitor )
      {
        v46 = v24;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v47,
          klass,
          (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v49 = v47;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v49,
                  (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v49.fields.current.fields.value )
            sub_B170D4();
          if ( v49.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_B173C8(v49.fields.current.fields.value);
LABEL_46:
            sub_B170D4();
          }
          v31 = *(_QWORD *)j_il2cpp_object_unbox_0(v49.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B170D4();
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B170D4();
          v34 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v31,
                  (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v34 & 1) != 0 )
          {
            monitor = v28[2].monitor;
            if ( !monitor )
              goto LABEL_46;
            v38 = monitor[6];
            if ( v38 >= 1 )
            {
              v39 = 0;
              while ( 1 )
              {
                if ( v39 >= v38 )
                {
                  sub_B17100(v34, v35, v36);
                  sub_B170A0();
                }
                v40 = *(_QWORD *)&monitor[2 * v39 + 8];
                if ( !v40 )
                  sub_B170D4();
                if ( !entity )
                  sub_B170D4();
                v41 = *(_DWORD *)(v40 + 16);
                v43 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
                v42 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v50.fields.currentCryptoKey = v43;
                *(_QWORD *)&v50.fields.fakeValue = v42;
                v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
                if ( v41 == (_DWORD)v34 )
                  break;
                v38 = monitor[6];
                if ( (int)++v39 >= v38 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v46,
                *(_QWORD *)(v40 + 24),
                (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v49,
          (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v24 = v46;
      }
      v44 = System_Linq_Enumerable__Max_40254604((System_Collections_Generic_IEnumerable_long__o *)v24, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      return (v44 - Time) & ~((v44 - Time) >> 63);
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
  System_String_o *v22; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v24; // x23
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v28; // x24
  __int64 v29; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v30; // x0
  int64_t v31; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
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
  __int64 v45; // [xsp+70h] [xbp-60h] BYREF
  int32_t v46; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v46 = eventId;
  if ( (byte_40F9684 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_B16FFC(&long_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&UserEventServantFatigueEntity_TypeInfo, v20);
    byte_40F9684 = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v22 = System_Int32__ToString((int32_t)&v46, 0LL);
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
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          lookup,
          v24,
          &v45,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  v28 = (_QWORD *)v45;
  if ( !v45
    || (v29 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v45 + 300LL) < (unsigned int)v29)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v29 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B170D4();
  }
  v30 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o **)(v45 + 32);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v42,
    v30,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v44 = v42;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v44,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v44.fields.current.fields.value )
      sub_B170D4();
    if ( v44.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B173C8(v44.fields.current.fields.value);
      goto LABEL_42;
    }
    v31 = *(_QWORD *)j_il2cpp_object_unbox_0(v44.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           v31,
           (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !entity )
        sub_B170D4();
      v35 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v35;
      *(_QWORD *)&v47.fields.fakeValue = v34;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v44,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  System_String_o *v19; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  _QWORD *v29; // x20
  __int64 v30; // x10
  System_Collections_Generic_List_long__o *v31; // x19
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v32; // x0
  int64_t *v33; // x0
  WebViewManager_o *Instance; // x0
  EventFatigueRecoveryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *OpenRecoveryNum; // x0
  int32_t max_length; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v40; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v41; // [xsp+60h] [xbp-30h] BYREF
  int32_t v42; // [xsp+6Ch] [xbp-24h] BYREF

  v42 = eventId;
  if ( (byte_40F9686 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&long_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&UserEventServantFatigueEntity_TypeInfo, v17);
    byte_40F9686 = 1;
  }
  v41 = 0LL;
  memset(&v40, 0, sizeof(v40));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v19 = System_Int32__ToString((int32_t)&v42, 0LL);
  if ( !lookup )
    goto LABEL_35;
  klass = lookup->klass;
  v21 = v19;
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
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
          lookup,
          v21,
          &v41,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0LL;
  v29 = v41;
  if ( !v41 )
    goto LABEL_35;
  v30 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v41 + 300LL) < (unsigned int)v30
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v41 + 200LL) + 8 * v30 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v41[4] )
    return 0LL;
  v31 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v25,
                                                     v26,
                                                     v27,
                                                     v28);
  System_Collections_Generic_List_long____ctor(
    v31,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v32 = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v29[4];
  if ( !v32 )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v39,
    v32,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v40,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
  {
    if ( !v31 )
      sub_B170D4();
    if ( !v40.fields.current.fields.value )
      sub_B170D4();
    if ( v40.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B173C8(v40.fields.current.fields.value);
      goto LABEL_35;
    }
    v33 = (int64_t *)j_il2cpp_object_unbox_0(v40.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v31,
      *v33,
      (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v40,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventFatigueRecoveryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0LL
    || (OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(MasterData_WarQuestSelectionMaster, v42, 0LL)) == 0LL
    || !v31 )
  {
LABEL_35:
    sub_B170D4();
  }
  max_length = OpenRecoveryNum->max_length;
  while ( v31->fields._size < max_length )
    System_Collections_Generic_List_long___Add(
      v31,
      0LL,
      (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v31,
           (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  WebViewManager_o *Instance; // x0
  EventFatigueRecoveryMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v23; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v25; // x21
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  _QWORD *v33; // x21
  __int64 v34; // x10
  System_Collections_Generic_Dictionary_int__long__o *v35; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v36; // x0
  Il2CppObject *value; // x22
  int32_t v38; // w0
  int32_t v39; // w21
  int64_t *v40; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x21
  int32_t *v46; // x22
  __int64 v47; // x8
  unsigned __int64 v48; // x21
  int32_t *v49; // x22
  void *v51; // x0
  int v52; // w1
  __int64 v53; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v55; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v56; // [xsp+58h] [xbp-48h] BYREF
  int32_t v57; // [xsp+6Ch] [xbp-34h] BYREF

  v57 = eventId;
  if ( (byte_40F9687 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B16FFC(&long_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_40F9687 = 1;
  }
  v56 = 0LL;
  memset(&v55, 0, sizeof(v55));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (EventFatigueRecoveryMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v23 = System_Int32__ToString((int32_t)&v57, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v25 = v23;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v26;
      p_offset += 2;
      if ( v26 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
          lookup,
          v25,
          &v56,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v33 = v56;
    if ( !v56 )
      goto LABEL_48;
    v34 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v56 + 300LL) < (unsigned int)v34
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v56 + 200LL) + 8 * v34 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v56[4] )
    {
      v35 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B170CC(
                                                                    System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                    v29,
                                                                    v30,
                                                                    v31,
                                                                    v32);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v35,
        (const MethodInfo_2DE3B70 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      v36 = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v33[4];
      if ( v36 )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v54,
          v36,
          (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v55,
                  (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v55,
              (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v55.fields.current.fields.value;
          v38 = System_Int32__Parse((System_String_o *)v55.fields.current.fields.key, 0LL);
          if ( !v35 )
            sub_B170D4();
          if ( !value )
            sub_B170D4();
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v39 = v38;
          v40 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v35,
            v39,
            *v40,
            (const MethodInfo_2DE4724 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v51 = (void *)sub_B173C8(value);
        if ( v52 != 1 )
          _Unwind_Resume(v51);
        v53 = *(_QWORD *)__cxa_begin_catch(v51);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v55,
          (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v53 )
          sub_B170A0();
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v47 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v47 >= 1 )
          {
            v48 = 0LL;
            v49 = &OpenRecoveryNum->m_Items[1];
            while ( v48 < (unsigned int)v47 )
            {
              if ( !v35 )
                goto LABEL_48;
              v41 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
                      v35,
                      v49[v48],
                      (const MethodInfo_2DE4998 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( !v41 )
              {
                if ( v48 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v35,
                  v49[v48],
                  0LL,
                  (const MethodInfo_2DE4724 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v47) = OpenRecoveryNum->max_length;
              if ( (__int64)++v48 >= (int)v47 )
                return v35;
            }
            goto LABEL_47;
          }
          return v35;
        }
      }
LABEL_48:
      sub_B170D4();
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v35 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v29,
                                                                v30,
                                                                v31,
                                                                v32);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v35,
    (const MethodInfo_2DE3B70 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v44 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v44 >= 1 )
  {
    v45 = 0LL;
    v46 = &OpenRecoveryNum->m_Items[1];
    while ( v45 < (unsigned int)v44 )
    {
      if ( !v35 )
        goto LABEL_48;
      v41 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
              v35,
              v46[v45],
              (const MethodInfo_2DE4998 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( !v41 )
      {
        if ( v45 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v35,
          v46[v45],
          0LL,
          (const MethodInfo_2DE4724 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v44) = OpenRecoveryNum->max_length;
      if ( (__int64)++v45 >= (int)v44 )
        return v35;
    }
LABEL_47:
    sub_B17100(v41, v42, v43);
    sub_B170A0();
  }
  return v35;
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
  if ( (byte_40F9685 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&long_TypeInfo, v7);
    sub_B16FFC(&UserEventServantFatigueEntity_TypeInfo, v8);
    byte_40F9685 = 1;
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
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
          lookup,
          v12,
          &v22,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    return 0;
  if ( !v22
    || (v16 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v16)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v16 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_B170D4();
  }
  v17 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v22[4];
  if ( !v17 )
    return 0;
  v21 = userSvtId;
  v18 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v17,
           v18,
           (const MethodInfo_2DA3EC0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}