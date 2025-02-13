void __fastcall EventTradePickupMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4BDC6E5 & 1) == 0 )
  {
    sub_1C21E38(&EventTradePickupMaster_TypeInfo);
    byte_4BDC6E5 = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void __fastcall EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC6E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
    byte_4BDC6E2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    498,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


EventTradePickupEntity_o *__fastcall EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC6E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
    byte_4BDC6E3 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
}


int64_t __fastcall EventTradePickupMaster__GetNextRateStartTime(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_TSource__o *v28; // x19

  if ( (byte_4BDC6E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
    sub_1C21E38(&System_Func_KeyValuePair_long__int___long__TypeInfo);
    sub_1C21E38(&System_Func_KeyValuePair_long__int___bool__TypeInfo);
    sub_1C21E38(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__);
    sub_1C21E38(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__);
    sub_1C21E38(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C21E38(&EventTradePickupMaster___c_TypeInfo);
    byte_4BDC6E0 = 1;
  }
  v9 = (Il2CppObject *)sub_1C22084(EventTradePickupMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  v9[1].klass = (Il2CppClass *)targetAt;
  v13 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v12);
  v14 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1C22084(System_Func_KeyValuePair_long__int___bool__TypeInfo);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v14,
    v9,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2FEE32C *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
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
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1C22084(System_Func_KeyValuePair_long__int___long__TypeInfo);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v19,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0LL);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_2FDAA74 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v28 = System_Linq_Enumerable__ToList_long_(
          v27,
          (const MethodInfo_2FED454 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v28,
         (const MethodInfo_2FBB00C *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_65337628((System_Collections_Generic_IEnumerable_long__o *)v28, 0LL);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v9; // x23
  int32_t v10; // w24
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v5 = eventId;
  if ( (byte_4BDC6DD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4BDC6DD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v20[4] = *(Il2CppClass **)&eventId;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), *(int64_t *)&eventId, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C22094(list, *(_QWORD *)&eventId);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
}


System_Collections_Generic_Dictionary_long__int__o *__fastcall EventTradePickupMaster__SelectTradeTimeRateDic(
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
  unsigned int v12; // w21
  EventTradePickupEntity_o *v13; // x24
  EventTradePickupMaster_c *v14; // x0
  int64_t endedAt; // x24

  if ( (byte_4BDC6E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    sub_1C21E38(&EventTradePickupMaster_TypeInfo);
    byte_4BDC6E1 = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v8 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v8,
    (const MethodInfo_32EEC5C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2209C(v9, v10);
      v13 = TradePickupEntityArray->m_Items[v12];
      if ( !v13 || !v8 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        v13->fields.startedAt,
        v13->fields.tradeTimeRate,
        (const MethodInfo_32EF61C *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v14 = EventTradePickupMaster_TypeInfo;
      endedAt = v13->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        v14 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v8,
        endedAt + 1,
        v14->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_32EF61C *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v12 >= max_length )
        return v8;
    }
LABEL_13:
    sub_1C22094(v9, v10);
  }
  return v8;
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

  if ( (byte_4BDC6E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
    byte_4BDC6E4 = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


bool __fastcall EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v7; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8

  v7 = (PartyOrganizationUtility_o *)pickupEntityList;
  if ( (byte_4BDC6DF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
    byte_4BDC6DF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTradePickupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  v7->klass = (PartyOrganizationUtility_c *)v11;
  sub_1C21DDC(v7, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
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
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v28 + 32) = pickupEntityList;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)(v28 + 32),
              (int64_t)pickupEntityList,
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
    sub_1C22094(list, pickupEntityList);
  }
LABEL_17:
  if ( !v7->klass )
    goto LABEL_19;
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
  PartyOrganizationUtility_o *v9; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t v19; // w25
  Il2CppObject *Item; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v9 = (PartyOrganizationUtility_o *)pickupEntity;
  if ( (byte_4BDC6DE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC6DE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_1C22094(list, pickupEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Count__);
  v9->klass = 0LL;
  sub_1C21DDC(v9, 0LL, v13, v14, v15, v16, v17, v18);
  if ( (targetAt & 0x8000000000000000LL) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    targetAt = NetworkManager__getTime(0LL);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventTradePickupEntity__get_Item__);
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
        return v9->klass != 0LL;
    }
    v9->klass = (PartyOrganizationUtility_c *)Item;
    sub_1C21DDC(v9, (int64_t)Item, v21, v22, v23, v24, v25, v26);
  }
  return v9->klass != 0LL;
}


void __fastcall EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC6E6 & 1) == 0 )
  {
    sub_1C21E38(&EventTradePickupMaster___c_TypeInfo);
    byte_4BDC6E6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventTradePickupMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventTradePickupMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4BDC6E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4BDC6E7 = 1;
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
  if ( (byte_4BDC6E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__);
    byte_4BDC6E8 = 1;
  }
  return key > this->fields.targetAt;
}