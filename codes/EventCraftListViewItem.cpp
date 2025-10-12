void EventCraftListViewItem___ctor(
        EventCraftListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        ItemEntity_o *supportItem,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  Il2CppObject *v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x0
  Il2CppObject *v15; // x20
  struct EventTradeGoodsEntity_o *klass; // x1
  const MethodInfo *v17; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x22
  System_Func_object__bool__o *v20; // x23
  Il2CppObject *v21; // x1
  struct UserEventTradeEntity_o *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v24; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v26; // x1
  Il2CppObject *Master_object; // x22
  int32_t id; // w3
  int32_t num; // w8
  int32_t EventId_k__BackingField; // w9
  Il2CppObject *v31; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  bool IsOpen; // w0
  Il2CppObject *v34; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C31BE7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C32C20(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventTradeInfo__bool__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__);
    sub_1C32C20(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__);
    sub_1C32C20(&EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
    byte_4C31BE7 = 1;
  }
  entity = 0;
  v34 = 0;
  v13 = (Il2CppObject *)sub_1C32E6C(EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_47;
  v13[1].klass = (Il2CppClass *)tradeGoodsEntity;
  v15 = v13 + 1;
  sub_1C32BC4(&v13[1], tradeGoodsEntity);
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  klass = (struct EventTradeGoodsEntity_o *)v13[1].klass;
  this->fields._TradeGoodsEntity_k__BackingField = klass;
  sub_1C32BC4(&this->fields._TradeGoodsEntity_k__BackingField, klass);
  this->fields._SupportTool_k__BackingField = supportItem;
  sub_1C32BC4(&this->fields._SupportTool_k__BackingField, supportItem);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1C32BC4(&this->fields._UpdateReceiveAllButtonState_k__BackingField, updateReceiveAllButton);
  EventCraftListViewItem__UpdateCraftUserInfo(this, v17);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v20 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(v20, v13, Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__, 0);
    v21 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            tradeList,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v21 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v21;
  sub_1C32BC4(&this->fields._TradeInfo_k__BackingField, v21);
  v22 = this->fields._UserTradeEntity_k__BackingField;
  if ( v22 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.pickupList) != 0 )
  {
    v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(v24, v13, Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__, 0);
    v25 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v26 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v25,
                                                                              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v26 = 0;
  }
  this->fields._PickupInfoList_k__BackingField = v26;
  sub_1C32BC4(&this->fields._PickupInfoList_k__BackingField, v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( NetworkManager_TypeInfo->_2.cctor_finished )
  {
    if ( supportItem )
      goto LABEL_20;
LABEL_23:
    id = 0;
    if ( !Master_object )
      goto LABEL_47;
    goto LABEL_24;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !supportItem )
    goto LABEL_23;
LABEL_20:
  id = supportItem->fields.id;
  if ( !Master_object )
    goto LABEL_47;
LABEL_24:
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                        (UserItemMaster_o *)Master_object,
                                                        &entity,
                                                        (int64_t)v14[2].fields.list[1].monitor,
                                                        id,
                                                        0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_47;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  this->fields._PossessionNum_k__BackingField = num;
  if ( EventId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !v14 )
      goto LABEL_47;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v14,
           &v34,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v31 = v34;
      this->fields.eventEntity = (struct EventEntity_o *)v34;
      sub_1C32BC4(&this->fields.eventEntity, v31);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !v15->klass )
    goto LABEL_47;
  if ( !v14 )
    goto LABEL_47;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)v14,
                       (int32_t)v15->klass->_1.this_arg.data,
                       0);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C32BC4(
                                                        &this->fields._CommonConsumeEntityArray_k__BackingField,
                                                        SortedEntityList);
  if ( !v15->klass )
    goto LABEL_47;
  if ( !HIDWORD(v15->klass->_1.castClass) )
  {
    IsOpen = 1;
    goto LABEL_46;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v15->klass || !v14 )
