void __fastcall UserEventServantFatigueMaster___ctor(UserEventServantFatigueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB53E4 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__,
      method);
    byte_4BB53E4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    301,
    (const MethodInfo_3236300 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int___ctor__);
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
  int64_t result; // x0
  System_Collections_Generic_List_long__o *v19; // x19
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  int32_t Count; // w0
  Il2CppObject *v27; // x20
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x21
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v36; // x1
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

  if ( (byte_4BB53E9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_1C13D24(&long_TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1C13D24(&NetworkManager_TypeInfo, v15);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BB53E9 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  entity = 0LL;
  result = (int64_t)this->fields.list;
  if ( result )
  {
    if ( System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)result,
           (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__) )
    {
      v19 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v19,
        (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
      if ( !v19 )
        goto LABEL_50;
      items = v19->fields._items;
      v23 = Method_System_Collections_Generic_List_long__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_50;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v19,
          0LL,
          *(const MethodInfo_3615200 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size] = 0LL;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list
        || (Count = System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Count__),
            (Item = System_Collections_ObjectModel_Collection_object___get_Item(
                      list,
                      Count - 1,
                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserEventServantFatigueEntity__get_Item__)) == 0LL) )
      {
LABEL_50:
        sub_1C13F80(Item, v21);
      }
      v27 = Item;
      klass = (System_Collections_Generic_Dictionary_object__object__o *)Item[2].klass;
      if ( klass && v27[2].monitor )
      {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator(
          &v52,
          klass,
          (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        v54 = v52;
LABEL_16:
        while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                  &v54,
                  (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
        {
          if ( !v54.fields._current.fields.value )
            sub_1C13F80(0LL, v29);
          if ( v54.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
          {
            sub_1C14240(v54.fields._current.fields.value);
LABEL_49:
            sub_1C13F80(v37, v38);
          }
          v32 = *(_QWORD *)j_il2cpp_object_unbox_0(v54.fields._current.fields.value, long_TypeInfo, v30, v31);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            sub_1C13F80(0LL, v34);
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_object )
            sub_1C13F80(0LL, v36);
          v37 = DataMasterBase_object__object__long___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  &entity,
                  v32,
                  (const MethodInfo_323ABCC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (v37 & 1) != 0 )
          {
            monitor = v27[2].monitor;
            if ( !monitor )
              goto LABEL_49;
            v40 = monitor[6];
            if ( v40 >= 1 )
            {
              v41 = 0;
              while ( 1 )
              {
                if ( v41 >= v40 )
                  sub_1C13F88(v37, v38);
                v42 = *(_QWORD *)&monitor[2 * v41 + 8];
                if ( !v42 )
                  sub_1C13F80(v37, v38);
                if ( !entity )
                  sub_1C13F80(v37, v38);
                v43 = *(_DWORD *)(v42 + 16);
                v45 = entity[5].klass;
                v44 = entity[5].monitor;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v55.fields.currentCryptoKey = v45;
                *(_QWORD *)&v55.fields.fakeValue = v44;
                v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v55, 0LL);
                if ( v43 == (_DWORD)v37 )
                  break;
                v40 = monitor[6];
                if ( (int)++v41 >= v40 )
                  goto LABEL_16;
              }
              v46 = *(_QWORD *)(v42 + 24);
              v47 = v19->fields._items;
              v48 = Method_System_Collections_Generic_List_long__Add__;
              ++v19->fields._version;
              if ( !v47 )
                sub_1C13F80(v37, v46);
              v49 = v19->fields._size;
              if ( (unsigned int)v49 >= v47->max_length )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  v19,
                  v46,
                  *(const MethodInfo_3615200 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                v19->fields._size = v49 + 1;
                v47->m_Items[v49] = v46;
              }
            }
          }
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
          &v54,
          (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      }
      v50 = System_Linq_Enumerable__Max_65191620((System_Collections_Generic_IEnumerable_long__o *)v19, 0LL);
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
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x22
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v25; // x23
  __int64 v26; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x22
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  void *monitor; // x22
  Il2CppClass *v40; // x23
  __int64 v41; // x8
  int v42; // w9
  int v43; // w10
  __int64 v44; // x11
  bool result; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+0h] [xbp-D0h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+30h] [xbp-A0h] BYREF
  __int64 v49; // [xsp+60h] [xbp-70h] BYREF
  int32_t v50; // [xsp+6Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v50 = eventId;
  if ( (byte_4BB53E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, recoverAt);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1C13D24(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__,
      v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15);
    sub_1C13D24(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo, v16);
    sub_1C13D24(&long_TypeInfo, v17);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v18);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4BB53E5 = 1;
  }
  v49 = 0LL;
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  *isRecover = 0;
  *recoverAt = 0LL;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3236418 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v22 = System_Int32__ToString((int32_t)&v50, 0LL);
  if ( !lookup )
    goto LABEL_39;
  klass = lookup->klass;
  v25 = v22;
  v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
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
    p_method = sub_1C65D04(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
                 1LL);
  }
  v22 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                             lookup,
                             v25,
                             &v49,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v22 & 1) == 0 )
    return 0;
  if ( !v49 )
    goto LABEL_39;
  v22 = *(System_String_o **)(v49 + 32);
  if ( !v22 )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v46,
    (System_Collections_Generic_Dictionary_object__object__o *)v22,
    (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v48 = v46;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v48,
            (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      goto LABEL_25;
    if ( !v48.fields._current.fields.value )
      sub_1C13F80(0LL, v29);
    if ( v48.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C14240(v48.fields._current.fields.value);
      goto LABEL_39;
    }
    v32 = *(_QWORD *)j_il2cpp_object_unbox_0(v48.fields._current.fields.value, long_TypeInfo, v30, v31);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, v34);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1C13F80(0LL, v36);
    v37 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v32,
            (const MethodInfo_323ABCC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v37 )
    {
      if ( !entity )
        sub_1C13F80(v37, v38);
      v40 = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v40;
      *(_QWORD *)&v51.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v51, 0LL) == svtId )
        break;
    }
  }
  *isRecover = 1;
