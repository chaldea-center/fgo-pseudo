void UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939559 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_5939559 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    305,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  int64_t v16; // x21
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  _DWORD *monitor; // x23
  int v24; // w8
  unsigned int v25; // w25
  __int64 v26; // x26
  Il2CppClass *v27; // x21
  void *v28; // x22
  int v29; // w27
  struct System_Int64_array *v30; // x8
  int64_t v31; // x1
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x1
  int64_t v35; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_593955E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593955E = 1;
  }
  result = (int64_t)this->fields.list;
  entity = 0;
  memset(&v39, 0, sizeof(v39));
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
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
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
                      (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__)) == 0) )
      {
LABEL_50:
        sub_21FFECC(Item, v6);
      }
      v12 = Item;
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v12[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v37,
          klass,
          (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v39 = v37;
        v37.fields._dictionary = 0;
        *(_QWORD *)&v37.fields._version = &v39;
LABEL_16:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v39,
                  (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v39.fields._current.fields.value )
            sub_21FFECC(0, v14);
          if ( v39.fields._current.fields.value->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
          {
            sub_220024C(v39.fields._current.fields.value, qword_594C090, v15);
LABEL_49:
            sub_21FFECC(v21, v22);
          }
          v16 = *(_QWORD *)j_il2cpp_object_unbox_0(v39.fields._current.fields.value, qword_594C090, v15);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_21FFECC(0, v18);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_21FFECC(0, v20);
          v21 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v16,
                  (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v21 & 1) != 0 )
          {
            monitor = v12[2].monitor;
            if ( !monitor )
              goto LABEL_49;
            v24 = monitor[6];
            if ( v24 >= 1 )
            {
              v25 = 0;
              while ( 1 )
              {
                if ( v25 >= v24 )
                  sub_21FFED4(v21);
                v26 = *(_QWORD *)&monitor[2 * v25 + 8];
                if ( !v26 )
                  sub_21FFECC(v21, v22);
                if ( !entity )
                  sub_21FFECC(v21, v22);
                v27 = entity[5].klass;
                v28 = entity[5].monitor;
                v29 = *(_DWORD *)(v26 + 16);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
                *(_QWORD *)&v40.fields.currentCryptoKey = v27;
                *(_QWORD *)&v40.fields.fakeValue = v28;
                v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v40, 0);
                if ( v29 == (_DWORD)v21 )
                  break;
                v24 = monitor[6];
                if ( (int)++v25 >= v24 )
                  goto LABEL_16;
              }
              v30 = v4->fields._items;
              v31 = *(_QWORD *)(v26 + 24);
              v32 = Method_System_Collections_Generic_List_long__Add__;
              ++v4->fields._version;
              if ( !v30 )
                sub_21FFECC(v21, v31);
              v33 = v4->fields._size;
              if ( (unsigned int)v33 >= LODWORD(v30->max_length) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v4,
                  v31,
                  *(const MethodInfo_4438164 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v4->fields._size = v33 + 1;
                v30->m_Items[v33] = v31;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v39,
          (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v35 = System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v4, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34);
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
  int64_t v20; // x22
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppClass *v27; // x22
  void *monitor; // x23
  __int64 v29; // x9
  int v30; // w8
  __int64 *i; // x9
  __int64 v32; // x10
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+0h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v37; // [xsp+60h] [xbp-70h] BYREF
  int32_t v38; // [xsp+6Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v38 = eventId;
  if ( (byte_593955A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593955A = 1;
  }
  *isRecover = 0;
  *recoverAt = 0;
  v37 = 0;
  memset(&v36, 0, sizeof(v36));
  entity = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDB054 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v11 = System_Int32__ToString((int32_t)&v38, 0);
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
    v17 = sub_2237E2C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))v17)(
                             lookup,
                             v14,
                             &v37,
                             *(_QWORD *)(v17 + 8));
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  if ( !v37 )
    goto LABEL_39;
  v11 = *(System_String_o **)(v37 + 32);
  if ( !v11 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_object__object__o *)v11,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v36 = v34;
  v34.fields._dictionary = 0;
  *(_QWORD *)&v34.fields._version = &v36;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_25;
    if ( !v36.fields._current.fields.value )
      sub_21FFECC(0, v18);
    if ( v36.fields._current.fields.value->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    {
      sub_220024C(v36.fields._current.fields.value, qword_594C090, v19);
      goto LABEL_39;
    }
    v20 = *(_QWORD *)j_il2cpp_object_unbox_0(v36.fields._current.fields.value, qword_594C090, v19);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v22);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_21FFECC(0, v24);
    v25 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v20,
            (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v25 )
    {
      if ( !entity )
        sub_21FFECC(v25, v26);
      v27 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v39.fields.currentCryptoKey = v27;
      *(_QWORD *)&v39.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v39, 0) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_26:
  if ( !v37 )
LABEL_39:
    sub_21FFECC(v11, v12);
  v29 = *(_QWORD *)(v37 + 40);
  if ( !v29 )
    return 0;
  v30 = *(_DWORD *)(v29 + 24);
  if ( v30 < 1 )
    return 0;
  for ( i = (__int64 *)(v29 + 32); ; ++i )
  {
    v32 = *i;
    if ( !*i )
      goto LABEL_39;
    if ( *(_DWORD *)(v32 + 16) == svtId )
      break;
    if ( !--v30 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v32 + 24);
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
  __int64 value; // x0
  int64_t v14; // x1
  __int64 v15; // x2
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int32_t v20; // w20
  int32_t v21; // w9
  _QWORD *v22; // x8
  struct System_Int64_array *v23; // x10
  Il2CppClass **v24; // x10
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-60h] BYREF
  __int64 v27; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_593955C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593955C = 1;
  }
  v27 = 0;
  memset(&v26, 0, sizeof(v26));
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDB054 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0);
  if ( !lookup )
    goto LABEL_39;
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
    v11 = sub_2237E2C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, __int64 *, _QWORD))v11)(
               lookup,
               v8,
               &v27,
               *(_QWORD *)(v11 + 8));
  if ( (Instance & 1) == 0 )
    return 0;
  if ( !v27 )
    goto LABEL_39;
  if ( !*(_QWORD *)(v27 + 32) )
    return 0;
  v12 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !v27 )
    goto LABEL_39;
  Instance = *(_QWORD *)(v27 + 32);
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v26 = v25;
  v25.fields._dictionary = 0;
  *(_QWORD *)&v25.fields._version = &v26;
  while ( 1 )
  {
    value = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v26,
              (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( (value & 1) == 0 )
      break;
    if ( !v12 || (value = (__int64)v26.fields._current.fields.value) == 0 )
LABEL_37:
      sub_21FFECC(value, v14);
    if ( v26.fields._current.fields.value->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
    {
      sub_220024C(v26.fields._current.fields.value, qword_594C090, v15);
      goto LABEL_39;
    }
    value = j_il2cpp_object_unbox_0(v26.fields._current.fields.value, qword_594C090, v15);
    items = v12->fields._items;
    v14 = *(_QWORD *)value;
    v17 = Method_System_Collections_Generic_List_long__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_37;
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v12,
        v14,
        *(const MethodInfo_4438164 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = size + 1;
      items->m_Items[size] = v14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0)) == 0
    || !v12 )
  {
LABEL_39:
    sub_21FFECC(Instance, v6);
  }
  v20 = *(_DWORD *)(Instance + 24);
  v21 = v12->fields._size;
  if ( v21 < v20 )
  {
    v22 = Method_System_Collections_Generic_List_long__Add__;
    while ( 1 )
    {
      v23 = v12->fields._items;
      ++v12->fields._version;
      if ( !v23 )
        break;
      if ( (unsigned int)v21 >= LODWORD(v23->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v12,
          0,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        v22 = Method_System_Collections_Generic_List_long__Add__;
        v21 = v12->fields._size;
      }
      else
      {
        v24 = &v23->obj.klass + v21++;
        v12->fields._size = v21;
        v24[4] = 0;
      }
      if ( v21 >= v20 )
        return System_Collections_Generic_List_long___ToArray(
                 v12,
                 (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
    }
    goto LABEL_39;
  }
  return System_Collections_Generic_List_long___ToArray(
           v12,
           (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w21
  int64_t *v20; // x0
  il2cpp_array_size_t v21; // x8
  unsigned __int64 v22; // x21
  int32_t *v23; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x21
  int32_t *m_Items; // x24
  void *v28; // x0
  int v29; // w1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v30; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-80h] BYREF
  __int64 v33; // [xsp+60h] [xbp-50h] BYREF
  int32_t v34; // [xsp+6Ch] [xbp-44h] BYREF

  v34 = eventId;
  if ( (byte_593955D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593955D = 1;
  }
  v33 = 0;
  memset(&v32, 0, sizeof(v32));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_47;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum((EventFatigueRecoveryMaster_o *)Instance, eventId, 0);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDB054 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0);
  if ( !lookup )
    goto LABEL_47;
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
    v13 = sub_2237E2C(
            lookup,
            System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
            1);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, DataManager_o *, __int64 *, _QWORD))v13)(
                                lookup,
                                v10,
                                &v33,
                                *(_QWORD *)(v13 + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_47;
    if ( *(_QWORD *)(v33 + 32) )
    {
      v14 = (System_Collections_Generic_Dictionary_int__long__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v14,
        (const MethodInfo_3F65054 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      if ( v33 )
      {
        Instance = *(DataManager_o **)(v33 + 32);
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v31,
            (System_Collections_Generic_Dictionary_object__object__o *)Instance,
            (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v32 = v31;
          v31.fields._dictionary = 0;
          *(_QWORD *)&v31.fields._version = &v32;
          while ( 1 )
          {
            if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v32,
                    (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
                &v32,
                (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
              goto LABEL_36;
            }
            current = v32.fields._current;
            v16 = System_Int32__Parse((System_String_o *)v32.fields._current.fields.key, 0);
            if ( !v14 || !current.fields.value )
              sub_21FFECC(v16, v17);
            if ( current.fields.value->klass->_1.element_class != *(Il2CppClass **)(qword_594C090 + 64) )
              break;
            v19 = v16;
            v20 = (int64_t *)j_il2cpp_object_unbox_0(current.fields.value, qword_594C090, v18);
            System_Collections_Generic_Dictionary_int__long___Add(
              v14,
              v19,
              *v20,
              (const MethodInfo_3F65A08 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
          }
          sub_220024C(current.fields.value, qword_594C090, v18);
          if ( v29 != 1 )
          {
            sub_1FE695C(&v31);
            sub_22ED31C();
          }
          v30 = *(struct System_Collections_Generic_Dictionary_TKey__TValue__o **)__cxa_begin_catch(v28);
          v31.fields._dictionary = v30;
          __cxa_end_catch();
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o **)&v31.fields._version,
            (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( v30 )
            sub_21FFEC4(v30);
LABEL_36:
          if ( OpenRecoveryNum )
          {
            max_length = OpenRecoveryNum->max_length;
            if ( (int)max_length >= 1 )
            {
              v25 = 0;
              m_Items = OpenRecoveryNum->m_Items;
              while ( v25 < (unsigned int)max_length )
              {
                if ( !v14 )
                  goto LABEL_47;
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                              v14,
                                              m_Items[v25],
                                              (const MethodInfo_3F65BFC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  if ( v25 >= LODWORD(OpenRecoveryNum->max_length) )
                    goto LABEL_46;
                  System_Collections_Generic_Dictionary_int__long___Add(
                    v14,
                    m_Items[v25],
                    0,
                    (const MethodInfo_3F65A08 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                }
                LODWORD(max_length) = OpenRecoveryNum->max_length;
                if ( (__int64)++v25 >= (int)max_length )
                  return v14;
              }
              goto LABEL_46;
            }
            return v14;
          }
        }
      }
LABEL_47:
      sub_21FFECC(Instance, v6);
    }
    return 0;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_47;
  if ( !OpenRecoveryNum->max_length )
    return 0;
  v14 = (System_Collections_Generic_Dictionary_int__long__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v14,
    (const MethodInfo_3F65054 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v21 = OpenRecoveryNum->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0;
    v23 = OpenRecoveryNum->m_Items;
    while ( v22 < (unsigned int)v21 )
    {
      if ( !v14 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v14,
                                    v23[v22],
                                    (const MethodInfo_3F65BFC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v22 >= LODWORD(OpenRecoveryNum->max_length) )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v14,
          v23[v22],
          0,
          (const MethodInfo_3F65A08 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v21) = OpenRecoveryNum->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        return v14;
    }
LABEL_46:
    sub_21FFED4(Instance);
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
  if ( (byte_593955B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo);
    byte_593955B = 1;
  }
  v19 = 0;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3EDB054 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
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
    v13 = sub_2237E2C(
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
    sub_21FFECC(v7, v8);
  v14 = *(System_Collections_Generic_Dictionary_object__object__o **)(v19 + 32);
  if ( !v14 )
    return 0;
  v18 = userSvtId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v18);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v14,
           v15,
           (const MethodInfo_3FCA680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}