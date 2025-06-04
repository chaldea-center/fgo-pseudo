// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewItem___ctor(
        EventCraftListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        ItemEntity_o *supportItem,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x20
  struct EventTradeGoodsEntity_o *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x22
  System_Func_object__bool__o *v45; // x23
  Il2CppObject *v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UserEventTradeEntity_o *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v51; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v53; // x1
  Il2CppObject *Master_object; // x22
  int32_t id; // w3
  int32_t num; // w8
  int32_t EventId_k__BackingField; // w9
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  bool IsOpen; // w0
  Il2CppObject *v65; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B0620D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_CommonConsumeMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, v15);
    sub_1BC3008(&DataManager_TypeInfo, v16);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v18);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v19);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v20);
    sub_1BC3008(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v21);
    sub_1BC3008(&System_Func_EventTradeInfo__bool__TypeInfo, v22);
    sub_1BC3008(&NetworkManager_TypeInfo, v23);
    sub_1BC3008(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__, v24);
    sub_1BC3008(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__, v25);
    sub_1BC3008(&EventCraftListViewItem___c__DisplayClass35_0_TypeInfo, v26);
    byte_4B0620D = 1;
  }
  entity = 0LL;
  v65 = 0LL;
  v27 = sub_1BC3254(EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_47;
  *(_QWORD *)(v27 + 16) = tradeGoodsEntity;
  v32 = v27 + 16;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 16), (int32_t)tradeGoodsEntity, v30, v31);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  v33 = *(struct EventTradeGoodsEntity_o **)(v27 + 16);
  this->fields._TradeGoodsEntity_k__BackingField = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._TradeGoodsEntity_k__BackingField, (int32_t)v33, v34, v35);
  this->fields._SupportTool_k__BackingField = supportItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._SupportTool_k__BackingField, (int32_t)supportItem, v36, v37);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int32_t)updateReceiveAllButton,
    v38,
    v39);
  EventCraftListViewItem__UpdateCraftUserInfo(this, v40);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v45 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v45,
      (Il2CppObject *)v27,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__,
      0LL);
    v46 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            tradeList,
            (System_Func_TSource__bool__o *)v45,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v46 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._TradeInfo_k__BackingField, (int32_t)v46, v41, v42);
  v49 = this->fields._UserTradeEntity_k__BackingField;
  if ( v49 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v49->fields.pickupList) != 0LL )
  {
    v51 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v51,
      (Il2CppObject *)v27,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__,
      0LL);
    v52 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v53 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v52,
                                                                              (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v53 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v53;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._PickupInfoList_k__BackingField, (int32_t)v53, v47, v48);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v29);
    byte_4AFC1F1 = 1;
  }
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
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
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( !supportItem )
    goto LABEL_23;
LABEL_20:
  id = supportItem->fields.id;
  if ( !Master_object )
    goto LABEL_47;
LABEL_24:
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                        (UserItemMaster_o *)Master_object,
                                                        &entity,
                                                        (int64_t)v28[2].fields.list[1].monitor,
                                                        id,
                                                        0LL);
  if ( ((unsigned __int8)v28 & 1) != 0 )
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
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !v28 )
      goto LABEL_47;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v28,
           &v65,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v60 = (int)v65;
      this->fields.eventEntity = (struct EventEntity_o *)v65;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.eventEntity, v60, v58, v59);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v32 )
    goto LABEL_47;
  if ( !v28 )
    goto LABEL_47;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)v28,
                       *(_DWORD *)(*(_QWORD *)v32 + 48LL),
                       0LL);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._CommonConsumeEntityArray_k__BackingField,
    (int32_t)SortedEntityList,
    v62,
    v63);
  if ( !*(_QWORD *)v32 )
    goto LABEL_47;
  if ( !*(_DWORD *)(*(_QWORD *)v32 + 76LL) )
  {
    IsOpen = 1;
    goto LABEL_46;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v32 || !v28 )
