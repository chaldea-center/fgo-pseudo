void __fastcall EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C220F6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__, method);
    byte_4C220F6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    500,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
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
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int max_length; // w8
  CommonReleaseMaster_o *v22; // x21
  unsigned int v23; // w23
  int64_t v24; // x22
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C220F4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4C220F4 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(this, eventId, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !TradeGoodsEntityArray )
    goto LABEL_21;
  max_length = TradeGoodsEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v22 = (CommonReleaseMaster_o *)Master_object;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1C3B9C8(Master_object, v14);
      v24 = (int64_t)TradeGoodsEntityArray->m_Items[v23];
      if ( !v24 )
        break;
      v14 = *(unsigned int *)(v24 + 76);
      if ( !(_DWORD)v14 )
        goto LABEL_25;
      if ( !v22 )
        break;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v22, v14, 0LL, 0, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
LABEL_25:
        if ( !v10 )
          break;
        items = v10->fields._items;
        v26 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v24,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v24;
          sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v24, v15, v16, v17, v18, v19, v20);
        }
      }
      max_length = TradeGoodsEntityArray->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C3B9C0(Master_object, v14);
  }
LABEL_19:
  if ( !v10 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetReleaseTradeGoodsEntities_40718156(
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
  int max_length; // w8
  unsigned int v21; // w25
  int64_t v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4C220F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v13);
    byte_4C220F5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  ReleaseTradeGoodsEntities = EventTradeGoodsMaster__GetReleaseTradeGoodsEntities(this, eventId, v15);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( !ReleaseTradeGoodsEntities )
    goto LABEL_21;
  max_length = ReleaseTradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1C3B9C8(v18, v19);
      v22 = (int64_t)ReleaseTradeGoodsEntities->m_Items[v21];
      if ( !v22 || !Master_object )
        break;
      v18 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              *(_DWORD *)(v22 + 76),
              questId,
              questPhase,
              0LL);
      if ( v18
        || (v18 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    *(_DWORD *)(v22 + 76),
                    questId,
                    0LL)) )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v30 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v22,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1C3B708((PartyOrganizationUtility_o *)(v32 + 4), v22, v23, v24, v25, v26, v27, v28);
        }
      }
      max_length = ReleaseTradeGoodsEntities->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C3B9C0(v18, v19);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
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
  int max_length; // w8
  EventTradeGoodsEntity_array *v16; // x22
  __int64 v17; // x24
  int64_t v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C220F3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4C220F3 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            this,
                            eventProgressValueEntity->fields.eventId,
                            v12);
  if ( !TradeGoodsEntityArray )
    return 0LL;
  max_length = TradeGoodsEntityArray->max_length;
  v16 = TradeGoodsEntityArray;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1C3B9C8(TradeGoodsEntityArray, v14);
      v18 = (int64_t)v16->m_Items[v17];
      if ( !v18 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               *(_DWORD *)(v18 + 76),
                                                               eventProgressValueEntity->fields.condType,
                                                               eventProgressValueEntity->fields.condId,
                                                               eventProgressValueEntity->fields.condNum,
                                                               0LL);
      if ( ((unsigned __int8)TradeGoodsEntityArray & 1) != 0 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v26 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v18,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v18, v19, v20, v21, v22, v23, v24);
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C3B9C0(TradeGoodsEntityArray, v14);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = eventId;
  if ( (byte_4C220F2 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4C220F2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
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
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventTradeGoodsEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( HIDWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&eventId;
            sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 4), *(int64_t *)&eventId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3B9C0(list, *(_QWORD *)&eventId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}