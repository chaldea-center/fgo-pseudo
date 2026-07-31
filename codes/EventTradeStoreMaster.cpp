void EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593895C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
    byte_593895C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    504,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593895D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
    byte_593895D = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x1
  CommonReleaseMaster_o *v9; // x23
  int32_t v10; // w24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x25
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = eventId;
  if ( (byte_5938959 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_5938959 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v9 = (CommonReleaseMaster_o *)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__);
      if ( list )
      {
        v17 = (Il2CppObject *)list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_25;
          if ( !v9 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(v9, eventId, 0, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v19 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v17,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v17;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_20;
    }
LABEL_22:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *EventTradeStoreMaster__GetReleaseTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x22
  System_Collections_Generic_List_object__o *v12; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int max_length; // w8
  unsigned int v16; // w26
  EventTradeStoreEntity_o *v17; // x24
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_593895B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_593895B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(this, eventId, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !OpenTradeStoreEntityArray )
    goto LABEL_21;
  max_length = OpenTradeStoreEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_21FFED4(v13);
      v17 = OpenTradeStoreEntityArray->m_Items[v16];
      if ( !v17 || !Master_object )
        break;
      v13 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              v17->fields.commonReleaseId,
              questId,
              questPhase,
              0);
      if ( v13
        || (v13 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    v17->fields.commonReleaseId,
                    questId,
                    0)) )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v17,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v17, v18, v19, v20, v21, v22, v23);
        }
      }
      max_length = OpenTradeStoreEntityArray->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_21FFECC(v13, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  const MethodInfo *v7; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v9; // x1
  int max_length; // w8
  EventTradeStoreEntity_array *v11; // x22
  __int64 v12; // x24
  EventTradeStoreEntity_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_593895A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_593895A = 1;
  }
  if ( !eventProgressValueEntity )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventProgressValueEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v7);
  if ( !OpenTradeStoreEntityArray )
    return 0;
  max_length = OpenTradeStoreEntityArray->max_length;
  v11 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        sub_21FFED4(OpenTradeStoreEntityArray);
      v13 = v11->m_Items[v12];
      if ( !v13 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   v13->fields.commonReleaseId,
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_21FFECC(OpenTradeStoreEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventTradeStoreMaster__TryGetEntity(
        EventTradeStoreMaster_o *this,
        EventTradeStoreEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593895E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
    byte_593895E = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}