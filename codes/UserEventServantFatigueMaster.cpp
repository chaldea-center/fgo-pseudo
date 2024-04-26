void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350694 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_4350694 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    296,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t __fastcall UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0
  System_Collections_Generic_List_long__o *v4; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v9; // x20
  __int64 v10; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *klass; // x0
  __int64 v12; // x1
  int64_t v13; // x21
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  _DWORD *monitor; // x19
  int v21; // w8
  unsigned int v22; // w25
  __int64 v23; // x26
  int v24; // w27
  __int64 v25; // x21
  __int64 v26; // x22
  int64_t v27; // x19
  int64_t Time; // x0
  __int64 v29; // x0
  System_Collections_Generic_List_long__o *v30; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v31; // [xsp+10h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v33; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4350699 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventServantFatigueEntity_TypeInfo);
    byte_4350699 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v4
        || (System_Collections_Generic_List_long___Add(
              v4,
              0LL,
              (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v9 = Item,
            v10 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v10)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B7076C(Item, v6);
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v9[2].monitor )
      {
        v30 = v4;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
          klass,
          (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v33 = v31;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v33,
                  (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v33.fields.current.fields.value )
            sub_B7076C(0LL, v12);
          if ( v33.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            v18 = sub_B70A60(v33.fields.current.fields.value);
LABEL_46:
            sub_B7076C(v18, v19);
          }
          v13 = *(_QWORD *)j_il2cpp_object_unbox_0(v33.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B7076C(0LL, v15);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B7076C(0LL, v17);
          v18 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v13,
                  (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v18 & 1) != 0 )
          {
            monitor = v9[2].monitor;
            if ( !monitor )
              goto LABEL_46;
            v21 = monitor[6];
            if ( v21 >= 1 )
            {
              v22 = 0;
              while ( 1 )
              {
                if ( v22 >= v21 )
                {
                  v29 = sub_B70798(v18);
                  sub_B70738(v29, 0LL);
                }
                v23 = *(_QWORD *)&monitor[2 * v22 + 8];
                if ( !v23 )
                  sub_B7076C(v18, v19);
                if ( !entity )
                  sub_B7076C(v18, v19);
                v24 = *(_DWORD *)(v23 + 16);
                v26 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
                v25 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v34.fields.currentCryptoKey = v26;
                *(_QWORD *)&v34.fields.fakeValue = v25;
                v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v34, 0LL);
                if ( v24 == (_DWORD)v18 )
                  break;
                v21 = monitor[6];
                if ( (int)++v22 >= v21 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v30,
                *(_QWORD *)(v23 + 24),
                (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v33,
          (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v4 = v30;
      }
      v27 = System_Linq_Enumerable__Max_41037156((System_Collections_Generic_IEnumerable_long__o *)v4, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      return (v27 - Time) & ~((v27 - Time) >> 63);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v14; // x23
  unsigned __int64 v15; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v18; // x24
  __int64 v19; // x10
  __int64 v20; // x1
  int64_t v21; // x22
  WebViewManager_o *Instance; // x0
  __int64 v23; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v30; // x10
  int v31; // w8
  __int64 v32; // x9
  __int64 v33; // x10
  __int64 v34; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v36; // [xsp+10h] [xbp-C0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v38; // [xsp+40h] [xbp-90h] BYREF
  _QWORD *v39; // [xsp+70h] [xbp-60h] BYREF
  int32_t v40; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v40 = eventId;
  if ( (byte_4350695 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventServantFatigueEntity_TypeInfo);
    byte_4350695 = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v11 = (__int64)System_Int32__ToString((int32_t)&v40, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v14 = v11;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
          lookup,
          v14,
          &v39,
          *(_QWORD *)(p_method + 8));
  if ( (v11 & 1) == 0 )
    return 0;
  v18 = v39;
  if ( !v39
    || (v19 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v39 + 300LL) < (unsigned int)v19)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v39 + 200LL) + 8 * v19 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B7076C(v11, v12);
  }
  v11 = v39[4];
  if ( !v11 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v36,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v11,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v38,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v38.fields.current.fields.value )
      sub_B7076C(0LL, v20);
    if ( v38.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v11 = sub_B70A60(v38.fields.current.fields.value);
      goto LABEL_42;
    }
    v21 = *(_QWORD *)j_il2cpp_object_unbox_0(v38.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v23);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(0LL, v25);
    v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v21,
            (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v26 )
    {
      if ( !entity )
        sub_B7076C(v26, v27);
      v29 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v29;
      *(_QWORD *)&v41.fields.fakeValue = v28;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v41, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v38,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
  v30 = v18[5];
  if ( !v30 )
    return 0;
  v31 = *(_DWORD *)(v30 + 24);
  if ( v31 < 1 )
    return 0;
  v32 = 0LL;
  v33 = v30 + 32;
  while ( 1 )
  {
    v34 = *(_QWORD *)(v33 + 8 * v32);
    if ( !v34 )
      goto LABEL_42;
    if ( *(_DWORD *)(v34 + 16) == svtId )
      break;
    if ( (int)++v32 >= v31 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v34 + 24);
  return result;
}


System_Int64_array *__fastcall UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  __int64 Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v8; // x20
  unsigned __int64 v9; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v12; // x20
  __int64 v13; // x10
  System_Collections_Generic_List_long__o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int64_t *v17; // x0
  int32_t v19; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v21; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v22; // [xsp+60h] [xbp-30h] BYREF
  int32_t v23; // [xsp+6Ch] [xbp-24h] BYREF

  v23 = eventId;
  if ( (byte_4350697 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventServantFatigueEntity_TypeInfo);
    byte_4350697 = 1;
  }
  v22 = 0LL;
  memset(&v21, 0, sizeof(v21));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !lookup )
    goto LABEL_35;
  klass = lookup->klass;
  v8 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v8,
               &v22,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v12 = v22;
  if ( !v22 )
    goto LABEL_35;
  v13 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v22 + 300LL) < (unsigned int)v13
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * v13 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v22[4] )
    return 0LL;
  v14 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v12[4];
  if ( !Instance )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v20,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v21,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v15 )
      break;
    if ( !v14 )
      sub_B7076C(v15, v16);
    if ( !v21.fields.current.fields.value )
      sub_B7076C(0LL, v16);
    if ( v21.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Instance = sub_B70A60(v21.fields.current.fields.value);
      goto LABEL_35;
    }
    v17 = (int64_t *)j_il2cpp_object_unbox_0(v21.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v14,
      *v17,
      (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v21,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              v23,
                              0LL)) == 0
    || !v14 )
  {
LABEL_35:
    sub_B7076C(Instance, v6);
  }
  v19 = *(_DWORD *)(Instance + 24);
  while ( v14->fields._size < v19 )
    System_Collections_Generic_List_long___Add(
      v14,
      0LL,
      (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Collections_Generic_Dictionary_int__long__o *__fastcall UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v10; // x21
  unsigned __int64 v11; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v14; // x21
  __int64 v15; // x10
  System_Collections_Generic_Dictionary_int__long__o *v16; // x20
  Il2CppObject *value; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w21
  int64_t *v21; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x21
  int32_t *v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x21
  int32_t *v27; // x22
  __int64 v29; // x0
  void *v30; // x0
  int v31; // w1
  __int64 v32; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v34; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v35; // [xsp+58h] [xbp-48h] BYREF
  int32_t v36; // [xsp+6Ch] [xbp-34h] BYREF

  v36 = eventId;
  if ( (byte_4350698 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserEventServantFatigueEntity_TypeInfo);
    byte_4350698 = 1;
  }
  v35 = 0LL;
  memset(&v34, 0, sizeof(v34));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v10 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v10,
                                &v35,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v14 = v35;
    if ( !v35 )
      goto LABEL_48;
    v15 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v35 + 300LL) < (unsigned int)v15
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v35 + 200LL) + 8 * v15 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v35[4] )
    {
      v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B70764(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v16,
        (const MethodInfo_2FC1D1C *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v14[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v33,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
          (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v34 = v33;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v34,
                  (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v34,
              (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v34.fields.current.fields.value;
          v18 = System_Int32__Parse((System_String_o *)v34.fields.current.fields.key, 0LL);
          if ( !v16 )
            sub_B7076C(v18, v19);
          if ( !value )
            sub_B7076C(v18, v19);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v20 = v18;
          v21 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v16,
            v20,
            *v21,
            (const MethodInfo_2FC28D0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v30 = (void *)sub_B70A60(value);
        if ( v31 != 1 )
          _Unwind_Resume(v30);
        v32 = *(_QWORD *)__cxa_begin_catch(v30);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v34,
          (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v32 )
          sub_B70738(v32, 0LL);
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v25 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v25 >= 1 )
          {
            v26 = 0LL;
            v27 = &OpenRecoveryNum->m_Items[1];
            while ( v26 < (unsigned int)v25 )
            {
              if ( !v16 )
                goto LABEL_48;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v16,
                                            v27[v26],
                                            (const MethodInfo_2FC2B44 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v26 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v16,
                  v27[v26],
                  0LL,
                  (const MethodInfo_2FC28D0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v25) = OpenRecoveryNum->max_length;
              if ( (__int64)++v26 >= (int)v25 )
                return v16;
            }
            goto LABEL_47;
          }
          return v16;
        }
      }
LABEL_48:
      sub_B7076C(Instance, v6);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B70764(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v16,
    (const MethodInfo_2FC1D1C *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v22 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    v24 = &OpenRecoveryNum->m_Items[1];
    while ( v23 < (unsigned int)v22 )
    {
      if ( !v16 )
        goto LABEL_48;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v16,
                                    v24[v23],
                                    (const MethodInfo_2FC2B44 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v23 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v16,
          v24[v23],
          0LL,
          (const MethodInfo_2FC28D0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v22) = OpenRecoveryNum->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        return v16;
    }
LABEL_47:
    v29 = sub_B70798(Instance);
    sub_B70738(v29, 0LL);
  }
  return v16;
}


bool __fastcall UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v10; // x21
  unsigned __int64 v11; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x2
  __int64 v15; // x11
  System_Collections_Generic_Dictionary_string__ResourceSet__o *v16; // x20
  System_Resources_ResourceSet_o *v17; // x0
  int64_t v20; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-14h] BYREF

  v22 = eventId;
  if ( (byte_4350696 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&UserEventServantFatigueEntity_TypeInfo);
    byte_4350696 = 1;
  }
  v21 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v7 = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v10 = v7;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                            lookup,
                            v10,
                            &v21,
                            *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !v21
    || (v15 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v21 + 300LL) < (unsigned int)v15)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v21 + 200LL) + 8 * v15 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_B7076C(v7, v8);
  }
  v16 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v21[4];
  if ( !v16 )
    return 0;
  v20 = userSvtId;
  v17 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v14);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v16,
           v17,
           (const MethodInfo_2F4FC90 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}