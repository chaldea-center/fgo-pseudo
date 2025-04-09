// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItem___ctor(
        EventTradeListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x25
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  const MethodInfo *v23; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x21
  System_Func_object__bool__o *v26; // x22
  Il2CppObject *v27; // x1
  bool IsOpen; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B5C80 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v12);
    sub_1B4CF90(&DataManager_TypeInfo, v13);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v14);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v15);
    sub_1B4CF90(&System_Func_EventTradeInfo__bool__TypeInfo, v16);
    sub_1B4CF90(&Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__, v17);
    sub_1B4CF90(&EventTradeListViewItem___c__DisplayClass25_0_TypeInfo, v18);
    byte_49B5C80 = 1;
  }
  entity = 0LL;
  v19 = sub_1B4D1DC(EventTradeListViewItem___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_27;
  *(_QWORD *)(v19 + 16) = tradeGoodsEntity;
  v22 = v19 + 16;
  sub_1B4CF34(v19 + 16);
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields._TradeGoodsEntity_k__BackingField = *(struct EventTradeGoodsEntity_o **)(v19 + 16);
  sub_1B4CF34(&this->fields._TradeGoodsEntity_k__BackingField);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1B4CF34(&this->fields._UpdateReceiveAllButtonState_k__BackingField);
  EventTradeListViewItem__UpdateTradeUserInfo(this, v23);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v26 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v19,
      Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__,
      0LL);
    v27 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
            tradeList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v27 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v27;
  sub_1B4CF34(&this->fields._TradeInfo_k__BackingField);
  if ( this->fields._EventId_k__BackingField >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      this->fields.eventEntity = (struct EventEntity_o *)entity;
      sub_1B4CF34(&this->fields.eventEntity);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v22 )
    goto LABEL_27;
  if ( !Master_object )
    goto LABEL_27;
  this->fields._CommonConsumeEntityArray_k__BackingField = CommonConsumeMaster__GetSortedEntityList(
                                                             (CommonConsumeMaster_o *)Master_object,
                                                             *(_DWORD *)(*(_QWORD *)v22 + 48LL),
                                                             0LL);
  Master_object = (Il2CppObject *)sub_1B4CF34(&this->fields._CommonConsumeEntityArray_k__BackingField);
  if ( !*(_QWORD *)v22 )
    goto LABEL_27;
  if ( !*(_DWORD *)(*(_QWORD *)v22 + 76LL) )
  {
    IsOpen = 1;
    goto LABEL_26;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v22 || !Master_object )
LABEL_27:
    sub_1B4D1EC(Master_object, v21);
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Master_object,
             *(_DWORD *)(*(_QWORD *)v22 + 76LL),
             0LL,
             0,
             0LL);
LABEL_26:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool __fastcall EventTradeListViewItem__SetSortValue(
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
    sub_1B4D1EC(this, sort);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( TradeInfo_k__BackingField )
  {
    if ( EventTradeListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort) >= 1 )
    {
      v7 = this->fields._TradeInfo_k__BackingField;
      if ( !v7 || v7->fields.getNum <= 0 && EventTradeListViewItem__get_NowCompleteNum(this, v6) <= 0 )
      {
        v9 = 1LL;
        goto LABEL_12;
      }
    }
    if ( !this->fields._TradeInfo_k__BackingField || EventTradeListViewItem__get_NowTradeNum(this, v6) >= 1 )
    {
      v9 = 2LL;
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
        v13 = 3LL;
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
    v13 = 4LL;
LABEL_21:
    *p_sortValue0 = v13;
    return 1;
  }
  this->fields.sortValue0 = 0LL;
  return 1;
}


void __fastcall EventTradeListViewItem__UpdateTradeUserInfo(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B5C81 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v4);
    sub_1B4CF90(&Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__, v5);
    sub_1B4CF90(&System_Func_EventTradeInfo__bool__TypeInfo, v6);
    byte_49B5C81 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1B4D1EC(0LL, v8);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0LL) )
  {
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1B4CF34(&this->fields._UserTradeEntity_k__BackingField);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v11 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__,
      0LL);
    v12 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
            tradeList,
            (System_Func_TSource__bool__o *)v11,
            (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v12 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v12;
  sub_1B4CF34(&this->fields._TradeInfo_k__BackingField);
}


