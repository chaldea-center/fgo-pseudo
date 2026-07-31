void EventCraftListViewItem___ctor(
        EventCraftListViewItem_o *this,
        int32_t index,
        EventTradeGoodsEntity_o *tradeGoodsEntity,
        ItemEntity_o *supportItem,
        int32_t eventId,
        System_Action_o *updateReceiveAllButton,
        const MethodInfo *method)
{
  __int64 v13; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x20
  struct EventTradeGoodsEntity_o *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  const MethodInfo *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UserEventTradeEntity_o *UserTradeEntity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tradeList; // x22
  System_Func_object__bool__o *v51; // x23
  Il2CppObject *v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UserEventTradeEntity_o *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x22
  System_Func_object__bool__o *v61; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v63; // x1
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x2
  Il2CppObject *Master_object; // x22
  int32_t id; // w3
  System_String_o *v69; // x2
  int32_t num; // w8
  int32_t EventId_k__BackingField; // w9
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  int32_t v77; // w1
  struct CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x2
  bool IsOpen; // w0
  Il2CppObject *v87; // [xsp+8h] [xbp-58h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59323F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_EventTradeInfo__bool__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__);
    sub_21FFC50(&Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__);
    sub_21FFC50(&EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
    byte_59323F2 = 1;
  }
  entity = 0;
  v87 = 0;
  v13 = sub_21FFEBC(EventCraftListViewItem___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_47;
  *(_QWORD *)(v13 + 16) = tradeGoodsEntity;
  v22 = v13 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)tradeGoodsEntity, v16, v17, v18, v19, v20, v21);
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v23 = *(struct EventTradeGoodsEntity_o **)(v13 + 16);
  this->fields._TradeGoodsEntity_k__BackingField = v23;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeGoodsEntity_k__BackingField,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields._SupportTool_k__BackingField = supportItem;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SupportTool_k__BackingField,
    (int32_t)supportItem,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._EventId_k__BackingField = eventId;
  this->fields._UpdateReceiveAllButtonState_k__BackingField = updateReceiveAllButton;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UpdateReceiveAllButtonState_k__BackingField,
    (int32_t)updateReceiveAllButton,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  EventCraftListViewItem__UpdateCraftUserInfo(this, v42);
  UserTradeEntity_k__BackingField = this->fields._UserTradeEntity_k__BackingField;
  if ( UserTradeEntity_k__BackingField
    && (tradeList = (System_Collections_Generic_IEnumerable_TSource__o *)UserTradeEntity_k__BackingField->fields.tradeList) != 0 )
  {
    v51 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v51,
      (Il2CppObject *)v13,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__0__,
      0);
    v52 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            tradeList,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v52 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v52;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)v52,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v59 = this->fields._UserTradeEntity_k__BackingField;
  if ( v59 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v59->fields.pickupList) != 0 )
  {
    v61 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v61,
      (Il2CppObject *)v13,
      Method_EventCraftListViewItem___c__DisplayClass35_0___ctor_b__1__,
      0);
    v62 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v61,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v63 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v62,
                                                                              (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v63 = 0;
  }
  this->fields._PickupInfoList_k__BackingField = v63;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PickupInfoList_k__BackingField,
    (int32_t)v63,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v64, v65);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v66);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
  if ( *(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( supportItem )
      goto LABEL_20;
LABEL_23:
    id = 0;
    if ( !Master_object )
      goto LABEL_47;
    goto LABEL_24;
  }
  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v66);
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
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v69);
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !v14 )
      goto LABEL_47;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v14,
           &v87,
           this->fields._EventId_k__BackingField,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    {
      v77 = (int)v87;
      this->fields.eventEntity = (struct EventEntity_o *)v87;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventEntity, v77, v69, v72, v73, v74, v75, v76);
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v69);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*(_QWORD *)v22 )
    goto LABEL_47;
  if ( !v14 )
    goto LABEL_47;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)v14,
                       *(_DWORD *)(*(_QWORD *)v22 + 48LL),
                       0);
  this->fields._CommonConsumeEntityArray_k__BackingField = SortedEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommonConsumeEntityArray_k__BackingField,
    (int32_t)SortedEntityList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( !*(_QWORD *)v22 )
    goto LABEL_47;
  if ( !*(_DWORD *)(*(_QWORD *)v22 + 76LL) )
  {
    IsOpen = 1;
    goto LABEL_46;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v85);
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !*(_QWORD *)v22 || !v14 )
LABEL_47:
    sub_21FFECC(v14, v15);
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)v14, *(_DWORD *)(*(_QWORD *)v22 + 76LL), 0, 0, 0);
LABEL_46:
  this->fields._IsRelease_k__BackingField = IsOpen;
}


