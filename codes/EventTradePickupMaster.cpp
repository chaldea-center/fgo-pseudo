void __fastcall EventTradePickupMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1639E & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v1, v2);
    byte_4B1639E = 1;
  }
  EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE = 1000;
}


void __fastcall EventTradePickupMaster___ctor(EventTradePickupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1639B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__, method, v2);
    byte_4B1639B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    494,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradePickupEntity_o *__fastcall EventTradePickupMaster__GetEntity(
        EventTradePickupMaster_o *this,
        int32_t tradeGoodsId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1639C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__,
      *(_QWORD *)&tradeGoodsId,
      startedAt);
    byte_4B1639C = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, (const MethodInfo *)startedAt);
  return (EventTradePickupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Collections_Generic_Dictionary_long__int__o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_KeyValuePair_long__int___bool__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  EventTradePickupMaster___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_KeyValuePair_long__int___long__o *_9__4_1; // x20
  Il2CppObject *v43; // x21
  struct EventTradePickupMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_TSource__o *v52; // x19

  if ( (byte_4B16399 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_long___, *(_QWORD *)&eventId, *(_QWORD *)&tradeGoodsId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_long___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____, v13, v14);
    sub_1BCA7E0(&System_Func_KeyValuePair_long__int___long__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_KeyValuePair_long__int___bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__, v19, v20);
    sub_1BCA7E0(&Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__, v21, v22);
    sub_1BCA7E0(&EventTradePickupMaster___c__DisplayClass4_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&EventTradePickupMaster___c_TypeInfo, v25, v26);
    byte_4B16399 = 1;
  }
  v27 = (Il2CppObject *)sub_1BCAA2C(
                          EventTradePickupMaster___c__DisplayClass4_0_TypeInfo,
                          *(_QWORD *)&eventId,
                          *(_QWORD *)&tradeGoodsId,
                          targetAt);
  System_Object___ctor(v27, 0LL);
  if ( !v27 )
    sub_1BCAA3C(v28, v29);
  v27[1].klass = (Il2CppClass *)targetAt;
  v31 = EventTradePickupMaster__SelectTradeTimeRateDic(this, eventId, tradeGoodsId, v30);
  v35 = (System_Func_KeyValuePair_long__int___bool__o *)sub_1BCAA2C(
                                                          System_Func_KeyValuePair_long__int___bool__TypeInfo,
                                                          v32,
                                                          v33,
                                                          v34);
  System_Func_KeyValuePair_long__int___bool____ctor(
    v35,
    v27,
    Method_EventTradePickupMaster___c__DisplayClass4_0__GetNextRateStartTime_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Where_KeyValuePair_long__int__(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2F504C8 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__int____);
  v40 = EventTradePickupMaster___c_TypeInfo;
  v41 = v36;
  if ( !EventTradePickupMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePickupMaster___c_TypeInfo, v37);
    v40 = EventTradePickupMaster___c_TypeInfo;
  }
  _9__4_1 = v40->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40, v37);
      v40 = EventTradePickupMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__4_1 = (System_Func_KeyValuePair_long__int___long__o *)sub_1BCAA2C(
                                                                System_Func_KeyValuePair_long__int___long__TypeInfo,
                                                                v37,
                                                                v38,
                                                                v39);
    System_Func_KeyValuePair_long__int___long____ctor(
      _9__4_1,
      v43,
      Method_EventTradePickupMaster___c__GetNextRateStartTime_b__4_1__,
      0LL);
    static_fields = EventTradePickupMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = _9__4_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v45, v46, v47, v48, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__int___long_(
                                                               v41,
                                                               (System_Func_TSource__TResult__o *)_9__4_1,
                                                               (const MethodInfo_2F3CF2C *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__int___long___);
  v52 = System_Linq_Enumerable__ToList_long_(
          v51,
          (const MethodInfo_2F4F5F0 *)Method_System_Linq_Enumerable_ToList_long___);
  if ( System_Linq_Enumerable__Any_long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v52,
         (const MethodInfo_2F1E5AC *)Method_System_Linq_Enumerable_Any_long___) )
  {
    return System_Linq_Enumerable__Min_64623112((System_Collections_Generic_IEnumerable_long__o *)v52, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *v24; // x23
  int32_t v25; // w24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  v5 = eventId;
  if ( (byte_4B16396 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventTradePickupEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v17, v18);
    byte_4B16396 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradePickupEntity__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v25,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventTradePickupEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradePickupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradePickupEntity_TypeInfo
          && LODWORD(list[1].fields.items) == v5
          && LODWORD(list->fields.items) == goodsId )
        {
          if ( !v24 )
            break;
          items = v24->fields._items;
          v34 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            break;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v36[4] = *(Il2CppClass **)&eventId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), *(int64_t *)&eventId, v26, v27, v28, v29, v30, v31);
          }
        }
      }
      if ( Count == ++v25 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_18:
  if ( !v24 )
    goto LABEL_20;
  return (EventTradePickupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v24,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTradePickupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__int__o *__fastcall EventTradePickupMaster__SelectTradeTimeRateDic(
        EventTradePickupMaster_o *this,
        int32_t eventId,
        int32_t goodsId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventTradePickupEntity_array *TradePickupEntityArray; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_long__int__o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int max_length; // w8
  unsigned int v21; // w21
  EventTradePickupEntity_o *v22; // x24
  __int64 v23; // x1
  EventTradePickupMaster_c *v24; // x0
  int64_t endedAt; // x24

  if ( (byte_4B1639A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__int___ctor__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__int__set_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v11, v12);
    byte_4B1639A = 1;
  }
  TradePickupEntityArray = EventTradePickupMaster__GetTradePickupEntityArray(this, eventId, goodsId, method);
  v17 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_long__int__TypeInfo,
                                                                v14,
                                                                v15,
                                                                v16);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v17,
    (const MethodInfo_323D83C *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  if ( !TradePickupEntityArray )
    goto LABEL_13;
  max_length = TradePickupEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1BCAA44(v18, v19);
      v22 = TradePickupEntityArray->m_Items[v21];
      if ( !v22 || !v17 )
        break;
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v17,
        v22->fields.startedAt,
        v22->fields.tradeTimeRate,
        (const MethodInfo_323E1FC *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      v24 = EventTradePickupMaster_TypeInfo;
      endedAt = v22->fields.endedAt;
      if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, v23);
        v24 = EventTradePickupMaster_TypeInfo;
      }
      System_Collections_Generic_Dictionary_long__int___set_Item(
        v17,
        endedAt + 1,
        v24->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
        (const MethodInfo_323E1FC *)Method_System_Collections_Generic_Dictionary_long__int__set_Item__);
      max_length = TradePickupEntityArray->max_length;
      if ( (int)++v21 >= max_length )
        return v17;
    }
LABEL_13:
    sub_1BCAA3C(v18, v19);
  }
  return v17;
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

  if ( (byte_4B1639D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&tradeGoodsId);
    byte_4B1639D = 1;
  }
  PK = (Il2CppObject *)EventTradePickupEntity__CreatePK(tradeGoodsId, startedAt, *(const MethodInfo **)&tradeGoodsId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventTradePickupMaster__EventTradePickupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradePickupMaster__TryGetEntityListTargetTime(
        EventTradePickupMaster_o *this,
        System_Collections_Generic_List_EventTradePickupEntity__o **pickupEntityList,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v7; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t v33; // w24
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  __int64 v44; // x8

  v7 = (PartyOrganizationUtility_o *)pickupEntityList;
  if ( (byte_4B16398 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      pickupEntityList,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&EventTradePickupEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradePickupEntity__TypeInfo, v19, v20);
    byte_4B16398 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradePickupEntity__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradePickupEntity___ctor__);
  v7->klass = (PartyOrganizationUtility_c *)v26;
  sub_1BCA784(v7, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  if ( Count >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v33,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v42 = Method_System_Collections_Generic_List_EventTradePickupEntity__Add__;
          ++HIDWORD(list[1].klass);
          if ( !items )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(items[1].monitor) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              (Il2CppObject *)pickupEntityList,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = (__int64)items + 8 * klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            *(_QWORD *)(v44 + 32) = pickupEntityList;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(v44 + 32),
              (int64_t)pickupEntityList,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
          }
        }
      }
      if ( Count == ++v33 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(list, pickupEntityList);
  }
LABEL_19:
  if ( !v7->klass )
    goto LABEL_21;
  return SLODWORD(v7->klass->_1.namespaze) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradePickupMaster__TryGetEntityTargetTime(
        EventTradePickupMaster_o *this,
        EventTradePickupEntity_o **pickupEntity,
        int32_t goodsId,
        int32_t eventId,
        int64_t targetAt,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v9; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w25
  Il2CppObject *Item; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10

  v9 = (PartyOrganizationUtility_o *)pickupEntity;
  if ( (byte_4B16397 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      pickupEntity,
      *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&EventTradePickupEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    byte_4B16397 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_1BCAA3C(list, pickupEntity);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9->klass = 0LL;
  sub_1BCA784(v9, 0LL, v19, v20, v21, v22, v23, v24);
  if ( (targetAt & 0x8000000000000000LL) != 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, pickupEntity);
    targetAt = NetworkManager__getTime(0LL);
  }
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_21;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( Count == ++v25 )
        return v9->klass != 0LL;
    }
    v9->klass = (PartyOrganizationUtility_c *)Item;
    sub_1BCA784(v9, (int64_t)Item, v27, v28, v29, v30, v31, v32);
  }
  return v9->klass != 0LL;
}


void __fastcall EventTradePickupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1639F & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradePickupMaster___c_TypeInfo, v1, v2);
    byte_4B1639F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTradePickupMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTradePickupMaster___c_TypeInfo->static_fields->__9 = (struct EventTradePickupMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventTradePickupMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B163A0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__,
      entity.fields.key,
      *(_QWORD *)&entity.fields.value);
    byte_4B163A0 = 1;
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
  if ( (byte_4B163A1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_long__int__get_Key__,
      entity.fields.key,
      *(_QWORD *)&entity.fields.value);
    byte_4B163A1 = 1;
  }
  return key > this->fields.targetAt;
}