bool __fastcall EventTradeListViewItem___UpdateTradeUserInfo_b__26_0(
        EventTradeListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1B4D1EC(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *__fastcall EventTradeListViewItem__get_CommonConsumeEntityArray(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
}


int64_t __fastcall EventTradeListViewItem__get_EventEndedAt(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8

  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1B4D1EC(this, method);
  return eventEntity->fields.endedAt;
}


int32_t __fastcall EventTradeListViewItem__get_EventId(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool __fastcall EventTradeListViewItem__get_IsAbleReceiveRewards(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventTradeListViewItem__get_NowCompleteNum(this, method) > 0;
  return 1;
}


bool __fastcall EventTradeListViewItem__get_IsBuyAble(EventTradeListViewItem_o *this, const MethodInfo *method)
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
        sub_1B4D1F4(this, method);
      this = (EventTradeListViewItem_o *)CommonConsumeEntityArray_k__BackingField->m_Items[v5];
      if ( !this )
        break;
      this = (EventTradeListViewItem_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0LL);
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
    sub_1B4D1EC(this, method);
  }
  return !v4;
}


bool __fastcall EventTradeListViewItem__get_IsEventEnd(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_49B5C82 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B5C82 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1B4D1EC(Time, v4);
  return Time >= eventEntity->fields.endedAt;
}


bool __fastcall EventTradeListViewItem__get_IsRefillable(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v8; // w19

  if ( (byte_49B5C84 & 1) == 0 )
  {
    sub_1B4CF90(&EventTradeTimeCalculation_TypeInfo, method);
    byte_49B5C84 = 1;
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
  return v8 < EventTradeTimeCalculation__GetTradeMaxNum(TradeGoodsEntity_k__BackingField, 0LL);
}


bool __fastcall EventTradeListViewItem__get_IsRelease(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRelease_k__BackingField;
}


bool __fastcall EventTradeListViewItem__get_IsTradeComplete(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField && EventTradeListViewItem__get_NowTradeNum(this, method) < 1;
}


bool __fastcall EventTradeListViewItem__get_IsTrading(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField != 0LL;
}


int32_t __fastcall EventTradeListViewItem__get_ItemCount(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( CommonConsumeEntityArray_k__BackingField )
    return CommonConsumeEntityArray_k__BackingField->max_length;
  else
    return 0;
}


int32_t __fastcall EventTradeListViewItem__get_NowCompleteNum(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x20

  if ( (byte_49B5C83 & 1) == 0 )
  {
    sub_1B4CF90(&EventTradeTimeCalculation_TypeInfo, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    byte_49B5C83 = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  return EventTradeTimeCalculation__GetCompleteNum(this, Time, 0LL);
}


int32_t __fastcall EventTradeListViewItem__get_NowTradeNum(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t tradeNum; // w20
  __int64 NowCompleteNum; // x0
  __int64 v6; // x1
  struct EventTradeInfo_o *v7; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  tradeNum = TradeInfo_k__BackingField->fields.tradeNum;
  NowCompleteNum = EventTradeListViewItem__get_NowCompleteNum(this, method);
  v7 = this->fields._TradeInfo_k__BackingField;
  if ( !v7 )
    sub_1B4D1EC(NowCompleteNum, v6);
  return tradeNum - NowCompleteNum + v7->fields.getNum;
}


EventTradeGoodsEntity_o *__fastcall EventTradeListViewItem__get_TradeGoodsEntity(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeGoodsEntity_k__BackingField;
}


EventTradeInfo_o *__fastcall EventTradeListViewItem__get_TradeInfo(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField;
}


System_Action_o *__fastcall EventTradeListViewItem__get_UpdateReceiveAllButtonState(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateReceiveAllButtonState_k__BackingField;
}


UserEventTradeEntity_o *__fastcall EventTradeListViewItem__get_UserTradeEntity(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserTradeEntity_k__BackingField;
}


void __fastcall EventTradeListViewItem__set_TradeInfo(
        EventTradeListViewItem_o *this,
        EventTradeInfo_o *value,
        const MethodInfo *method)
{
  this->fields._TradeInfo_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeInfo_k__BackingField);
}


void __fastcall EventTradeListViewItem__set_UpdateReceiveAllButtonState(
        EventTradeListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  this->fields._UpdateReceiveAllButtonState_k__BackingField = value;
  sub_1B4CF34(&this->fields._UpdateReceiveAllButtonState_k__BackingField);
}


void __fastcall EventTradeListViewItem__set_UserTradeEntity(
        EventTradeListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserTradeEntity_k__BackingField = value;
  sub_1B4CF34(&this->fields._UserTradeEntity_k__BackingField);
}


void __fastcall EventTradeListViewItem___c__DisplayClass25_0___ctor(
        EventTradeListViewItem___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTradeListViewItem___c__DisplayClass25_0____ctor_b__0(
        EventTradeListViewItem___c__DisplayClass25_0_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1B4D1EC(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}