LABEL_47:
    sub_1BC3264(v28, v29);
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v28, *(_DWORD *)(*(_QWORD *)v32 + 76LL), 0LL, 0, 0LL);
LABEL_46:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool __fastcall EventCraftListViewItem__IsUsedSupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x19
  EventCraftListViewItem___c_c *v9; // x0
  System_Func_T__TResult__o *_9__58_0; // x20
  Il2CppObject *v11; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  int64_t v16; // x19

  if ( (byte_4B06214 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, method);
    sub_1BC3008(&System_Func_EventCraftPickupInfo__long__TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, v5);
    sub_1BC3008(&EventCraftListViewItem___c_TypeInfo, v6);
    byte_4B06214 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._PickupInfoList_k__BackingField, 0LL) )
    return 0;
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  v9 = EventCraftListViewItem___c_TypeInfo;
  if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
    v9 = EventCraftListViewItem___c_TypeInfo;
  }
  _9__58_0 = (System_Func_T__TResult__o *)v9->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventCraftListViewItem___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__58_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_EventCraftPickupInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__58_0, v11, Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, 0LL);
    static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__58_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Select_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__58_0,
          (const MethodInfo_303602C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
  v16 = System_Linq_Enumerable__Max_65349488((System_Collections_Generic_IEnumerable_long__o *)v15, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v16 >= NetworkManager__getTime(0LL);
}


bool __fastcall EventCraftListViewItem__SetSortValue(
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
    sub_1BC3264(this, sort);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( TradeInfo_k__BackingField )
  {
    if ( EventCraftListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort) >= 1 )
    {
      v7 = this->fields._TradeInfo_k__BackingField;
      if ( !v7 || v7->fields.getNum <= 0 && EventCraftListViewItem__get_NowCompleteNum(this, v6) <= 0 )
      {
        v9 = 1LL;
        goto LABEL_12;
      }
    }
    if ( !this->fields._TradeInfo_k__BackingField || EventCraftListViewItem__get_NowTradeNum(this, v6) >= 1 )
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
      NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, v8);
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


void __fastcall EventCraftListViewItem__UpdateCraftUserInfo(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x20
  System_Func_object__bool__o *v18; // x21
  Il2CppObject *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UserEventTradeEntity_o *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v26; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B0620E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___, v6);
    sub_1BC3008(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__, v7);
    sub_1BC3008(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__, v8);
    sub_1BC3008(&System_Func_EventCraftPickupInfo__bool__TypeInfo, v9);
    sub_1BC3008(&System_Func_EventTradeInfo__bool__TypeInfo, v10);
    byte_4B0620E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v12);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0LL) )
  {
    v15 = (int)entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._UserTradeEntity_k__BackingField, v15, v13, v14);
  }
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0LL )
  {
    v18 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__,
      0LL);
    v19 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            tradeList,
            (System_Func_TSource__bool__o *)v18,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v19 = 0LL;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._TradeInfo_k__BackingField, (int32_t)v19, v13, v14);
  v22 = this->fields._UserTradeEntity_k__BackingField;
  if ( v22 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.pickupList) != 0LL )
  {
    v24 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__,
      0LL);
    v25 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v26 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v25,
                                                                              (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v26 = 0LL;
  }
  this->fields._PickupInfoList_k__BackingField = v26;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._PickupInfoList_k__BackingField, (int32_t)v26, v20, v21);
}


void __fastcall EventCraftListViewItem__UpdateSupportToolPossessionNum(
        EventCraftListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = num;
}


bool __fastcall EventCraftListViewItem___UpdateCraftUserInfo_b__36_0(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1BC3264(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


bool __fastcall EventCraftListViewItem___UpdateCraftUserInfo_b__36_1(
        EventCraftListViewItem_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1BC3264(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


CommonConsumeEntity_array *__fastcall EventCraftListViewItem__get_CommonConsumeEntityArray(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonConsumeEntityArray_k__BackingField;
}


int32_t __fastcall EventCraftListViewItem__get_EventId(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool __fastcall EventCraftListViewItem__get_IsAbleReceiveRewards(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventCraftListViewItem__get_NowCompleteNum(this, method) > 0;
  return 1;
}


bool __fastcall EventCraftListViewItem__get_IsBuyAble(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  EventCraftListViewItem___c_c *v8; // x0
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v10; // x21
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B06211 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_CommonConsumeEntity___, method);
    sub_1BC3008(&System_Func_CommonConsumeEntity__bool__TypeInfo, v3);
    sub_1BC3008(&Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, v4);
    sub_1BC3008(&EventCraftListViewItem___c_TypeInfo, v5);
    byte_4B06211 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields._CommonConsumeEntityArray_k__BackingField,
         0LL) )
  {
    return 0;
  }
  else
  {
    CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
    v8 = EventCraftListViewItem___c_TypeInfo;
    if ( !EventCraftListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo);
      v8 = EventCraftListViewItem___c_TypeInfo;
    }
    _9__45_0 = (System_Func_object__bool__o *)v8->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = EventCraftListViewItem___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_CommonConsumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__45_0, v10, Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, 0LL);
      static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__45_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v12, v13);
    }
    return !BasicHelper__Any_object__50246536(
              (System_Object_array *)CommonConsumeEntityArray_k__BackingField,
              (System_Func_T__bool__o *)_9__45_0,
              (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_CommonConsumeEntity___);
  }
}


bool __fastcall EventCraftListViewItem__get_IsEventEnd(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_4B0620F & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4B0620F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_1BC3264(Time, v4);
  return Time >= eventEntity->fields.endedAt;
}


bool __fastcall EventCraftListViewItem__get_IsRefillable(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v9; // w19

  if ( (byte_4B06213 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftTimeCalculation_TypeInfo, method);
    byte_4B06213 = 1;
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
                0LL,
                TradeGoodsEntity_k__BackingField,
                0LL);
}


bool __fastcall EventCraftListViewItem__get_IsRelease(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsRelease_k__BackingField;
}


bool __fastcall EventCraftListViewItem__get_IsTradeComplete(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField && EventCraftListViewItem__get_NowTradeNum(this, method) < 1;
}


bool __fastcall EventCraftListViewItem__get_IsTrading(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField != 0LL;
}


