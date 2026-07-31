void EventJobMaster___ctor(EventJobMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938679 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobMaster__EventJobEntity__string___ctor__);
    byte_5938679 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    561,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventJobMaster__EventJobEntity__string___ctor__);
}


int32_t EventJobMaster__CompareByPosition(EventJobEntity_o *left, EventJobEntity_o *right, const MethodInfo *method)
{
  int v4; // w19
  int32_t result; // w0

  if ( !left )
    return right != 0;
  if ( !right )
    return -1;
  v4 = (int)left;
  result = System_Int32__CompareTo_76925088((_DWORD)left + 36, right->fields.position, 0);
  if ( !result )
    return System_Int32__CompareTo_76925088(v4 + 20, right->fields.id, 0);
  return result;
}


System_Collections_Generic_List_EventJobEntity__o *EventJobMaster__GetDisplayEntityListByEventId(
        EventJobMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_EventJobEntity__o *EntityListByEventId; // x0
  __int64 v8; // x1
  int size; // w23
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20

  if ( (byte_5938676 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventJobEntity__TypeInfo);
    sub_21FFC50(&Method_EventJobMaster_CompareByPosition__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobEntity__TypeInfo);
    byte_5938676 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobEntity___ctor__);
  EntityListByEventId = EventJobMaster__GetEntityListByEventId(this, eventId, v6);
  if ( !EntityListByEventId )
    goto LABEL_16;
  size = EntityListByEventId->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)EntityListByEventId;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        EntityListByEventId = (System_Collections_Generic_List_EventJobEntity__o *)EventJobEntity__IsDisplayOpen(
                                                                                     (EventJobEntity_o *)Item,
                                                                                     v13);
        if ( ((unsigned __int8)EntityListByEventId & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_16;
          items = v5->fields._items;
          v22 = Method_System_Collections_Generic_List_EventJobEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_16;
          v23 = v5->fields._size;
          if ( (unsigned int)v23 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v14,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + v23;
            v5->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
          }
        }
      }
    }
    while ( size != ++v11 );
  }
  v25 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventJobEntity__TypeInfo);
  System_Comparison_object____ctor(v25, 0, Method_EventJobMaster_CompareByPosition__, 0);
  if ( !v5 )
LABEL_16:
    sub_21FFECC(EntityListByEventId, v8);
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    v25,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventJobEntity__Sort__);
  return (System_Collections_Generic_List_EventJobEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
EventJobEntity_o *EventJobMaster__GetEntity(
        EventJobMaster_o *this,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593867A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobMaster__EventJobEntity__string__GetEntity__);
    byte_593867A = 1;
  }
  PK = (Il2CppObject *)EventJobEntity__CreatePK(eventId, id, *(const MethodInfo **)&id);
  return (EventJobEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventJobMaster__EventJobEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventJobEntity__o *EventJobMaster__GetEntityListByEventId(
        EventJobMaster_o *this,
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

  if ( (byte_5938675 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventJobEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobEntity__TypeInfo);
    byte_5938675 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventJobEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventJobEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( LODWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventJobEntity__Add__;
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
        return (System_Collections_Generic_List_EventJobEntity__o *)v5;
    }
LABEL_16:
    sub_21FFECC(list, v6);
  }
  return (System_Collections_Generic_List_EventJobEntity__o *)v5;
}


EventJobEntity_o *EventJobMaster__GetEventJobEntityFromQuestId(
        EventJobMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  EventJobMaster___c__DisplayClass4_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5938678 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventJobEntity___);
    sub_21FFC50(&System_Func_EventJobEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventJobMaster___c__DisplayClass4_0__GetEventJobEntityFromQuestId_b__0__);
    sub_21FFC50(&EventJobMaster___c__DisplayClass4_0_TypeInfo);
    byte_5938678 = 1;
  }
  v5 = (EventJobMaster___c__DisplayClass4_0_o *)sub_21FFEBC(EventJobMaster___c__DisplayClass4_0_TypeInfo);
  EventJobMaster___c__DisplayClass4_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  v5->fields.questId = questId;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventJobEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventJobMaster___c__DisplayClass4_0__GetEventJobEntityFromQuestId_b__0__,
    0);
  return (EventJobEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                               (System_Func_TSource__bool__o *)v9,
                               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventJobEntity___);
}


System_Collections_Generic_List_EventJobEntity__o *EventJobMaster__GetVisibleEntityListByEventId(
        EventJobMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_EventJobEntity__o *EntityListByEventId; // x0
  __int64 v8; // x1
  int size; // w23
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20

  if ( (byte_5938677 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventJobEntity__TypeInfo);
    sub_21FFC50(&Method_EventJobMaster_CompareByPosition__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventJobEntity__TypeInfo);
    byte_5938677 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventJobEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventJobEntity___ctor__);
  EntityListByEventId = EventJobMaster__GetEntityListByEventId(this, eventId, v6);
  if ( !EntityListByEventId )
    goto LABEL_16;
  size = EntityListByEventId->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)EntityListByEventId;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        EntityListByEventId = (System_Collections_Generic_List_EventJobEntity__o *)EventJobEntity__IsHideCondOpen(
                                                                                     (EventJobEntity_o *)Item,
                                                                                     v13);
        if ( ((unsigned __int8)EntityListByEventId & 1) != 0 )
        {
          if ( !v5 )
            goto LABEL_16;
          items = v5->fields._items;
          v22 = Method_System_Collections_Generic_List_EventJobEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_16;
          v23 = v5->fields._size;
          if ( (unsigned int)v23 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v14,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + v23;
            v5->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)v14;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
          }
        }
      }
    }
    while ( size != ++v11 );
  }
  v25 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventJobEntity__TypeInfo);
  System_Comparison_object____ctor(v25, 0, Method_EventJobMaster_CompareByPosition__, 0);
  if ( !v5 )
LABEL_16:
    sub_21FFECC(EntityListByEventId, v8);
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    v25,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventJobEntity__Sort__);
  return (System_Collections_Generic_List_EventJobEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool EventJobMaster__TryGetEntity(
        EventJobMaster_o *this,
        EventJobEntity_o **entity,
        int32_t eventId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593867B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventJobMaster__EventJobEntity__string__TryGetEntity__);
    byte_593867B = 1;
  }
  PK = (Il2CppObject *)EventJobEntity__CreatePK(eventId, id, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventJobMaster__EventJobEntity__string__TryGetEntity__);
}


void EventJobMaster___c__DisplayClass4_0___ctor(EventJobMaster___c__DisplayClass4_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventJobMaster___c__DisplayClass4_0___GetEventJobEntityFromQuestId_b__0(
        EventJobMaster___c__DisplayClass4_0_o *this,
        EventJobEntity_o *entity,
        const MethodInfo *method)
{
  return entity && EventJobEntity__IsJobSkillGetQuest(entity, this->fields.questId, 0);
}