void EventTradeListViewItem___ctor(
        EventTradeListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  __int64 v11; // x25
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x20
  struct EventTradeGoodsEntity_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x21
  System_Func_object__bool__o *v43; // x22
  Il2CppObject *v44; // x1
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x2
  bool IsOpen; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596AD1F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_2213A60(&System_Func_EventTradeInfo__bool__TypeInfo);
    sub_2213A60(&Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__);
    sub_2213A60(&EventTradeListViewItem___c__DisplayClass25_0_TypeInfo);
    byte_596AD1F = 1;
  }
  entity = 0;
  v11 = sub_2213CCC(EventTradeListViewItem___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_27;
  *(_QWORD *)(v11 + 16) = tradeGoodsEntity;
  v20 = v11 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)tradeGoodsEntity, v14, v15, v16, v17, v18, v19);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v21 = *(struct EventTradeGoodsEntity_o **)(v11 + 16);
  this->fields._TradeGoodsEntity_k__BackingField = v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeGoodsEntity_k__BackingField,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int32_t)updateReceiveAllButton,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  EventTradeListViewItem__UpdateTradeUserInfo(this, v34);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v43 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v11,
      Method_EventTradeListViewItem___c__DisplayClass25_0___ctor_b__0__,
      0);
    v44 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            tradeList,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v44 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)v44,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( this->fields._EventId_k__BackingField >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45, v46);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_27;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v52 = (int)entity;
      this->fields.eventEntity = (struct EventEntity_o *)entity;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventEntity, v52, v46, v47, v48, v49, v50, v51);
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45, v46);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v20 )
    goto LABEL_27;
  if ( !Master_object )
    goto LABEL_27;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)Master_object,
                       *(_DWORD *)(*(_QWORD *)v20 + 48LL),
                       0);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommonConsumeEntityArray_k__BackingField,
    (int32_t)SortedEntityList,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !*(_QWORD *)v20 )
    goto LABEL_27;
  if ( !*(_DWORD *)(*(_QWORD *)v20 + 76LL) )
  {
    IsOpen = 1;
    goto LABEL_26;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v60);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v20 || !Master_object )
LABEL_27:
    sub_2213CDC(Master_object, v13);
  IsOpen = CommonReleaseMaster__IsOpen(
             (CommonReleaseMaster_o *)Master_object,
             *(_DWORD *)(*(_QWORD *)v20 + 76LL),
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
  int32_t NowTradeNum; // w0
  const MethodInfo *v7; // x1
  struct EventTradeInfo_o *v8; // x8
  const MethodInfo *v9; // x1
  int64_t v10; // x8
  struct EventTradeInfo_o *v11; // x8

  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !TradeGoodsEntity_k__BackingField )
    sub_2213CDC(this, sort);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( !TradeInfo_k__BackingField )
  {
    v10 = 0;
    goto LABEL_18;
  }
  NowTradeNum = EventTradeListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort);
  v8 = this->fields._TradeInfo_k__BackingField;
  if ( NowTradeNum >= 1 )
  {
    if ( !v8 )
      goto LABEL_12;
    if ( v8->fields.getNum > 0 )
      goto LABEL_9;
    if ( EventTradeListViewItem__get_NowCompleteNum(this, v7) < 1 )
    {
LABEL_12:
      v10 = 1;
      goto LABEL_18;
    }
    v8 = this->fields._TradeInfo_k__BackingField;
  }
  if ( !v8 )
  {
LABEL_10:
    v10 = 2;
    goto LABEL_18;
  }
LABEL_9:
  if ( EventTradeListViewItem__get_NowTradeNum(this, v7) > 0 )
    goto LABEL_10;
  v11 = this->fields._TradeInfo_k__BackingField;
  if ( v11 && (v11->fields.getNum > 0 || EventTradeListViewItem__get_NowCompleteNum(this, v9) > 0) )
    v10 = 3;
  else
    v10 = 4;
LABEL_18:
  this->fields.sortValue0 = v10;
  return 1;
}


void EventTradeListViewItem__UpdateTradeUserInfo(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AD20 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_2213A60(&Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__);
    sub_2213A60(&System_Func_EventTradeInfo__bool__TypeInfo);
    byte_596AD20 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0) )
  {
    v13 = (int)entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._UserTradeEntity_k__BackingField,
      v13,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventTradeListViewItem__UpdateTradeUserInfo_b__26_0__,
      0);
    v17 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            tradeList,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v17 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)v17,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


bool EventTradeListViewItem___UpdateTradeUserInfo_b__26_0(
        EventTradeListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_2213CDC(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *EventTradeListViewItem__get_CommonConsumeEntityArray(
        EventTradeListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
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
  __int64 v5; // x21

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( !CommonConsumeEntityArray_k__BackingField )
    goto LABEL_9;
  max_length = CommonConsumeEntityArray_k__BackingField->max_length;
  v4 = max_length < 1;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v5 >= max_length )
        sub_2213CE4(this);
      this = (EventTradeListViewItem_o *)CommonConsumeEntityArray_k__BackingField->m_Items[v5];
      if ( !this )
        break;
      this = (EventTradeListViewItem_o *)CommonConsumeEntity__GetUserBuyableNum((CommonConsumeEntity_o *)this, 0);
      if ( (int)this > 0 )
      {
        max_length = CommonConsumeEntityArray_k__BackingField->max_length;
        v4 = (int)++v5 >= max_length;
        if ( (int)v5 < max_length )
          continue;
      }
      return v4;
    }
LABEL_9:
    sub_2213CDC(this, method);
  }
  return v4;
}


bool EventTradeListViewItem__get_IsEventEnd(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0
  __int64 v5; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_596AD21 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AD21 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_2213CDC(Time, v5);
  return Time >= eventEntity->fields.endedAt;
}


bool EventTradeListViewItem__get_IsRefillable(EventTradeListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v10; // w19

  if ( (byte_596AD23 & 1) == 0 )
  {
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    byte_596AD23 = 1;
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
  v10 = NowTradeNum;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v7, v8);
  return v10 < EventTradeTimeCalculation__GetTradeMaxNum(TradeGoodsEntity_k__BackingField, 0);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x20

  if ( (byte_596AD22 & 1) == 0 )
  {
    sub_2213A60(&EventTradeTimeCalculation_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AD22 = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v4, v5);
  return EventTradeTimeCalculation__GetCompleteNum(this, Time, 0);
}


int32_t EventTradeListViewItem__get_NowTradeNum(EventTradeListViewItem_o *this, const MethodInfo *method)
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
    sub_2213CDC(NowCompleteNum, v6);
  return tradeNum - NowCompleteNum + v7->fields.getNum;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeListViewItem__set_UpdateReceiveAllButtonState(
        EventTradeListViewItem_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UpdateReceiveAllButtonState_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeListViewItem__set_UserTradeEntity(
        EventTradeListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserTradeEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserTradeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}