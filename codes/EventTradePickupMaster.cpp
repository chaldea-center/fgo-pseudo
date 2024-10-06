void __fastcall EventTradePickupMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A70018 & 1) == 0 )
  {
    sub_1B90010(&EventTradePickupMaster_TypeInfo, v1);
    byte_4A70018 = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void __fastcall EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70015 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__, method);
    byte_4A70015 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    494,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradePickupEntity_o *__fastcall EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70016 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__,
      *(_QWORD *)&tradeGoodsId);
    byte_4A70016 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_312C900 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventTradePickupMaster__GetNextRateStartTime(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t tradeGoodsId,
        int64_t targetAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_Dictionary_long__int__o *v22; // x19
  System_Func_KeyValuePair_long__int___bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  EventTradePickupMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v28; // x21
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x19

  if ( (byte_4A70013 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Any_long___, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_long___, v10);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____, v11);
    sub_1B90010(&System_Func_KeyValuePair_long__int___long__TypeInfo, v12);
    sub_1B90010(&System_Func_KeyValuePair_long__int___bool__TypeInfo, v13);
    sub_1B90010(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__, v14);
    sub_1B90010(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__, v15);
    sub_1B90010(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo, v16);
    sub_1B90010(&EventTradePickupMaster___c_TypeInfo, v17);
    byte_4A70013 = 1;
  }
  v18 = (Il2CppObject *)sub_1B9025C(EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v18, 0LL);
  if ( !v18 )
    sub_1B9026C(v19, v20);
  v18[1].klass = (Il2CppClass *)targetAt;
  v22 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v21);
  v23 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1B9025C(System_Func_KeyValuePair_long__int___bool__TypeInfo);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v23,
    v18,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2ECB560 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v25 = EventTradePickupMaster___c_TypeInfo;
  v26 = v24;
  if ( !EventTradePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo);
    v25 = EventTradePickupMaster___c_TypeInfo;
  }
  _9__4_1 = v25->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = EventTradePickupMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1B9025C(System_Func_KeyValuePair_long__int___long__TypeInfo);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v28,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0LL);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v26,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_2EBA2D8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v33 = System_Linq_Enumerable__ToList_long_(
          v32,
          (const MethodInfo_2ECA738 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v33,
         (const MethodInfo_2E9B958 *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_64008540((System_Collections_Generic_IEnumerable_long__o *)v33, 0LL);
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
EventTradePickupEntity_array *__fastcall EventTradePickupMaster__GetTradePickupEntityArray(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  int32_t v5; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v15; // x23
  int32_t v16; // w24
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v5 = eventId;
  if ( (byte_4A70010 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B90010(&EventTradePickupEntity_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v12);
    byte_4A70010 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(list[1].fields.items) == v5
          && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v21 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&eventId;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v23 + 4), eventId, v17, v18);
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B9026C(list, *(_QWORD *)&eventId);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v15,
                                           (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__int__o *__fastcall EventTradePickupMaster__SelectTradeTimeRateDic(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventTradePickupEntity_array *TradePickupEntityArray; // x19
  System_Collections_Generic_Dictionary_long__int__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int max_length; // w8
  unsigned int v15; // w21
  EventTradePickupEntity_o *v16; // x24
  EventTradePickupMaster_c *v17; // x0
  int64_t endedAt; // x24

  if ( (byte_4A70014 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__, v7);
    sub_1B90010(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v8);
    sub_1B90010(&EventTradePickupMaster_TypeInfo, v9);
    byte_4A70014 = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v11 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v11,
    (const MethodInfo_31B46F8 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B90274(v12, v13);
      v16 = TradePickupEntityArray->m_Items[v15];
      if ( !v16 || !v11 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v11,
        v16->fields.startedAt,
        v16->fields.tradeTimeRate,
        (const MethodInfo_31B50B8 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v17 = EventTradePickupMaster_TypeInfo;
      endedAt = v16->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v17 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v11,
        endedAt + 1,
        v17->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_31B50B8 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v15 >= max_length )
        return v11;
    }
LABEL_13:
    sub_1B9026C(v12, v13);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradePickupMaster__TryGetEntity(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **entity,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A70017 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__, entity);
    byte_4A70017 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool __fastcall EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v7; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w24
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v25; // x9
  __int64 klass_low; // x10
  __int64 v27; // x8

  v7 = (ServantStatusBattleListViewItem_o *)pickupEntityList;
  if ( (byte_4A70012 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, pickupEntityList);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B90010(&EventTradePickupEntity_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__, v13);
    sub_1B90010(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v14);
    byte_4A70012 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  v7->klass = (ServantStatusBattleListViewItem_c *)v17;
  sub_1B8FFB4(v7, (int32_t)v17, v18, v19);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v20,
                                                                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        pickupEntityList = (System_Collections_Generic_List_EventTradePickupEntity__o **)list;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(list[1].fields.items) == eventId
          && (__int64)list[1].klass <= targetAt
          && (__int64)list[1].monitor >= targetAt )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)v7->klass;
          if ( !v7->klass )
            break;
          items = list->fields.items;
          v25 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)pickupEntityList,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v27 + 32) = pickupEntityList;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)pickupEntityList, v21, v22);
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B9026C(list, pickupEntityList);
  }
LABEL_19:
  if ( !v7->klass )
    goto LABEL_21;
  return SLODWORD(v7->klass->_1.namespaze) > 0;
}


bool __fastcall EventTradePickupMaster__TryGetEntityTargetTime(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **pickupEntity,
        int32_t goodsId,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v9; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w25
  Il2CppObject *Item; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x10

  v9 = (ServantStatusBattleListViewItem_o *)pickupEntity;
  if ( (byte_4A70011 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, pickupEntity);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B90010(&EventTradePickupEntity_TypeInfo, v12);
    sub_1B90010(&NetworkManager_TypeInfo, v13);
    byte_4A70011 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B9026C(list, pickupEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9->klass = 0LL;
  sub_1B8FFB4(v9, 0, v16, v17);
  if ( (targetAt & 0x8000000000000000LL) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    targetAt = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_21;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v18,
               (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        pickupEntity = (EventTradePickupEntity_o **)Item;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(Item[2].monitor) == eventId
          && LODWORD(Item[1].klass) == goodsId
          && targetAt >= (__int64)Item[1].monitor
          && targetAt <= (__int64)Item[2].klass )
        {
          break;
        }
      }
      if ( Count == ++v18 )
        return v9->klass != 0LL;
    }
    v9->klass = (ServantStatusBattleListViewItem_c *)Item;
    sub_1B8FFB4(v9, (int32_t)Item, v20, v21);
  }
  return v9->klass != 0LL;
}


void __fastcall EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70019 & 1) == 0 )
  {
    sub_1B90010(&EventTradePickupMaster___c_TypeInfo, v1);
    byte_4A70019 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(EventTradePickupMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EventTradePickupMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventTradePickupMaster___c___ctor(EventTradePickupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventTradePickupMaster___c___GetNextRateStartTime_b__4_1(
        EventTradePickupMaster___c_o *this,
        System_Collections_Generic_KeyValuePair_long__int__o entity,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = entity.fields.key;
  if ( (byte_4A7001A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__, entity.fields.key);
    byte_4A7001A = 1;
  }
  return key;
}


void __fastcall EventTradePickupMaster___c__DisplayClass4_0___ctor(
        EventTradePickupMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTradePickupMaster___c__DisplayClass4_0___GetNextRateStartTime_b__0(
        EventTradePickupMaster___c__DisplayClass4_0_o *this,
        System_Collections_Generic_KeyValuePair_long__int__o entity,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = entity.fields.key;
  if ( (byte_4A7001B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__, entity.fields.key);
    byte_4A7001B = 1;
  }
  return key > this->fields.targetAt;
}