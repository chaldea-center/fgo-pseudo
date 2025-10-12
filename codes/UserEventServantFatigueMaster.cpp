void UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3880E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_4C3880E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    303,
    (const MethodInfo_3394514 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
        UserEventServantFatigueMaster_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0
  System_Collections_Generic_List_long__o *v4; // x19
  Il2CppObject *Item; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  int64_t v15; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x0
  _DWORD *monitor; // x23
  int v20; // w8
  unsigned int v21; // w25
  __int64 v22; // x26
  int v23; // w27
  void *v24; // x21
  Il2CppClass *v25; // x22
  int64_t v26; // x1
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  int64_t v30; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C38813 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38813 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v4 )
        goto LABEL_50;
      items = v4->fields._items;
      v7 = Method_System_Collections_Generic_List_long__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_50;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          0,
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
                      (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__)) == 0) )
      {
LABEL_50:
        sub_1C32E7C(Item);
      }
      v11 = Item;
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v11[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v32,
          klass,
          (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v34 = v32;
LABEL_16:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v34,
                  (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v34.fields._current.fields.value )
            sub_1C32E7C(0);
          if ( v34.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1C3313C(v34.fields._current.fields.value);
LABEL_49:
            sub_1C32E7C(v18);
          }
          v15 = *(_QWORD *)j_il2cpp_object_unbox_0(v34.fields._current.fields.value, long_TypeInfo, v13, v14);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1C32E7C(0);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1C32E7C(0);
          v18 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v15,
                  (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v18 & 1) != 0 )
          {
            monitor = v11[2].monitor;
            if ( !monitor )
              goto LABEL_49;
            v20 = monitor[6];
            if ( v20 >= 1 )
            {
              v21 = 0;
              while ( 1 )
              {
                if ( v21 >= v20 )
                  sub_1C32E84(v18);
                v22 = *(_QWORD *)&monitor[2 * v21 + 8];
                if ( !v22 )
                  sub_1C32E7C(v18);
                if ( !entity )
                  sub_1C32E7C(v18);
                v23 = *(_DWORD *)(v22 + 16);
                v25 = entity[5].klass;
                v24 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v35.fields.currentCryptoKey = v25;
                *(_QWORD *)&v35.fields.fakeValue = v24;
                v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
                if ( v23 == (_DWORD)v18 )
                  break;
                v20 = monitor[6];
                if ( (int)++v21 >= v20 )
                  goto LABEL_16;
              }
              v26 = *(_QWORD *)(v22 + 24);
              v27 = v4->fields._items;
              v28 = Method_System_Collections_Generic_List_long__Add__;
              ++v4->fields._version;
              if ( !v27 )
                sub_1C32E7C(v18);
              v29 = v4->fields._size;
              if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v4,
                  v26,
                  *(const MethodInfo_37807F0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v4->fields._size = v29 + 1;
                v27->m_Items[v29] = v26;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v34,
          (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v30 = System_Linq_Enumerable__Max_66519820((System_Collections_Generic_IEnumerable_long__o *)v4, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      return (v30 - Time) & ~((v30 - Time) >> 63);
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
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v13; // x23
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  int64_t v19; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 v22; // x0
  void *monitor; // x22
  Il2CppClass *v24; // x23
  __int64 v25; // x8
  int v26; // w9
  int v27; // w10
  __int64 v28; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v33; // [xsp+60h] [xbp-70h] BYREF
  int32_t v34; // [xsp+6Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v34 = eventId;
  if ( (byte_4C3880F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3880F = 1;
  }
  v33 = 0;
  entity = 0;
  memset(&v32, 0, sizeof(v32));
  *isRecover = 0;
  *recoverAt = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_339462C *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v11 = System_Int32__ToString((int32_t)&v34, 0);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v13 = v11;
  v14 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_8;
    }
    v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v16 = sub_1C83438(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v16)(
                             lookup,
                             v13,
                             &v33,
                             *(_QWORD *)(v16 + 8));
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  if ( !v33 )
    goto LABEL_39;
  v11 = *(System_String_o **)(v33 + 32);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_object__object__o *)v11,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v32 = v30;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v32,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_25;
    if ( !v32.fields._current.fields.value )
      sub_1C32E7C(0);
    if ( v32.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C3313C(v32.fields._current.fields.value);
      goto LABEL_39;
    }
    v19 = *(_QWORD *)j_il2cpp_object_unbox_0(v32.fields._current.fields.value, long_TypeInfo, v17, v18);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C32E7C(0);
    v22 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v19,
            (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v22 )
    {
      if ( !entity )
        sub_1C32E7C(v22);
      v24 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v35.fields.currentCryptoKey = v24;
      *(_QWORD *)&v35.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v32,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_26:
  if ( !v33 )
LABEL_39:
    sub_1C32E7C(v11);
  v25 = *(_QWORD *)(v33 + 40);
  if ( !v25 )
    return 0;
  v26 = *(_DWORD *)(v25 + 24);
  if ( v26 < 1 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    v28 = *(_QWORD *)(v25 + 8LL * v27 + 32);
    if ( !v28 )
      goto LABEL_39;
    if ( *(_DWORD *)(v28 + 16) == svtId )
      break;
    if ( v26 == ++v27 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v28 + 24);
  return result;
}


System_Int64_array *UserEventServantFatigueMaster__GetRecoverySvtIdList(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x19
  __int64 Instance; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  __int64 v7; // x20
  __int64 v8; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_List_long__o *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  int64_t *v15; // x0
  int64_t v16; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int32_t v21; // w20
  int32_t v22; // w8
  struct System_Int64_array *v23; // x9
  _QWORD *v24; // x10
  Il2CppClass **v25; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-60h] BYREF
  __int64 v28; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4C38811 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38811 = 1;
  }
  v28 = 0;
  memset(&v27, 0, sizeof(v27));
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_339462C *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v7 = Instance;
  v8 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v10 = sub_1C83438(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, __int64 *, _QWORD))v10)(
               lookup,
               v7,
               &v28,
               *(_QWORD *)(v10 + 8));
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v28 )
    goto LABEL_41;
  if ( !*(_QWORD *)(v28 + 32) )
    return 0;
  v11 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !v28 )
    goto LABEL_41;
  Instance = *(_QWORD *)(v28 + 32);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v27,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v12 )
      break;
    if ( !v11 )
      sub_1C32E7C(v12);
    if ( !v27.fields._current.fields.value )
      sub_1C32E7C(0);
    if ( v27.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C3313C(v27.fields._current.fields.value);
      goto LABEL_41;
    }
    v15 = (int64_t *)j_il2cpp_object_unbox_0(v27.fields._current.fields.value, long_TypeInfo, v13, v14);
    v16 = *v15;
    items = v11->fields._items;
    v18 = Method_System_Collections_Generic_List_long__Add__;
    ++v11->fields._version;
    if ( !items )
      sub_1C32E7C(v15);
    size = v11->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v11,
        v16,
        *(const MethodInfo_37807F0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = size + 1;
      items->m_Items[size] = v16;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v27,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0)) == 0
    || !v11 )
  {
LABEL_41:
    sub_1C32E7C(Instance);
  }
  v21 = *(_DWORD *)(Instance + 24);
