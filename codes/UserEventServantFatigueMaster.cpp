void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F79 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_4186F79 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    295,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  System_Collections_Generic_List_long__o *v20; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x20
  __int64 v26; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *klass; // x0
  __int64 v28; // x1
  int64_t v29; // x21
  WebViewManager_o *Instance; // x0
  __int64 v31; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  _DWORD *monitor; // x19
  int v37; // w8
  unsigned int v38; // w25
  __int64 v39; // x26
  int v40; // w27
  __int64 v41; // x21
  __int64 v42; // x22
  int64_t v43; // x19
  int64_t Time; // x0
  __int64 v45; // x0
  System_Collections_Generic_List_long__o *v46; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v47; // [xsp+10h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v49; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4186F7E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B2C35C(&long_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_4186F7E = 1;
  }
  memset(&v49, 0, sizeof(v49));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v20 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v20,
        (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v20
        || (System_Collections_Generic_List_long___Add(
              v20,
              0LL,
              (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v25 = Item,
            v26 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v26)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B2C434(Item, v22);
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v25[2].monitor )
      {
        v46 = v20;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v47,
          klass,
          (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v49 = v47;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v49,
                  (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v49.fields.current.fields.value )
            sub_B2C434(0LL, v28);
          if ( v49.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            v34 = sub_B2C728(v49.fields.current.fields.value);
LABEL_46:
            sub_B2C434(v34, v35);
          }
          v29 = *(_QWORD *)j_il2cpp_object_unbox_0(v49.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B2C434(0LL, v31);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B2C434(0LL, v33);
          v34 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v29,
                  (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v34 & 1) != 0 )
          {
            monitor = v25[2].monitor;
            if ( !monitor )
              goto LABEL_46;
            v37 = monitor[6];
            if ( v37 >= 1 )
            {
              v38 = 0;
              while ( 1 )
              {
                if ( v38 >= v37 )
                {
                  v45 = sub_B2C460(v34);
                  sub_B2C400(v45, 0LL);
                }
                v39 = *(_QWORD *)&monitor[2 * v38 + 8];
                if ( !v39 )
                  sub_B2C434(v34, v35);
                if ( !entity )
                  sub_B2C434(v34, v35);
                v40 = *(_DWORD *)(v39 + 16);
                v42 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
                v41 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v50.fields.currentCryptoKey = v42;
                *(_QWORD *)&v50.fields.fakeValue = v41;
                v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50, 0LL);
                if ( v40 == (_DWORD)v34 )
                  break;
                v37 = monitor[6];
                if ( (int)++v38 >= v37 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v46,
                *(_QWORD *)(v39 + 24),
                (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v49,
          (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v20 = v46;
      }
      v43 = System_Linq_Enumerable__Max_40444508((System_Collections_Generic_IEnumerable_long__o *)v20, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      return (v43 - Time) & ~((v43 - Time) >> 63);
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
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v26; // x23
  unsigned __int64 v27; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v30; // x24
  __int64 v31; // x10
  __int64 v32; // x1
  int64_t v33; // x22
  WebViewManager_o *Instance; // x0
  __int64 v35; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x22
  __int64 v41; // x23
  __int64 v42; // x10
  int v43; // w8
  __int64 v44; // x9
  __int64 v45; // x10
  __int64 v46; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v48; // [xsp+10h] [xbp-C0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v50; // [xsp+40h] [xbp-90h] BYREF
  _QWORD *v51; // [xsp+70h] [xbp-60h] BYREF
  int32_t v52; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v52 = eventId;
  if ( (byte_4186F7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_B2C35C(&long_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&UserEventServantFatigueEntity_TypeInfo, v20);
    byte_4186F7A = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  memset(&v50, 0, sizeof(v50));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v22 = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v26 = v22;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v27;
      p_offset += 2;
      if ( v27 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v24);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
          lookup,
          v26,
          &v51,
          *(_QWORD *)(p_method + 8));
  if ( (v22 & 1) == 0 )
    return 0;
  v30 = v51;
  if ( !v51
    || (v31 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v51 + 300LL) < (unsigned int)v31)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v51 + 200LL) + 8 * v31 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B2C434(v22, v23);
  }
  v22 = v51[4];
  if ( !v22 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v48,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v22,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v50 = v48;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v50,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v50.fields.current.fields.value )
      sub_B2C434(0LL, v32);
    if ( v50.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v22 = sub_B2C728(v50.fields.current.fields.value);
      goto LABEL_42;
    }
    v33 = *(_QWORD *)j_il2cpp_object_unbox_0(v50.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v35);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v37);
    v38 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v33,
            (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v38 )
    {
      if ( !entity )
        sub_B2C434(v38, v39);
      v41 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v53.fields.currentCryptoKey = v41;
      *(_QWORD *)&v53.fields.fakeValue = v40;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v50,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
  v42 = v30[5];
  if ( !v42 )
    return 0;
  v43 = *(_DWORD *)(v42 + 24);
  if ( v43 < 1 )
    return 0;
  v44 = 0LL;
  v45 = v42 + 32;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v45 + 8 * v44);
    if ( !v46 )
      goto LABEL_42;
    if ( *(_DWORD *)(v46 + 16) == svtId )
      break;
    if ( (int)++v44 >= v43 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v46 + 24);
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
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v27; // x20
  __int64 v28; // x10
  System_Collections_Generic_List_long__o *v29; // x19
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int64_t *v32; // x0
  int32_t v34; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v36; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v37; // [xsp+60h] [xbp-30h] BYREF
  int32_t v38; // [xsp+6Ch] [xbp-24h] BYREF

  v38 = eventId;
  if ( (byte_4186F7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&long_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&UserEventServantFatigueEntity_TypeInfo, v17);
    byte_4186F7C = 1;
  }
  v37 = 0LL;
  memset(&v36, 0, sizeof(v36));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&v38, 0LL);
  if ( !lookup )
    goto LABEL_35;
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
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v21);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v23,
               &v37,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v27 = v37;
  if ( !v37 )
    goto LABEL_35;
  v28 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v37 + 300LL) < (unsigned int)v28
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v37 + 200LL) + 8 * v28 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v37[4] )
    return 0LL;
  v29 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v27[4];
  if ( !Instance )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v35,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v36,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v30 )
      break;
    if ( !v29 )
      sub_B2C434(v30, v31);
    if ( !v36.fields.current.fields.value )
      sub_B2C434(0LL, v31);
    if ( v36.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Instance = sub_B2C728(v36.fields.current.fields.value);
      goto LABEL_35;
    }
    v32 = (int64_t *)j_il2cpp_object_unbox_0(v36.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v29,
      *v32,
      (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v36,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              v38,
                              0LL)) == 0
    || !v29 )
  {
LABEL_35:
    sub_B2C434(Instance, v20);
  }
  v34 = *(_DWORD *)(Instance + 24);
  while ( v29->fields._size < v34 )
    System_Collections_Generic_List_long___Add(
      v29,
      0LL,
      (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v29,
           (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v20; // x1
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  __int64 v23; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v25; // x21
  unsigned __int64 v26; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v29; // x21
  __int64 v30; // x10
  System_Collections_Generic_Dictionary_int__long__o *v31; // x20
  Il2CppObject *value; // x22
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  int64_t *v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x21
  int32_t *v39; // x22
  __int64 v40; // x8
  unsigned __int64 v41; // x21
  int32_t *v42; // x22
  __int64 v44; // x0
  void *v45; // x0
  int v46; // w1
  __int64 v47; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v49; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v50; // [xsp+58h] [xbp-48h] BYREF
  int32_t v51; // [xsp+6Ch] [xbp-34h] BYREF

  v51 = eventId;
  if ( (byte_4186F7D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&long_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_4186F7D = 1;
  }
  v50 = 0LL;
  memset(&v49, 0, sizeof(v49));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v51, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v25 = Instance;
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
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v23);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v25,
                                &v50,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v29 = v50;
    if ( !v50 )
      goto LABEL_48;
    v30 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v50 + 300LL) < (unsigned int)v30
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v50 + 200LL) + 8 * v30 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v50[4] )
    {
      v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v31,
        (const MethodInfo_2E5FF00 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v29[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v48,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
          (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v49 = v48;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v49,
                  (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v49,
              (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v49.fields.current.fields.value;
          v33 = System_Int32__Parse((System_String_o *)v49.fields.current.fields.key, 0LL);
          if ( !v31 )
            sub_B2C434(v33, v34);
          if ( !value )
            sub_B2C434(v33, v34);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v35 = v33;
          v36 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v31,
            v35,
            *v36,
            (const MethodInfo_2E60AB4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v45 = (void *)sub_B2C728(value);
        if ( v46 != 1 )
          _Unwind_Resume(v45);
        v47 = *(_QWORD *)__cxa_begin_catch(v45);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v49,
          (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v47 )
          sub_B2C400(v47, 0LL);
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v40 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            v42 = &OpenRecoveryNum->m_Items[1];
            while ( v41 < (unsigned int)v40 )
            {
              if ( !v31 )
                goto LABEL_48;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v31,
                                            v42[v41],
                                            (const MethodInfo_2E60D28 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v41 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v31,
                  v42[v41],
                  0LL,
                  (const MethodInfo_2E60AB4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v40) = OpenRecoveryNum->max_length;
              if ( (__int64)++v41 >= (int)v40 )
                return v31;
            }
            goto LABEL_47;
          }
          return v31;
        }
      }
LABEL_48:
      sub_B2C434(Instance, v20);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v31,
    (const MethodInfo_2E5FF00 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v37 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    v39 = &OpenRecoveryNum->m_Items[1];
    while ( v38 < (unsigned int)v37 )
    {
      if ( !v31 )
        goto LABEL_48;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v31,
                                    v39[v38],
                                    (const MethodInfo_2E60D28 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v38 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v31,
          v39[v38],
          0LL,
          (const MethodInfo_2E60AB4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v37) = OpenRecoveryNum->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        return v31;
    }
LABEL_47:
    v44 = sub_B2C460(Instance);
    sub_B2C400(v44, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v14; // x21
  unsigned __int64 v15; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x11
  System_Collections_Generic_Dictionary_string__ResourceSet__o *v19; // x20
  System_Resources_ResourceSet_o *v20; // x0
  int64_t v23; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v24; // [xsp+8h] [xbp-28h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-14h] BYREF

  v25 = eventId;
  if ( (byte_4186F7B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&long_TypeInfo, v7);
    sub_B2C35C(&UserEventServantFatigueEntity_TypeInfo, v8);
    byte_4186F7B = 1;
  }
  v24 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v10 = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v14 = v10;
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
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v12);
  }
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v14,
                             &v24,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v24
    || (v18 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v24 + 300LL) < (unsigned int)v18)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v24 + 200LL) + 8 * v18 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_B2C434(v10, v11);
  }
  v19 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v24[4];
  if ( !v19 )
    return 0;
  v23 = userSvtId;
  v20 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v19,
           v20,
           (const MethodInfo_2DB1F68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}