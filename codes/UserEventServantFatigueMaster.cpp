void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE10 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
    byte_4A5BE10 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
}


int64_t __fastcall UserEventServantFatigueMaster__GetFatigueAllRecoverTime(
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  int64_t v18; // x21
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  _DWORD *monitor; // x23
  int v26; // w8
  unsigned int v27; // w25
  __int64 v28; // x26
  int v29; // w27
  void *v30; // x21
  Il2CppClass *v31; // x22
  int64_t v32; // x1
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  int64_t v36; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A5BE15 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventServantFatigueEntity_TypeInfo);
    byte_4A5BE15 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v4 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v4,
        (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v4 )
        goto LABEL_52;
      items = v4->fields._items;
      v8 = Method_System_Collections_Generic_List_long__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          0LL,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = 0LL;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v12 = Item,
            methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
LABEL_52:
        sub_1B8880C(Item, v6);
      }
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v12[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v38,
          klass,
          (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v40 = v38;
LABEL_18:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v40,
                  (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v40.fields._current.fields.value )
            sub_1B8880C(0LL, v15);
          if ( v40.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B88ACC(v40.fields._current.fields.value);
LABEL_51:
            sub_1B8880C(v23, v24);
          }
          v18 = *(_QWORD *)j_il2cpp_object_unbox_0(v40.fields._current.fields.value, long_TypeInfo, v16, v17);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1B8880C(0LL, v20);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1B8880C(0LL, v22);
          v23 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v18,
                  (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v23 & 1) != 0 )
          {
            monitor = v12[2].monitor;
            if ( !monitor )
              goto LABEL_51;
            v26 = monitor[6];
            if ( v26 >= 1 )
            {
              v27 = 0;
              while ( 1 )
              {
                if ( v27 >= v26 )
                  sub_1B88814(v23, v24);
                v28 = *(_QWORD *)&monitor[2 * v27 + 8];
                if ( !v28 )
                  sub_1B8880C(v23, v24);
                if ( !entity )
                  sub_1B8880C(v23, v24);
                v29 = *(_DWORD *)(v28 + 16);
                v31 = entity[5].klass;
                v30 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v41.fields.currentCryptoKey = v31;
                *(_QWORD *)&v41.fields.fakeValue = v30;
                v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
                if ( v29 == (_DWORD)v23 )
                  break;
                v26 = monitor[6];
                if ( (int)++v27 >= v26 )
                  goto LABEL_18;
              }
              v32 = *(_QWORD *)(v28 + 24);
              v33 = v4->fields._items;
              v34 = Method_System_Collections_Generic_List_long__Add__;
              ++v4->fields._version;
              if ( !v33 )
                sub_1B8880C(v23, v32);
              v35 = v4->fields._size;
              if ( (unsigned int)v35 >= v33->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v4,
                  v32,
                  *(const MethodInfo_34E5868 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v4->fields._size = v35 + 1;
                v33->m_Items[v35] = v32;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v40,
          (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v36 = System_Linq_Enumerable__Max_63930096((System_Collections_Generic_IEnumerable_long__o *)v4, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      return (v36 - Time) & ~((v36 - Time) >> 63);
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
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v14; // x23
  __int64 v15; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v18; // x24
  __int64 methodPtr_low; // x10
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int64_t v23; // x22
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  void *monitor; // x22
  Il2CppClass *v31; // x23
  __int64 v32; // x8
  int v33; // w9
  int v34; // w10
  __int64 v35; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+10h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+40h] [xbp-A0h] BYREF
  _QWORD *v40; // [xsp+70h] [xbp-70h] BYREF
  int32_t v41; // [xsp+7Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v41 = eventId;
  if ( (byte_4A5BE11 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventServantFatigueEntity_TypeInfo);
    byte_4A5BE11 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v11 = System_Int32__ToString((int32_t)&v41, 0LL);
  if ( !lookup )
    goto LABEL_40;
  klass = lookup->klass;
  v14 = v11;
  v15 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v14,
                             &v40,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  v18 = v40;
  if ( !v40
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*v40 + 304LL) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v40 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_40:
    sub_1B8880C(v11, v12);
  }
  v11 = (System_String_o *)v40[4];
  if ( !v11 )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_object__object__o *)v11,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v39 = v37;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v39,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_27;
    if ( !v39.fields._current.fields.value )
      sub_1B8880C(0LL, v20);
    if ( v39.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B88ACC(v39.fields._current.fields.value);
      goto LABEL_40;
    }
    v23 = *(_QWORD *)j_il2cpp_object_unbox_0(v39.fields._current.fields.value, long_TypeInfo, v21, v22);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v25);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v27);
    v28 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v23,
            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v28 )
    {
      if ( !entity )
        sub_1B8880C(v28, v29);
      v31 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v31;
      *(_QWORD *)&v42.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v39,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_28:
  v32 = v18[5];
  if ( !v32 )
    return 0;
  v33 = *(_DWORD *)(v32 + 24);
  if ( v33 < 1 )
    return 0;
  v34 = 0;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v32 + 8LL * v34 + 32);
    if ( !v35 )
      goto LABEL_40;
    if ( *(_DWORD *)(v35 + 16) == svtId )
      break;
    if ( v33 == ++v34 )
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v8; // x20
  __int64 v9; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v12; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_long__o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  int64_t *v19; // x0
  int64_t v20; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int32_t v25; // w20
  int32_t v26; // w8
  struct System_Int64_array *v27; // x9
  _QWORD *v28; // x10
  Il2CppClass **v29; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-60h] BYREF
  _QWORD *v32; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4A5BE13 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventServantFatigueEntity_TypeInfo);
    byte_4A5BE13 = 1;
  }
  v32 = 0LL;
  memset(&v31, 0, sizeof(v31));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v8 = Instance;
  v9 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v8,
               &v32,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v12 = v32;
  if ( !v32 )
    goto LABEL_42;
  methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*v32 + 304LL) < (unsigned int)methodPtr_low
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v32 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
    goto LABEL_42;
  }
  if ( !v32[4] )
    return 0LL;
  v14 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v12[4];
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v15 )
      break;
    if ( !v14 )
      sub_1B8880C(v15, v16);
    if ( !v31.fields._current.fields.value )
      sub_1B8880C(0LL, v16);
    if ( v31.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B88ACC(v31.fields._current.fields.value);
      goto LABEL_42;
    }
    v19 = (int64_t *)j_il2cpp_object_unbox_0(v31.fields._current.fields.value, long_TypeInfo, v17, v18);
    v20 = *v19;
    items = v14->fields._items;
    v22 = Method_System_Collections_Generic_List_long__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1B8880C(v19, v20);
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v14,
        v20,
        *(const MethodInfo_34E5868 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = size + 1;
      items->m_Items[size] = v20;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0LL)) == 0
    || !v14 )
  {
LABEL_42:
    sub_1B8880C(Instance, v6);
  }
  v25 = *(_DWORD *)(Instance + 24);
