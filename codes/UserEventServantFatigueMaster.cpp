void UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB712C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_4CB712C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    303,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0
  System_Collections_Generic_List_long__o *v4; // x19
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  int64_t v17; // x21
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  _DWORD *monitor; // x23
  int v25; // w8
  unsigned int v26; // w25
  __int64 v27; // x26
  int v28; // w27
  void *v29; // x21
  Il2CppClass *v30; // x22
  int64_t v31; // x1
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  int64_t v35; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4CB7131 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB7131 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  entity = 0;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v4 )
        goto LABEL_50;
      items = v4->fields._items;
      v8 = Method_System_Collections_Generic_List_long__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_50;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          0,
          *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = 0;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__)) == 0) )
      {
LABEL_50:
        sub_1C6BC60(Item, v6);
      }
      v12 = Item;
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v12[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v37,
          klass,
          (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v39 = v37;
LABEL_16:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v39,
                  (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v39.fields._current.fields.value )
            sub_1C6BC60(0, v14);
          if ( v39.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1C6BFFC(v39.fields._current.fields.value);
LABEL_49:
            sub_1C6BC60(v22, v23);
          }
          v17 = *(_QWORD *)j_il2cpp_object_unbox_0(v39.fields._current.fields.value, long_TypeInfo, v15, v16);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1C6BC60(0, v19);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1C6BC60(0, v21);
          v22 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v17,
                  (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v22 & 1) != 0 )
          {
            monitor = v12[2].monitor;
            if ( !monitor )
              goto LABEL_49;
            v25 = monitor[6];
            if ( v25 >= 1 )
            {
              v26 = 0;
              while ( 1 )
              {
                if ( v26 >= v25 )
                  sub_1C6BC68(v22);
                v27 = *(_QWORD *)&monitor[2 * v26 + 8];
                if ( !v27 )
                  sub_1C6BC60(v22, v23);
                if ( !entity )
                  sub_1C6BC60(v22, v23);
                v28 = *(_DWORD *)(v27 + 16);
                v30 = entity[5].klass;
                v29 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v40.fields.currentCryptoKey = v30;
                *(_QWORD *)&v40.fields.fakeValue = v29;
                v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0);
                if ( v28 == (_DWORD)v22 )
                  break;
                v25 = monitor[6];
                if ( (int)++v26 >= v25 )
                  goto LABEL_16;
              }
              v31 = *(_QWORD *)(v27 + 24);
              v32 = v4->fields._items;
              v33 = Method_System_Collections_Generic_List_long__Add__;
              ++v4->fields._version;
              if ( !v32 )
                sub_1C6BC60(v22, v31);
              v34 = v4->fields._size;
              if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v4,
                  v31,
                  *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v4->fields._size = v34 + 1;
                v32->m_Items[v34] = v31;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v39,
          (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v35 = System_Linq_Enumerable__Max_66967376((System_Collections_Generic_IEnumerable_long__o *)v4, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      return (v35 - Time) & ~((v35 - Time) >> 63);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


bool UserEventServantFatigueMaster__GetFatigueInfo(
        UserEventServantFatigueMaster_o *this,
        int64_t *recoverAt,
        bool *isRecover,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x22
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v14; // x23
  __int64 v15; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int64_t v21; // x22
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  void *monitor; // x22
  Il2CppClass *v29; // x23
  __int64 v30; // x8
  int v31; // w9
  int v32; // w10
  __int64 v33; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+0h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v38; // [xsp+60h] [xbp-70h] BYREF
  int32_t v39; // [xsp+6Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v39 = eventId;
  if ( (byte_4CB712D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB712D = 1;
  }
  v38 = 0;
  entity = 0;
  memset(&v37, 0, sizeof(v37));
  *isRecover = 0;
  *recoverAt = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33F6ED0 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v11 = System_Int32__ToString((int32_t)&v39, 0);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v14 = v11;
  v15 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_8;
    }
    v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v17 = sub_1C41D90(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v17)(
                             lookup,
                             v14,
                             &v38,
                             *(_QWORD *)(v17 + 8));
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  if ( !v38 )
    goto LABEL_39;
  v11 = *(System_String_o **)(v38 + 32);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_object__object__o *)v11,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v37 = v35;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v37,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_25;
    if ( !v37.fields._current.fields.value )
      sub_1C6BC60(0, v18);
    if ( v37.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C6BFFC(v37.fields._current.fields.value);
      goto LABEL_39;
    }
    v21 = *(_QWORD *)j_il2cpp_object_unbox_0(v37.fields._current.fields.value, long_TypeInfo, v19, v20);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v23);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C6BC60(0, v25);
    v26 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v21,
            (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v26 )
    {
      if ( !entity )
        sub_1C6BC60(v26, v27);
      v29 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v29;
      *(_QWORD *)&v40.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v37,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_26:
  if ( !v38 )
LABEL_39:
    sub_1C6BC60(v11, v12);
  v30 = *(_QWORD *)(v38 + 40);
  if ( !v30 )
    return 0;
  v31 = *(_DWORD *)(v30 + 24);
  if ( v31 < 1 )
    return 0;
  v32 = 0;
  while ( 1 )
  {
    v33 = *(_QWORD *)(v30 + 8LL * v32 + 32);
    if ( !v33 )
      goto LABEL_39;
    if ( *(_DWORD *)(v33 + 16) == svtId )
      break;
    if ( v31 == ++v32 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v33 + 24);
  return result;
}


System_Int64_array *UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x19
  __int64 Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  __int64 v8; // x20
  __int64 v9; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_List_long__o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  int64_t *v17; // x0
  int64_t v18; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int32_t v23; // w20
  int32_t v24; // w8
  struct System_Int64_array *v25; // x9
  _QWORD *v26; // x10
  Il2CppClass **v27; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-60h] BYREF
  __int64 v30; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4CB712F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB712F = 1;
  }
  v30 = 0;
  memset(&v29, 0, sizeof(v29));
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33F6ED0 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v8 = Instance;
  v9 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v11 = sub_1C41D90(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, __int64 *, _QWORD))v11)(
               lookup,
               v8,
               &v30,
               *(_QWORD *)(v11 + 8));
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v30 )
    goto LABEL_41;
  if ( !*(_QWORD *)(v30 + 32) )
    return 0;
  v12 = (System_Collections_Generic_List_long__o *)sub_1C6BC54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_37E8154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !v30 )
    goto LABEL_41;
  Instance = *(_QWORD *)(v30 + 32);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v29,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v13 )
      break;
    if ( !v12 )
      sub_1C6BC60(v13, v14);
    if ( !v29.fields._current.fields.value )
      sub_1C6BC60(0, v14);
    if ( v29.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C6BFFC(v29.fields._current.fields.value);
      goto LABEL_41;
    }
    v17 = (int64_t *)j_il2cpp_object_unbox_0(v29.fields._current.fields.value, long_TypeInfo, v15, v16);
    v18 = *v17;
    items = v12->fields._items;
    v20 = Method_System_Collections_Generic_List_long__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1C6BC60(v17, v18);
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v12,
        v18,
        *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = size + 1;
      items->m_Items[size] = v18;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v29,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0)) == 0
    || !v12 )
  {
LABEL_41:
    sub_1C6BC60(Instance, v6);
  }
  v23 = *(_DWORD *)(Instance + 24);
