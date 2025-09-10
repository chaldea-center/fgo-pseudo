void EventTradePickupMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C2747D & 1) == 0 )
  {
    sub_1C2D490(&EventTradePickupMaster_TypeInfo);
    byte_4C2747D = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2747A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
    byte_4C2747A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    501,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


EventTradePickupEntity_o *EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2747B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
    byte_4C2747B = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
}


int64_t EventTradePickupMaster__GetNextRateStartTime(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t tradeGoodsId,
        int64_t targetAt,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_long__int__o *v13; // x19
  System_Func_KeyValuePair_long__int___bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  EventTradePickupMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v19; // x21
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x19

  if ( (byte_4C27478 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
    sub_1C2D490(&System_Func_KeyValuePair_long__int___long__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_long__int___bool__TypeInfo);
    sub_1C2D490(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__);
    sub_1C2D490(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__);
    sub_1C2D490(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C2D490(&EventTradePickupMaster___c_TypeInfo);
    byte_4C27478 = 1;
  }
  v9 = (Il2CppObject *)sub_1C2D6DC(EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  v9[1].klass = (Il2CppClass *)targetAt;
  v13 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v12);
  v14 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1C2D6DC(System_Func_KeyValuePair_long__int___bool__TypeInfo);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v14,
    v9,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3113D3C *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v16 = EventTradePickupMaster___c_TypeInfo;
  v17 = v15;
  if ( !EventTradePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo);
    v16 = EventTradePickupMaster___c_TypeInfo;
  }
  _9__4_1 = v16->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = EventTradePickupMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1C2D6DC(System_Func_KeyValuePair_long__int___long__TypeInfo);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v19,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_30FFF80 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v24 = System_Linq_Enumerable__ToList_long_(
          v23,
          (const MethodInfo_3112B14 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v24,
         (const MethodInfo_30DA230 *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_66458268((System_Collections_Generic_IEnumerable_long__o *)v24, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
EventTradePickupEntity_array *EventTradePickupMaster__GetTradePickupEntityArray(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  int32_t v5; // w20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  v5 = eventId;
  if ( (byte_4C27475 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4C27475 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( LODWORD(list[1].fields.items) == v5 && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v14 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v16[4] = *(Il2CppClass **)&eventId;
            sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), eventId, v11, v12);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C2D6EC(list, *(_QWORD *)&eventId);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
}


System_Collections_Generic_Dictionary_long__int__o *EventTradePickupMaster__SelectTradeTimeRateDic(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  EventTradePickupEntity_array *TradePickupEntityArray; // x19
  System_Collections_Generic_Dictionary_long__int__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  unsigned int v13; // w21
  EventTradePickupEntity_o *v14; // x24
  EventTradePickupMaster_c *v15; // x0
  int64_t endedAt; // x24

  if ( (byte_4C27479 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1C2D490(&EventTradePickupMaster_TypeInfo);
    byte_4C27479 = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_341F9DC *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C2D6F4(v9, v10, v11);
      v14 = TradePickupEntityArray->m_Items[v13];
      if ( !v14 || !v8 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        v14->fields.startedAt,
        v14->fields.tradeTimeRate,
        (const MethodInfo_342039C *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v15 = EventTradePickupMaster_TypeInfo;
      endedAt = v14->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v15 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        endedAt + 1,
        v15->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_342039C *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v13 >= max_length )
        return v8;
    }
LABEL_13:
    sub_1C2D6EC(v9, v10);
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
bool EventTradePickupMaster__TryGetEntity(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **entity,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2747C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
    byte_4C2747C = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v18; // x9
  __int64 klass_low; // x10
  __int64 v20; // x8

  v7 = (CGThumbnailListItem_o *)pickupEntityList;
  if ( (byte_4C27477 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4C27477 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  v7->klass = (CGThumbnailListItem_c *)v11;
  sub_1C2D434(v7, (int32_t)v11, v12, v13);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( list )
      {
        pickupEntityList = (System_Collections_Generic_List_EventTradePickupEntity__o **)list;
        if ( LODWORD(list[1].fields.items) == eventId
          && (__int64)list[1].klass <= targetAt
          && (__int64)list[1].monitor >= targetAt )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)v7->klass;
          if ( !v7->klass )
            break;
          items = list->fields.items;
          v18 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)pickupEntityList,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v20 + 32) = pickupEntityList;
            sub_1C2D434((CGThumbnailListItem_o *)(v20 + 32), (int32_t)pickupEntityList, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(list, pickupEntityList);
  }
LABEL_17:
  if ( !v7->klass )
    goto LABEL_19;
  return SLODWORD(v7->klass->_1.namespaze) > 0;
}


bool EventTradePickupMaster__TryGetEntityTargetTime(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **pickupEntity,
        int32_t goodsId,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v9; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w25
  Il2CppObject *Item; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v9 = (CGThumbnailListItem_o *)pickupEntity;
  if ( (byte_4C27476 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C27476 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C2D6EC(list, pickupEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9->klass = 0;
  sub_1C2D434(v9, 0, v13, v14);
  if ( targetAt < 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    targetAt = NetworkManager__getTime(0);
  }
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v15,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( Item )
      {
        pickupEntity = (EventTradePickupEntity_o **)Item;
        if ( LODWORD(Item[2].monitor) == eventId
          && LODWORD(Item[1].klass) == goodsId
          && targetAt >= (__int64)Item[1].monitor
          && targetAt <= (__int64)Item[2].klass )
        {
          break;
        }
      }
      if ( Count == ++v15 )
        return v9->klass != 0;
    }
    v9->klass = (CGThumbnailListItem_c *)Item;
    sub_1C2D434(v9, (int32_t)Item, v17, v18);
  }
  return v9->klass != 0;
}


void EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2747E & 1) == 0 )
  {
    sub_1C2D490(&EventTradePickupMaster___c_TypeInfo);
    byte_4C2747E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventTradePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventTradePickupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventTradePickupMaster___c___ctor(EventTradePickupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventTradePickupMaster___c___GetNextRateStartTime_b__4_1(
        EventTradePickupMaster___c_o *this,
        System_Collections_Generic_KeyValuePair_long__int__o entity,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = entity.fields.key;
  if ( (byte_4C2747F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4C2747F = 1;
  }
  return key;
}


void EventTradePickupMaster___c__DisplayClass4_0___ctor(
        EventTradePickupMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTradePickupMaster___c__DisplayClass4_0___GetNextRateStartTime_b__0(
        EventTradePickupMaster___c__DisplayClass4_0_o *this,
        System_Collections_Generic_KeyValuePair_long__int__o entity,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = entity.fields.key;
  if ( (byte_4C27480 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4C27480 = 1;
  }
  return key > this->fields.targetAt;
}