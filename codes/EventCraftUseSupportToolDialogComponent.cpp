void EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC160E & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC160E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftUseSupportToolDialogComponent__Close(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CC160C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventCraftUseSupportToolDialogComponent_Init__);
    byte_4CC160C = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventCraftUseSupportToolDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void EventCraftUseSupportToolDialogComponent__Init(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftUseSupportToolDialogComponent__OnClickCancel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CC160B & 1) == 0 )
  {
    sub_1C713B0(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    byte_4CC160B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    EventCraftUseSupportToolDialogComponent__Close(this, v5);
  }
}


void EventCraftUseSupportToolDialogComponent__OnClickDecide(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( (byte_4CC160A & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int__int___);
    sub_1C713B0(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    byte_4CC160A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C71608(v5, v6);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_3095FF4 *)Method_ActionExtensions_Call_int__int___);
  }
}


void EventCraftUseSupportToolDialogComponent__Open(
        EventCraftUseSupportToolDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *support,
        System_Action_int__int__o *decideAction,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v9; // x20
  EventCraftUseSupportToolDialogComponent_o *v10; // x19
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  struct ItemEntity_o **p_supportTool; // x20
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *craftCompletionHeaderLb; // x21
  UILabel_o *supportToolLeftTimeHeaderLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  struct ItemEntity_o *supportTool; // x8
  Il2CppObject *Master_object; // x21
  int32_t id; // w3
  System_Action_o *v24; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v9 = item;
  v10 = this;
  if ( (byte_4CC1608 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3687/*"COMMON_CONFIRM_USE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_3906/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_1C713B0(&StringLiteral_3907/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3905/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C713B0(&StringLiteral_3904/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/);
    byte_4CC1608 = 1;
  }
  entity = 0;
  if ( !v10->fields.state )
  {
    v10->fields.storeIdx = storeIndex;
    if ( v9 )
    {
      TradeGoodsEntity_k__BackingField = v9->fields._TradeGoodsEntity_k__BackingField;
      v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_1C71354(&v10->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
      TradeInfo_k__BackingField = v9->fields._TradeInfo_k__BackingField;
      v10->fields.eventTradeInfo = TradeInfo_k__BackingField;
      sub_1C71354(&v10->fields.eventTradeInfo, TradeInfo_k__BackingField);
      PickupInfoList_k__BackingField = v9->fields._PickupInfoList_k__BackingField;
      v10->fields.pickupInfoList = PickupInfoList_k__BackingField;
      sub_1C71354(&v10->fields.pickupInfoList, PickupInfoList_k__BackingField);
      v10->fields.supportTool = support;
      p_supportTool = &v10->fields.supportTool;
      sub_1C71354(&v10->fields.supportTool, support);
      v10->fields.onDecide = decideAction;
      sub_1C71354(&v10->fields.onDecide, decideAction);
      titleLabel = v10->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3907/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0);
        detailLabel = v10->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3904/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0);
          craftCompletionHeaderLb = v10->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3905/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0);
            supportToolLeftTimeHeaderLb = v10->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3906/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3687/*"COMMON_CONFIRM_USE"*/,
                                                                    0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                cancelButtonLb = v10->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/,
                                                                      0);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
                  supportTool = v10->fields.supportTool;
                  this = (EventCraftUseSupportToolDialogComponent_o *)v10->fields.supportToolItem;
                  if ( supportTool )
                  {
                    item = (EventCraftListViewItem_o *)(unsigned int)supportTool->fields.id;
                    if ( !this )
                      goto LABEL_35;
                  }
                  else
                  {
                    item = 0;
                    if ( !this )
                      goto LABEL_35;
                  }
                  ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)item, -1, 1, 0);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4CC112A )
                  {
                    sub_1C713B0(&NetworkManager_TypeInfo);
                    byte_4CC112A = 1;
                  }
                  this = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    this = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager_TypeInfo;
                  }
                  if ( *p_supportTool )
                  {
                    id = (*p_supportTool)->fields.id;
                    if ( !Master_object )
                      goto LABEL_35;
                  }
                  else
                  {
                    id = 0;
                    if ( !Master_object )
                      goto LABEL_35;
                  }
                  this = (EventCraftUseSupportToolDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                                        (UserItemMaster_o *)Master_object,
                                                                        &entity,
                                                                        *(_QWORD *)&this->fields.cancelButton->fields.specifyHoverColor.fields.r,
                                                                        id,
                                                                        0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_33;
                  if ( entity )
                  {
                    this = (EventCraftUseSupportToolDialogComponent_o *)v10->fields.supportToolItem;
                    if ( this )
                    {
                      ItemIconComponent__SetPossession((ItemIconComponent_o *)this, entity->fields.num, 0);
LABEL_33:
                      EventCraftUseSupportToolDialogComponent__SetTimeLabel(v10, (const MethodInfo *)item);
                      v10->fields.state = 1;
                      v24 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v24,
                        (Il2CppObject *)v10,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__,
                        0);
                      BaseDialog__Open((BaseDialog_o *)v10, v24, 0, 0, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C71608(this, item);
  }
}


void EventCraftUseSupportToolDialogComponent__SetTimeLabel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventCraftUseSupportToolDialogComponent_o *v3; // x19
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int64_t startedAt; // x20
  System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList; // x22
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x23
  int32_t tradeNum; // w21
  int64_t CraftFinishTime; // x22
  int64_t Time; // x8
  UILabel_o *craftCompletionBeforeTimeLb; // x21
  int64_t v12; // x22
  System_String_o *v13; // x0
  const MethodInfo *v14; // x5
  struct EventTradeInfo_o *v15; // x8
  System_Collections_Generic_List_EventCraftPickupInfo__o *v16; // x24
  EventTradeGoodsEntity_o *v17; // x25
  ItemEntity_o *supportTool; // x23
  int32_t v19; // w21
  int64_t v20; // x22
  int64_t v21; // x22
  int64_t v22; // x8
  UILabel_o *craftCompletionAfterTimeLb; // x21
  int64_t v24; // x20
  System_String_o *v25; // x0
  int64_t v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  EventCraftUseSupportToolDialogComponent___c_c *v28; // x0
  System_Func_object__long__o *_9__25_0; // x22
  Il2CppObject *v30; // x23
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  int64_t v33; // x22
  int64_t v34; // x0
  int64_t v35; // x21
  int32_t TradePickupTime; // w1
  System_Nullable_int__o v37; // x0
  const MethodInfo_39394C8 *v38; // x3
  const MethodInfo_39394C8 *v39; // x3
  int64_t v40; // x8
  int64_t v41; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v43; // x0
  __int64 v44; // [xsp+0h] [xbp-70h] BYREF
  int64_t v45; // [xsp+8h] [xbp-68h]
  System_Nullable_long__o v46; // 0:x0.16
  System_Nullable_long__o v47; // 0:x0.16

  v3 = this;
  if ( (byte_4CC1609 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C713B0(&EventCraftTimeCalculation_TypeInfo);
    sub_1C713B0(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_long___ctor__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__);
    sub_1C713B0(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_13403/*"TIME_FORMAT_1"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C713B0(&StringLiteral_13508/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    byte_4CC1609 = 1;
  }
  eventTradeInfo = v3->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_47;
  startedAt = eventTradeInfo->fields.startedAt;
  tradeGoodsEntity = v3->fields.tradeGoodsEntity;
  pickupInfoList = v3->fields.pickupInfoList;
  tradeNum = eventTradeInfo->fields.tradeNum;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                      tradeGoodsEntity,
                      pickupInfoList,
                      0,
                      tradeNum,
                      startedAt,
                      v2);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  craftCompletionBeforeTimeLb = v3->fields.craftCompletionBeforeTimeLb;
  v12 = CraftFinishTime + startedAt - Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v12 < 0 )
  {
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13508/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0);
  }
  else
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TIME_FORMAT_1"*/, 0);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v12, 0, v13, 0);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb
    || (UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0),
        (v15 = v3->fields.eventTradeInfo) == 0) )
  {
LABEL_47:
    sub_1C71608(this, method);
  }
  v17 = v3->fields.tradeGoodsEntity;
  v16 = v3->fields.pickupInfoList;
  supportTool = v3->fields.supportTool;
  v19 = v15->fields.tradeNum;
  v20 = v15->fields.startedAt;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  v21 = EventCraftTimeCalculation__GetCraftFinishTime(v17, v16, supportTool, v19, v20, v14);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v22 = NetworkManager__getTime(0);
  craftCompletionAfterTimeLb = v3->fields.craftCompletionAfterTimeLb;
  v24 = v21 + startedAt - v22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v24 & 0x8000000000000000LL) == 0 )
      goto LABEL_21;
