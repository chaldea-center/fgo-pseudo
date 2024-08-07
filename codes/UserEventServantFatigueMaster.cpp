void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7B0 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_49FF7B0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  System_Collections_Generic_List_long__o *v20; // x19
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v28; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int64_t v34; // x21
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  __int64 v40; // x1
  _DWORD *monitor; // x23
  int v42; // w8
  unsigned int v43; // w25
  __int64 v44; // x26
  int v45; // w27
  void *v46; // x21
  Il2CppClass *v47; // x22
  int64_t v48; // x1
  struct System_Int64_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  int64_t v52; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_49FF7B5 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1B64A00(&long_TypeInfo, v10);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B64A00(&NetworkManager_TypeInfo, v15);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64A00(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_49FF7B5 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v20 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v20,
        (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v20 )
        goto LABEL_52;
      items = v20->fields._items;
      v24 = Method_System_Collections_Generic_List_long__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v20,
          0LL,
          *(const MethodInfo_3497968 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size] = 0LL;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v28 = Item,
            methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
LABEL_52:
        sub_1B64C5C(Item, v22);
      }
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v28[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v54,
          klass,
          (const MethodInfo_317C11C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v56 = v54;
LABEL_18:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v56,
                  (const MethodInfo_32788A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v56.fields._current.fields.value )
            sub_1B64C5C(0LL, v31);
          if ( v56.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B64F1C(v56.fields._current.fields.value);
LABEL_51:
            sub_1B64C5C(v39, v40);
          }
          v34 = *(_QWORD *)j_il2cpp_object_unbox_0(v56.fields._current.fields.value, long_TypeInfo, v32, v33);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1B64C5C(0LL, v36);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1B64C5C(0LL, v38);
          v39 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v34,
                  (const MethodInfo_30D6998 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v39 & 1) != 0 )
          {
            monitor = v28[2].monitor;
            if ( !monitor )
              goto LABEL_51;
            v42 = monitor[6];
            if ( v42 >= 1 )
            {
              v43 = 0;
              while ( 1 )
              {
                if ( v43 >= v42 )
                  sub_1B64C64(v39, v40);
                v44 = *(_QWORD *)&monitor[2 * v43 + 8];
                if ( !v44 )
                  sub_1B64C5C(v39, v40);
                if ( !entity )
                  sub_1B64C5C(v39, v40);
                v45 = *(_DWORD *)(v44 + 16);
                v47 = entity[5].klass;
                v46 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v57.fields.currentCryptoKey = v47;
                *(_QWORD *)&v57.fields.fakeValue = v46;
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v57, 0LL);
                if ( v45 == (_DWORD)v39 )
                  break;
                v42 = monitor[6];
                if ( (int)++v43 >= v42 )
                  goto LABEL_18;
              }
              v48 = *(_QWORD *)(v44 + 24);
              v49 = v20->fields._items;
              v50 = Method_System_Collections_Generic_List_long__Add__;
              ++v20->fields._version;
              if ( !v49 )
                sub_1B64C5C(v39, v48);
              v51 = v20->fields._size;
              if ( (unsigned int)v51 >= v49->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v20,
                  v48,
                  *(const MethodInfo_3497968 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = v51 + 1;
                v49->m_Items[v51] = v48;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v56,
          (const MethodInfo_32789C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v52 = System_Linq_Enumerable__Max_63608192((System_Collections_Generic_IEnumerable_long__o *)v20, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      return (v52 - Time) & ~((v52 - Time) >> 63);
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
  __int64 v23; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v25; // x23
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v29; // x24
  __int64 methodPtr_low; // x10
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int64_t v34; // x22
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  void *monitor; // x22
  Il2CppClass *v42; // x23
  __int64 v43; // x8
  int v44; // w9
  int v45; // w10
  __int64 v46; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+10h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+40h] [xbp-A0h] BYREF
  _QWORD *v51; // [xsp+70h] [xbp-70h] BYREF
  int32_t v52; // [xsp+7Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v52 = eventId;
  if ( (byte_49FF7B1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_1B64A00(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_1B64A00(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_1B64A00(&long_TypeInfo, v16);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_1B64A00(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64A00(&UserEventServantFatigueEntity_TypeInfo, v20);
    byte_49FF7B1 = 1;
  }
  v51 = 0LL;
  entity = 0LL;
  memset(&v50, 0, sizeof(v50));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v22 = System_Int32__ToString((int32_t)&v52, 0LL);
  if ( !lookup )
    goto LABEL_40;
  klass = lookup->klass;
  v25 = v22;
  v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v22 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v25,
                             &v51,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v22 & 1) == 0 )
    return 0;
  v29 = v51;
  if ( !v51
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*v51 + 304LL) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v51 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_40:
    sub_1B64C5C(v22, v23);
  }
  v22 = (System_String_o *)v51[4];
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v48,
    (System_Collections_Generic_Dictionary_object__object__o *)v22,
    (const MethodInfo_317C11C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v50 = v48;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v50,
            (const MethodInfo_32788A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_27;
    if ( !v50.fields._current.fields.value )
      sub_1B64C5C(0LL, v31);
    if ( v50.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B64F1C(v50.fields._current.fields.value);
      goto LABEL_40;
    }
    v34 = *(_QWORD *)j_il2cpp_object_unbox_0(v50.fields._current.fields.value, long_TypeInfo, v32, v33);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v36);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64C5C(0LL, v38);
    v39 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v34,
            (const MethodInfo_30D6998 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v39 )
    {
      if ( !entity )
        sub_1B64C5C(v39, v40);
      v42 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v42;
      *(_QWORD *)&v53.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46182092(v53, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v50,
    (const MethodInfo_32789C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_28:
  v43 = v29[5];
  if ( !v43 )
    return 0;
  v44 = *(_DWORD *)(v43 + 24);
  if ( v44 < 1 )
    return 0;
  v45 = 0;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v43 + 8LL * v45 + 32);
    if ( !v46 )
      goto LABEL_40;
    if ( *(_DWORD *)(v46 + 16) == svtId )
      break;
    if ( v44 == ++v45 )
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v26; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_long__o *v28; // x19
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  int64_t *v33; // x0
  int64_t v34; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  int32_t v39; // w20
  int32_t v40; // w8
  struct System_Int64_array *v41; // x9
  _QWORD *v42; // x10
  Il2CppClass **v43; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v46; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_49FF7B3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_1B64A00(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&long_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_1B64A00(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64A00(&UserEventServantFatigueEntity_TypeInfo, v17);
    byte_49FF7B3 = 1;
  }
  v46 = 0LL;
  memset(&v45, 0, sizeof(v45));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v22 = Instance;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v23;
      p_offset += 2;
      if ( !v23 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v22,
               &v46,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v26 = v46;
  if ( !v46 )
    goto LABEL_42;
  methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v46 + 304LL) < (unsigned int)methodPtr_low
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v46 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_42;
  }
  if ( !v46[4] )
    return 0LL;
  v28 = (System_Collections_Generic_List_long__o *)sub_1B64C4C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_3497114 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v26[4];
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v44,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_317C11C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v29 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v45,
            (const MethodInfo_32788A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v29 )
      break;
    if ( !v28 )
      sub_1B64C5C(v29, v30);
    if ( !v45.fields._current.fields.value )
      sub_1B64C5C(0LL, v30);
    if ( v45.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B64F1C(v45.fields._current.fields.value);
      goto LABEL_42;
    }
    v33 = (int64_t *)j_il2cpp_object_unbox_0(v45.fields._current.fields.value, long_TypeInfo, v31, v32);
    v34 = *v33;
    items = v28->fields._items;
    v36 = Method_System_Collections_Generic_List_long__Add__;
    ++v28->fields._version;
    if ( !items )
      sub_1B64C5C(v33, v34);
    size = v28->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v28,
        v34,
        *(const MethodInfo_3497968 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v28->fields._size = size + 1;
      items->m_Items[size] = v34;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v45,
    (const MethodInfo_32789C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0LL)) == 0
    || !v28 )
  {
LABEL_42:
    sub_1B64C5C(Instance, v20);
  }
  v39 = *(_DWORD *)(Instance + 24);
LABEL_31:
  v40 = v28->fields._size;
  while ( v40 < v39 )
  {
    v41 = v28->fields._items;
    v42 = Method_System_Collections_Generic_List_long__Add__;
    ++v28->fields._version;
    if ( !v41 )
      goto LABEL_42;
    if ( v40 >= v41->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v28,
        0LL,
        *(const MethodInfo_3497968 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      goto LABEL_31;
    }
    v43 = &v41->obj.klass + v40++;
    v28->fields._size = v40;
    v43[4] = 0LL;
  }
  return System_Collections_Generic_List_long___ToArray(
           v28,
           (const MethodInfo_34994C0 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v24; // x21
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v28; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__long__o *v30; // x20
  Il2CppObject *value; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int32_t v36; // w21
  int64_t *v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x21
  int32_t *v40; // x22
  __int64 v41; // x8
  unsigned __int64 v42; // x21
  int32_t *v43; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-80h] BYREF
  _QWORD *v47; // [xsp+60h] [xbp-50h] BYREF
  int32_t v48; // [xsp+6Ch] [xbp-44h] BYREF

  v48 = eventId;
  if ( (byte_49FF7B4 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12);
    sub_1B64A00(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_1B64A00(&long_TypeInfo, v14);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64A00(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_49FF7B4 = 1;
  }
  v47 = 0LL;
  memset(&v46, 0, sizeof(v46));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_47;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v48, 0LL);
  if ( !lookup )
    goto LABEL_47;
  klass = lookup->klass;
  v24 = Instance;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v24,
                                &v47,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v28 = v47;
    if ( !v47 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v47 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v47 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_47;
    }
    if ( v47[4] )
    {
      v30 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v30,
        (const MethodInfo_31229E4 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v28[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v45,
          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
          (const MethodInfo_317C11C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v46 = v45;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v46,
                  (const MethodInfo_32788A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          value = v46.fields._current.fields.value;
          v32 = System_Int32__Parse((System_String_o *)v46.fields._current.fields.key, 0LL);
          if ( !v30 )
            goto LABEL_49;
          if ( !value )
            sub_1B64C5C(v32, v33);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B64F1C(value);
LABEL_49:
            sub_1B64C5C(v32, v33);
          }
          v36 = v32;
          v37 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v34, v35);
          System_Collections_Generic_Dictionary_int__long___Add(
            v30,
            v36,
            *v37,
            (const MethodInfo_31233B8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v46,
          (const MethodInfo_32789C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( OpenRecoveryNum )
        {
          v41 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v41 >= 1 )
          {
            v42 = 0LL;
            v43 = &OpenRecoveryNum->m_Items[1];
            while ( v42 < (unsigned int)v41 )
            {
              if ( !v30 )
                goto LABEL_47;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v30,
                                            v43[v42],
                                            (const MethodInfo_31235AC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v42 >= OpenRecoveryNum->max_length )
                  goto LABEL_46;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v30,
                  v43[v42],
                  0LL,
                  (const MethodInfo_31233B8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v41) = OpenRecoveryNum->max_length;
              if ( (__int64)++v42 >= (int)v41 )
                return v30;
            }
            goto LABEL_46;
          }
          return v30;
        }
      }
LABEL_47:
      sub_1B64C5C(Instance, v20);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_47;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v30 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v30,
    (const MethodInfo_31229E4 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v38 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v38 >= 1 )
  {
    v39 = 0LL;
    v40 = &OpenRecoveryNum->m_Items[1];
    while ( v39 < (unsigned int)v38 )
    {
      if ( !v30 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v30,
                                    v40[v39],
                                    (const MethodInfo_31235AC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v39 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v30,
          v40[v39],
          0LL,
          (const MethodInfo_31233B8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v38) = OpenRecoveryNum->max_length;
      if ( (__int64)++v39 >= (int)v38 )
        return v30;
    }
LABEL_46:
    sub_1B64C64(Instance, v20);
  }
  return v30;
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v13; // x21
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  Il2CppObject *v22; // x0
  int64_t v25; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_Dictionary_object__object__o **v26; // [xsp+10h] [xbp-30h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-24h] BYREF

  v27 = eventId;
  if ( (byte_49FF7B2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, *(_QWORD *)&eventId);
    sub_1B64A00(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6);
    sub_1B64A00(&long_TypeInfo, v7);
    sub_1B64A00(&UserEventServantFatigueEntity_TypeInfo, v8);
    byte_49FF7B2 = 1;
  }
  v26 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v10 = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v13 = v10;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB69E0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_Dictionary_object__object__o ***, _QWORD))p_method)(
                             lookup,
                             v13,
                             &v26,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v26
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*v26)[3].fields._values) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)&(*v26)[2].fields._freeCount + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_1B64C5C(v10, v11);
  }
  v21 = v26[4];
  if ( !v21 )
    return 0;
  v25 = userSvtId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25, v17, v18, v19);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v21,
           v22,
           (const MethodInfo_317BF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}