LABEL_31:
  v26 = v14->fields._size;
  while ( v26 < v25 )
  {
    v27 = v14->fields._items;
    v28 = Method_System_Collections_Generic_List_long__Add__;
    ++v14->fields._version;
    if ( !v27 )
      goto LABEL_42;
    if ( v26 >= v27->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v14,
        0LL,
        *(const MethodInfo_34E5868 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      goto LABEL_31;
    }
    v29 = &v27->obj.klass + v26++;
    v14->fields._size = v26;
    v29[4] = 0LL;
  }
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v14; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__long__o *v16; // x20
  Il2CppObject *value; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  int32_t v22; // w21
  int64_t *v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x21
  int32_t *v26; // x22
  __int64 v27; // x8
  unsigned __int64 v28; // x21
  int32_t *v29; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-80h] BYREF
  _QWORD *v33; // [xsp+60h] [xbp-50h] BYREF
  int32_t v34; // [xsp+6Ch] [xbp-44h] BYREF

  v34 = eventId;
  if ( (byte_4A5BE14 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEventServantFatigueEntity_TypeInfo);
    byte_4A5BE14 = 1;
  }
  v33 = 0LL;
  memset(&v32, 0, sizeof(v32));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_47;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v34, 0LL);
  if ( !lookup )
    goto LABEL_47;
  klass = lookup->klass;
  v10 = Instance;
  v11 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v10,
                                &v33,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v14 = v33;
    if ( !v33 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v33 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v33 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_47;
    }
    if ( v33[4] )
    {
      v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v16,
        (const MethodInfo_316A0C4 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v14[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v31,
          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
          (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v32 = v31;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v32,
                  (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          value = v32.fields._current.fields.value;
          v18 = System_Int32__Parse((System_String_o *)v32.fields._current.fields.key, 0LL);
          if ( !v16 )
            goto LABEL_49;
          if ( !value )
            sub_1B8880C(v18, v19);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B88ACC(value);
LABEL_49:
            sub_1B8880C(v18, v19);
          }
          v22 = v18;
          v23 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v20, v21);
          System_Collections_Generic_Dictionary_int__long___Add(
            v16,
            v22,
            *v23,
            (const MethodInfo_316AA98 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v32,
          (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( OpenRecoveryNum )
        {
          v27 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v27 >= 1 )
          {
            v28 = 0LL;
            v29 = &OpenRecoveryNum->m_Items[1];
            while ( v28 < (unsigned int)v27 )
            {
              if ( !v16 )
                goto LABEL_47;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v16,
                                            v29[v28],
                                            (const MethodInfo_316AC8C *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v28 >= OpenRecoveryNum->max_length )
                  goto LABEL_46;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v16,
                  v29[v28],
                  0LL,
                  (const MethodInfo_316AA98 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v27) = OpenRecoveryNum->max_length;
              if ( (__int64)++v28 >= (int)v27 )
                return v16;
            }
            goto LABEL_46;
          }
          return v16;
        }
      }
LABEL_47:
      sub_1B8880C(Instance, v6);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_47;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v16 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v16,
    (const MethodInfo_316A0C4 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v24 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v26 = &OpenRecoveryNum->m_Items[1];
    while ( v25 < (unsigned int)v24 )
    {
      if ( !v16 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v16,
                                    v26[v25],
                                    (const MethodInfo_316AC8C *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v25 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v16,
          v26[v25],
          0LL,
          (const MethodInfo_316AA98 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v24) = OpenRecoveryNum->max_length;
      if ( (__int64)++v25 >= (int)v24 )
        return v16;
    }
LABEL_46:
    sub_1B88814(Instance, v6);
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
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_object__object__o *v18; // x20
  Il2CppObject *v19; // x0
  int64_t v22; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_Dictionary_object__object__o **v23; // [xsp+10h] [xbp-30h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-24h] BYREF

  v24 = eventId;
  if ( (byte_4A5BE12 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&UserEventServantFatigueEntity_TypeInfo);
    byte_4A5BE12 = 1;
  }
  v23 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v7 = System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v10 = v7;
  v11 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_Dictionary_object__object__o ***, _QWORD))p_method)(
                            lookup,
                            v10,
                            &v23,
                            *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !v23
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*v23)[3].fields._values) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)&(*v23)[2].fields._freeCount + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_1B8880C(v7, v8);
  }
  v18 = v23[4];
  if ( !v18 )
    return 0;
  v22 = userSvtId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v14, v15, v16);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v18,
           v19,
           (const MethodInfo_31C73E0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}