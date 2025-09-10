void EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27472 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
    byte_4C27472 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    500,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
}


EventTradeGoodsEntity_array *EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(
        EventTradeGoodsMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x20
  Il2CppObject *Master_object; // x0
  __int64 commonReleaseId; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int max_length; // w8
  CommonReleaseMaster_o *v13; // x21
  unsigned int v14; // w23
  EventTradeGoodsEntity_o *v15; // x22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C27470 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4C27470 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(this, eventId, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !TradeGoodsEntityArray )
    goto LABEL_21;
  max_length = TradeGoodsEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = (CommonReleaseMaster_o *)Master_object;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2D6F4(Master_object, commonReleaseId, v10);
      v15 = TradeGoodsEntityArray->m_Items[v14];
      if ( !v15 )
        break;
      commonReleaseId = (unsigned int)v15->fields.commonReleaseId;
      if ( !(_DWORD)commonReleaseId )
        goto LABEL_25;
      if ( !v13 )
        break;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v13, commonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
LABEL_25:
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v15,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v15;
          sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v10, v11);
        }
      }
      max_length = TradeGoodsEntityArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C2D6EC(Master_object, commonReleaseId);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


EventTradeGoodsEntity_array *EventTradeGoodsMaster__GetReleaseTradeGoodsEntities_41907372(
        EventTradeGoodsMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v10; // x2
  EventTradeGoodsEntity_array *ReleaseTradeGoodsEntities; // x23
  System_Collections_Generic_List_object__o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  unsigned int v17; // w25
  EventTradeGoodsEntity_o *v18; // x24
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C27471 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4C27471 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  ReleaseTradeGoodsEntities = EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(this, eventId, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( !ReleaseTradeGoodsEntities )
    goto LABEL_21;
  max_length = ReleaseTradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C2D6F4(v13, v14, v15);
      v18 = ReleaseTradeGoodsEntities->m_Items[v17];
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
        v21 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
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
      max_length = ReleaseTradeGoodsEntities->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C2D6EC(v13, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


EventTradeGoodsEntity_array *EventTradeGoodsMaster__GetTradeGoodsEntities(
        EventTradeGoodsMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  const MethodInfo *v7; // x2
  EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  EventTradeGoodsEntity_array *v12; // x22
  __int64 v13; // x24
  EventTradeGoodsEntity_o *v14; // x23
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C2746F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4C2746F = 1;
  }
  if ( !eventProgressValueEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            this,
                            eventProgressValueEntity->fields.eventId,
                            v7);
  if ( !TradeGoodsEntityArray )
    return 0;
  max_length = TradeGoodsEntityArray->max_length;
  v12 = TradeGoodsEntityArray;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_1C2D6F4(TradeGoodsEntityArray, v9, v10);
      v14 = v12->m_Items[v13];
      if ( !v14 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               v14->fields.commonReleaseId,
                                                               eventProgressValueEntity->fields.condType,
                                                               eventProgressValueEntity->fields.condId,
                                                               eventProgressValueEntity->fields.condNum,
                                                               0);
      if ( ((unsigned __int8)TradeGoodsEntityArray & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
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
    sub_1C2D6EC(TradeGoodsEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *EventTradeGoodsMaster__GetTradeGoodsEntityArray(
        EventTradeGoodsMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = eventId;
  if ( (byte_4C2746E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4C2746E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = *(Il2CppClass **)&eventId;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), eventId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}