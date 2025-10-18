void EventTradePickupMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C4316B & 1) == 0 )
  {
    sub_1C37058(&EventTradePickupMaster_TypeInfo);
    byte_4C4316B = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43168 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
    byte_4C43168 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    501,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


EventTradePickupEntity_o *EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43169 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
    byte_4C43169 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33A5B58 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
}


int64_t EventTradePickupMaster__GetNextRateStartTime(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t tradeGoodsId,
        int64_t targetAt,
        const MethodInfo *method)
{
  EventTradePickupMaster___c__DisplayClass4_0_o *v9; // x23
  __int64 v10; // x0
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_long__int__o *v12; // x19
  System_Func_KeyValuePair_long__int___bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  EventTradePickupMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v18; // x21
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x19

  if ( (byte_4C43166 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
    sub_1C37058(&System_Func_KeyValuePair_long__int___long__TypeInfo);
    sub_1C37058(&System_Func_KeyValuePair_long__int___bool__TypeInfo);
    sub_1C37058(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__);
    sub_1C37058(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__);
    sub_1C37058(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C37058(&EventTradePickupMaster___c_TypeInfo);
    byte_4C43166 = 1;
  }
  v9 = (EventTradePickupMaster___c__DisplayClass4_0_o *)sub_1C372A4(EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
  EventTradePickupMaster___c__DisplayClass4_0___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  v9->fields.targetAt = targetAt;
  v12 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v11);
  v13 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1C372A4(System_Func_KeyValuePair_long__int___bool__TypeInfo);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_312D044 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v15 = EventTradePickupMaster___c_TypeInfo;
  v16 = v14;
  if ( !EventTradePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo);
    v15 = EventTradePickupMaster___c_TypeInfo;
  }
  _9__4_1 = v15->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventTradePickupMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1C372A4(System_Func_KeyValuePair_long__int___long__TypeInfo);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v18,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v16,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_3119288 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v23 = System_Linq_Enumerable__ToList_long_(
          v22,
          (const MethodInfo_312BE1C *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
         (const MethodInfo_30F3538 *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_66561316((System_Collections_Generic_IEnumerable_long__o *)v23, 0);
  }
  else
  {
    return 0;
  }
}


EventTradePickupEntity_array *EventTradePickupMaster__GetTradePickupEntityArray(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C43163 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4C43163 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
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
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( list )
      {
        v13 = list;
        if ( LODWORD(list[1].fields.items) == eventId && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v15 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C372B4(list);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
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
  int max_length; // w8
  unsigned int v11; // w21
  EventTradePickupEntity_o *v12; // x24
  EventTradePickupMaster_c *v13; // x0
  int64_t endedAt; // x24

  if ( (byte_4C43167 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1C37058(&EventTradePickupMaster_TypeInfo);
    byte_4C43167 = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_3438CE4 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C372BC(v9);
      v12 = TradePickupEntityArray->m_Items[v11];
      if ( !v12 || !v8 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        v12->fields.startedAt,
        v12->fields.tradeTimeRate,
        (const MethodInfo_34396A4 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v13 = EventTradePickupMaster_TypeInfo;
      endedAt = v12->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v13 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        endedAt + 1,
        v13->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_34396A4 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v11 >= max_length )
        return v8;
    }
LABEL_13:
    sub_1C372B4(v9);
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

  if ( (byte_4C4316A & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
    byte_4C4316A = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x1
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  __int64 v21; // x8

  if ( (byte_4C43165 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4C43165 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  *pickupEntityList = (System_Collections_Generic_List_EventTradePickupEntity__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)pickupEntityList, (int32_t)v11, v12, v13);
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
                                                                 (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( list )
      {
        v17 = (Il2CppObject *)list;
        if ( LODWORD(list[1].fields.items) == eventId
          && (__int64)list[1].klass <= targetAt
          && (__int64)list[1].monitor >= targetAt )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*pickupEntityList;
          if ( !*pickupEntityList )
            break;
          items = list->fields.items;
          v19 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v17,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v21 + 32) = v17;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v17, v15, v16);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C372B4(list);
  }
LABEL_17:
  if ( !*pickupEntityList )
    goto LABEL_19;
  return (*pickupEntityList)->fields._size > 0;
}


bool EventTradePickupMaster__TryGetEntityTargetTime(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **pickupEntity,
        int32_t goodsId,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w25
  EventTradePickupEntity_o *Item; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C43164 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43164 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C372B4(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  *pickupEntity = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)pickupEntity, 0, v13, v14);
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
      Item = (EventTradePickupEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                           list,
                                           v15,
                                           (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( Item )
      {
        if ( Item->fields.eventId == eventId
          && Item->fields.tradeGoodsId == goodsId
          && targetAt >= Item->fields.startedAt
          && targetAt <= Item->fields.endedAt )
        {
          break;
        }
      }
      if ( Count == ++v15 )
        return *pickupEntity != 0;
    }
    *pickupEntity = Item;
    sub_1C36FFC((CGThumbnailListItem_o *)pickupEntity, (int32_t)Item, v17, v18);
  }
  return *pickupEntity != 0;
}


void EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4316C & 1) == 0 )
  {
    sub_1C37058(&EventTradePickupMaster___c_TypeInfo);
    byte_4C4316C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventTradePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventTradePickupMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C4316D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4C4316D = 1;
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
  if ( (byte_4C4316E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4C4316E = 1;
  }
  return key > this->fields.targetAt;
}