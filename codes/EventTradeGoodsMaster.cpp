void __fastcall EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6C4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__, method);
    byte_4B1C6C4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    500,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(
        EventTradeGoodsMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  const MethodInfo *v11; // x2
  EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x20
  Il2CppObject *Master_object; // x0
  __int64 commonReleaseId; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  int max_length; // w8
  CommonReleaseMaster_o *v18; // x21
  unsigned int v19; // w23
  EventTradeGoodsEntity_o *v20; // x22
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B1C6C2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4B1C6C2 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(this, eventId, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !TradeGoodsEntityArray )
    goto LABEL_21;
  max_length = TradeGoodsEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v18 = (CommonReleaseMaster_o *)Master_object;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BCB25C(Master_object, commonReleaseId, v15);
      v20 = TradeGoodsEntityArray->m_Items[v19];
      if ( !v20 )
        break;
      commonReleaseId = (unsigned int)v20->fields.commonReleaseId;
      if ( !(_DWORD)commonReleaseId )
        goto LABEL_25;
      if ( !v18 )
        break;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v18, commonReleaseId, 0LL, 0, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
LABEL_25:
        if ( !v10 )
          break;
        items = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v20,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v20;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v15, v16);
        }
      }
      max_length = TradeGoodsEntityArray->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCB254(Master_object, commonReleaseId);
  }
LABEL_19:
  if ( !v10 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetReleaseTradeGoodsEntities_41299484(
        EventTradeGoodsMaster_o *this,
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
  EventTradeGoodsEntity_array *ReleaseTradeGoodsEntities; // x23
  System_Collections_Generic_List_object__o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w8
  unsigned int v22; // w25
  EventTradeGoodsEntity_o *v23; // x24
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B1C6C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v13);
    byte_4B1C6C3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  ReleaseTradeGoodsEntities = EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(this, eventId, v15);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( !ReleaseTradeGoodsEntities )
    goto LABEL_21;
  max_length = ReleaseTradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1BCB25C(v18, v19, v20);
      v23 = ReleaseTradeGoodsEntities->m_Items[v22];
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
        v26 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v23,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v23;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v23, v20, v24);
        }
      }
      max_length = ReleaseTradeGoodsEntities->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCB254(v18, v19);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetTradeGoodsEntities(
        EventTradeGoodsMaster_o *this,
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
  EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  EventTradeGoodsEntity_array *v17; // x22
  __int64 v18; // x24
  EventTradeGoodsEntity_o *v19; // x23
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4B1C6C1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4B1C6C1 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            this,
                            eventProgressValueEntity->fields.eventId,
                            v12);
  if ( !TradeGoodsEntityArray )
    return 0LL;
  max_length = TradeGoodsEntityArray->max_length;
  v17 = TradeGoodsEntityArray;
  if ( max_length >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= max_length )
        sub_1BCB25C(TradeGoodsEntityArray, v14, v15);
      v19 = v17->m_Items[v18];
      if ( !v19 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               v19->fields.commonReleaseId,
                                                               eventProgressValueEntity->fields.condType,
                                                               eventProgressValueEntity->fields.condId,
                                                               eventProgressValueEntity->fields.condNum,
                                                               0LL);
      if ( ((unsigned __int8)TradeGoodsEntityArray & 1) != 0 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v19,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v19, v15, v20);
        }
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BCB254(TradeGoodsEntityArray, v14);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetTradeGoodsEntityArray(
        EventTradeGoodsMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  v3 = eventId;
  if ( (byte_4B1C6C0 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4B1C6C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v19[4] = *(Il2CppClass **)&eventId;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), eventId, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}