LABEL_47:
    sub_1C32E7C(v14);
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v14, HIDWORD(v15->klass->_1.castClass), 0, 0, 0);
LABEL_46:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool EventCraftListViewItem__IsUsedSupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x19
  EventCraftListViewItem___c_c *v5; // x0
  System_Func_object__long__o *_9__58_0; // x20
  Il2CppObject *v7; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  int64_t v10; // x19

  if ( (byte_4C31BEE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C32C20(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__);
    sub_1C32C20(&EventCraftListViewItem___c_TypeInfo);
    byte_4C31BEE = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._PickupInfoList_k__BackingField, 0) )
    return 0;
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  v5 = EventCraftListViewItem___c_TypeInfo;
  if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
    v5 = EventCraftListViewItem___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__long__o *)v5->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventCraftListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__58_0 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__58_0, v7, Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, 0);
    static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__58_0;
    sub_1C32BC4(&static_fields->__9__58_0, _9__58_0);
  }
  v9 = System_Linq_Enumerable__Select_object__long_(
         (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
         (System_Func_TSource__TResult__o *)_9__58_0,
         (const MethodInfo_31137C8 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
  v10 = System_Linq_Enumerable__Max_66519820((System_Collections_Generic_IEnumerable_long__o *)v9, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v10 >= NetworkManager__getTime(0);
}


bool EventCraftListViewItem__SetSortValue(
        EventCraftListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  const MethodInfo *v6; // x1
  struct EventTradeInfo_o *v7; // x8
  const MethodInfo *v8; // x1
  int64_t v9; // x8
  struct EventTradeInfo_o *v11; // x8
  int64_t *p_sortValue0; // x8
  __int64 v13; // x9
  int32_t NowCompleteNum; // w0

  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !TradeGoodsEntity_k__BackingField )
    sub_1C32E7C(this);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( TradeInfo_k__BackingField )
  {
    if ( EventCraftListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort) >= 1 )
    {
      v7 = this->fields._TradeInfo_k__BackingField;
      if ( !v7 || v7->fields.getNum <= 0 && EventCraftListViewItem__get_NowCompleteNum(this, v6) <= 0 )
      {
        v9 = 1;
        goto LABEL_12;
      }
    }
    if ( !this->fields._TradeInfo_k__BackingField || EventCraftListViewItem__get_NowTradeNum(this, v6) >= 1 )
    {
      v9 = 2;
LABEL_12:
      this->fields.sortValue0 = v9;
      return 1;
    }
    v11 = this->fields._TradeInfo_k__BackingField;
    if ( v11 )
    {
      if ( v11->fields.getNum >= 1 )
      {
        p_sortValue0 = &this->fields.sortValue0;
LABEL_20:
        v13 = 3;
        goto LABEL_21;
      }
      NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, v8);
      p_sortValue0 = &this->fields.sortValue0;
      if ( NowCompleteNum >= 1 )
        goto LABEL_20;
    }
    else
    {
      p_sortValue0 = &this->fields.sortValue0;
    }
    v13 = 4;
LABEL_21:
    *p_sortValue0 = v13;
    return 1;
  }
  this->fields.sortValue0 = 0;
  return 1;
}


void EventCraftListViewItem__UpdateCraftUserInfo(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEventTradeEntity_o *v4; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x1
  struct UserEventTradeEntity_o *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v13; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C31BE8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_1C32C20(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__);
    sub_1C32C20(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__);
    sub_1C32C20(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventTradeInfo__bool__TypeInfo);
    byte_4C31BE8 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0) )
  {
    v4 = entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1C32BC4(&this->fields._UserTradeEntity_k__BackingField, v4);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__,
      0);
    v8 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
           tradeList,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v8 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v8;
  sub_1C32BC4(&this->fields._TradeInfo_k__BackingField, v8);
  v9 = this->fields._UserTradeEntity_k__BackingField;
  if ( v9 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.pickupList) != 0 )
  {
    v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__,
      0);
    v12 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v11,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v13 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v12,
                                                                              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v13 = 0;
  }
  this->fields._PickupInfoList_k__BackingField = v13;
  sub_1C32BC4(&this->fields._PickupInfoList_k__BackingField, v13);
}