bool EventCraftListViewItem__IsUsedSupportTool(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x19
  EventCraftListViewItem___c_c *v7; // x0
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__58_0; // x20
  Il2CppObject *v10; // x21
  struct EventCraftListViewItem___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x19

  if ( (byte_59323F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__);
    sub_21FFC50(&EventCraftListViewItem___c_TypeInfo);
    byte_59323F9 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._PickupInfoList_k__BackingField, 0) )
    return 0;
  PickupInfoList_k__BackingField = this->fields._PickupInfoList_k__BackingField;
  v7 = EventCraftListViewItem___c_TypeInfo;
  if ( !*(&EventCraftListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo, v3, v4);
    v7 = EventCraftListViewItem___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__58_0 = (System_Func_object__long__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v3, v4);
      static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__58_0, v10, Method_EventCraftListViewItem___c__IsUsedSupportTool_b__58_0__, 0);
    v11 = EventCraftListViewItem___c_TypeInfo->static_fields;
    v11->__9__58_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__58_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__58_0, (int32_t)_9__58_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_object__long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
          (System_Func_TSource__TResult__o *)_9__58_0,
          (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
  v21 = System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v18, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v20);
  return v21 >= NetworkManager__getTime(0);
}


bool EventCraftListViewItem__SetSortValue(
        EventCraftListViewItem_o *this,
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
  bool result; // w0

  TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !TradeGoodsEntity_k__BackingField )
    sub_21FFECC(this, sort);
  TradeInfo_k__BackingField = this->fields._TradeInfo_k__BackingField;
  this->fields.sortValue1 = TradeGoodsEntity_k__BackingField->fields.id;
  if ( !TradeInfo_k__BackingField )
  {
    v10 = 0;
    goto LABEL_18;
  }
  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(this, (const MethodInfo *)sort);
  v8 = this->fields._TradeInfo_k__BackingField;
  if ( NowTradeNum >= 1 )
  {
    if ( !v8 )
      goto LABEL_12;
    if ( v8->fields.getNum > 0 )
      goto LABEL_9;
    if ( EventCraftListViewItem__get_NowCompleteNum(this, v7) < 1 )
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
  if ( EventCraftListViewItem__get_NowTradeNum(this, v7) > 0 )
    goto LABEL_10;
  v11 = this->fields._TradeInfo_k__BackingField;
  if ( v11 && (v11->fields.getNum > 0 || EventCraftListViewItem__get_NowCompleteNum(this, v9) > 0) )
    v10 = 3;
  else
    v10 = 4;
LABEL_18:
  result = 1;
  this->fields.sortValue0 = v10;
  return result;
}


void EventCraftListViewItem__UpdateCraftUserInfo(EventCraftListViewItem_o *this, const MethodInfo *method)
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UserEventTradeEntity_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pickupList; // x20
  System_Func_object__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v28; // x1
  UserEventTradeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59323F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    sub_21FFC50(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__);
    sub_21FFC50(&Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_EventTradeInfo__bool__TypeInfo);
    byte_59323F3 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  if ( UserEventTradeMaster__TryGetEntity(
         (UserEventTradeMaster_o *)Master_object,
         &entity,
         this->fields._EventId_k__BackingField,
         0) )
  {
    v13 = (int)entity;
    this->fields._UserTradeEntity_k__BackingField = entity;
    sub_21FFBF4(
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
    v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventTradeInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_0__,
      0);
    v17 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            tradeList,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeInfo___);
  }
  else
  {
    v17 = 0;
  }
  this->fields._TradeInfo_k__BackingField = (struct EventTradeInfo_o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)v17,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v24 = this->fields._UserTradeEntity_k__BackingField;
  if ( v24 && (pickupList = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.pickupList) != 0 )
  {
    v26 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_EventCraftListViewItem__UpdateCraftUserInfo_b__36_1__,
      0);
    v27 = System_Linq_Enumerable__Where_object_(
            pickupList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventCraftPickupInfo___);
    v28 = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                              v27,
                                                                              (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventCraftPickupInfo___);
  }
  else
  {
    v28 = 0;
  }
  this->fields._PickupInfoList_k__BackingField = v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PickupInfoList_k__BackingField,
    (int32_t)v28,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    sub_21FFECC(this, info);
  return info->fields.tradeGoodsId == TradeGoodsEntity_k__BackingField->fields.id;
}


