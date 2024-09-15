void __fastcall EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E0E4 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__, method);
    byte_4A2E0E4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
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
  EventTradeGoodsEntity_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A2E0E3 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v9);
    byte_4A2E0E3 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
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
        sub_1B76424(TradeGoodsEntityArray, v14);
      v18 = v16->m_Items[v17];
      if ( !v18 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               v18->fields.commonReleaseId,
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
            (Il2CppObject *)v18,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v18;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B7641C(TradeGoodsEntityArray, v14);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v3 = eventId;
  if ( (byte_4A2E0E2 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B761C0(&EventTradeGoodsEntity_TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__, v9);
    sub_1B761C0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo, v10);
    byte_4A2E0E2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventTradeGoodsEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradeGoodsEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeGoodsEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v19 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v21[4] = *(Il2CppClass **)&eventId;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 4), eventId, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B7641C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}