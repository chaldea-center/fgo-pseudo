void WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8693 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
    byte_4CC8693 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    422,
    (const MethodInfo_340B614 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *result; // x0
  System_Collections_Generic_List_int__o *v4; // x19
  WarQuestSelectionMaster___c_c *v5; // x0
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4CC8696 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C713B0(&System_Func_WarQuestSelectionEntity__int__TypeInfo);
    sub_1C713B0(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__);
    sub_1C713B0(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4CC8696 = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase_object__object__object___getEntitys(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                       (const MethodInfo_340CBBC *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys__);
  if ( result )
  {
    v4 = result;
    v5 = WarQuestSelectionMaster___c_TypeInfo;
    if ( !WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo);
      v5 = WarQuestSelectionMaster___c_TypeInfo;
    }
    _9__3_0 = (System_Func_object__int__o *)v5->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = WarQuestSelectionMaster___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__3_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__3_0,
        v7,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__3_0__,
        0);
      static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__3_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
        (int32_t)_9__3_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                 (System_Func_TSource__TResult__o *)_9__3_0,
                                                                 (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v16 = System_Linq_Enumerable__Distinct_int_(
            v15,
            (const MethodInfo_316E3D4 *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v16,
                                                       (const MethodInfo_318FA1C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
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

  if ( (byte_4CC8697 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC8697 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_1C71608(v6, v7);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    AllRegisteredWarIds,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v22,
           (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v8 )
      break;
    if ( !Master_object )
      sub_1C71608(v8, v9);
    current = v22.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               v22.fields._current,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v14 = (WarEntity_o *)Entity;
    if ( Entity )
    {
      Entity = (Il2CppObject *)WarEntity__HasFlag((WarEntity_o *)Entity, 32, v13);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_1C71608(0, v16);
        Entity = (Il2CppObject *)QuestTree__IsActiveEventWar_36888348((QuestTree_o *)Instance, v14, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v5 )
      sub_1C71608(Entity, v12);
    items = v5->fields._items;
    v18 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C71608(Entity, v12);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        current,
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = size + 1;
      items->m_Items[size] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v5;
}


System_Collections_Generic_List_WarQuestSelectionEntity__o *WarQuestSelectionMaster__GetEntityListFromWarId(
        WarQuestSelectionMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CC8695 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
    sub_1C713B0(&System_Comparison_WarQuestSelectionEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
    sub_1C713B0(&Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__);
    sub_1C713B0(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4CC8695 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarQuestSelectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarQuestSelectionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
      if ( list )
      {
        v6 = (Il2CppClass *)list;
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
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = v6;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C71608(list, v6);
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
    v21 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_WarQuestSelectionEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_WarQuestSelectionMaster___c__GetEntityListFromWarId_b__2_0__, 0);
    static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_WarQuestSelectionEntity__o *)v21;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58794460(
    v5,
    v21,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_WarQuestSelectionEntity__Sort__);
  return (System_Collections_Generic_List_WarQuestSelectionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool WarQuestSelectionMaster__HasWar(WarQuestSelectionMaster_o *this, int32_t warId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  bool v9; // w24
  Il2CppObject *Item; // x0

  if ( (byte_4CC8698 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
    byte_4CC8698 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
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
               (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].klass) != warId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C71608(list, *(_QWORD *)&warId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarQuestSelectionMaster__IsActiveRegisteredQuest(
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

  if ( (byte_4CC8699 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4CC8699 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0;
  if ( !AvailableRegisteredWarIds )
    sub_1C71608(0, v6);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    AvailableRegisteredWarIds,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v12,
           (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
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
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8 && v9 == 4;
}


// local variable allocation has failed, the output may be wrong!
bool WarQuestSelectionMaster__TryGetEntity(
        WarQuestSelectionMaster_o *this,
        WarQuestSelectionEntity_o **entity,
        int32_t warId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC8694 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
    byte_4CC8694 = 1;
  }
  PK = (Il2CppObject *)WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC869A & 1) == 0 )
  {
    sub_1C713B0(&WarQuestSelectionMaster___c_TypeInfo);
    byte_4CC869A = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarQuestSelectionMaster___c_TypeInfo->static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarQuestSelectionMaster___c___ctor(WarQuestSelectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarQuestSelectionMaster___c___GetAllRegisteredWarIds_b__3_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.warId;
}


int32_t WarQuestSelectionMaster___c___GetEntityListFromWarId_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *a,
        WarQuestSelectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}