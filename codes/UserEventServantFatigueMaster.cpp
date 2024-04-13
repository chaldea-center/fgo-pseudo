void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70CE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70CE = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    296,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t __fastcall UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int64_t result; // x0
  System_Collections_Generic_List_long__o *v54; // x21
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v56; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x20
  int32_t Count; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v59; // x20
  __int64 v60; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *klass; // x0
  __int64 v62; // x1
  int64_t v63; // x21
  WebViewManager_o *Instance; // x0
  __int64 v65; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  _DWORD *monitor; // x19
  int v71; // w8
  unsigned int v72; // w25
  __int64 v73; // x26
  int v74; // w27
  __int64 v75; // x21
  __int64 v76; // x22
  int64_t v77; // x19
  int64_t Time; // x0
  __int64 v79; // x0
  System_Collections_Generic_List_long__o *v80; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v81; // [xsp+10h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v83; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_42E70D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v23, v24, v25);
    sub_B5D5C4(&long_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&NetworkManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&UserEventServantFatigueEntity_TypeInfo, v50, v51, v52);
    byte_42E70D3 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v54 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v54,
        (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v54
        || (System_Collections_Generic_List_long___Add(
              v54,
              0LL,
              (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__),
            (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL)
        || (Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v59 = Item,
            v60 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v60)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[v60 - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
        sub_B5D69C(Item, v56);
      }
      klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Item[2].klass;
      if ( klass && v59[2].monitor )
      {
        v80 = v54;
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v81,
          klass,
          (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v83 = v81;
LABEL_13:
        while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v83,
                  (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v83.fields.current.fields.value )
            sub_B5D69C(0LL, v62);
          if ( v83.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            v68 = sub_B5D990(v83.fields.current.fields.value);
LABEL_46:
            sub_B5D69C(v68, v69);
          }
          v63 = *(_QWORD *)j_il2cpp_object_unbox_0(v83.fields.current.fields.value);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_B5D69C(0LL, v65);
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B5D69C(0LL, v67);
          v68 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  v63,
                  (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v68 & 1) != 0 )
          {
            monitor = v59[2].monitor;
            if ( !monitor )
              goto LABEL_46;
            v71 = monitor[6];
            if ( v71 >= 1 )
            {
              v72 = 0;
              while ( 1 )
              {
                if ( v72 >= v71 )
                {
                  v79 = sub_B5D6C8(v68);
                  sub_B5D668(v79, 0LL);
                }
                v73 = *(_QWORD *)&monitor[2 * v72 + 8];
                if ( !v73 )
                  sub_B5D69C(v68, v69);
                if ( !entity )
                  sub_B5D69C(v68, v69);
                v74 = *(_DWORD *)(v73 + 16);
                v76 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
                v75 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v84.fields.currentCryptoKey = v76;
                *(_QWORD *)&v84.fields.fakeValue = v75;
                v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v84, 0LL);
                if ( v74 == (_DWORD)v68 )
                  break;
                v71 = monitor[6];
                if ( (int)++v72 >= v71 )
                  goto LABEL_13;
              }
              System_Collections_Generic_List_long___Add(
                v80,
                *(_QWORD *)(v73 + 24),
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v83,
          (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        v54 = v80;
      }
      v77 = System_Linq_Enumerable__Max_41210692((System_Collections_Generic_IEnumerable_long__o *)v54, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      return (v77 - Time) & ~((v77 - Time) >> 63);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantFatigueMaster__GetFatigueInfo(
        UserEventServantFatigueMaster_o *this,
        int64_t *recoverAt,
        bool *isRecover,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v48; // x23
  unsigned __int64 v49; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v52; // x24
  __int64 v53; // x10
  __int64 v54; // x1
  int64_t v55; // x22
  WebViewManager_o *Instance; // x0
  __int64 v57; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v59; // x1
  _BOOL8 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x22
  __int64 v63; // x23
  __int64 v64; // x10
  int v65; // w8
  __int64 v66; // x9
  __int64 v67; // x10
  __int64 v68; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v70; // [xsp+10h] [xbp-C0h] BYREF
  UserServantEntity_o *entity; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v72; // [xsp+40h] [xbp-90h] BYREF
  _QWORD *v73; // [xsp+70h] [xbp-60h] BYREF
  int32_t v74; // [xsp+7Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  v74 = eventId;
  if ( (byte_42E70CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)recoverAt,
      (_DWORD)isRecover,
      *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&long_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&UserEventServantFatigueEntity_TypeInfo, v40, v41, v42);
    byte_42E70CF = 1;
  }
  v73 = 0LL;
  entity = 0LL;
  memset(&v72, 0, sizeof(v72));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v44 = (__int64)System_Int32__ToString((int32_t)&v74, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v48 = v44;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v49;
      p_offset += 2;
      if ( v49 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v46);
  }
  v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
          lookup,
          v48,
          &v73,
          *(_QWORD *)(p_method + 8));
  if ( (v44 & 1) == 0 )
    return 0;
  v52 = v73;
  if ( !v73
    || (v53 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v73 + 300LL) < (unsigned int)v53)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v73 + 200LL) + 8 * v53 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_42:
    sub_B5D69C(v44, v45);
  }
  v44 = v73[4];
  if ( !v44 )
    goto LABEL_29;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v70,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v44,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v72 = v70;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v72,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_28;
    if ( !v72.fields.current.fields.value )
      sub_B5D69C(0LL, v54);
    if ( v72.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v44 = sub_B5D990(v72.fields.current.fields.value);
      goto LABEL_42;
    }
    v55 = *(_QWORD *)j_il2cpp_object_unbox_0(v72.fields.current.fields.value);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v57);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v59);
    v60 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v55,
            (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v60 )
    {
      if ( !entity )
        sub_B5D69C(v60, v61);
      v63 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v62 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v75.fields.currentCryptoKey = v63;
      *(_QWORD *)&v75.fields.fakeValue = v62;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v75, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_28:
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v72,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_29:
  v64 = v52[5];
  if ( !v64 )
    return 0;
  v65 = *(_DWORD *)(v64 + 24);
  if ( v65 < 1 )
    return 0;
  v66 = 0LL;
  v67 = v64 + 32;
  while ( 1 )
  {
    v68 = *(_QWORD *)(v67 + 8 * v66);
    if ( !v68 )
      goto LABEL_42;
    if ( *(_DWORD *)(v68 + 16) == svtId )
      break;
    if ( (int)++v66 >= v65 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v68 + 24);
  return result;
}


System_Int64_array *__fastcall UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x19
  __int64 Instance; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v52; // x20
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v56; // x20
  __int64 v57; // x10
  System_Collections_Generic_List_long__o *v58; // x19
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int64_t *v61; // x0
  int32_t v63; // w20
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v65; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v66; // [xsp+60h] [xbp-30h] BYREF
  int32_t v67; // [xsp+6Ch] [xbp-24h] BYREF

  v67 = eventId;
  if ( (byte_42E70D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&long_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    sub_B5D5C4(&UserEventServantFatigueEntity_TypeInfo, v44, v45, v46);
    byte_42E70D1 = 1;
  }
  v66 = 0LL;
  memset(&v65, 0, sizeof(v65));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&v67, 0LL);
  if ( !lookup )
    goto LABEL_35;
  klass = lookup->klass;
  v52 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v53;
      p_offset += 2;
      if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v50);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v52,
               &v66,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v56 = v66;
  if ( !v66 )
    goto LABEL_35;
  v57 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*v66 + 300LL) < (unsigned int)v57
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v66 + 200LL) + 8 * v57 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_35;
  }
  if ( !v66[4] )
    return 0LL;
  v58 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v58,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v56[4];
  if ( !Instance )
    goto LABEL_35;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v64,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v59 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v65,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v59 )
      break;
    if ( !v58 )
      sub_B5D69C(v59, v60);
    if ( !v65.fields.current.fields.value )
      sub_B5D69C(0LL, v60);
    if ( v65.fields.current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      Instance = sub_B5D990(v65.fields.current.fields.value);
      goto LABEL_35;
    }
    v61 = (int64_t *)j_il2cpp_object_unbox_0(v65.fields.current.fields.value);
    System_Collections_Generic_List_long___Add(
      v58,
      *v61,
      (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v65,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              v67,
                              0LL)) == 0
    || !v58 )
  {
LABEL_35:
    sub_B5D69C(Instance, v49);
  }
  v63 = *(_DWORD *)(Instance + 24);
  while ( v58->fields._size < v63 )
    System_Collections_Generic_List_long___Add(
      v58,
      0LL,
      (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  return System_Collections_Generic_List_long___ToArray(
           v58,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Collections_Generic_Dictionary_int__long__o *__fastcall UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  __int64 v52; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v54; // x21
  unsigned __int64 v55; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  _QWORD *v58; // x21
  __int64 v59; // x10
  System_Collections_Generic_Dictionary_int__long__o *v60; // x20
  Il2CppObject *value; // x22
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w21
  int64_t *v65; // x0
  __int64 v66; // x8
  unsigned __int64 v67; // x21
  int32_t *v68; // x22
  __int64 v69; // x8
  unsigned __int64 v70; // x21
  int32_t *v71; // x22
  __int64 v73; // x0
  void *v74; // x0
  int v75; // w1
  __int64 v76; // x21
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v78; // [xsp+30h] [xbp-70h] BYREF
  _QWORD *v79; // [xsp+58h] [xbp-48h] BYREF
  int32_t v80; // [xsp+6Ch] [xbp-34h] BYREF

  v80 = eventId;
  if ( (byte_42E70D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&long_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&UserEventServantFatigueEntity_TypeInfo, v45, v46, v47);
    byte_42E70D2 = 1;
  }
  v79 = 0LL;
  memset(&v78, 0, sizeof(v78));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_48;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v80, 0LL);
  if ( !lookup )
    goto LABEL_48;
  klass = lookup->klass;
  v54 = Instance;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v55;
      p_offset += 2;
      if ( v55 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v52);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v54,
                                &v79,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v58 = v79;
    if ( !v79 )
      goto LABEL_48;
    v59 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v79 + 300LL) < (unsigned int)v59
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v79 + 200LL) + 8 * v59 - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_48;
    }
    if ( v79[4] )
    {
      v60 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v60,
        (const MethodInfo_2F2D878 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v58[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v77,
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Instance,
          (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v78 = v77;
        while ( 1 )
        {
          if ( !System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                  &v78,
                  (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v78,
              (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_37;
          }
          value = v78.fields.current.fields.value;
          v62 = System_Int32__Parse((System_String_o *)v78.fields.current.fields.key, 0LL);
          if ( !v60 )
            sub_B5D69C(v62, v63);
          if ( !value )
            sub_B5D69C(v62, v63);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            break;
          v64 = v62;
          v65 = (int64_t *)j_il2cpp_object_unbox_0(value);
          System_Collections_Generic_Dictionary_int__long___Add(
            v60,
            v64,
            *v65,
            (const MethodInfo_2F2E42C *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        v74 = (void *)sub_B5D990(value);
        if ( v75 != 1 )
          _Unwind_Resume(v74);
        v76 = *(_QWORD *)__cxa_begin_catch(v74);
        __cxa_end_catch();
        System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
          &v78,
          (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( v76 )
          sub_B5D668(v76, 0LL);
LABEL_37:
        if ( OpenRecoveryNum )
        {
          v69 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v69 >= 1 )
          {
            v70 = 0LL;
            v71 = &OpenRecoveryNum->m_Items[1];
            while ( v70 < (unsigned int)v69 )
            {
              if ( !v60 )
                goto LABEL_48;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v60,
                                            v71[v70],
                                            (const MethodInfo_2F2E6A0 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v70 >= OpenRecoveryNum->max_length )
                  goto LABEL_47;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v60,
                  v71[v70],
                  0LL,
                  (const MethodInfo_2F2E42C *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v69) = OpenRecoveryNum->max_length;
              if ( (__int64)++v70 >= (int)v69 )
                return v60;
            }
            goto LABEL_47;
          }
          return v60;
        }
      }
LABEL_48:
      sub_B5D69C(Instance, v49);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_48;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v60 = (System_Collections_Generic_Dictionary_int__long__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v60,
    (const MethodInfo_2F2D878 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v66 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v66 >= 1 )
  {
    v67 = 0LL;
    v68 = &OpenRecoveryNum->m_Items[1];
    while ( v67 < (unsigned int)v66 )
    {
      if ( !v60 )
        goto LABEL_48;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v60,
                                    v68[v67],
                                    (const MethodInfo_2F2E6A0 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v67 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v60,
          v68[v67],
          0LL,
          (const MethodInfo_2F2E42C *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v66) = OpenRecoveryNum->max_length;
      if ( (__int64)++v67 >= (int)v66 )
        return v60;
    }
LABEL_47:
    v73 = sub_B5D6C8(Instance);
    sub_B5D668(v73, 0LL);
  }
  return v60;
}


bool __fastcall UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v20; // x21
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x11
  System_Collections_Generic_Dictionary_string__ResourceSet__o *v25; // x20
  System_Resources_ResourceSet_o *v26; // x0
  int64_t v29; // [xsp+0h] [xbp-30h] BYREF
  _QWORD *v30; // [xsp+8h] [xbp-28h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-14h] BYREF

  v31 = eventId;
  if ( (byte_42E70D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__,
      eventId,
      userSvtId,
      method);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&long_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UserEventServantFatigueEntity_TypeInfo, v12, v13, v14);
    byte_42E70D0 = 1;
  }
  v30 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v16 = System_Int32__ToString((int32_t)&v31, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v20 = v16;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      p_offset += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 1LL,
                 v18);
  }
  v16 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v20,
                             &v30,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v16 & 1) == 0 )
    return 0;
  if ( !v30
    || (v24 = *(&UserEventServantFatigueEntity_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*v30 + 300LL) < (unsigned int)v24)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v30 + 200LL) + 8 * v24 - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_B5D69C(v16, v17);
  }
  v25 = (System_Collections_Generic_Dictionary_string__ResourceSet__o *)v30[4];
  if ( !v25 )
    return 0;
  v29 = userSvtId;
  v26 = (System_Resources_ResourceSet_o *)j_il2cpp_value_box_0(long_TypeInfo, &v29);
  return System_Collections_Generic_Dictionary_string__ResourceSet___ContainsValue(
           v25,
           v26,
           (const MethodInfo_2F26E64 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}