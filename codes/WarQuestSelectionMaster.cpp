void WarQuestSelectionMaster___ctor(WarQuestSelectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971B40 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
    byte_5971B40 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    424,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *WarQuestSelectionMaster__GetAllRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *result; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  WarQuestSelectionMaster___c_c *v6; // x0
  struct WarQuestSelectionMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v9; // x21
  struct WarQuestSelectionMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_5971B42 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&System_Func_WarQuestSelectionEntity__int__TypeInfo);
    sub_2213A60(&Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__2_0__);
    sub_2213A60(&WarQuestSelectionMaster___c_TypeInfo);
    byte_5971B42 = 1;
  }
  result = (System_Collections_Generic_List_int__o *)DataMasterBase_object__object__object___getEntitys(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                       (const MethodInfo_3F14B68 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__getEntitys__);
  if ( result )
  {
    v5 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v6 = WarQuestSelectionMaster___c_TypeInfo;
    if ( !*(&WarQuestSelectionMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarQuestSelectionMaster___c_TypeInfo, v4);
      v6 = WarQuestSelectionMaster___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v4);
        static_fields = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarQuestSelectionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__2_0,
        v9,
        Method_WarQuestSelectionMaster___c__GetAllRegisteredWarIds_b__2_0__,
        0);
      v10 = WarQuestSelectionMaster___c_TypeInfo->static_fields;
      v10->__9__2_0 = (struct System_Func_WarQuestSelectionEntity__int__o *)_9__2_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v5,
                                                                 (System_Func_TSource__TResult__o *)_9__2_0,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_WarQuestSelectionEntity__int___);
    v18 = System_Linq_Enumerable__Distinct_int_(
            v17,
            (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
    return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v18,
                                                       (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  return result;
}


System_Collections_Generic_List_int__o *WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
        WarQuestSelectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *AllRegisteredWarIds; // x21
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  WarEntity_o *v15; // x22
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5971B43 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5971B43 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  AllRegisteredWarIds = WarQuestSelectionMaster__GetAllRegisteredWarIds(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !AllRegisteredWarIds )
    sub_2213CDC(v7, v8);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    AllRegisteredWarIds,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v23,
           (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v9 )
      break;
    if ( !Master_object )
      sub_2213CDC(v9, v10);
    current = v23.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               v23.fields._current,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v15 = (WarEntity_o *)Entity;
    if ( Entity )
    {
      Entity = (Il2CppObject *)WarEntity__HasFlag((WarEntity_o *)Entity, 32, v14);
      if ( ((unsigned __int8)Entity & 1) != 0 )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_2213CDC(0, v17);
        Entity = (Il2CppObject *)QuestTree__IsActiveEventWar_43437100((QuestTree_o *)Instance, v15, 0);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          continue;
      }
    }
    if ( !v6
      || (items = v6->fields._items,
          v19 = Method_System_Collections_Generic_List_int__Add__,
          ++v6->fields._version,
          !items) )
    {
      sub_2213CDC(Entity, v13);
    }
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        current,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = size + 1;
      items->m_Items[size] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v6;
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

  if ( (byte_5971B44 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
    byte_5971B44 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarQuestSelectionEntity__get_Item__);
      if ( !Item || LODWORD(Item[1].klass) != warId )
      {
        v9 = ++v8 < v7;
        if ( v7 != v8 )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&warId);
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
  System_Collections_Generic_List_Enumerator_int__o v10; // [xsp+10h] [xbp-50h] BYREF
  WarQuestSelectionEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5971B45 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_5971B45 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  AvailableRegisteredWarIds = WarQuestSelectionMaster__GetAvailableRegisteredWarIds(
                                this,
                                *(const MethodInfo **)&questId);
  entity = 0;
  if ( !AvailableRegisteredWarIds )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    AvailableRegisteredWarIds,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  do
    v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v10,
           (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
  while ( v8 && !WarQuestSelectionMaster__TryGetEntity(this, &entity, v10.fields._current, questId, v7) );
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v10,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v8;
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

  if ( (byte_5971B41 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
    byte_5971B41 = 1;
  }
  PK = (Il2CppObject *)WarQuestSelectionEntity__CreatePK(warId, questId, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__TryGetEntity__);
}


void WarQuestSelectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971B46 & 1) == 0 )
  {
    sub_2213A60(&WarQuestSelectionMaster___c_TypeInfo);
    byte_5971B46 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarQuestSelectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarQuestSelectionMaster___c_TypeInfo->static_fields->__9 = (struct WarQuestSelectionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarQuestSelectionMaster___c_TypeInfo->static_fields,
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


int32_t WarQuestSelectionMaster___c___GetAllRegisteredWarIds_b__2_0(
        WarQuestSelectionMaster___c_o *this,
        WarQuestSelectionEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_2213CDC(this, 0);
  return ent->fields.warId;
}