LABEL_25:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v48,
    (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
LABEL_26:
  if ( !v49 )
LABEL_39:
    sub_1C13F80(v22, v23);
  v41 = *(_QWORD *)(v49 + 40);
  if ( !v41 )
    return 0;
  v42 = *(_DWORD *)(v41 + 24);
  if ( v42 < 1 )
    return 0;
  v43 = 0;
  while ( 1 )
  {
    v44 = *(_QWORD *)(v41 + 8LL * v43 + 32);
    if ( !v44 )
      goto LABEL_39;
    if ( *(_DWORD *)(v44 + 16) == svtId )
      break;
    if ( v42 == ++v43 )
      return 0;
  }
  result = 1;
  *recoverAt = *(_QWORD *)(v44 + 24);
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
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x19
  __int64 Instance; // x0
  __int64 v20; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_long__o *v26; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  int64_t *v31; // x0
  int64_t v32; // x1
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int32_t v37; // w20
  int32_t v38; // w8
  struct System_Int64_array *v39; // x9
  _QWORD *v40; // x10
  Il2CppClass **v41; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+30h] [xbp-60h] BYREF
  __int64 v44; // [xsp+58h] [xbp-38h] BYREF
  int32_t eventIda; // [xsp+6Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_4BB53E7 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__,
      v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v8);
    sub_1C13D24(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo, v9);
    sub_1C13D24(&long_TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v16);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4BB53E7 = 1;
  }
  v44 = 0LL;
  memset(&v43, 0, sizeof(v43));
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3236418 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (__int64)System_Int32__ToString((int32_t)&eventIda, 0LL);
  if ( !lookup )
    goto LABEL_41;
  klass = lookup->klass;
  v22 = Instance;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
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
    p_method = sub_1C65D04(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
                 1LL);
  }
  Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, __int64, __int64 *, _QWORD))p_method)(
               lookup,
               v22,
               &v44,
               *(_QWORD *)(p_method + 8));
  if ( (Instance & 1) == 0 )
    return 0LL;
  if ( !v44 )
    goto LABEL_41;
  if ( !*(_QWORD *)(v44 + 32) )
    return 0LL;
  v26 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !v44 )
    goto LABEL_41;
  Instance = *(_QWORD *)(v44 + 32);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v27 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v43,
            (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v27 )
      break;
    if ( !v26 )
      sub_1C13F80(v27, v28);
    if ( !v43.fields._current.fields.value )
      sub_1C13F80(0LL, v28);
    if ( v43.fields._current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_1C14240(v43.fields._current.fields.value);
      goto LABEL_41;
    }
    v31 = (int64_t *)j_il2cpp_object_unbox_0(v43.fields._current.fields.value, long_TypeInfo, v29, v30);
    v32 = *v31;
    items = v26->fields._items;
    v34 = Method_System_Collections_Generic_List_long__Add__;
    ++v26->fields._version;
    if ( !items )
      sub_1C13F80(v31, v32);
    size = v26->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v26,
        v32,
        *(const MethodInfo_3615200 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v26->fields._size = size + 1;
      items->m_Items[size] = v32;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v43,
    (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___)) == 0
    || (Instance = (__int64)EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                              (EventFatigueRecoveryMaster_o *)Instance,
                              eventIda,
                              0LL)) == 0
    || !v26 )
  {
LABEL_41:
    sub_1C13F80(Instance, v20);
  }
  v37 = *(_DWORD *)(Instance + 24);