LABEL_30:
  v24 = v12->fields._size;
  while ( v24 < v23 )
  {
    v25 = v12->fields._items;
    v26 = Method_System_Collections_Generic_List_long__Add__;
    ++v12->fields._version;
    if ( !v25 )
      goto LABEL_41;
    if ( (unsigned int)v24 >= LODWORD(v25->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v12,
        0,
        *(const MethodInfo_37E89A8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      goto LABEL_30;
    }
    v27 = &v25->obj.klass + v24++;
    v12->fields._size = v24;
    v27[4] = 0;
  }
  return System_Collections_Generic_List_long___ToArray(
           v12,
           (const MethodInfo_37EA460 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Collections_Generic_Dictionary_int__long__o *UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  DataManager_o *v10; // x21
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_Dictionary_int__long__o *v14; // x20
  Il2CppObject *value; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  int32_t v20; // w21
  int64_t *v21; // x0
  il2cpp_array_size_t v22; // x8
  unsigned __int64 v23; // x21
  int32_t *v24; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v26; // x21
  int32_t *m_Items; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-80h] BYREF
  __int64 v31; // [xsp+60h] [xbp-50h] BYREF
  int32_t v32; // [xsp+6Ch] [xbp-44h] BYREF

  v32 = eventId;
  if ( (byte_4CB7130 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB7130 = 1;
  }
  v31 = 0;
  memset(&v30, 0, sizeof(v30));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_46;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum((EventFatigueRecoveryMaster_o *)Instance, eventId, 0);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33F6ED0 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0);
  if ( !lookup )
    goto LABEL_46;
  klass = lookup->klass;
  v10 = Instance;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v13 = sub_1C41D90(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, DataManager_o *, __int64 *, _QWORD))v13)(
                                lookup,
                                v10,
                                &v31,
                                *(_QWORD *)(v13 + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_46;
    if ( *(_QWORD *)(v31 + 32) )
    {
      v14 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v14,
        (const MethodInfo_344EC64 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      if ( v31 )
      {
        Instance = *(DataManager_o **)(v31 + 32);
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v29,
            (System_Collections_Generic_Dictionary_object__object__o *)Instance,
            (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v30 = v29;
          while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v30,
                    (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            value = v30.fields._current.fields.value;
            v16 = System_Int32__Parse((System_String_o *)v30.fields._current.fields.key, 0);
            if ( !v14 )
              goto LABEL_48;
            if ( !value )
              sub_1C6BC60(v16, v17);
            if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            {
              sub_1C6BFFC(value);
LABEL_48:
              sub_1C6BC60(v16, v17);
            }
            v20 = v16;
            v21 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v18, v19);
            System_Collections_Generic_Dictionary_int__long___Add(
              v14,
              v20,
              *v21,
              (const MethodInfo_344F638 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v30,
            (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( OpenRecoveryNum )
          {
            max_length = OpenRecoveryNum->max_length;
            if ( (int)max_length >= 1 )
            {
              v26 = 0;
              m_Items = OpenRecoveryNum->m_Items;
              while ( v26 < (unsigned int)max_length )
              {
                if ( !v14 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                              v14,
                                              m_Items[v26],
                                              (const MethodInfo_344F82C *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  if ( v26 >= LODWORD(OpenRecoveryNum->max_length) )
                    goto LABEL_45;
                  System_Collections_Generic_Dictionary_int__long___Add(
                    v14,
                    m_Items[v26],
                    0,
                    (const MethodInfo_344F638 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                }
                LODWORD(max_length) = OpenRecoveryNum->max_length;
                if ( (__int64)++v26 >= (int)max_length )
                  return v14;
              }
              goto LABEL_45;
            }
            return v14;
          }
        }
      }
LABEL_46:
      sub_1C6BC60(Instance, v6);
    }
    return 0;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_46;
  if ( !OpenRecoveryNum->max_length )
    return 0;
  v14 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v14,
    (const MethodInfo_344EC64 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v22 = OpenRecoveryNum->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0;
    v24 = OpenRecoveryNum->m_Items;
    while ( v23 < (unsigned int)v22 )
    {
      if ( !v14 )
        goto LABEL_46;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v14,
                                    v24[v23],
                                    (const MethodInfo_344F82C *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v23 >= LODWORD(OpenRecoveryNum->max_length) )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v14,
          v24[v23],
          0,
          (const MethodInfo_344F638 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v22) = OpenRecoveryNum->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        return v14;
    }
LABEL_45:
    sub_1C6BC68(Instance);
  }
  return v14;
}


bool UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v10; // x21
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *v14; // x20
  Il2CppObject *v15; // x0
  int64_t v18; // [xsp+0h] [xbp-40h] BYREF
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-24h] BYREF

  v20 = eventId;
  if ( (byte_4CB712E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_1C6BA08(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB712E = 1;
  }
  v19 = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33F6ED0 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v7 = System_Int32__ToString((int32_t)&v20, 0);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v10 = v7;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v13 = sub_1C41D90(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v13)(
                            lookup,
                            v10,
                            &v19,
                            *(_QWORD *)(v13 + 8));
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !v19 )
LABEL_16:
    sub_1C6BC60(v7, v8);
  v14 = *(System_Collections_Generic_Dictionary_object__object__o **)(v19 + 32);
  if ( !v14 )
    return 0;
  v18 = userSvtId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v14,
           v15,
           (const MethodInfo_34BBB54 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}