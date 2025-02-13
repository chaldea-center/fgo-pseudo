void __fastcall WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD65B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
    byte_4BDD65B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    420,
    (const MethodInfo_325E55C *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v5; // x19
  WarQuestSelectionMaster___c_c *v6; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v8; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4BDD65E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys_WarQuestSelectionEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&System_Func_WarQuestSelectionEntity__int__TypeInfo);
    sub_1C21E38(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__);
    sub_1C21E38(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4BDD65E = 1;
  }
  v3 = sub_1C21F6C(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                   + 2
                   * *((unsigned __int16 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys_WarQuestSelectionEntity___
                     + 40)));
  result = (System_Collections_Generic_List_int__o *)(*(__int64 (__fastcall **)(WarQuestSelectionMaster_o *, __int64))(v3 + 8))(
                                                       this,
                                                       v3);
  if ( result )
  {
    v5 = result;
    v6 = WarQuestSelectionMaster___c_TypeInfo;
    if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v6 = WarQuestSelectionMaster___c_TypeInfo;
    }
    _9__3_0 = (System_Func_object__int__o *)v6->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = WarQuestSelectionMaster___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__3_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__3_0,
        v8,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        0LL);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v17 = System_Linq_Enumerable__Distinct_int_(
            v16,
            (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v17,
                                                       (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  WarEntity_o *v14; // x22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDD65F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BDD65F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_1C22094(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    AllRegisteredWarIds,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v22,
           (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !Master_object )
      sub_1C22094(v8, v9);
    current = v22.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               v22.fields._current,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v14 = (WarEntity_o *)Entity;
    if ( Entity )
    {
      Entity = (Il2CppObject *)WarEntity__HasFlag((WarEntity_o *)Entity, 32, v13);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_1C22094(0LL, v16);
        Entity = (Il2CppObject *)QuestTree__IsActiveEventWar_35200004((QuestTree_o *)Instance, v14, 0LL);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v5 )
      sub_1C22094(Entity, v12);
    items = v5->fields._items;
    v18 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C22094(Entity, v12);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        current,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v5;
}


System_Collections_Generic_List_WarQuestSelectionEntity__o *__fastcall WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDD65D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_WarQuestSelectionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
    sub_1C21E38(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__);
    sub_1C21E38(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4BDD65D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
      if ( list )
      {
        v6 = (int64_t)list;
        if ( *((_DWORD *)list + 4) == warId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v6;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C22094(list, v6);
  }
LABEL_15:
  list = WarQuestSelectionMaster___c_TypeInfo;
  if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
    list = WarQuestSelectionMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarQuestSelectionMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, 0LL);
    static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__HasWar(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4BDD660 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
    byte_4BDD660 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].klass) != warId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C22094(list, *(_QWORD *)&warId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarQuestSelectionMaster__IsActiveRegisteredQuest(
        WarQuestSelectionMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *AvailableRegisteredWarIds; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  bool v8; // w21
  int v9; // w19
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+20h] [xbp-50h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+38h] [xbp-38h] BYREF

  if ( (byte_4BDD661 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4BDD661 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0LL;
  if ( !AvailableRegisteredWarIds )
    sub_1C22094(0LL, v6);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    AvailableRegisteredWarIds,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v12,
           (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( WarQuestSelectionMaster__TryGetEntity(this, &entity, v12.fields._current, questId, v7) )
    {
      v9 = 4;
      goto LABEL_9;
    }
  }
  v9 = 5;
LABEL_9:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8 && v9 == 4;
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

  if ( (byte_4BDD65C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
    byte_4BDD65C = 1;
  }
  PK = (Il2CppObject *)WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void __fastcall WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD662 & 1) == 0 )
  {
    sub_1C21E38(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4BDD662 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarQuestSelectionMaster___c_TypeInfo->static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return ent->fields.warId;
}


int32_t __fastcall WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}