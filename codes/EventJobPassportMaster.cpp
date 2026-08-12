void EventJobPassportMaster___ctor(EventJobPassportMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970835 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string___ctor__);
    byte_5970835 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    562,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string___ctor__);
}


System_Collections_Generic_List_EventJobPassportEntity__o *EventJobPassportMaster__GetDisplayPassportEntityList(
        EventJobPassportMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListByEventId; // x0
  __int64 v6; // x1
  EventJobPassportMaster___c_c *v7; // x8
  System_Collections_Generic_List_object__o *v8; // x19
  struct EventJobPassportMaster___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct EventJobPassportMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  EventJobPassportMaster___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  struct EventJobPassportMaster___c_StaticFields *v21; // x9
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct EventJobPassportMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5970834 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventJobPassportEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobPassportEntity__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobPassportEntity__Sort__);
    sub_2213A60(&System_Predicate_EventJobPassportEntity__TypeInfo);
    sub_2213A60(&Method_EventJobPassportMaster___c__GetDisplayPassportEntityList_b__1_0__);
    sub_2213A60(&Method_EventJobPassportMaster___c__GetDisplayPassportEntityList_b__1_1__);
    sub_2213A60(&EventJobPassportMaster___c_TypeInfo);
    byte_5970834 = 1;
  }
  EntityListByEventId = (System_Collections_Generic_List_object__o *)EventJobPassportMaster__GetEntityListByEventId(
                                                                       this,
                                                                       eventId,
                                                                       method);
  v7 = EventJobPassportMaster___c_TypeInfo;
  v8 = EntityListByEventId;
  if ( !*(&EventJobPassportMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventJobPassportMaster___c_TypeInfo, v6);
    v7 = EventJobPassportMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__1_0 = (System_Predicate_object__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = EventJobPassportMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventJobPassportEntity__TypeInfo);
    System_Predicate_object____ctor(
      _9__1_0,
      v11,
      Method_EventJobPassportMaster___c__GetDisplayPassportEntityList_b__1_0__,
      0);
    v12 = EventJobPassportMaster___c_TypeInfo->static_fields;
    v12->__9__1_0 = (struct System_Predicate_EventJobPassportEntity__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__1_0, (int32_t)_9__1_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !v8 )
    goto LABEL_18;
  EntityListByEventId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                                       v8,
                                                                       (System_Predicate_T__o *)_9__1_0,
                                                                       (const MethodInfo_448436C *)Method_System_Collections_Generic_List_EventJobPassportEntity__FindAll__);
  v19 = EventJobPassportMaster___c_TypeInfo;
  v20 = EntityListByEventId;
  if ( !*(&EventJobPassportMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventJobPassportMaster___c_TypeInfo, v6);
    v19 = EventJobPassportMaster___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__1_1 = (System_Comparison_T__o *)v21->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v6);
      v21 = EventJobPassportMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventJobPassportEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__1_1,
      v23,
      Method_EventJobPassportMaster___c__GetDisplayPassportEntityList_b__1_1__,
      0);
    v24 = EventJobPassportMaster___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Comparison_EventJobPassportEntity__o *)_9__1_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__1_1, (int32_t)_9__1_1, v25, v26, v27, v28, v29, v30);
  }
  if ( !v20 )
LABEL_18:
    sub_2213CDC(EntityListByEventId, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v20,
    _9__1_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventJobPassportEntity__Sort__);
  return (System_Collections_Generic_List_EventJobPassportEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
EventJobPassportEntity_o *EventJobPassportMaster__GetEntity(
        EventJobPassportMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970836 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string__GetEntity__);
    byte_5970836 = 1;
  }
  PK = (Il2CppObject *)EventJobPassportEntity__CreatePK(eventId, jobId, *(const MethodInfo **)&jobId);
  return (EventJobPassportEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventJobPassportEntity__o *EventJobPassportMaster__GetEntityListByEventId(
        EventJobPassportMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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

  if ( (byte_5970833 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventJobPassportEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventJobPassportEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobPassportEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobPassportEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventJobPassportEntity__TypeInfo);
    byte_5970833 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventJobPassportEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventJobPassportEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventJobPassportEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventJobPassportEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventJobPassportEntity__Add__;
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
            v20[4] = (Il2CppClass *)v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_EventJobPassportEntity__o *)v5;
    }
LABEL_16:
    sub_2213CDC(list, v6);
  }
  return (System_Collections_Generic_List_EventJobPassportEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool EventJobPassportMaster__TryGetEntity(
        EventJobPassportMaster_o *this,
        EventJobPassportEntity_o **entity,
        int32_t eventId,
        int32_t jobId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970837 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string__TryGetEntity__);
    byte_5970837 = 1;
  }
  PK = (Il2CppObject *)EventJobPassportEntity__CreatePK(eventId, jobId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventJobPassportMaster__EventJobPassportEntity__string__TryGetEntity__);
}


void EventJobPassportMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970838 & 1) == 0 )
  {
    sub_2213A60(&EventJobPassportMaster___c_TypeInfo);
    byte_5970838 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventJobPassportMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventJobPassportMaster___c_TypeInfo->static_fields->__9 = (struct EventJobPassportMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventJobPassportMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventJobPassportMaster___c___ctor(EventJobPassportMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventJobPassportMaster___c___GetDisplayPassportEntityList_b__1_0(
        EventJobPassportMaster___c_o *this,
        EventJobPassportEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !entity )
    sub_2213CDC(this, 0);
  return EventJobPassportEntity__IsDisplayOpen(entity, (const MethodInfo *)entity)
      || EventJobPassportEntity__IsOpenPassport(entity, v4);
}


int32_t EventJobPassportMaster___c___GetDisplayPassportEntityList_b__1_1(
        EventJobPassportMaster___c_o *this,
        EventJobPassportEntity_o *left,
        EventJobPassportEntity_o *right,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  bool v8; // w21
  int32_t result; // w0
  bool IsOpenPassport; // [xsp+Ch] [xbp-24h] BYREF

  IsOpenPassport = 0;
  if ( !left )
    return right != 0;
  if ( !right )
    return -1;
  IsOpenPassport = EventJobPassportEntity__IsOpenPassport(right, (const MethodInfo *)left);
  v8 = EventJobPassportEntity__IsOpenPassport(left, v6);
  if ( !*(_DWORD *)(qword_5984328 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984328, v7);
  result = System_Boolean__CompareTo_76655012((bool)&IsOpenPassport, v8, 0);
  if ( !result )
  {
    result = System_Int32__CompareTo_77138392((_DWORD)right + 24, left->fields.priority, 0);
    if ( !result )
      return System_Int32__CompareTo_77138392((_DWORD)left + 20, right->fields.jobId, 0);
  }
  return result;
}