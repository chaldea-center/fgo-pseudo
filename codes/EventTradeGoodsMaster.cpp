void __fastcall EventTradeGoodsMaster___ctor(EventTradeGoodsMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B302 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
    byte_4A5B302 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int___ctor__);
}


EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetTradeGoodsEntities(
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
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B301 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4A5B301 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            this,
                            eventProgressValueEntity->fields.eventId,
                            v7);
  if ( !TradeGoodsEntityArray )
    return 0LL;
  max_length = TradeGoodsEntityArray->max_length;
  v11 = TradeGoodsEntityArray;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        sub_1B88814(TradeGoodsEntityArray, v9);
      v13 = v11->m_Items[v12];
      if ( !v13 || !Master_object )
        break;
      TradeGoodsEntityArray = (EventTradeGoodsEntity_array *)CommonReleaseMaster__IsMatch(
                                                               (CommonReleaseMaster_o *)Master_object,
                                                               v13->fields.commonReleaseId,
                                                               eventProgressValueEntity->fields.condType,
                                                               eventProgressValueEntity->fields.condId,
                                                               eventProgressValueEntity->fields.condNum,
                                                               0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B8880C(TradeGoodsEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeGoodsEntity_array *__fastcall EventTradeGoodsMaster__GetTradeGoodsEntityArray(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = eventId;
  if ( (byte_4A5B300 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventTradeGoodsEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
    byte_4A5B300 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeGoodsEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeGoodsEntity___ctor__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventTradeGoodsEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradeGoodsEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeGoodsEntity_TypeInfo
          && HIDWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_EventTradeGoodsEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&eventId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), eventId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (EventTradeGoodsEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTradeGoodsEntity__ToArray__);
}