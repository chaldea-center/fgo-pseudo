void EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C7BD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_4D2C7BD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    126,
    (const MethodInfo_345919C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}


System_Int32_array *EventDetailMaster__GetEventIdsByMission(EventDetailMaster_o *this, const MethodInfo *method)
{
  EventDetailMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct EventDetailMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  EventDetailMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v18; // x21
  struct EventDetailMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4D2C7BE & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__getEntityList__);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_EventDetailEntity___);
    sub_1C94098(&System_Func_EventDetailEntity__int__TypeInfo);
    sub_1C94098(&System_Func_EventDetailEntity__bool__TypeInfo);
    sub_1C94098(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__);
    sub_1C94098(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__);
    sub_1C94098(&EventDetailMaster___c_TypeInfo);
    byte_4D2C7BE = 1;
  }
  v3 = EventDetailMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !EventDetailMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo);
    v3 = EventDetailMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventDetailMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_EventDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v6, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__, 0);
    static_fields = EventDetailMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_EventDetailEntity__bool__o *)_9__1_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_EventDetailEntity___);
  v15 = EventDetailMaster___c_TypeInfo;
  v16 = v14;
  if ( !EventDetailMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo);
    v15 = EventDetailMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v15->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventDetailMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_EventDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v18, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__, 0);
    v19 = EventDetailMaster___c_TypeInfo->static_fields;
    v19->__9__1_1 = (struct System_Func_EventDetailEntity__int__o *)_9__1_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->__9__1_1, (int32_t)_9__1_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
  v27 = System_Linq_Enumerable__Distinct_int_(
          v26,
          (const MethodInfo_31BF694 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v27,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool EventDetailMaster__IsActiveEventHaveWarId(
        EventDetailMaster_o *this,
        int32_t *eventId,
        int32_t *grandWarId,
        const MethodInfo *method)
{
  EventMaster_o *Master_object; // x0
  const MethodInfo *MasterKind_k__BackingField; // x1
  EventEntity_array *EnableExistEventRewardEntityList; // x0
  EventEntity_array *v10; // x22
  int max_length; // w8
  CommonReleaseMaster_o *v12; // x23
  __int64 v13; // x25
  EventEntity_o *v14; // x28
  const MethodInfo *v15; // x4
  EventMaster_o *v16; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2C7BF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_4D2C7BF = 1;
  }
  entity = 0;
  *eventId = 0;
  *grandWarId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_25:
    sub_1C942F0(Master_object, MasterKind_k__BackingField);
  EnableExistEventRewardEntityList = EventMaster__GetEnableExistEventRewardEntityList(
                                       Master_object,
                                       MasterKind_k__BackingField);
  if ( EnableExistEventRewardEntityList )
  {
    v10 = EnableExistEventRewardEntityList;
    if ( !EnableExistEventRewardEntityList->max_length )
      goto LABEL_22;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    max_length = v10->max_length;
    if ( max_length >= 1 )
    {
      v12 = (CommonReleaseMaster_o *)Master_object;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= max_length )
          sub_1C942F8(Master_object);
        v14 = v10->m_Items[v13];
        if ( !v14 )
          goto LABEL_25;
        Master_object = (EventMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v14->fields.id,
                                           (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (EventMaster_o *)entity;
          if ( !entity )
            goto LABEL_25;
          Master_object = (EventMaster_o *)EventDetailEntity__GetEventRewardInfoOnGrandQuest(
                                             (EventDetailEntity_o *)entity,
                                             MasterKind_k__BackingField);
          if ( Master_object )
          {
            v16 = Master_object;
            if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) >= 1 )
            {
              MasterKind_k__BackingField = (const MethodInfo *)(unsigned int)Master_object->fields._MasterKind_k__BackingField;
              if ( (int)MasterKind_k__BackingField < 1 )
                break;
              if ( v12 )
              {
                Master_object = (EventMaster_o *)CommonReleaseMaster__IsOpen(
                                                   v12,
                                                   (int32_t)MasterKind_k__BackingField,
                                                   0,
                                                   0,
                                                   v15);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                  break;
              }
            }
          }
        }
        max_length = v10->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_22;
      }
      LOBYTE(EnableExistEventRewardEntityList) = 1;
      *eventId = v14->fields.id;
      *grandWarId = *(&v16->fields._MasterKind_k__BackingField + 1);
    }
    else
    {
LABEL_22:
      LOBYTE(EnableExistEventRewardEntityList) = 0;
    }
  }
  return (char)EnableExistEventRewardEntityList;
}


void EventDetailMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C7C0 & 1) == 0 )
  {
    sub_1C94098(&EventDetailMaster___c_TypeInfo);
    byte_4D2C7C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventDetailMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventDetailMaster___c_TypeInfo->static_fields->__9 = (struct EventDetailMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventDetailMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventDetailMaster___c___ctor(EventDetailMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventDetailMaster___c___GetEventIdsByMission_b__1_0(
        EventDetailMaster___c_o *this,
        EventDetailEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C942F0(this, 0);
  return (LOBYTE(ent->fields.flag) >> 5) & 1;
}


int32_t EventDetailMaster___c___GetEventIdsByMission_b__1_1(
        EventDetailMaster___c_o *this,
        EventDetailEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C942F0(this, 0);
  return ent->fields.eventId;
}