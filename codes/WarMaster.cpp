void WarMaster___ctor(WarMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971B25 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
    byte_5971B25 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    4,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_WarMaster__WarEntity__int___ctor__);
}


System_Collections_Generic_List_WarEntity__o *WarMaster__GetEntityList(WarMaster_o *this, const MethodInfo *method)
{
  WarMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct WarMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_5971B26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_WarEntity___);
    sub_2213A60(&System_Func_WarEntity__WarEntity__TypeInfo);
    sub_2213A60(&Method_WarMaster___c__GetEntityList_b__1_0__);
    sub_2213A60(&WarMaster___c_TypeInfo);
    byte_5971B26 = 1;
  }
  v3 = WarMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&WarMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo, method);
    v3 = WarMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Func_object__object__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_WarEntity__WarEntity__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v7, Method_WarMaster___c__GetEntityList_b__1_0__, 0);
    v8 = WarMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_WarEntity__WarEntity__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_WarEntity__WarEntity___);
  return (System_Collections_Generic_List_WarEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                           v15,
                                                           (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarEntity___);
}


// local variable allocation has failed, the output may be wrong!
int64_t WarMaster__GetEventStartAt(WarMaster_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t EventID; // w19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971B2E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_5971B2E = 1;
  }
  entity = 0;
  EventID = WarMaster__getEventID(warId, *(const MethodInfo **)&warId);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    EventID,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int64_t)entity[5].monitor;
LABEL_11:
    sub_2213CDC(Master_object, v7);
  }
  return 0;
}


bool WarMaster__IsClearAllMainScenario(WarMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w20
  bool v6; // w23
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t klass_high; // w22

  if ( (byte_5971B2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    byte_5971B2D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v7,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v9 = list;
      if ( !WarEntity__HasFlag((WarEntity_o *)list, 128, v8) )
        goto LABEL_20;
      klass_high = HIDWORD(v9[4].klass);
      if ( klass_high < 1 )
        goto LABEL_20;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      if ( CondType__IsQuestClear_47284152(klass_high, -1, 0, 0) )
      {
LABEL_20:
        v6 = ++v7 >= v5;
        if ( v5 != v7 )
          continue;
      }
      return v6;
    }
LABEL_17:
    sub_2213CDC(list, method);
  }
  return 1;
}


bool WarMaster__IsLastQuest(int32_t warId, int32_t questId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarEntity_o *v8; // x0
  WarEntity_o *v9; // x20
  bool result; // w0

  if ( (byte_5971B2C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_6672/*"FES_WAR_ID"*/);
    byte_5971B2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  v8 = WarMaster__getByLastQuestId((WarMaster_o *)Instance, questId, v7);
  result = 0;
  if ( v8 )
  {
    v9 = v8;
    if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6672/*"FES_WAR_ID"*/, 0) == warId && v9->fields.id == warId )
      return 1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarEntity_o *WarMaster__getByEventId(WarMaster_o *this, int32_t event_id, const MethodInfo *method)
{
  WarEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_5971B28 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_5971B28 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_2213CDC(result, *(_QWORD *)&event_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
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

  if ( (byte_5971B27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    byte_5971B27 = 1;
  }
  result = (WarEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_2213CDC(result, *(_QWORD *)&last_quest_id);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__) )
  {
    result = (WarEntity_o *)this->fields.list;
    if ( result )
    {
      result = (WarEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                (System_Collections_ObjectModel_Collection_T__o *)result,
                                v6,
                                (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
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

  if ( (byte_5971B2B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971B2B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      list = (System_Collections_ObjectModel_Collection_T__o *)WarEntity__HasFlag((WarEntity_o *)list, 32, v7);
      if ( ((unsigned __int8)list & 1) == 0 )
      {
        klass_high = HIDWORD(v8[4].klass);
        if ( klass_high >= 1 )
        {
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
          list = (System_Collections_ObjectModel_Collection_T__o *)CondType__IsQuestClear_47284152(klass_high, -1, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            method = (const MethodInfo *)LODWORD(v8->fields.items);
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
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_2213CDC(list, method);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarMaster__getEventID(int32_t warId, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971B29 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_5971B29 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    warId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (int32_t)entity[6].klass;
LABEL_11:
    sub_2213CDC(Master_object, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  struct WarMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v22; // x21
  struct WarMaster___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5971B2A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    sub_2213A60(&System_Comparison_WarEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_WarEntity__TypeInfo);
    sub_2213A60(&Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__);
    sub_2213A60(&WarMaster___c_TypeInfo);
    byte_5971B2A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    if ( !ids )
      goto LABEL_17;
    if ( !ids->fields._size )
      break;
    list = this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_WarEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v9 = (Il2CppObject *)list;
    list = (void *)System_Collections_Generic_List_int___Remove(
                     ids,
                     *((_DWORD *)list + 4),
                     (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)list & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_17;
      items = v5->fields._items;
      v17 = Method_System_Collections_Generic_List_WarEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v9,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v9;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
      }
    }
    list = this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  list = WarMaster___c_TypeInfo;
  if ( !*(&WarMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarMaster___c_TypeInfo, v6);
    list = WarMaster___c_TypeInfo;
  }
  static_fields = (struct WarMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = WarMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_WarEntity__TypeInfo);
    System_Comparison_object____ctor(_9__5_0, v22, Method_WarMaster___c__getPrioredWarEntsWithIds_b__5_0__, 0);
    v23 = WarMaster___c_TypeInfo->static_fields;
    v23->__9__5_0 = (struct System_Comparison_WarEntity__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__5_0, (int32_t)_9__5_0, v24, v25, v26, v27, v28, v29);
  }
  if ( !v5 )
LABEL_17:
    sub_2213CDC(list, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__5_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_WarEntity__Sort__);
  return (WarEntity_array *)System_Collections_Generic_List_object___ToArray(
                              v5,
                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarEntity__ToArray__);
}


void WarMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971B2F & 1) == 0 )
  {
    sub_2213A60(&WarMaster___c_TypeInfo);
    byte_5971B2F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarMaster___c_TypeInfo->static_fields->__9 = (struct WarMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return (_DWORD)this - WarEntity__GetPriority(a, (const MethodInfo *)a);
}