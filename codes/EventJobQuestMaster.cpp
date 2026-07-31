void EventJobQuestMaster___ctor(EventJobQuestMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593877F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string___ctor__);
    byte_593877F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    564,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string___ctor__);
}


int32_t EventJobQuestMaster__CompareByQuestId(
        EventJobQuestEntity_o *left,
        EventJobQuestEntity_o *right,
        const MethodInfo *method)
{
  int32_t v3; // w8

  v3 = ((unsigned __int64)left | (unsigned __int64)right) != 0;
  if ( left && (v3 = -1, right) )
    return System_Int32__CompareTo_76925088((_DWORD)left + 24, right->fields.questId, 0);
  else
    return v3;
}


System_Collections_Generic_List_EventJobQuestEntity__o *EventJobQuestMaster__GetEntitiesByQuestId(
        EventJobQuestMaster_o *this,
        int32_t questId,
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

  if ( (byte_593877C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobQuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobQuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobQuestEntity__TypeInfo);
    byte_593877C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobQuestEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list[1].klass) == questId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventJobQuestEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_EventJobQuestEntity__o *)v5;
    }
LABEL_16:
    sub_21FFECC(list, v6);
  }
  return (System_Collections_Generic_List_EventJobQuestEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventJobQuestEntity_o *EventJobQuestMaster__GetEntity(
        EventJobQuestMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938780 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string__GetEntity__);
    byte_5938780 = 1;
  }
  PK = (Il2CppObject *)EventJobQuestEntity__CreatePK(eventId, jobId, questId, *(const MethodInfo **)&questId);
  return (EventJobQuestEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventJobQuestEntity__o *EventJobQuestMaster__GetEntityListByEventIdAndJobId(
        EventJobQuestMaster_o *this,
        int32_t eventId,
        int32_t jobId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  System_Comparison_T__o *v23; // x19

  if ( (byte_593877E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
    sub_21FFC50(&System_Comparison_EventJobQuestEntity__TypeInfo);
    sub_21FFC50(&Method_EventJobQuestMaster_CompareByQuestId__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobQuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobQuestEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobQuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobQuestEntity__TypeInfo);
    byte_593877E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobQuestEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
      if ( list )
      {
        v8 = list;
        if ( LODWORD(list->fields.items) == eventId && HIDWORD(list->fields.items) == jobId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v20 = Method_System_Collections_Generic_List_EventJobQuestEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(list, v8);
  }
LABEL_16:
  v23 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventJobQuestEntity__TypeInfo);
  System_Comparison_object____ctor(v23, 0, Method_EventJobQuestMaster_CompareByQuestId__, 0);
  if ( !v7 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    v23,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventJobQuestEntity__Sort__);
  return (System_Collections_Generic_List_EventJobQuestEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool EventJobQuestMaster__TryGetEntity(
        EventJobQuestMaster_o *this,
        EventJobQuestEntity_o **entity,
        int32_t eventId,
        int32_t jobId,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938781 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string__TryGetEntity__);
    byte_5938781 = 1;
  }
  PK = (Il2CppObject *)EventJobQuestEntity__CreatePK(eventId, jobId, questId, *(const MethodInfo **)&jobId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventJobQuestMaster__EventJobQuestEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventJobQuestMaster__TryGetEntityByQuestId(
        EventJobQuestMaster_o *this,
        int32_t questId,
        EventJobQuestEntity_o **entity,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w22
  int32_t v16; // w23
  bool v17; // w24
  Il2CppObject *Item; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593877D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
    byte_593877D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventJobQuestEntity__get_Item__);
      *entity = (EventJobQuestEntity_o *)Item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, (int32_t)Item, v19, v20, v21, v22, v23, v24);
      if ( *entity && (*entity)->fields.questId == questId )
        return v17;
      v17 = ++v16 < v15;
      if ( v15 == v16 )
        goto LABEL_12;
    }
LABEL_14:
    sub_21FFECC(list, *(_QWORD *)&questId);
  }
  v17 = 0;
LABEL_12:
  *entity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, 0, v9, v10, v11, v12, v13, v14);
  return v17;
}