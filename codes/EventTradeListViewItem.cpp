void EventTradeListViewItem___ctor(
        EventTradeListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  EventTradeListViewItem___c__DisplayClass25_0_o *v11; // x25
  Il2CppObject *Master_object; // x0
  EventTradeListViewItem___c__DisplayClass25_0_Fields *p_fields; // x20
  struct EventTradeGoodsEntity_o *v14; // x1
  const MethodInfo *v15; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x21
  System_Func_object__bool__o *v18; // x22
  Il2CppObject *v19; // x1
  Il2CppObject *v20; // x1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  bool IsOpen; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3D9CB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C37058(&System_Func_EventTradeInfo__bool__TypeInfo);
    sub_1C37058(&Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__);
    sub_1C37058(&EventTradeListViewItem___c__DisplayClass25_0_TypeInfo);
    byte_4C3D9CB = 1;
  }
  entity = 0;
  v11 = (EventTradeListViewItem___c__DisplayClass25_0_o *)sub_1C372A4(EventTradeListViewItem___c__DisplayClass25_0_TypeInfo);
  EventTradeListViewItem___c__DisplayClass25_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_27;
  v11->fields.tradeGoodsEntity = tradeGoodsEntity;
  p_fields = &v11->fields;
  sub_1C36FFC(&v11->fields, tradeGoodsEntity);
  ListViewItem___ctor_43804668((ListViewItem_o *)this, index, 0);
  v14 = v11->fields.tradeGoodsEntity;
  this->fields._TradeGoodsEntity_k__BackingField = v14;
  sub_1C36FFC(&this->fields._TradeGoodsEntity_k__BackingField, v14);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1C36FFC(&this->fields._UpdateReceiveAllButtonState_k__BackingField, updateReceiveAllButton);
  EventTradeListViewItem__UpdateTradeUserInfo(this, v15);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v18 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v11,
      Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__,
      0);
    v19 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            tradeList,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v19 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v19;
  sub_1C36FFC(&this->fields._TradeInfo_k__BackingField, v19);
  if ( this->fields._EventId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v20 = entity;
      this->fields.eventEntity = (struct EventEntity_o *)entity;
      sub_1C36FFC(&this->fields.eventEntity, v20);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !p_fields->tradeGoodsEntity )
    goto LABEL_27;
  if ( !Master_object )
    goto LABEL_27;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)Master_object,
                       p_fields->tradeGoodsEntity->fields.commonConsumeId,
                       0);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  Master_object = (Il2CppObject *)sub_1C36FFC(&this->fields._CommonConsumeEntityArray_k__BackingField, SortedEntityList);
  if ( !p_fields->tradeGoodsEntity )
    goto LABEL_27;
  if ( !p_fields->tradeGoodsEntity->fields.commonReleaseId )
  {
    IsOpen = 1;
    goto LABEL_26;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !p_fields->tradeGoodsEntity || !Master_object )
LABEL_27:
    sub_1C372B4(Master_object);
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Master_object,
             p_fields->tradeGoodsEntity->fields.commonReleaseId,
             0,
             0,
             0);
LABEL_26:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool EventTradeListViewItem__SetSortValue(
        EventTradeListViewItem_o *this,
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
    sub_1C372B4(this);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( TradeInfo_k__BackingField )
  {
    if ( EventTradeListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort) >= 1 )
    {
      v7 = this->fields._TradeInfo_k__BackingField;
      if ( !v7 || v7->fields.getNum <= 0 && EventTradeListViewItem__get_NowCompleteNum(this, v6) <= 0 )
      {
        v9 = 1;
        goto LABEL_12;
      }
    }
    if ( !this->fields._TradeInfo_k__BackingField || EventTradeListViewItem__get_NowTradeNum(this, v6) >= 1 )
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
      NowCompleteNum = EventTradeListViewItem__get_NowCompleteNum(this, v8);
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


void EventTradeListViewItem__UpdateTradeUserInfo(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserEventTradeEntity_o *v4; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3D9CC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_1C37058(&Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__);
    sub_1C37058(&System_Func_EventTradeInfo__bool__TypeInfo);
    byte_4C3D9CC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0) )
  {
    v4 = entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1C36FFC(&this->fields._UserTradeEntity_k__BackingField, v4);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v7 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__,
      0);
    v8 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
           tradeList,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v8 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v8;
  sub_1C36FFC(&this->fields._TradeInfo_k__BackingField, v8);
}


