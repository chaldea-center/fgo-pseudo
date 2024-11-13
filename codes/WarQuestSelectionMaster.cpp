void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B172A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__, method, v2);
    byte_4B172A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    416,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *result; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x19
  WarQuestSelectionMaster___c_c *v21; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4B172AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v8, v9);
    sub_1BCA7E0(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v12, v13);
    sub_1BCA7E0(&WarQuestSelectionMaster___c_TypeInfo, v14, v15);
    byte_4B172AC = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_object_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v20 = result;
    v21 = WarQuestSelectionMaster___c_TypeInfo;
    if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo, v17);
      v21 = WarQuestSelectionMaster___c_TypeInfo;
    }
    _9__3_0 = (System_Func_object__int__o *)v21->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v17);
        v21 = WarQuestSelectionMaster___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_WarQuestSelectionEntity__int__TypeInfo,
                                                v17,
                                                v18,
                                                v19);
      System_Func_object__int____ctor(
        _9__3_0,
        v23,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        0LL);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v32 = System_Linq_Enumerable__Distinct_int_(
            v31,
            (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v32,
                                                       (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  Il2CppObject *Master_object; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  WarEntity_o *v39; // x22
  Il2CppObject *Instance; // x0
  __int64 v41; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B172AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v22, v23);
    byte_4B172AD = 1;
  }
  memset(&v47, 0, sizeof(v47));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_1BCAA3C(v31, v32);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    AllRegisteredWarIds,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v47 = v46;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !Master_object )
      sub_1BCAA3C(v33, v34);
    current = v47.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               v47.fields._current,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v39 = (WarEntity_o *)Entity;
    if ( Entity )
    {
      Entity = (Il2CppObject *)WarEntity__HasFlag((WarEntity_o *)Entity, 32, v38);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_1BCAA3C(0LL, v41);
        Entity = (Il2CppObject *)QuestTree__IsActiveEventWar_34728196((QuestTree_o *)Instance, v39, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v30 )
      sub_1BCAA3C(Entity, v37);
    items = v30->fields._items;
    v43 = Method_System_Collections_Generic_List_int__Add__;
    ++v30->fields._version;
    if ( !items )
      sub_1BCAA3C(Entity, v37);
    size = v30->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v30,
        current,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v30->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v30;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  int64_t v25; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v28; // x2
  __int64 v29; // x3
  int32_t v30; // w22
  int32_t v31; // w23
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Comparison_T__o *v41; // x20
  Il2CppObject *v42; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B172AB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v18, v19);
    sub_1BCA7E0(&WarQuestSelectionMaster___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&WarQuestSelectionEntity_TypeInfo, v22, v23);
    byte_4B172AB = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v30 = Count;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v31,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = (int64_t)list;
        methodPtr_low = LOBYTE(WarQuestSelectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v24 )
            break;
          items = v24->fields._items;
          v38 = Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v25;
            sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v25, v28, v29, v32, v33, v34, v35);
          }
        }
      }
      if ( v30 == ++v31 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v25);
  }
LABEL_17:
  list = WarQuestSelectionMaster___c_TypeInfo;
  if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo, v25);
    list = WarQuestSelectionMaster___c_TypeInfo;
  }
  v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v41 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v25);
      list = WarQuestSelectionMaster___c_TypeInfo;
    }
    v42 = (Il2CppObject *)**((_QWORD **)list + 23);
    v41 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_WarQuestSelectionEntity__TypeInfo, v25, v28, v29);
    System_Comparison_object____ctor(v41, v42, Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, 0LL);
    static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)v41;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v41, v44, v45, v46, v47, v48, v49);
  }
  if ( !v24 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v24,
    v41,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v24;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  bool v13; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B172AE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&WarQuestSelectionEntity_TypeInfo, v7, v8);
    byte_4B172AE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(WarQuestSelectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != WarQuestSelectionEntity_TypeInfo
        || LODWORD(Item[1].klass) != warId )
      {
        v13 = ++v12 < v11;
        if ( v11 != v12 )
          continue;
      }
      return v13;
    }
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&warId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__IsActiveRegisteredQuest(
        WarQuestSelectionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  bool v14; // w21
  int v15; // w19
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+20h] [xbp-50h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4B172AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9, v10);
    byte_4B172AF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    AvailableRegisteredWarIds,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v18,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v14 )
      break;
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v18.fields._current, questId, v13) )
    {
      v15 = 4;
      goto LABEL_9;
    }
  }
  v15 = 5;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v18,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v14 && v15 == 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__TryGetEntity(
        WarQuestSelectionMaster_o *this,
        WarQuestSelectionEntity_o **entity,
        int32_t warId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B172AA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&warId);
    byte_4B172AA = 1;
  }
  PK = (Il2CppObject *)WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B172B0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarQuestSelectionMaster___c_TypeInfo, v1, v2);
    byte_4B172B0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarQuestSelectionMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarQuestSelectionMaster___c_TypeInfo->static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarQuestSelectionMaster___c___ctor(WarQuestSelectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarQuestSelectionMaster___c___GetAllRegisteredWarIds_b__3_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}