LABEL_23:
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13508/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0);
    goto LABEL_24;
  }
  if ( v24 < 0 )
    goto LABEL_23;
LABEL_21:
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TIME_FORMAT_1"*/, 0);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v24, 0, v25, 0);
LABEL_24:
  method = (const MethodInfo *)this;
  if ( !craftCompletionAfterTimeLb )
    goto LABEL_47;
  UILabel__set_text(craftCompletionAfterTimeLb, (System_String_o *)this, 0);
  v26 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.pickupInfoList, 0) )
  {
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.pickupInfoList;
    v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    if ( !EventCraftUseSupportToolDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
      v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    }
    _9__25_0 = (System_Func_object__long__o *)v28->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__25_0 = (System_Func_object__long__o *)sub_1C715FC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__25_0,
        v30,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__,
        0);
      static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__25_0;
      sub_1C71354(&static_fields->__9__25_0, _9__25_0);
    }
    v32 = System_Linq_Enumerable__Select_object__long_(
            v27,
            (System_Func_TSource__TResult__o *)_9__25_0,
            (const MethodInfo_31815C0 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v26 = System_Linq_Enumerable__Max_67032308((System_Collections_Generic_IEnumerable_long__o *)v32, 0);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v33 = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = System_Math__Max_65553556(v26 - v33, 0, 0);
  if ( !v3->fields.supportTool )
    goto LABEL_41;
  v35 = v34;
  TradePickupTime = ItemEntity__GetTradePickupTime(v3->fields.supportTool, 0);
  v37 = (System_Nullable_int__o)&v44;
  v44 = 0;
  System_Nullable_int____ctor(v37, TradePickupTime, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v44 )
    goto LABEL_41;
  v46.fields.value = v44 >> 32;
  *(_QWORD *)&v46.fields.hasValue = &v44;
  v44 = 0;
  v45 = 0;
  System_Nullable_long____ctor(v46, Method_System_Nullable_long___ctor__, v38);
  if ( (_BYTE)v44 )
  {
    v40 = v45;
    *(_QWORD *)&v47.fields.hasValue = &v44;
    v44 = 0;
    v45 = 0;
    v47.fields.value = v40 + v35;
    System_Nullable_long____ctor(v47, Method_System_Nullable_long___ctor__, v39);
    v41 = v45;
  }
  else
  {
LABEL_41:
    v41 = 0;
  }
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_13403/*"TIME_FORMAT_1"*/, 0);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v41, 0, v43, 0);
  if ( !supportToolLeftTimeLb )
    goto LABEL_47;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0);
  this = (EventCraftUseSupportToolDialogComponent_o *)v3->fields.decideButton;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(EventCraftUseSupportToolDialogComponent_o *, bool, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    v24 >= 0,
    this->klass->vtable._5_set_closeBtnObject.method);
}


void EventCraftUseSupportToolDialogComponent__Update(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4CC1607 & 1) == 0 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC1607 = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.updatedTime = floorf(time);
    EventCraftUseSupportToolDialogComponent__SetTimeLabel(this, v3);
  }
}


void EventCraftUseSupportToolDialogComponent___Open_b__24_0(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *EventCraftUseSupportToolDialogComponent__get_closeBtnObject(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC160D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC160D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CC160F & 1) == 0 )
  {
    sub_1C713B0(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    byte_4CC160F = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v1;
  sub_1C71354(EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields, v1);
}


void EventCraftUseSupportToolDialogComponent___c___ctor(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventCraftUseSupportToolDialogComponent___c___SetTimeLabel_b__25_0(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.endedAt;
}