bool EventTradeListViewItem___UpdateTradeUserInfo_b__26_0(
        EventTradeListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_1C372B4(this);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *EventTradeListViewItem__get_CommonConsumeEntityArray(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
}


int64_t EventTradeListViewItem__get_EventEndedAt(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1C372B4(this);
  return eventEntity->fields.endedAt;
}


int32_t EventTradeListViewItem__get_EventId(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool EventTradeListViewItem__get_IsAbleReceiveRewards(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventTradeListViewItem__get_NowCompleteNum(this, method) > 0;
  return 1;
}


bool EventTradeListViewItem__get_IsBuyAble(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  int max_length; // w8
  bool v4; // w20
  int v5; // w21

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( !CommonConsumeEntityArray_k__BackingField )
    goto LABEL_10;
  max_length = CommonConsumeEntityArray_k__BackingField->max_length;
  v4 = max_length > 0;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C372BC(this);
      this = (EventTradeListViewItem_o *)CommonConsumeEntityArray_k__BackingField->m_Items[v5];
      if ( !this )
        break;
      this = (EventTradeListViewItem_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0);
      if ( (int)this > 0 )
      {
        max_length = CommonConsumeEntityArray_k__BackingField->max_length;
        v4 = ++v5 < max_length;
        if ( v5 < max_length )
          continue;
      }
      return !v4;
    }
LABEL_10:
    sub_1C372B4(this);
  }
  return !v4;
}


bool EventTradeListViewItem__get_IsEventEnd(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_4C3D9CD & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3D9CD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1C372B4(Time);
  return Time >= eventEntity->fields.endedAt;
}


bool EventTradeListViewItem__get_IsRefillable(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v8; // w19

  if ( (byte_4C3D9CF & 1) == 0 )
  {
    sub_1C37058(&EventTradeTimeCalculation_TypeInfo);
    byte_4C3D9CF = 1;
  }
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField
    || TradeInfo_k__BackingField->fields.getNum > 0
    || EventTradeListViewItem__get_NowCompleteNum(this, method) > 0
    || !EventTradeListViewItem__get_IsBuyAble(this, v4) )
  {
    return 0;
  }
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(this, v5);
  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  v8 = NowTradeNum;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return v8 < EventTradeTimeCalculation__GetTradeMaxNum(TradeGoodsEntity_k__BackingField, 0);
}


bool EventTradeListViewItem__get_IsRelease(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRelease_k__BackingField;
}


bool EventTradeListViewItem__get_IsTradeComplete(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField && EventTradeListViewItem__get_NowTradeNum(this, method) < 1;
}


bool EventTradeListViewItem__get_IsTrading(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField != 0;
}


int32_t EventTradeListViewItem__get_ItemCount(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( CommonConsumeEntityArray_k__BackingField )
    return CommonConsumeEntityArray_k__BackingField->max_length;
  else
    return 0;
}


int32_t EventTradeListViewItem__get_NowCompleteNum(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x20

  if ( (byte_4C3D9CE & 1) == 0 )
  {
    sub_1C37058(&EventTradeTimeCalculation_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3D9CE = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return EventTradeTimeCalculation__GetCompleteNum(this, Time, 0);
}


int32_t EventTradeListViewItem__get_NowTradeNum(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t tradeNum; // w20
  __int64 NowCompleteNum; // x0
  struct EventTradeInfo_o *v6; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  NowCompleteNum = EventTradeListViewItem__get_NowCompleteNum(this, method);
  v6 = this->fields._TradeInfo_k__BackingField;
  if ( !v6 )
    sub_1C372B4(NowCompleteNum);
  return tradeNum - NowCompleteNum + v6->fields.getNum;
}


EventTradeGoodsEntity_o *EventTradeListViewItem__get_TradeGoodsEntity(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeGoodsEntity_k__BackingField;
}


EventTradeInfo_o *EventTradeListViewItem__get_TradeInfo(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField;
}


System_Action_o *EventTradeListViewItem__get_UpdateReceiveAllButtonState(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateReceiveAllButtonState_k__BackingField;
}


UserEventTradeEntity_o *EventTradeListViewItem__get_UserTradeEntity(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserTradeEntity_k__BackingField;
}


void EventTradeListViewItem__set_TradeInfo(
        EventTradeListViewItem_o *this,
        EventTradeInfo_o *value,
        const MethodInfo *method)
{
  this->fields._TradeInfo_k__BackingField = value;
  sub_1C36FFC(&this->fields._TradeInfo_k__BackingField, value);
}


void EventTradeListViewItem__set_UpdateReceiveAllButtonState(
        EventTradeListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  this->fields._UpdateReceiveAllButtonState_k__BackingField = value;
  sub_1C36FFC(&this->fields._UpdateReceiveAllButtonState_k__BackingField, value);
}


void EventTradeListViewItem__set_UserTradeEntity(
        EventTradeListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserTradeEntity_k__BackingField = value;
  sub_1C36FFC(&this->fields._UserTradeEntity_k__BackingField, value);
}


void EventTradeListViewItem___c__DisplayClass25_0___ctor(
        EventTradeListViewItem___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTradeListViewItem___c__DisplayClass25_0____ctor_b__0(
        EventTradeListViewItem___c__DisplayClass25_0_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0 )
    sub_1C372B4(this);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}