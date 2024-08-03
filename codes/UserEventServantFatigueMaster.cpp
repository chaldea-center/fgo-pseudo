void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD097 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_49FD097 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  System_Collections_Generic_List_long__o *v22; // x19
  Il2CppObject *Item; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v29; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v32; // x2
  __int64 v33; // x3
  int64_t v34; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  _DWORD *monitor; // x23
  int v40; // w8
  unsigned int v41; // w25
  __int64 v42; // x26
  int v43; // w27
  void *v44; // x21
  Il2CppClass *v45; // x22
  int64_t v46; // x1
  struct System_Int64_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  int64_t v50; // x19
  int64_t Time; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49FD09C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1B640C8(&long_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_49FD09C = 1;
  }
  memset(&v54, 0, sizeof(v54));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                         System_Collections_Generic_List_long__TypeInfo,
                                                         v20,
                                                         v21);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v22 )
        goto LABEL_52;
      items = v22->fields._items;
      v25 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          0LL,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size] = 0LL;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__)) == 0LL)
        || (v29 = Item,
            methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (UserEventServantFatigueEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventServantFatigueEntity_TypeInfo )
      {
LABEL_52:
        sub_1B64324(Item);
      }
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v29[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v52,
          klass,
          (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v54 = v52;
LABEL_18:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v54,
                  (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v54.fields._current.fields.value )
            sub_1B64324(0LL);
          if ( v54.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B645E4(v54.fields._current.fields.value);
LABEL_51:
            sub_1B64324(v37);
          }
          v34 = *(_QWORD *)j_il2cpp_object_unbox_0(v54.fields._current.fields.value, long_TypeInfo, v32, v33);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1B64324(0LL);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1B64324(0LL);
          v37 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v34,
                  (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v37 & 1) != 0 )
          {
            monitor = v29[2].monitor;
            if ( !monitor )
              goto LABEL_51;
            v40 = monitor[6];
            if ( v40 >= 1 )
            {
              v41 = 0;
              while ( 1 )
              {
                if ( v41 >= v40 )
                  sub_1B6432C(v37, v38);
                v42 = *(_QWORD *)&monitor[2 * v41 + 8];
                if ( !v42 )
                  sub_1B64324(v37);
                if ( !entity )
                  sub_1B64324(v37);
                v43 = *(_DWORD *)(v42 + 16);
                v45 = entity[5].klass;
                v44 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v55.fields.currentCryptoKey = v45;
                *(_QWORD *)&v55.fields.fakeValue = v44;
                v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
                if ( v43 == (_DWORD)v37 )
                  break;
                v40 = monitor[6];
                if ( (int)++v41 >= v40 )
                  goto LABEL_18;
              }
              v46 = *(_QWORD *)(v42 + 24);
              v47 = v22->fields._items;
              v48 = Method_System_Collections_Generic_List_long__Add__;
              ++v22->fields._version;
              if ( !v47 )
                sub_1B64324(v37);
              v49 = v22->fields._size;
              if ( (unsigned int)v49 >= v47->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v22,
                  v46,
                  *(const MethodInfo_3495074 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                v22->fields._size = v49 + 1;
                v47->m_Items[v49] = v46;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v54,
          (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v50 = System_Linq_Enumerable__Max_63598452((System_Collections_Generic_IEnumerable_long__o *)v22, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      return (v50 - Time) & ~((v50 - Time) >> 63);
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
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  _QWORD *v28; // x24
  __int64 methodPtr_low; // x10
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x22
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 v35; // x0
  void *monitor; // x22
  Il2CppClass *v37; // x23
  __int64 v38; // x8
  int v39; // w9
  int v40; // w10
  __int64 v41; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+10h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+40h] [xbp-A0h] BYREF
  _QWORD *v46; // [xsp+70h] [xbp-70h] BYREF
  int32_t v47; // [xsp+7Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v47 = eventId;
  if ( (byte_49FD098 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15);
    sub_1B640C8(&long_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&UserEventServantFatigueEntity_TypeInfo, v20);
    byte_49FD098 = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  memset(&v45, 0, sizeof(v45));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v22 = System_Int32__ToString((int32_t)&v47, 0LL);
  if ( !lookup )
    goto LABEL_40;
  klass = lookup->klass;
  v24 = v22;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v22 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD **, _QWORD))p_method)(
                             lookup,
                             v24,
                             &v46,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v22 & 1) == 0 )
    return 0;
  v28 = v46;
  if ( !v46
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        *(unsigned __int8 *)(*v46 + 304LL) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v46 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_40:
    sub_1B64324(v22);
  }
  v22 = (System_String_o *)v46[4];
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v43,
    (System_Collections_Generic_Dictionary_object__object__o *)v22,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v45 = v43;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v45,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_27;
    if ( !v45.fields._current.fields.value )
      sub_1B64324(0LL);
    if ( v45.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B645E4(v45.fields._current.fields.value);
      goto LABEL_40;
    }
    v32 = *(_QWORD *)j_il2cpp_object_unbox_0(v45.fields._current.fields.value, long_TypeInfo, v30, v31);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    v35 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v32,
            (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1B64324(v35);
      v37 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v37;
      *(_QWORD *)&v48.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v48, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v45,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_28:
  v38 = v28[5];
  if ( !v38 )
    return 0;
  v39 = *(_DWORD *)(v38 + 24);
  if ( v39 < 1 )
    return 0;
  v40 = 0;
  while ( 1 )
  {
    v41 = *(_QWORD *)(v38 + 8LL * v40 + 32);
    if ( !v41 )
      goto LABEL_40;
    if ( *(_DWORD *)(v41 + 16) == svtId )
      break;
    if ( v39 == ++v40 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v41 + 24);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  __int64 v21; // x20
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  _QWORD *v27; // x20
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_long__o *v29; // x19
  _BOOL8 v30; // x0
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
  if ( (byte_49FD09A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&long_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&UserEventServantFatigueEntity_TypeInfo, v17);
    byte_49FD09A = 1;
  }
  v46 = 0LL;
  memset(&v45, 0, sizeof(v45));
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0LL);
  if ( !lookup )
    goto LABEL_42;
  klass = lookup->klass;
  v21 = Instance;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      p_offset += 2;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, __int64, _QWORD **, _QWORD))p_method)(
               lookup,
               v21,
               &v46,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  v27 = v46;
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
  v29 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v25, v26);
  System_Collections_Generic_List_long____ctor(
    v29,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = v27[4];
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v44,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v45,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v30 )
      break;
    if ( !v29 )
      sub_1B64324(v30);
    if ( !v45.fields._current.fields.value )
      sub_1B64324(0LL);
    if ( v45.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1B645E4(v45.fields._current.fields.value);
      goto LABEL_42;
    }
    v33 = (int64_t *)j_il2cpp_object_unbox_0(v45.fields._current.fields.value, long_TypeInfo, v31, v32);
    v34 = *v33;
    items = v29->fields._items;
    v36 = Method_System_Collections_Generic_List_long__Add__;
    ++v29->fields._version;
    if ( !items )
      sub_1B64324(v33);
    size = v29->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v29,
        v34,
        *(const MethodInfo_3495074 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v29->fields._size = size + 1;
      items->m_Items[size] = v34;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v45,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0LL)) == 0
    || !v29 )
  {
LABEL_42:
    sub_1B64324(Instance);
  }
  v39 = *(_DWORD *)(Instance + 24);
