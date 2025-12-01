void EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC75A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
    byte_4CC75A1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    500,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int max_length; // w8
  CommonReleaseMaster_o *v17; // x21
  unsigned int v18; // w23
  EventTradeGoodsEntity_o *v19; // x22
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4CC759F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4CC759F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(this, eventId, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !TradeGoodsEntityArray )
    goto LABEL_21;
  max_length = TradeGoodsEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = (CommonReleaseMaster_o *)Master_object;
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1C71610(Master_object);
      v19 = TradeGoodsEntityArray->m_Items[v18];
      if ( !v19 )
        break;
      commonReleaseId = (unsigned int)v19->fields.commonReleaseId;
      if ( !(_DWORD)commonReleaseId )
        goto LABEL_25;
      if ( !v17 )
        break;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v17, commonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
LABEL_25:
        if ( !v5 )
          break;
        items = v5->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v19,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v19;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
        }
      }
      max_length = TradeGoodsEntityArray->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C71608(Master_object, commonReleaseId);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


EventTradeGoodsEntity_array *EventTradeGoodsMaster__GetReleaseTradeGoodsEntities_42421496(
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
  int max_length; // w8
  unsigned int v16; // w25
  EventTradeGoodsEntity_o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4CC75A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4CC75A0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  ReleaseTradeGoodsEntities = EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(this, eventId, v10);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( !ReleaseTradeGoodsEntities )
    goto LABEL_21;
  max_length = ReleaseTradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C71610(v13);
      v17 = ReleaseTradeGoodsEntities->m_Items[v16];
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
        v25 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v17,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v17, v18, v19, v20, v21, v22, v23);
        }
      }
      max_length = ReleaseTradeGoodsEntities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C71608(v13, v14);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
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
  int max_length; // w8
  EventTradeGoodsEntity_array *v11; // x22
  __int64 v12; // x24
  EventTradeGoodsEntity_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4CC759E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4CC759E = 1;
  }
  if ( !eventProgressValueEntity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            this,
                            eventProgressValueEntity->fields.eventId,
                            v7);
  if ( !TradeGoodsEntityArray )
    return 0;
  max_length = TradeGoodsEntityArray->max_length;
  v11 = TradeGoodsEntityArray;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        sub_1C71610(TradeGoodsEntityArray);
      v13 = v11->m_Items[v12];
      if ( !v13 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               v13->fields.commonReleaseId,
                                                               eventProgressValueEntity->fields.condType,
                                                               eventProgressValueEntity->fields.condId,
                                                               eventProgressValueEntity->fields.condNum,
                                                               0);
      if ( ((unsigned __int8)TradeGoodsEntityArray & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v13,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C71608(TradeGoodsEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = eventId;
  if ( (byte_4CC759D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4CC759D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = *(Il2CppClass **)&eventId;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), eventId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}