void EventCraftListViewItem__UpdateSupportToolPossessionNum(
        EventCraftListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = num;
}


bool EventCraftListViewItem___UpdateCraftUserInfo_b__36_0(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


bool EventCraftListViewItem___UpdateCraftUserInfo_b__36_1(
        EventCraftListViewItem_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *EventCraftListViewItem__get_CommonConsumeEntityArray(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
}


int32_t EventCraftListViewItem__get_EventId(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool EventCraftListViewItem__get_IsAbleReceiveRewards(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventCraftListViewItem__get_NowCompleteNum(this, method) > 0;
  return 1;
}


bool EventCraftListViewItem__get_IsBuyAble(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  EventCraftListViewItem___c_c *v5; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v7; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4C31BEB & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_1C32C20(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_1C32C20(&Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__);
    sub_1C32C20(&EventCraftListViewItem___c_TypeInfo);
    byte_4C31BEB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._CommonConsumeEntityArray_k__BackingField,
         0) )
  {
    return 0;
  }
  else
  {
    CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
    v5 = EventCraftListViewItem___c_TypeInfo;
    if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
      v5 = EventCraftListViewItem___c_TypeInfo;
    }
    _9__45_0 = (System_Func_object__bool__o *)v5->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = EventCraftListViewItem___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonConsumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__45_0, v7, Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, 0);
      static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__45_0;
      sub_1C32BC4(&static_fields->__9__45_0, _9__45_0);
    }
    return !BasicHelper__Any_object__51144764(
              (System_Object_array *)CommonConsumeEntityArray_k__BackingField,
              (System_Func_T__bool__o *)_9__45_0,
              (const MethodInfo_30C683C *)Method_BasicHelper_Any_CommonConsumeEntity___);
  }
}


bool EventCraftListViewItem__get_IsEventEnd(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_4C31BE9 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31BE9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1C32E7C(Time);
  return Time >= eventEntity->fields.endedAt;
}


bool EventCraftListViewItem__get_IsRefillable(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v9; // w19

  if ( (byte_4C31BED & 1) == 0 )
  {
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    byte_4C31BED = 1;
  }
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField
    || TradeInfo_k__BackingField->fields.getNum > 0
    || EventCraftListViewItem__get_NowCompleteNum(this, method) > 0
    || !EventCraftListViewItem__get_IsBuyAble(this, v4) )
  {
    return 0;
  }
  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(this, v5);
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  v9 = NowTradeNum;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return v9 < EventCraftTimeCalculation__GetCraftMaxNum(
                PickupInfoList_k__BackingField,
                0,
                TradeGoodsEntity_k__BackingField,
                0);
}


bool EventCraftListViewItem__get_IsRelease(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRelease_k__BackingField;
}


bool EventCraftListViewItem__get_IsTradeComplete(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField && EventCraftListViewItem__get_NowTradeNum(this, method) < 1;
}


bool EventCraftListViewItem__get_IsTrading(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField != 0;
}


int32_t EventCraftListViewItem__get_ItemCount(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( CommonConsumeEntityArray_k__BackingField )
    return CommonConsumeEntityArray_k__BackingField->max_length;
  else
    return 0;
}


int32_t EventCraftListViewItem__get_NowCompleteNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x20

  if ( (byte_4C31BEC & 1) == 0 )
  {
    sub_1C32C20(&EventCraftTimeCalculation_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31BEC = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum(this, 0, Time, 0);
}


int32_t EventCraftListViewItem__get_NowTradeNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t tradeNum; // w20
  __int64 NowCompleteNum; // x0
  struct EventTradeInfo_o *v6; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, method);
  v6 = this->fields._TradeInfo_k__BackingField;
  if ( !v6 )
    sub_1C32E7C(NowCompleteNum);
  return tradeNum - NowCompleteNum + v6->fields.getNum;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *EventCraftListViewItem__get_PickupInfoList(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PickupInfoList_k__BackingField;
}


