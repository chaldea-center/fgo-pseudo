void EventTradePickupMaster___cctor(const MethodInfo *method)
{
  if ( (byte_5938953 & 1) == 0 )
  {
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    byte_5938953 = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938950 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
    byte_5938950 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    503,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


EventTradePickupEntity_o *EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938951 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
    byte_5938951 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
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
  __int64 v16; // x1
  EventTradePickupMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x9
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v21; // x21
  struct EventTradePickupMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x19

  if ( (byte_593894E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
    sub_21FFC50(&System_Func_KeyValuePair_long__int___long__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_long__int___bool__TypeInfo);
    sub_21FFC50(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__);
    sub_21FFC50(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__);
    sub_21FFC50(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
    sub_21FFC50(&EventTradePickupMaster___c_TypeInfo);
    byte_593894E = 1;
  }
  v9 = (Il2CppObject *)sub_21FFEBC(EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v9[1].klass = (Il2CppClass *)targetAt;
  v13 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v12);
  v14 = (System_Func_KeyValuePair_long__int___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_long__int___bool__TypeInfo);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v14,
    v9,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_386EA94 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v17 = EventTradePickupMaster___c_TypeInfo;
  v18 = v15;
  if ( !*(&EventTradePickupMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo, v16);
    v17 = EventTradePickupMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__4_1 = static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_21FFEBC(System_Func_KeyValuePair_long__int___long__TypeInfo);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v21,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0);
    v22 = EventTradePickupMaster___c_TypeInfo->static_fields;
    v22->__9__4_1 = _9__4_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__4_1, (int32_t)_9__4_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_3857DD8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v30 = System_Linq_Enumerable__ToList_long_(
          v29,
          (const MethodInfo_386D7A8 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v30,
         (const MethodInfo_38329E4 *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_78393564((System_Collections_Generic_IEnumerable_long__o *)v30, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v5 = eventId;
  if ( (byte_593894B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_593894B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        if ( LODWORD(list[1].fields.items) == v5 && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = *(Il2CppClass **)&eventId;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), eventId, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(list, *(_QWORD *)&eventId);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
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
  int max_length; // w8
  unsigned int v12; // w23
  EventTradePickupEntity_o *v13; // x24
  __int64 v14; // x1
  EventTradePickupMaster_c *v15; // x0
  int64_t endedAt; // x24

  if ( (byte_593894F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    byte_593894F = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_3F952C8 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_21FFED4(v9);
      v13 = TradePickupEntityArray->m_Items[v12];
      if ( !v13 || !v8 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        v13->fields.startedAt,
        v13->fields.tradeTimeRate,
        (const MethodInfo_3F95C68 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v15 = EventTradePickupMaster_TypeInfo;
      endedAt = v13->fields.endedAt;
      if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v14);
        v15 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        endedAt + 1,
        v15->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_3F95C68 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v12 >= max_length )
        return v8;
    }
LABEL_13:
    sub_21FFECC(v9, v10);
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

  if ( (byte_5938952 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
    byte_5938952 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8

  v7 = (MissionNaviTransitionBoardItem_o *)pickupEntityList;
  if ( (byte_593894D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_593894D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  v7->klass = (MissionNaviTransitionBoardItem_c *)v11;
  sub_21FFBF4(v7, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
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
          v26 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)pickupEntityList,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v28 + 32) = pickupEntityList;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v28 + 32),
              (int32_t)pickupEntityList,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_17;
    }
LABEL_19:
    sub_21FFECC(list, pickupEntityList);
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
  MissionNaviTransitionBoardItem_o *v9; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w25
  Il2CppObject *Item; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v9 = (MissionNaviTransitionBoardItem_o *)pickupEntity;
  if ( (byte_593894C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593894C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_21FFECC(list, pickupEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9->klass = 0;
  sub_21FFBF4(v9, 0, v13, v14, v15, v16, v17, v18);
  if ( targetAt < 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, pickupEntity);
    targetAt = NetworkManager__getTime(0);
  }
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v19,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
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
      if ( Count == ++v19 )
        return v9->klass != 0;
    }
    v9->klass = (MissionNaviTransitionBoardItem_c *)Item;
    sub_21FFBF4(v9, (int32_t)Item, v21, v22, v23, v24, v25, v26);
  }
  return v9->klass != 0;
}


void EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938954 & 1) == 0 )
  {
    sub_21FFC50(&EventTradePickupMaster___c_TypeInfo);
    byte_5938954 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventTradePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTradePickupMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_5938955 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_5938955 = 1;
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
  if ( (byte_5938956 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_5938956 = 1;
  }
  return key > this->fields.targetAt;
}