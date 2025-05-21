void __fastcall EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C28 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__, method);
    byte_4B44C28 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    502,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *__fastcall EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44C29 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B44C29 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32E68F4 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x21
  CommonReleaseMaster_o *v15; // x23
  int32_t v16; // w24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x25
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = eventId;
  if ( (byte_4B44C25 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v11);
    byte_4B44C25 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v15 = (CommonReleaseMaster_o *)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_EventTradeStoreEntity__get_Item__);
      if ( list )
      {
        v19 = (Il2CppObject *)list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_25;
          if ( !v15 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     v15,
                                                                     eventId,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v21 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v19,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v19;
              sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v19, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BDBAD4(list, *(_QWORD *)&eventId);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v14,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetReleaseTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x23
  System_Collections_Generic_List_object__o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w8
  unsigned int v22; // w25
  EventTradeStoreEntity_o *v23; // x24
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B44C27 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v13);
    byte_4B44C27 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(this, eventId, v15);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !OpenTradeStoreEntityArray )
    goto LABEL_21;
  max_length = OpenTradeStoreEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1BDBADC(v18, v19, v20);
      v23 = OpenTradeStoreEntityArray->m_Items[v22];
      if ( !v23 || !Master_object )
        break;
      v18 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              v23->fields.commonReleaseId,
              questId,
              questPhase,
              0LL);
      if ( v18
        || (v18 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    v23->fields.commonReleaseId,
                    questId,
                    0LL)) )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v23,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v23, v20, v24);
        }
      }
      max_length = OpenTradeStoreEntityArray->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BDBAD4(v18, v19);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  EventTradeStoreEntity_array *v17; // x22
  __int64 v18; // x24
  EventTradeStoreEntity_o *v19; // x23
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B44C26 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v9);
    byte_4B44C26 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v12);
  if ( !OpenTradeStoreEntityArray )
    return 0LL;
  max_length = OpenTradeStoreEntityArray->max_length;
  v17 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= max_length )
        sub_1BDBADC(OpenTradeStoreEntityArray, v14, v15);
      v19 = v17->m_Items[v18];
      if ( !v19 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   v19->fields.commonReleaseId,
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0LL);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v19, v15, v20);
        }
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BDBAD4(OpenTradeStoreEntityArray, v14);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradeStoreMaster__TryGetEntity(
        EventTradeStoreMaster_o *this,
        EventTradeStoreEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44C2A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__, entity);
    byte_4B44C2A = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}