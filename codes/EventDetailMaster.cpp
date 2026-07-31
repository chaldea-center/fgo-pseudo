void EventDetailMaster___ctor(EventDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59385DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
    byte_59385DF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    128,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int___ctor__);
}


System_Int32_array *EventDetailMaster__GetEventIdsByMission(EventDetailMaster_o *this, const MethodInfo *method)
{
  EventDetailMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct EventDetailMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct EventDetailMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  EventDetailMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct EventDetailMaster___c_StaticFields *v19; // x9
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct EventDetailMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_59385E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventDetailEntity___);
    sub_21FFC50(&System_Func_EventDetailEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_EventDetailEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__);
    sub_21FFC50(&Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__);
    sub_21FFC50(&EventDetailMaster___c_TypeInfo);
    byte_59385E0 = 1;
  }
  v3 = EventDetailMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&EventDetailMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo, method);
    v3 = EventDetailMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Func_object__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EventDetailMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v7, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_0__, 0);
    v8 = EventDetailMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_EventDetailEntity__bool__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventDetailEntity___);
  v17 = EventDetailMaster___c_TypeInfo;
  v18 = v15;
  if ( !*(&EventDetailMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventDetailMaster___c_TypeInfo, v16);
    v17 = EventDetailMaster___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__1_1 = (System_Func_object__int__o *)v19->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = EventDetailMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v21, Method_EventDetailMaster___c__GetEventIdsByMission_b__1_1__, 0);
    v22 = EventDetailMaster___c_TypeInfo->static_fields;
    v22->__9__1_1 = (struct System_Func_EventDetailEntity__int__o *)_9__1_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__1_1, (int32_t)_9__1_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_EventDetailEntity__int___);
  v30 = System_Linq_Enumerable__Distinct_int_(
          v29,
          (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v30,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool EventDetailMaster__IsActiveEventHaveWarId(
        EventDetailMaster_o *this,
        int32_t *eventId,
        int32_t *grandWarId,
        const MethodInfo *method)
{
  DataManager_c *v7; // x0
  int v8; // w8
  EventMaster_o *Master_object; // x0
  const MethodInfo *MasterKind_k__BackingField; // x1
  EventEntity_array *EnableExistEventRewardEntityList; // x0
  __int64 v12; // x1
  EventEntity_array *v13; // x22
  int max_length; // w8
  CommonReleaseMaster_o *v15; // x23
  __int64 v16; // x25
  EventEntity_o *v17; // x28
  const MethodInfo *v18; // x4
  EventMaster_o *v19; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59385E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    byte_59385E1 = 1;
  }
  v7 = DataManager_TypeInfo;
  *eventId = 0;
  *grandWarId = 0;
  v8 = *(&v7->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, eventId);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_25:
    sub_21FFECC(Master_object, MasterKind_k__BackingField);
  EnableExistEventRewardEntityList = EventMaster__GetEnableExistEventRewardEntityList(Master_object, 0);
  if ( EnableExistEventRewardEntityList )
  {
    v13 = EnableExistEventRewardEntityList;
    if ( !EnableExistEventRewardEntityList->max_length )
      goto LABEL_22;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    max_length = v13->max_length;
    if ( max_length >= 1 )
    {
      v15 = (CommonReleaseMaster_o *)Master_object;
      v16 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_21FFED4(Master_object);
        v17 = v13->m_Items[v16];
        if ( !v17 )
          goto LABEL_25;
        Master_object = (EventMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           &entity,
                                           v17->fields.id,
                                           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
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
            v19 = Master_object;
            if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) >= 1 )
            {
              MasterKind_k__BackingField = (const MethodInfo *)(unsigned int)Master_object->fields._MasterKind_k__BackingField;
              if ( (int)MasterKind_k__BackingField < 1 )
                break;
              if ( v15 )
              {
                Master_object = (EventMaster_o *)CommonReleaseMaster__IsOpen(
                                                   v15,
                                                   (int32_t)MasterKind_k__BackingField,
                                                   0,
                                                   0,
                                                   v18);
                if ( ((unsigned __int8)Master_object & 1) != 0 )
                  break;
              }
            }
          }
        }
        max_length = v13->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_22;
      }
      LOBYTE(EnableExistEventRewardEntityList) = 1;
      *eventId = v17->fields.id;
      *grandWarId = *(&v19->fields._MasterKind_k__BackingField + 1);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59385E2 & 1) == 0 )
  {
    sub_21FFC50(&EventDetailMaster___c_TypeInfo);
    byte_59385E2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventDetailMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventDetailMaster___c_TypeInfo->static_fields->__9 = (struct EventDetailMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventDetailMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return (LOBYTE(ent->fields.flag) >> 5) & 1;
}


int32_t EventDetailMaster___c___GetEventIdsByMission_b__1_1(
        EventDetailMaster___c_o *this,
        EventDetailEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.eventId;
}