int32_t __fastcall EventCraftListViewItem__get_ItemCount(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8

  CommonConsumeEntityArray_k__BackingField = this->fields._CommonConsumeEntityArray_k__BackingField;
  if ( CommonConsumeEntityArray_k__BackingField )
    return CommonConsumeEntityArray_k__BackingField->max_length;
  else
    return 0;
}


int32_t __fastcall EventCraftListViewItem__get_NowCompleteNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x20

  if ( (byte_4B06212 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftTimeCalculation_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    byte_4B06212 = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  return EventCraftTimeCalculation__GetCompleteNum(this, 0LL, Time, 0LL);
}


int32_t __fastcall EventCraftListViewItem__get_NowTradeNum(EventCraftListViewItem_o *this, const MethodInfo *method)
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
  NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(this, method);
  v7 = this->fields._TradeInfo_k__BackingField;
  if ( !v7 )
    sub_1BC3264(NowCompleteNum, v6);
  return tradeNum - NowCompleteNum + v7->fields.getNum;
}


System_Collections_Generic_List_EventCraftPickupInfo__o *__fastcall EventCraftListViewItem__get_PickupInfoList(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PickupInfoList_k__BackingField;
}


int32_t __fastcall EventCraftListViewItem__get_PossessionNum(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._PossessionNum_k__BackingField;
}


System_String_o *__fastcall EventCraftListViewItem__get_RestTimeEventAt(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 IsEventEnd; // x0
  __int64 v8; // x1
  System_String_o *v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *RestTime2; // x0
  struct EventEntity_o *eventEntity; // x8
  int64_t endedAt; // x19
  int64_t Time; // x20
  Il2CppObject *v18; // x19
  System_String_o *v19; // x0
  int v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B06210 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_13272/*"TIME_REST2_MINUTES"*/, v5);
    sub_1BC3008(&StringLiteral_13362/*"TRADE_EVENT_REST_TIME_LABEL"*/, v6);
    byte_4B06210 = 1;
  }
  IsEventEnd = EventCraftListViewItem__get_IsEventEnd(this, method);
  if ( IsEventEnd )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_13272/*"TIME_REST2_MINUTES"*/, 0LL);
    v21 = 0;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v10, v11, v12);
    RestTime2 = System_String__Format(v9, v13, 0LL);
  }
  else
  {
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      sub_1BC3264(IsEventEnd, v8);
    endedAt = eventEntity->fields.endedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = LocalizationManager__GetRestTime2(endedAt, Time, 0LL);
  }
  v18 = (Il2CppObject *)RestTime2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13362/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
  return System_String__Format(v19, v18, 0LL);
}


ItemEntity_o *__fastcall EventCraftListViewItem__get_SupportTool(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SupportTool_k__BackingField;
}


EventTradeGoodsEntity_o *__fastcall EventCraftListViewItem__get_TradeGoodsEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeGoodsEntity_k__BackingField;
}


EventTradeInfo_o *__fastcall EventCraftListViewItem__get_TradeInfo(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeInfo_k__BackingField;
}


System_Action_o *__fastcall EventCraftListViewItem__get_UpdateReceiveAllButtonState(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UpdateReceiveAllButtonState_k__BackingField;
}


UserEventTradeEntity_o *__fastcall EventCraftListViewItem__get_UserTradeEntity(
        EventCraftListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._UserTradeEntity_k__BackingField;
}


void __fastcall EventCraftListViewItem__set_PickupInfoList(
        EventCraftListViewItem_o *this,
        System_Collections_Generic_List_EventCraftPickupInfo__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PickupInfoList_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._PickupInfoList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftListViewItem__set_PossessionNum(
        EventCraftListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PossessionNum_k__BackingField = value;
}


void __fastcall EventCraftListViewItem__set_TradeInfo(
        EventCraftListViewItem_o *this,
        EventTradeInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._TradeInfo_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._TradeInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventCraftListViewItem__set_UserTradeEntity(
        EventCraftListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._UserTradeEntity_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._UserTradeEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventCraftListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B06215 & 1) == 0 )
  {
    sub_1BC3008(&EventCraftListViewItem___c_TypeInfo, v1);
    byte_4B06215 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventCraftListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftListViewItem___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItem___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventCraftListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventCraftListViewItem___c___ctor(EventCraftListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftListViewItem___c___IsUsedSupportTool_b__58_0(
        EventCraftListViewItem___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.endedAt;
}


bool __fastcall EventCraftListViewItem___c___get_IsBuyAble_b__45_0(
        EventCraftListViewItem___c_o *this,
        CommonConsumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return CommonConsumeEntity__GetUserBuyableNum(x, 0LL) < 1;
}


void __fastcall EventCraftListViewItem___c__DisplayClass35_0___ctor(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftListViewItem___c__DisplayClass35_0____ctor_b__0(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventTradeInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1BC3264(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}


bool __fastcall EventCraftListViewItem___c__DisplayClass35_0____ctor_b__1(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0LL )
    sub_1BC3264(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}