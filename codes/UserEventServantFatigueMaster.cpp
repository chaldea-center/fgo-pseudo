void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEED6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_42AEED6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    296,
    (const MethodInfo_23E223C *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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

  if ( (byte_42AEEDB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserEventServantFatigueEntity_TypeInfo);
    byte_42AEEDB = 1;
  }
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v4
        || (System_Collections_Generic_List_long___Add(
              v4,
              0LL,
              (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v9 = Item,
            v10 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v10)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v10 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B52A5C(Item, v6);
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v9[2].monitor )
      {
        v30 = v4;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v31,
          klass,
          (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v33 = v31;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v33,
                  (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v33.fields.current.fields.value )
            sub_B52A5C(0LL, v12);
          if ( v33.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            v18 = sub_B52D50(v33.fields.current.fields.value);
LABEL_46:
            sub_B52A5C(v18, v19);
          }
          v13 = *(_QWORD *)j_il2cpp_object_unbox_0(v33.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B52A5C(0LL, v15);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B52A5C(0LL, v17);
          v18 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v13,
                  (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
                  v29 = sub_B52A88(v18);
                  sub_B52A28(v29, 0LL);
                }
                v23 = *(_QWORD *)&monitor[2 * v22 + 8];
                if ( !v23 )
                  sub_B52A5C(v18, v19);
                if ( !entity )
                  sub_B52A5C(v18, v19);
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
                v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
                if ( v24 == (_DWORD)v18 )
                  break;
                v21 = monitor[6];
                if ( (int)++v22 >= v21 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v30,
                *(_QWORD *)(v23 + 24),
                (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v33,
          (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v4 = v30;
      }
      v27 = System_Linq_Enumerable__Max_41106544((System_Collections_Generic_IEnumerable_long__o *)v4, 0LL);
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
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v15; // x23
  unsigned __int64 v16; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v19; // x24
  __int64 v20; // x10
  __int64 v21; // x1
  int64_t v22; // x22
  WebViewManager_o *Instance; // x0
  __int64 v24; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x10
  int v32; // w8
  __int64 v33; // x9
  __int64 v34; // x10
  __int64 v35; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v37; // [xsp+10h] [xbp-C0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v39; // [xsp+40h] [xbp-90h] BYREF
  _QWORD *v40; // [xsp+70h] [xbp-60h] BYREF
  int32_t v41; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v41 = eventId;
  if ( (byte_42AEED7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserEventServantFatigueEntity_TypeInfo);
    byte_42AEED7 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v11 = (__int64)System_Int32__ToString((int32_t)&v41, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v15 = v11;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v16;
      p_offset += 2;
      if ( v16 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v13);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
          lookup,
          v15,
          &v40,
          *(_QWORD *)(p_method + 8));
  if ( (v11 & 1) == 0 )
    return 0;
  v19 = v40;
  if ( !v40
    || (v20 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v40 + 300LL) < (unsigned int)v20)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v40 + 200LL) + 8 * v20 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B52A5C(v11, v12);
  }
  v11 = v40[4];
  if ( !v11 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v37,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v11,
    (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v39 = v37;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v39,
            (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v39.fields.current.fields.value )
      sub_B52A5C(0LL, v21);
    if ( v39.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v11 = sub_B52D50(v39.fields.current.fields.value);
      goto LABEL_42;
    }
    v22 = *(_QWORD *)j_il2cpp_object_unbox_0(v39.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v24);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v26);
    v27 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v22,
            (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v27 )
    {
      if ( !entity )
        sub_B52A5C(v27, v28);
      v30 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v42.fields.currentCryptoKey = v30;
      *(_QWORD *)&v42.fields.fakeValue = v29;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v42, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v39,
    (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
  v31 = v19[5];
  if ( !v31 )
    return 0;
  v32 = *(_DWORD *)(v31 + 24);
  if ( v32 < 1 )
    return 0;
  v33 = 0LL;
  v34 = v31 + 32;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 8 * v33);
    if ( !v35 )
      goto LABEL_42;
    if ( *(_DWORD *)(v35 + 16) == svtId )
      break;
    if ( (int)++v33 >= v32 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v35 + 24);
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
  __int64 v7; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v9; // x20
  unsigned __int64 v10; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v13; // x20
  __int64 v14; // x10
  System_Collections_Generic_List_long__o *v15; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int64_t *v18; // x0
  int32_t v20; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v22; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v23; // [xsp+60h] [xbp-30h] BYREF
  int32_t v24; // [xsp+6Ch] [xbp-24h] BYREF

  v24 = eventId;
  if ( (byte_42AEED9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserEventServantFatigueEntity_TypeInfo);
    byte_42AEED9 = 1;
  }
  v23 = 0LL;
  memset(&v22, 0, sizeof(v22));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !lookup )
    goto LABEL_35;
  klass = lookup->klass;
  v9 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v7);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v9,
               &v23,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v13 = v23;
  if ( !v23 )
    goto LABEL_35;
  v14 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v23 + 300LL) < (unsigned int)v14
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * v14 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v23[4] )
    return 0LL;
  v15 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v13[4];
  if ( !Instance )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v21,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
    (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v22,
            (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v16 )
      break;
    if ( !v15 )
      sub_B52A5C(v16, v17);
    if ( !v22.fields.current.fields.value )
      sub_B52A5C(0LL, v17);
    if ( v22.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Instance = sub_B52D50(v22.fields.current.fields.value);
      goto LABEL_35;
    }
    v18 = (int64_t *)j_il2cpp_object_unbox_0(v22.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v15,
      *v18,
      (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v22,
    (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              v24,
                              0LL)) == 0
    || !v15 )
  {
LABEL_35:
    sub_B52A5C(Instance, v6);
  }
  v20 = *(_DWORD *)(Instance + 24);
  while ( v15->fields._size < v20 )
    System_Collections_Generic_List_long___Add(
      v15,
      0LL,
      (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v15,
           (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v9; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v11; // x21
  unsigned __int64 v12; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v15; // x21
  __int64 v16; // x10
  System_Collections_Generic_Dictionary_int__long__o *v17; // x20
  Il2CppObject *value; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w21
  int64_t *v22; // x0
  __int64 v23; // x8
  unsigned __int64 v24; // x21
  int32_t *v25; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x21
  int32_t *v28; // x22
  __int64 v30; // x0
  void *v31; // x0
  int v32; // w1
  __int64 v33; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v35; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v36; // [xsp+58h] [xbp-48h] BYREF
  int32_t v37; // [xsp+6Ch] [xbp-34h] BYREF

  v37 = eventId;
  if ( (byte_42AEEDA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserEventServantFatigueEntity_TypeInfo);
    byte_42AEEDA = 1;
  }
  v36 = 0LL;
  memset(&v35, 0, sizeof(v35));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v37, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v11 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v9);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v11,
                                &v36,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v15 = v36;
    if ( !v36 )
      goto LABEL_48;
    v16 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v36 + 300LL) < (unsigned int)v16
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v36 + 200LL) + 8 * v16 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v36[4] )
    {
      v17 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v17,
        (const MethodInfo_2F234BC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v15[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v34,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
          (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v35 = v34;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v35,
                  (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v35,
              (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v35.fields.current.fields.value;
          v19 = System_Int32__Parse((System_String_o *)v35.fields.current.fields.key, 0LL);
          if ( !v17 )
            sub_B52A5C(v19, v20);
          if ( !value )
            sub_B52A5C(v19, v20);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v21 = v19;
          v22 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v17,
            v21,
            *v22,
            (const MethodInfo_2F24070 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v31 = (void *)sub_B52D50(value);
        if ( v32 != 1 )
          _Unwind_Resume(v31);
        v33 = *(_QWORD *)__cxa_begin_catch(v31);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v35,
          (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v33 )
          sub_B52A28(v33, 0LL);
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v26 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v26 >= 1 )
          {
            v27 = 0LL;
            v28 = &OpenRecoveryNum->m_Items[1];
            while ( v27 < (unsigned int)v26 )
            {
              if ( !v17 )
                goto LABEL_48;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v17,
                                            v28[v27],
                                            (const MethodInfo_2F242E4 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v27 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v17,
                  v28[v27],
                  0LL,
                  (const MethodInfo_2F24070 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v26) = OpenRecoveryNum->max_length;
              if ( (__int64)++v27 >= (int)v26 )
                return v17;
            }
            goto LABEL_47;
          }
          return v17;
        }
      }
LABEL_48:
      sub_B52A5C(Instance, v6);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v17 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v17,
    (const MethodInfo_2F234BC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v23 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = &OpenRecoveryNum->m_Items[1];
    while ( v24 < (unsigned int)v23 )
    {
      if ( !v17 )
        goto LABEL_48;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v17,
                                    v25[v24],
                                    (const MethodInfo_2F242E4 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v24 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v17,
          v25[v24],
          0LL,
          (const MethodInfo_2F24070 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v23) = OpenRecoveryNum->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        return v17;
    }
LABEL_47:
    v30 = sub_B52A88(Instance);
    sub_B52A28(v30, 0LL);
  }
  return v17;
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
  __int64 v9; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v11; // x21
  unsigned __int64 v12; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x11
  System_Collections_Generic_Dictionary_string__ResourceSet__o *v16; // x20
  System_Resources_ResourceSet_o *v17; // x0
  int64_t v20; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-14h] BYREF

  v22 = eventId;
  if ( (byte_42AEED8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&UserEventServantFatigueEntity_TypeInfo);
    byte_42AEED8 = 1;
  }
  v21 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v7 = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v11 = v7;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v9);
  }
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                            lookup,
                            v11,
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
    sub_B52A5C(v7, v8);
  }
  v16 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v21[4];
  if ( !v16 )
    return 0;
  v20 = userSvtId;
  v17 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v16,
           v17,
           (const MethodInfo_2F1BAA8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}