LABEL_30:
  v22 = v11->fields._size;
  while ( v22 < v21 )
  {
    v23 = v11->fields._items;
    v24 = Method_System_Collections_Generic_List_long__Add__;
    ++v11->fields._version;
    if ( !v23 )
      goto LABEL_41;
    if ( (unsigned int)v22 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v11,
        0,
        *(const MethodInfo_37807F0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      goto LABEL_30;
    }
    v25 = &v23->obj.klass + v22++;
    v11->fields._size = v22;
    v25[4] = 0;
  }
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_Collections_Generic_Dictionary_int__long__o *UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  DataManager_o *v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_Dictionary_int__long__o *v13; // x20
  Il2CppObject *value; // x22
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  int32_t v18; // w21
  int64_t *v19; // x0
  il2cpp_array_size_t v20; // x8
  unsigned __int64 v21; // x21
  int32_t *v22; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x21
  int32_t *m_Items; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-80h] BYREF
  __int64 v29; // [xsp+60h] [xbp-50h] BYREF
  int32_t v30; // [xsp+6Ch] [xbp-44h] BYREF

  v30 = eventId;
  if ( (byte_4C38812 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38812 = 1;
  }
  v29 = 0;
  memset(&v28, 0, sizeof(v28));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_46;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum((EventFatigueRecoveryMaster_o *)Instance, eventId, 0);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_339462C *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v30, 0);
  if ( !lookup )
    goto LABEL_46;
  klass = lookup->klass;
  v9 = Instance;
  v10 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_10;
    }
    v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_10:
    v12 = sub_1C83438(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, DataManager_o *, __int64 *, _QWORD))v12)(
                                lookup,
                                v9,
                                &v29,
                                *(_QWORD *)(v12 + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_46;
    if ( *(_QWORD *)(v29 + 32) )
    {
      v13 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v13,
        (const MethodInfo_33EC490 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      if ( v29 )
      {
        Instance = *(DataManager_o **)(v29 + 32);
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v27,
            (System_Collections_Generic_Dictionary_object__object__o *)Instance,
            (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v28 = v27;
          while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v28,
                    (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            value = v28.fields._current.fields.value;
            v15 = System_Int32__Parse((System_String_o *)v28.fields._current.fields.key, 0);
            if ( !v13 )
              goto LABEL_48;
            if ( !value )
              sub_1C32E7C(v15);
            if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            {
              sub_1C3313C(value);
LABEL_48:
              sub_1C32E7C(v15);
            }
            v18 = v15;
            v19 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v16, v17);
            System_Collections_Generic_Dictionary_int__long___Add(
              v13,
              v18,
              *v19,
              (const MethodInfo_33ECE64 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v28,
            (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( OpenRecoveryNum )
          {
            max_length = OpenRecoveryNum->max_length;
            if ( (int)max_length >= 1 )
            {
              v24 = 0;
              m_Items = OpenRecoveryNum->m_Items;
              while ( v24 < (unsigned int)max_length )
              {
                if ( !v13 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                              v13,
                                              m_Items[v24],
                                              (const MethodInfo_33ED058 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  if ( v24 >= LODWORD(OpenRecoveryNum->max_length) )
                    goto LABEL_45;
                  System_Collections_Generic_Dictionary_int__long___Add(
                    v13,
                    m_Items[v24],
                    0,
                    (const MethodInfo_33ECE64 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                }
                LODWORD(max_length) = OpenRecoveryNum->max_length;
                if ( (__int64)++v24 >= (int)max_length )
                  return v13;
              }
              goto LABEL_45;
            }
            return v13;
          }
        }
      }
LABEL_46:
      sub_1C32E7C(Instance);
    }
    return 0;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_46;
  if ( !OpenRecoveryNum->max_length )
    return 0;
  v13 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v13,
    (const MethodInfo_33EC490 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v20 = OpenRecoveryNum->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = OpenRecoveryNum->m_Items;
    while ( v21 < (unsigned int)v20 )
    {
      if ( !v13 )
        goto LABEL_46;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v13,
                                    v22[v21],
                                    (const MethodInfo_33ED058 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v21 >= LODWORD(OpenRecoveryNum->max_length) )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v13,
          v22[v21],
          0,
          (const MethodInfo_33ECE64 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v20) = OpenRecoveryNum->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        return v13;
    }
LABEL_45:
    sub_1C32E84(Instance);
  }
  return v13;
}


bool UserEventServantFatigueMaster__IsRecoverUserServant(
        UserEventServantFatigueMaster_o *this,
        int32_t eventId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_String_o *v7; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  Il2CppObject *v20; // x0
  int64_t v23; // [xsp+0h] [xbp-40h] BYREF
  __int64 v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-24h] BYREF

  v25 = eventId;
  if ( (byte_4C38810 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    byte_4C38810 = 1;
  }
  v24 = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_339462C *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v7 = System_Int32__ToString((int32_t)&v25, 0);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v9 = v7;
  v10 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_8:
    v12 = sub_1C83438(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v12)(
                            lookup,
                            v9,
                            &v24,
                            *(_QWORD *)(v12 + 8));
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !v24 )
LABEL_16:
    sub_1C32E7C(v7);
  v19 = *(System_Collections_Generic_Dictionary_object__object__o **)(v24 + 32);
  if ( !v19 )
    return 0;
  v23 = userSvtId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v13, v14, v15, v16, v17, v18);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v19,
           v20,
           (const MethodInfo_3458FE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}