LABEL_31:
  v40 = v29->fields._size;
  while ( v40 < v39 )
  {
    v41 = v29->fields._items;
    v42 = Method_System_Collections_Generic_List_long__Add__;
    ++v29->fields._version;
    if ( !v41 )
      goto LABEL_42;
    if ( v40 >= v41->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v29,
        0LL,
        *(const MethodInfo_3495074 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      goto LABEL_31;
    }
    v43 = &v41->obj.klass + v40++;
    v29->fields._size = v40;
    v43[4] = 0LL;
  }
  return System_Collections_Generic_List_long___ToArray(
           v29,
           (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  System_Int32_array *OpenRecoveryNum; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  DataManager_o *v23; // x21
  __int64 v24; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  _QWORD *v29; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_int__long__o *v31; // x20
  Il2CppObject *value; // x22
  __int64 v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  int32_t v36; // w21
  int64_t *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  unsigned __int64 v40; // x21
  int32_t *v41; // x22
  __int64 v42; // x8
  unsigned __int64 v43; // x21
  int32_t *v44; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-80h] BYREF
  _QWORD *v48; // [xsp+60h] [xbp-50h] BYREF
  int32_t v49; // [xsp+6Ch] [xbp-44h] BYREF

  v49 = eventId;
  if ( (byte_49FD09B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13);
    sub_1B640C8(&long_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&UserEventServantFatigueEntity_TypeInfo, v18);
    byte_49FD09B = 1;
  }
  v48 = 0LL;
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_47;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0LL);
  if ( !lookup )
    goto LABEL_47;
  klass = lookup->klass;
  v23 = Instance;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, DataManager_o *, _QWORD **, _QWORD))p_method)(
                                lookup,
                                v23,
                                &v48,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v29 = v48;
    if ( !v48 )
      goto LABEL_47;
    methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v48 + 304LL) < (unsigned int)methodPtr_low
      || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)(*v48 + 200LL) + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
    {
      goto LABEL_47;
    }
    if ( v48[4] )
    {
      v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                    v27,
                                                                    v28);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v31,
        (const MethodInfo_31200F0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      Instance = (DataManager_o *)v29[4];
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v46,
          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
          (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v47 = v46;
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v47,
                  (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          value = v47.fields._current.fields.value;
          v33 = System_Int32__Parse((System_String_o *)v47.fields._current.fields.key, 0LL);
          if ( !v31 )
            goto LABEL_49;
          if ( !value )
            sub_1B64324(v33);
          if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1B645E4(value);
LABEL_49:
            sub_1B64324(v33);
          }
          v36 = v33;
          v37 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v34, v35);
          System_Collections_Generic_Dictionary_int__long___Add(
            v31,
            v36,
            *v37,
            (const MethodInfo_3120AC4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v47,
          (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        if ( OpenRecoveryNum )
        {
          v42 = *(_QWORD *)&OpenRecoveryNum->max_length;
          if ( (int)v42 >= 1 )
          {
            v43 = 0LL;
            v44 = &OpenRecoveryNum->m_Items[1];
            while ( v43 < (unsigned int)v42 )
            {
              if ( !v31 )
                goto LABEL_47;
              Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                            v31,
                                            v44[v43],
                                            (const MethodInfo_3120CB8 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( v43 >= OpenRecoveryNum->max_length )
                  goto LABEL_46;
                System_Collections_Generic_Dictionary_int__long___Add(
                  v31,
                  v44[v43],
                  0LL,
                  (const MethodInfo_3120AC4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
              }
              LODWORD(v42) = OpenRecoveryNum->max_length;
              if ( (__int64)++v43 >= (int)v42 )
                return v31;
            }
            goto LABEL_46;
          }
          return v31;
        }
      }
LABEL_47:
      sub_1B64324(Instance);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_47;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v31 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__long__TypeInfo,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v31,
    (const MethodInfo_31200F0 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v39 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    v41 = &OpenRecoveryNum->m_Items[1];
    while ( v40 < (unsigned int)v39 )
    {
      if ( !v31 )
        goto LABEL_47;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v31,
                                    v41[v40],
                                    (const MethodInfo_3120CB8 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v40 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v31,
          v41[v40],
          0LL,
          (const MethodInfo_3120AC4 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v39) = OpenRecoveryNum->max_length;
      if ( (__int64)++v40 >= (int)v39 )
        return v31;
    }
LABEL_46:
    sub_1B6432C(Instance, v38);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_String_o *v12; // x21
  __int64 v13; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 methodPtr_low; // x11
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  Il2CppObject *v18; // x0
  int64_t v21; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_Dictionary_object__object__o **v22; // [xsp+10h] [xbp-30h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-24h] BYREF

  v23 = eventId;
  if ( (byte_49FD099 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&long_TypeInfo, v7);
    sub_1B640C8(&UserEventServantFatigueEntity_TypeInfo, v8);
    byte_49FD099 = 1;
  }
  v22 = 0LL;
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  v10 = System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !lookup )
    goto LABEL_18;
  klass = lookup->klass;
  v12 = v10;
  v13 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, System_Collections_Generic_Dictionary_object__object__o ***, _QWORD))p_method)(
                             lookup,
                             v12,
                             &v22,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v22
    || (methodPtr_low = LOBYTE(UserEventServantFatigueEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE((*v22)[3].fields._values) < (unsigned int)methodPtr_low)
    || *(UserEventServantFatigueEntity_c **)(*(_QWORD *)&(*v22)[2].fields._freeCount + 8 * methodPtr_low - 8) != UserEventServantFatigueEntity_TypeInfo )
  {
LABEL_18:
    sub_1B64324(v10);
  }
  v17 = v22[4];
  if ( !v17 )
    return 0;
  v21 = userSvtId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v17,
           v18,
           (const MethodInfo_3179610 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}