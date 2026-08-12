void EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970AEA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
    byte_5970AEA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    243,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970AE8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
    byte_5970AE8 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


EventTowerRewardEntity_array *EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
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
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v23; // x21
  struct EventTowerRewardMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5970AEC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_2213A60(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__);
    sub_2213A60(&EventTowerRewardMaster___c_TypeInfo);
    byte_5970AEC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_2213CDC(list, v6);
  }
LABEL_15:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !*(&EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo, v6);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventTowerRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v23,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      0);
    v24 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__4_0, (int32_t)_9__4_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__4_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


EventTowerRewardEntity_array *EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  Il2CppClass *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
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
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct EventTowerRewardMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5970AEB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventTowerRewardEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
    sub_2213A60(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__);
    sub_2213A60(&EventTowerRewardMaster___c_TypeInfo);
    byte_5970AEB = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventTowerRewardEntity__get_Item__);
      if ( !list )
        break;
      v8 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v22[4] = v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_24:
    sub_2213CDC(list, v8);
  }
LABEL_16:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( !*(&EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo, v8);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventTowerRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v8);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v25,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      0);
    v26 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__3_0, (int32_t)_9__3_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v7 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_71849708(
    v7,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970AE9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
    byte_5970AE9 = 1;
  }
  PK = (Il2CppObject *)EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970AED & 1) == 0 )
  {
    sub_2213A60(&EventTowerRewardMaster___c_TypeInfo);
    byte_5970AED = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTowerRewardMaster___c_TypeInfo->static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventTowerRewardMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.floor - b->fields.floor;
}