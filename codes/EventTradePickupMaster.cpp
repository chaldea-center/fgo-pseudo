void __fastcall EventTradePickupMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FC5BE & 1) == 0 )
  {
    sub_1B640C8(&EventTradePickupMaster_TypeInfo, v1);
    byte_49FC5BE = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void __fastcall EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5BB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__, method);
    byte_49FC5BB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    494,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradePickupEntity_o *__fastcall EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC5BC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__,
      *(_QWORD *)&tradeGoodsId);
    byte_49FC5BC = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
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
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_long__int__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_KeyValuePair_long__int___bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  EventTradePickupMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v31; // x21
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_TSource__o *v36; // x19

  if ( (byte_49FC5B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_long___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_long___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____, v11);
    sub_1B640C8(&System_Func_KeyValuePair_long__int___long__TypeInfo, v12);
    sub_1B640C8(&System_Func_KeyValuePair_long__int___bool__TypeInfo, v13);
    sub_1B640C8(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__, v14);
    sub_1B640C8(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__, v15);
    sub_1B640C8(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo, v16);
    sub_1B640C8(&EventTradePickupMaster___c_TypeInfo, v17);
    byte_49FC5B9 = 1;
  }
  v18 = (Il2CppObject *)sub_1B64314(
                          EventTradePickupMaster___c__DisplayClass4_0_TypeInfo,
                          *(_QWORD *)&eventId,
                          *(_QWORD *)&tradeGoodsId);
  System_Object___ctor(v18, 0LL);
  if ( !v18 )
    sub_1B64324(v19);
  v18[1].klass = (Il2CppClass *)targetAt;
  v21 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v20);
  v24 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1B64314(
                                                          System_Func_KeyValuePair_long__int___bool__TypeInfo,
                                                          v22,
                                                          v23);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v24,
    v18,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2E75CD0 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v28 = EventTradePickupMaster___c_TypeInfo;
  v29 = v25;
  if ( !EventTradePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo);
    v28 = EventTradePickupMaster___c_TypeInfo;
  }
  _9__4_1 = v28->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventTradePickupMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1B64314(
                                                                System_Func_KeyValuePair_long__int___long__TypeInfo,
                                                                v26,
                                                                v27);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v31,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0LL);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_2E64BEC *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v36 = System_Linq_Enumerable__ToList_long_(
          v35,
          (const MethodInfo_2E74EA8 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v36,
         (const MethodInfo_2E467FC *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_63596836((System_Collections_Generic_IEnumerable_long__o *)v36, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x23
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_ObjectModel_Collection_T__o *v21; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FC5B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventTradePickupEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v12);
    byte_49FC5B6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradePickupEntity__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = list;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(list[1].fields.items) == eventId
          && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v24 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v21;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v21, v19, v20);
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1B64324(list);
  }
LABEL_18:
  if ( !v17 )
    goto LABEL_20;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v17,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_long__int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int max_length; // w8
  unsigned int v17; // w21
  EventTradePickupEntity_o *v18; // x24
  EventTradePickupMaster_c *v19; // x0
  int64_t endedAt; // x24

  if ( (byte_49FC5BA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v8);
    sub_1B640C8(&EventTradePickupMaster_TypeInfo, v9);
    byte_49FC5BA = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v13 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                v11,
                                                                v12);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v13,
    (const MethodInfo_315B084 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B6432C(v14, v15);
      v18 = TradePickupEntityArray->m_Items[v17];
      if ( !v18 || !v13 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v13,
        v18->fields.startedAt,
        v18->fields.tradeTimeRate,
        (const MethodInfo_315BA44 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v19 = EventTradePickupMaster_TypeInfo;
      endedAt = v18->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v19 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v13,
        endedAt + 1,
        v19->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_315BA44 *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v17 >= max_length )
        return v13;
    }
LABEL_13:
    sub_1B64324(v14);
  }
  return v13;
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

  if ( (byte_49FC5BD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__, entity);
    byte_49FC5BD = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool __fastcall EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w24
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x1
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  __int64 v30; // x8

  if ( (byte_49FC5B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, pickupEntityList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&EventTradePickupEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v14);
    byte_49FC5B8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradePickupEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  *pickupEntityList = (System_Collections_Generic_List_EventTradePickupEntity__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)pickupEntityList, (int32_t)v19, v20, v21);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(list[1].fields.items) == eventId
          && (__int64)list[1].klass <= targetAt
          && (__int64)list[1].monitor >= targetAt )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)*pickupEntityList;
          if ( !*pickupEntityList )
            break;
          items = list->fields.items;
          v28 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v25,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v30 + 32) = v25;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v25, v23, v24);
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64324(list);
  }
LABEL_19:
  if ( !*pickupEntityList )
    goto LABEL_21;
  return (*pickupEntityList)->fields._size > 0;
}


bool __fastcall EventTradePickupMaster__TryGetEntityTargetTime(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **pickupEntity,
        int32_t goodsId,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
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

  if ( (byte_49FC5B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, pickupEntity);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B640C8(&EventTradePickupEntity_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    byte_49FC5B7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *pickupEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)pickupEntity, 0, v16, v17);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
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
        return *pickupEntity != 0LL;
    }
    *pickupEntity = (EventTradePickupEntity_o *)Item;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)pickupEntity, (int32_t)Item, v20, v21);
  }
  return *pickupEntity != 0LL;
}


void __fastcall EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC5BF & 1) == 0 )
  {
    sub_1B640C8(&EventTradePickupMaster___c_TypeInfo, v1);
    byte_49FC5BF = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTradePickupMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventTradePickupMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49FC5C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__, entity.fields.key);
    byte_49FC5C0 = 1;
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
  if ( (byte_49FC5C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__, entity.fields.key);
    byte_49FC5C1 = 1;
  }
  return key > this->fields.targetAt;
}