void WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DB0E & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
    byte_4D2DB0E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_345919C *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *WarMaster__GetEntityList(WarMaster_o *this, const MethodInfo *method)
{
  WarMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2DB0F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_WarEntity___);
    sub_1C94098(&System_Func_WarEntity__WarEntity__TypeInfo);
    sub_1C94098(&Method_WarMaster___c__GetEntityList_b__1_0__);
    sub_1C94098(&WarMaster___c_TypeInfo);
    byte_4D2DB0F = 1;
  }
  v3 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    v3 = WarMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_WarEntity__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v6, Method_WarMaster___c__GetEntityList_b__1_0__, 0);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarEntity__WarEntity__o *)_9__1_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v14,
                                                           (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarMaster__GetEventStartAt(WarMaster_o *this, int32_t warId, const MethodInfo *method)
{
  int32_t EventID; // w19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2DB17 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4D2DB17 = 1;
  }
  entity = 0;
  EventID = WarMaster__getEventID(warId, *(const MethodInfo **)&warId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    EventID,
                                    (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[5].monitor;
LABEL_11:
    sub_1C942F0(Master_object, v6);
  }
  return 0;
}


bool WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  int32_t v6; // w21
  bool v7; // w25
  const MethodInfo *v8; // x2
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t klass_high; // w22

  if ( (byte_4D2DB16 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2DB16 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v8) )
        goto LABEL_20;
      klass_high = HIDWORD(v9[4].klass);
      if ( klass_high < 1 )
        goto LABEL_20;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_41072884(klass_high, -1, 0, 0) )
      {
LABEL_20:
        v7 = ++v6 < v5;
        if ( v5 != v6 )
          continue;
      }
      return !v7;
    }
LABEL_17:
    sub_1C942F0(list, method);
  }
  v7 = 0;
  return !v7;
}


bool WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x20
  bool result; // w0

  if ( (byte_4D2DB15 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_6408/*"FES_WAR_ID"*/);
    byte_4D2DB15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v6);
  }
  v8 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v7);
  result = 0;
  if ( v8 )
  {
    v9 = v8;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6408/*"FES_WAR_ID"*/, 0) == warId && v9->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_4D2DB11 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_4D2DB11 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C942F0(result, *(_QWORD *)&event_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.eventId == event_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v6;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *WarMaster__getByLastQuestId(WarMaster_o *this, int32_t last_quest_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_4D2DB10 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_4D2DB10 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C942F0(result, *(_QWORD *)&last_quest_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.lastQuestId == last_quest_id )
          return result;
        result = (WarEntity_o *)this->fields.list;
        ++v6;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0;
}


System_Int32_array *WarMaster__getClearWarIdList(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  const MethodInfo *v7; // x2
  System_Collections_ObjectModel_Collection_T__o *v8; // x23
  int32_t klass_high; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_4D2DB14 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2DB14 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v7);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v8[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_41072884(klass_high, -1, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            method = (const MethodInfo *)LODWORD(v8->fields.items);
            items = v5->fields._items;
            v11 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                (int32_t)method,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size] = (int)method;
            }
          }
        }
      }
      if ( Count == ++v6 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C942F0(list, method);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2DB12 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_4D2DB12 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[6].klass;
LABEL_11:
    sub_1C942F0(Master_object, v4);
  }
  return -1;
}


WarEntity_array *WarMaster__getPrioredWarEntsWithIds(
        WarMaster_o *this,
        System_Collections_Generic_List_int__o *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  Il2CppObject *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x20
  Il2CppObject *v21; // x21
  struct WarMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D2DB13 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_1C94098(&System_Comparison_WarEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_WarEntity__TypeInfo);
    sub_1C94098(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__);
    sub_1C94098(&WarMaster___c_TypeInfo);
    byte_4D2DB13 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v8 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_26;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_26;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    if ( !list )
      goto LABEL_26;
    v9 = (Il2CppObject *)list;
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_384F30C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_26;
      items = v5->fields._items;
      v17 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_26;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v9,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v9;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_26;
  }
  list = WarMaster___c_TypeInfo;
  if ( !WarMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo);
    list = WarMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = WarMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)list + 23);
    v20 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0);
    static_fields = WarMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_WarEntity__o *)v20;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !v5 )
LABEL_26:
    sub_1C942F0(list, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    v5,
    v20,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void WarMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2DB18 & 1) == 0 )
  {
    sub_1C94098(&WarMaster___c_TypeInfo);
    byte_4D2DB18 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(WarMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)WarMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void WarMaster___c___ctor(WarMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarEntity_o *WarMaster___c___GetEntityList_b__1_0(WarMaster___c_o *this, WarEntity_o *data, const MethodInfo *method)
{
  return data;
}


int32_t WarMaster___c___getPrioredWarEntsWithIds_b__5_0(
        WarMaster___c_o *this,
        WarEntity_o *a,
        WarEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || (this = (WarMaster___c_o *)WarEntity__GetPriority(b, (const MethodInfo *)a), !a) )
    sub_1C942F0(this, a);
  return (_DWORD)this - WarEntity__GetPriority(a, (const MethodInfo *)a);
}