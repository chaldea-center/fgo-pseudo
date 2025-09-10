void EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27486 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
    byte_4C27486 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27487 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
    byte_4C27487 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  CommonReleaseMaster_o *v8; // x23
  int32_t v9; // w24
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x25
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  v3 = eventId;
  if ( (byte_4C27483 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_4C27483 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v8 = (CommonReleaseMaster_o *)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__);
      if ( list )
      {
        v12 = (Il2CppObject *)list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_25;
          if ( !v8 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(v8, eventId, 0, 0, 0);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v14 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v12,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v12;
              sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *EventTradeStoreMaster__GetReleaseTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x23
  System_Collections_Generic_List_object__o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  unsigned int v17; // w25
  EventTradeStoreEntity_o *v18; // x24
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C27485 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_4C27485 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(this, eventId, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !OpenTradeStoreEntityArray )
    goto LABEL_21;
  max_length = OpenTradeStoreEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C2D6F4(v13, v14, v15);
      v18 = OpenTradeStoreEntityArray->m_Items[v17];
      if ( !v18 || !Master_object )
        break;
      v13 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              v18->fields.commonReleaseId,
              questId,
              questPhase,
              0);
      if ( v13
        || (v13 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    v18->fields.commonReleaseId,
                    questId,
                    0)) )
      {
        if ( !v12 )
          break;
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v18,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v18;
          sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v18, v15, v19);
        }
      }
      max_length = OpenTradeStoreEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C2D6EC(v13, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  const MethodInfo *v7; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  EventTradeStoreEntity_array *v12; // x22
  __int64 v13; // x24
  EventTradeStoreEntity_o *v14; // x23
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C27484 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_4C27484 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v7);
  if ( !OpenTradeStoreEntityArray )
    return 0;
  max_length = OpenTradeStoreEntityArray->max_length;
  v12 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_1C2D6F4(OpenTradeStoreEntityArray, v9, v10);
      v14 = v12->m_Items[v13];
      if ( !v14 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   v14->fields.commonReleaseId,
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v14, v10, v15);
        }
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C2D6EC(OpenTradeStoreEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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

  if ( (byte_4C27488 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
    byte_4C27488 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}