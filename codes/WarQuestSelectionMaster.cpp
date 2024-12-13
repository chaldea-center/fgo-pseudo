void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B3826F & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__, method);
    byte_4B3826F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    416,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v10; // x19
  WarQuestSelectionMaster___c_c *v11; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v13; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4B38272 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Distinct_int___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_1BD3458(&System_Func_WarQuestSelectionEntity__int__TypeInfo, v6);
    sub_1BD3458(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__, v7);
    sub_1BD3458(&WarQuestSelectionMaster___c_TypeInfo, v8);
    byte_4B38272 = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase__getEntitys_object_(
                                                       (DataMasterBase_o *)this,
                                                       (const MethodInfo_2F31F18 *)Method_DataMasterBase_getEntitys_WarQuestSelectionEntity___);
  if ( result )
  {
    v10 = result;
    v11 = WarQuestSelectionMaster___c_TypeInfo;
    if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v11 = WarQuestSelectionMaster___c_TypeInfo;
    }
    _9__3_0 = (System_Func_object__int__o *)v11->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = WarQuestSelectionMaster___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__3_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__3_0,
        v13,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        0LL);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v22 = System_Linq_Enumerable__Distinct_int_(
            v21,
            (const MethodInfo_2F4EA68 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v22,
                                                       (const MethodInfo_2F6E8A4 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
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
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  WarEntity_o *v24; // x22
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B38273 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v12);
    byte_4B38273 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_WarMaster___);
  v15 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_1BD36B4(v16, v17);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    AllRegisteredWarIds,
    (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !Master_object )
      sub_1BD36B4(v18, v19);
    current = v32.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               v32.fields._current,
               (const MethodInfo_31D1EF0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v24 = (WarEntity_o *)Entity;
    if ( Entity )
    {
      Entity = (Il2CppObject *)WarEntity__HasFlag((WarEntity_o *)Entity, 32, v23);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_1BD36B4(0LL, v26);
        Entity = (Il2CppObject *)QuestTree__IsActiveEventWar_34780960((QuestTree_o *)Instance, v24, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v15 )
      sub_1BD36B4(Entity, v22);
    items = v15->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1BD36B4(Entity, v22);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v15,
        current,
        *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
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
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B38271 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_WarQuestSelectionEntity__TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo, v10);
    sub_1BD3458(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, v11);
    sub_1BD3458(&WarQuestSelectionMaster___c_TypeInfo, v12);
    sub_1BD3458(&WarQuestSelectionEntity_TypeInfo, v13);
    byte_4B38271 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = (int64_t)list;
        methodPtr_low = LOBYTE(WarQuestSelectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(WarQuestSelectionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == WarQuestSelectionEntity_TypeInfo
          && *((_DWORD *)list + 4) == warId )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v28 = Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)list,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v15;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 4), v15, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BD36B4(list, v15);
  }
LABEL_17:
  list = WarQuestSelectionMaster___c_TypeInfo;
  if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
    list = WarQuestSelectionMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarQuestSelectionMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, 0LL);
    static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)v31;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v14 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56371284(
    v14,
    v31,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  bool v11; // w25
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B38274 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&WarQuestSelectionEntity_TypeInfo, v6);
    byte_4B38274 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item
        || (methodPtr_low = LOBYTE(WarQuestSelectionEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (WarQuestSelectionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != WarQuestSelectionEntity_TypeInfo
        || LODWORD(Item[1].klass) != warId )
      {
        v11 = ++v10 < v9;
        if ( v9 != v10 )
          continue;
      }
      return v11;
    }
LABEL_15:
    sub_1BD36B4(list, *(_QWORD *)&warId);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  bool v11; // w21
  int v12; // w19
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+20h] [xbp-50h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4B38275 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4B38275 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_1BD36B4(0LL, v9);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    AvailableRegisteredWarIds,
    (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v15,
            (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v11 )
      break;
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v15.fields._current, questId, v10) )
    {
      v12 = 4;
      goto LABEL_9;
    }
  }
  v12 = 5;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v15,
    (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v11 && v12 == 4;
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

  if ( (byte_4B38270 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__, entity);
    byte_4B38270 = 1;
  }
  PK = (Il2CppObject *)WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B38276 & 1) == 0 )
  {
    sub_1BD3458(&WarQuestSelectionMaster___c_TypeInfo, v1);
    byte_4B38276 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarQuestSelectionMaster___c_TypeInfo->static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1BD36B4(this, a);
  return b->fields.priority - a->fields.priority;
}