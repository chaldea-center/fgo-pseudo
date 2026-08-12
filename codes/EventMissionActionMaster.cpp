void EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970879 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
    byte_5970879 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    143,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *EventMissionActionMaster__GetEntity(
        EventMissionActionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970877 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
    byte_5970877 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionActionMaster__TryGetEntity(
        EventMissionActionMaster_o *this,
        EventMissionActionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970878 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
    byte_5970878 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  EventMissionActionEntity_o *result; // x0
  int32_t v10; // w23

  if ( (byte_597087A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    byte_597087A = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_2213CDC(result, *(_QWORD *)&missionID);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_12;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                             (System_Collections_ObjectModel_Collection_T__o *)result,
                                             v10,
                                             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !result )
      goto LABEL_12;
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v10;
    if ( !result )
      goto LABEL_12;
  }
  return 0;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v23; // x21
  struct EventMissionActionMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_597087C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__);
    sub_2213A60(&EventMissionActionMaster___c_TypeInfo);
    byte_597087C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_16;
    v8 = (Il2CppClass *)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
    {
      if ( !v7 )
        goto LABEL_16;
      items = v7->fields._items;
      v18 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v20[4] = v8;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_16;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !*(&EventMissionActionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo, v8);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v8);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v23,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      0);
    v24 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v24->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__5_0, (int32_t)_9__5_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v7 )
LABEL_16:
    sub_2213CDC(list, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__5_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_597087B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    byte_597087B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_2213CDC(list, v10);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v10 = list;
    if ( LODWORD(list->fields.items) == missionID
      && HIDWORD(list->fields.items) == progressType
      && HIDWORD(list[1].klass) == actionType )
    {
      if ( !v9 )
        goto LABEL_17;
      items = v9->fields._items;
      v20 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          (Il2CppObject *)list,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v10;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v9;
}


System_Collections_Generic_List_EventMissionActionEntity__o *EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v23; // x21
  struct EventMissionActionMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_597087D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__);
    sub_2213A60(&EventMissionActionMaster___c_TypeInfo);
    byte_597087D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)list,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v10,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionEntity__get_Item__);
    if ( !list )
      goto LABEL_17;
    v8 = (Il2CppClass *)list;
    if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
    {
      if ( !v7 )
        goto LABEL_17;
      items = v7->fields._items;
      v18 = Method_System_Collections_Generic_List_EventMissionActionEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v20[4] = v8;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
      }
    }
    list = this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_17;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( !*(&EventMissionActionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo, v8);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v8);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__6_0,
      v23,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      0);
    v24 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v24->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__6_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__6_0, (int32_t)_9__6_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v7 )
LABEL_17:
    sub_2213CDC(list, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__6_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v7;
}


void EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597087E & 1) == 0 )
  {
    sub_2213A60(&EventMissionActionMaster___c_TypeInfo);
    byte_597087E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionActionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMissionActionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionActionMaster___c___ctor(EventMissionActionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionActionMaster___c___getEntityListFromIDnType_b__5_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}