int32_t EventCraftListViewItem__get_PossessionNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._PossessionNum_k__BackingField;
}


System_String_o *EventCraftListViewItem__get_RestTimeEventAt(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  _BOOL8 IsEventEnd; // x0
  System_String_o *v4; // x19
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  System_String_o *RestTime2; // x0
  struct EventEntity_o *eventEntity; // x8
  int64_t endedAt; // x19
  int64_t Time; // x20
  Il2CppObject *v16; // x19
  System_String_o *v17; // x0
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C31BEA & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_13399/*"TIME_REST2_MINUTES"*/);
    sub_1C32C20(&StringLiteral_13489/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    byte_4C31BEA = 1;
  }
  IsEventEnd = EventCraftListViewItem__get_IsEventEnd(this, method);
  if ( IsEventEnd )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13399/*"TIME_REST2_MINUTES"*/, 0);
    v19 = 0;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v5, v6, v7, v8, v9, v10);
    RestTime2 = System_String__Format(v4, v11, 0);
  }
  else
  {
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      sub_1C32E7C(IsEventEnd);
    endedAt = eventEntity->fields.endedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = LocalizationManager__GetRestTime2(endedAt, Time, 0);
  }
  v16 = (Il2CppObject *)RestTime2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13489/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0);
  return System_String__Format(v17, v16, 0);
}


ItemEntity_o *EventCraftListViewItem__get_SupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SupportTool_k__BackingField;
}


EventTradeGoodsEntity_o *EventCraftListViewItem__get_TradeGoodsEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeGoodsEntity_k__BackingField;
}


EventTradeInfo_o *EventCraftListViewItem__get_TradeInfo(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField;
}


System_Action_o *EventCraftListViewItem__get_UpdateReceiveAllButtonState(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateReceiveAllButtonState_k__BackingField;
}


UserEventTradeEntity_o *EventCraftListViewItem__get_UserTradeEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserTradeEntity_k__BackingField;
}


void EventCraftListViewItem__set_PickupInfoList(
        EventCraftListViewItem_o *this,
        System_Collections_Generic_List_EventCraftPickupInfo__o *value,
        const MethodInfo *method)
{
  this->fields._PickupInfoList_k__BackingField = value;
  sub_1C32BC4(&this->fields._PickupInfoList_k__BackingField, value);
}


void EventCraftListViewItem__set_PossessionNum(EventCraftListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = value;
}


void EventCraftListViewItem__set_TradeInfo(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *value,
        const MethodInfo *method)
{
  this->fields._TradeInfo_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeInfo_k__BackingField, value);
}


void EventCraftListViewItem__set_UserTradeEntity(
        EventCraftListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserTradeEntity_k__BackingField = value;
  sub_1C32BC4(&this->fields._UserTradeEntity_k__BackingField, value);
}


void EventCraftListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C31BEF & 1) == 0 )
  {
    sub_1C32C20(&EventCraftListViewItem___c_TypeInfo);
    byte_4C31BEF = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventCraftListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewItem___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItem___c_o *)v1;
  sub_1C32BC4(EventCraftListViewItem___c_TypeInfo->static_fields, v1);
}


void EventCraftListViewItem___c___ctor(EventCraftListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventCraftListViewItem___c___IsUsedSupportTool_b__58_0(
        EventCraftListViewItem___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.endedAt;
}


bool EventCraftListViewItem___c___get_IsBuyAble_b__45_0(
        EventCraftListViewItem___c_o *this,
        CommonConsumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return CommonConsumeEntity__GetUserBuyableNum(x, 0) < 1;
}


void EventCraftListViewItem___c__DisplayClass35_0___ctor(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftListViewItem___c__DisplayClass35_0____ctor_b__0(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0 )
    sub_1C32E7C(this);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}


bool EventCraftListViewItem___c__DisplayClass35_0____ctor_b__1(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0 )
    sub_1C32E7C(this);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}