LABEL_30:
  v38 = v26->fields._size;
  while ( v38 < v37 )
  {
    v39 = v26->fields._items;
    v40 = Method_System_Collections_Generic_List_long__Add__;
    ++v26->fields._version;
    if ( !v39 )
      goto LABEL_41;
    if ( v38 >= v39->max_length )
    {
      System_Collections_Generic_List_long___AddWithResize(
        v26,
        0LL,
        *(const MethodInfo_3615200 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      goto LABEL_30;
    }
    v41 = &v39->obj.klass + v38++;
    v26->fields._size = v38;
    v41[4] = 0LL;
  }
  return System_Collections_Generic_List_long___ToArray(
           v26,
           (const MethodInfo_3616CB8 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  DataManager_o *v24; // x21
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_Dictionary_int__long__o *v28; // x20
  Il2CppObject *value; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int32_t v34; // w21
  int64_t *v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x21
  int32_t *v38; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x21
  int32_t *v41; // x22
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+30h] [xbp-80h] BYREF
  __int64 v45; // [xsp+60h] [xbp-50h] BYREF
  int32_t v46; // [xsp+6Ch] [xbp-44h] BYREF

  v46 = eventId;
  if ( (byte_4BB53E8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__,
      v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__long__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__long___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__long__TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_1C13D24(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo, v14);
    sub_1C13D24(&long_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4BB53E8 = 1;
  }
  v45 = 0LL;
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_46;
  OpenRecoveryNum = EventFatigueRecoveryMaster__GetOpenRecoveryNum(
                      (EventFatigueRecoveryMaster_o *)Instance,
                      eventId,
                      0LL);
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3236418 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v46, 0LL);
  if ( !lookup )
    goto LABEL_46;
  klass = lookup->klass;
  v24 = Instance;
  v25 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
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
    p_method = sub_1C65D04(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
                 1LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, DataManager_o *, __int64 *, _QWORD))p_method)(
                                lookup,
                                v24,
                                &v45,
                                *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_46;
    if ( *(_QWORD *)(v45 + 32) )
    {
      v28 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__long__TypeInfo);
      System_Collections_Generic_Dictionary_int__long____ctor(
        v28,
        (const MethodInfo_328EA14 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
      if ( v45 )
      {
        Instance = *(DataManager_o **)(v45 + 32);
        if ( Instance )
        {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v43,
            (System_Collections_Generic_Dictionary_object__object__o *)Instance,
            (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v44 = v43;
          while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v44,
                    (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            value = v44.fields._current.fields.value;
            v30 = System_Int32__Parse((System_String_o *)v44.fields._current.fields.key, 0LL);
            if ( !v28 )
              goto LABEL_48;
            if ( !value )
              sub_1C13F80(v30, v31);
            if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
            {
              sub_1C14240(value);
LABEL_48:
              sub_1C13F80(v30, v31);
            }
            v34 = v30;
            v35 = (int64_t *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v32, v33);
            System_Collections_Generic_Dictionary_int__long___Add(
              v28,
              v34,
              *v35,
              (const MethodInfo_328F3E8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v44,
            (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
          if ( OpenRecoveryNum )
          {
            v39 = *(_QWORD *)&OpenRecoveryNum->max_length;
            if ( (int)v39 >= 1 )
            {
              v40 = 0LL;
              v41 = &OpenRecoveryNum->m_Items[1];
              while ( v40 < (unsigned int)v39 )
              {
                if ( !v28 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                              v28,
                                              v41[v40],
                                              (const MethodInfo_328F5DC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  if ( v40 >= OpenRecoveryNum->max_length )
                    goto LABEL_45;
                  System_Collections_Generic_Dictionary_int__long___Add(
                    v28,
                    v41[v40],
                    0LL,
                    (const MethodInfo_328F3E8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                }
                LODWORD(v39) = OpenRecoveryNum->max_length;
                if ( (__int64)++v40 >= (int)v39 )
                  return v28;
              }
              goto LABEL_45;
            }
            return v28;
          }
        }
      }
LABEL_46:
      sub_1C13F80(Instance, v20);
    }
    return 0LL;
  }
  if ( !OpenRecoveryNum )
    goto LABEL_46;
  if ( !*(_QWORD *)&OpenRecoveryNum->max_length )
    return 0LL;
  v28 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v28,
    (const MethodInfo_328EA14 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  v36 = *(_QWORD *)&OpenRecoveryNum->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    v38 = &OpenRecoveryNum->m_Items[1];
    while ( v37 < (unsigned int)v36 )
    {
      if ( !v28 )
        goto LABEL_46;
      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_int__long___ContainsKey(
                                    v28,
                                    v38[v37],
                                    (const MethodInfo_328F5DC *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( v37 >= OpenRecoveryNum->max_length )
          break;
        System_Collections_Generic_Dictionary_int__long___Add(
          v28,
          v38[v37],
          0LL,
          (const MethodInfo_328F3E8 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
      }
      LODWORD(v36) = OpenRecoveryNum->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        return v28;
    }
LABEL_45:
    sub_1C13F88(Instance, v20);
  }
  return v28;
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
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_String_o *v13; // x21
  __int64 v14; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_Dictionary_object__object__o *v20; // x20
  Il2CppObject *v21; // x0
  int64_t v24; // [xsp+0h] [xbp-40h] BYREF
  __int64 v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-24h] BYREF

  v26 = eventId;
  if ( (byte_4BB53E6 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__, v6);
    sub_1C13D24(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo, v7);
    sub_1C13D24(&long_TypeInfo, v8);
    byte_4BB53E6 = 1;
  }
  v25 = 0LL;
  lookup = DataMasterBase_object__object__int___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3236418 *)Method_DataMasterBase_UserEventServantFatigueMaster__UserEventServantFatigueEntity__int__get_lookup__);
  v10 = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !lookup )
    goto LABEL_16;
  klass = lookup->klass;
  v13 = v10;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo )
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
    p_method = sub_1C65D04(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__UserEventServantFatigueEntity__TypeInfo,
                 1LL);
  }
  v10 = (System_String_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, __int64 *, _QWORD))p_method)(
                             lookup,
                             v13,
                             &v25,
                             *(_QWORD *)(p_method + 8));
  if ( ((unsigned __int8)v10 & 1) == 0 )
    return 0;
  if ( !v25 )
LABEL_16:
    sub_1C13F80(v10, v11);
  v20 = *(System_Collections_Generic_Dictionary_object__object__o **)(v25 + 32);
  if ( !v20 )
    return 0;
  v24 = userSvtId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v17, v18, v19);
  return System_Collections_Generic_Dictionary_object__object___ContainsValue(
           v20,
           v21,
           (const MethodInfo_32F2BC8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsValue__);
}