bool EventCraftListViewItem___UpdateCraftUserInfo_b__36_1(
        EventCraftListViewItem_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8

  if ( !info || (TradeGoodsEntity_k__BackingField = this->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_21FFECC(this, info);
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
  __int64 v3; // x1
  __int64 v4; // x2
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x19
  EventCraftListViewItem___c_c *v7; // x0
  struct EventCraftListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__45_0; // x20
  Il2CppObject *v10; // x21
  struct EventCraftListViewItem___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59323F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_21FFC50(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__);
    sub_21FFC50(&EventCraftListViewItem___c_TypeInfo);
    byte_59323F6 = 1;
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
    v7 = EventCraftListViewItem___c_TypeInfo;
    if ( !*(&EventCraftListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItem___c_TypeInfo, v3, v4);
      v7 = EventCraftListViewItem___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__45_0 = (System_Func_object__bool__o *)static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v3, v4);
        static_fields = EventCraftListViewItem___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonConsumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__45_0, v10, Method_EventCraftListViewItem___c__get_IsBuyAble_b__45_0__, 0);
      v11 = EventCraftListViewItem___c_TypeInfo->static_fields;
      v11->__9__45_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__45_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__45_0, (int32_t)_9__45_0, v12, v13, v14, v15, v16, v17);
    }
    return !BasicHelper__Any_object__58575580(
              (System_Object_array *)CommonConsumeEntityArray_k__BackingField,
              (System_Func_T__bool__o *)_9__45_0,
              (const MethodInfo_37DCADC *)Method_BasicHelper_Any_CommonConsumeEntity___);
  }
}


bool EventCraftListViewItem__get_IsEventEnd(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0
  __int64 v5; // x1
  struct EventEntity_o *eventEntity; // x8

  if ( (byte_59323F4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59323F4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    sub_21FFECC(Time, v5);
  return Time >= eventEntity->fields.endedAt;
}


bool EventCraftListViewItem__get_IsRefillable(EventCraftListViewItem_o *this, const MethodInfo *method)
{
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t NowTradeNum; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x20
  int32_t v12; // w19

  if ( (byte_59323F8 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    byte_59323F8 = 1;
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
  v12 = NowTradeNum;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v7, v8);
  return v12 < EventCraftTimeCalculation__GetCraftMaxNum(
                 PickupInfoList_k__BackingField,
                 0,
                 TradeGoodsEntity_k__BackingField,
                 v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int64_t Time; // x20

  if ( (byte_59323F7 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59323F7 = 1;
  }
  if ( !this->fields._TradeInfo_k__BackingField )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v4, v5);
  return EventCraftTimeCalculation__GetCompleteNum(this, 0, Time, v6);
}


int32_t EventCraftListViewItem__get_NowTradeNum(EventCraftListViewItem_o *this, const MethodInfo *method)
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
    sub_21FFECC(NowCompleteNum, v6);
  return tradeNum - NowCompleteNum + v7->fields.getNum;
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
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  Il2CppObject *v7; // x0
  System_String_o *RestTime2; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventEntity_o *eventEntity; // x8
  int64_t endedAt; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t Time; // x20
  Il2CppObject *v16; // x19
  System_String_o *v17; // x0
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59323F5 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13926/*"TIME_REST2_MINUTES"*/);
    sub_21FFC50(&StringLiteral_14017/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    byte_59323F5 = 1;
  }
  IsEventEnd = EventCraftListViewItem__get_IsEventEnd(this, method);
  if ( IsEventEnd )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13926/*"TIME_REST2_MINUTES"*/, 0);
    v19 = 0;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
    RestTime2 = System_String__Format(v6, v7, 0);
  }
  else
  {
    eventEntity = this->fields.eventEntity;
    if ( !eventEntity )
      sub_21FFECC(IsEventEnd, v4);
    endedAt = eventEntity->fields.endedAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Time = NetworkManager__getTime(0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    RestTime2 = LocalizationManager__GetRestTime2(endedAt, Time, 0);
  }
  v16 = (Il2CppObject *)RestTime2;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14017/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PickupInfoList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PickupInfoList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftListViewItem__set_UserTradeEntity(
        EventCraftListViewItem_o *this,
        UserEventTradeEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserTradeEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserTradeEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59323FA & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem___c_TypeInfo);
    byte_59323FA = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventCraftListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewItem___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventCraftListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return x->fields.endedAt;
}


bool EventCraftListViewItem___c___get_IsBuyAble_b__45_0(
        EventCraftListViewItem___c_o *this,
        CommonConsumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}


bool EventCraftListViewItem___c__DisplayClass35_0____ctor_b__1(
        EventCraftListViewItem___c__DisplayClass35_0_o *this,
        EventCraftPickupInfo_o *info,
        const MethodInfo *method)
{
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( !info || (tradeGoodsEntity = this->fields.tradeGoodsEntity) == 0 )
    sub_21FFECC(this, info);
  return info->fields.tradeGoodsId == tradeGoodsEntity->fields.id;
}