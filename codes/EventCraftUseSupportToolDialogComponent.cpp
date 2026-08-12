void EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A563 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A563 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftUseSupportToolDialogComponent__Close(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596A561 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventCraftUseSupportToolDialogComponent_Init__);
    byte_596A561 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftUseSupportToolDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void EventCraftUseSupportToolDialogComponent__Init(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
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

  if ( (byte_596A560 & 1) == 0 )
  {
    sub_2213A60(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    byte_596A560 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596A55F & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int__int___);
    sub_2213A60(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    byte_596A55F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_2213CDC(v5, v6);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_37001A4 *)Method_ActionExtensions_Call_int__int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftUseSupportToolDialogComponent__Open(
        EventCraftUseSupportToolDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *support,
        System_Action_int__int__o *decideAction,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  EventCraftListViewItem_o *v11; // x20
  EventCraftUseSupportToolDialogComponent_o *v12; // x19
  int32_t state; // w8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct ItemEntity_o **p_supportTool; // x20
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
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *craftCompletionHeaderLb; // x21
  UILabel_o *supportToolLeftTimeHeaderLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  struct ItemEntity_o *supportTool; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x2
  Il2CppObject *Master_object; // x21
  int32_t id; // w3
  System_Action_o *v56; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v11 = item;
  v12 = this;
  if ( (byte_596A55D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_3835/*"COMMON_CONFIRM_USE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_4055/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_2213A60(&StringLiteral_4056/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_4054/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_2213A60(&StringLiteral_4053/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/);
    byte_596A55D = 1;
  }
  state = v12->fields.state;
  entity = 0;
  if ( !state )
  {
    v12->fields.storeIdx = storeIndex;
    if ( v11 )
    {
      TradeGoodsEntity_k__BackingField = v11->fields._TradeGoodsEntity_k__BackingField;
      v12->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.tradeGoodsEntity,
        (int32_t)TradeGoodsEntity_k__BackingField,
        *(System_String_o **)&storeIndex,
        (System_String_o *)support,
        (int32_t)decideAction,
        (int32_t)method,
        v6,
        v7);
      TradeInfo_k__BackingField = v11->fields._TradeInfo_k__BackingField;
      v12->fields.eventTradeInfo = TradeInfo_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.eventTradeInfo,
        (int32_t)TradeInfo_k__BackingField,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      PickupInfoList_k__BackingField = v11->fields._PickupInfoList_k__BackingField;
      v12->fields.pickupInfoList = PickupInfoList_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.pickupInfoList,
        (int32_t)PickupInfoList_k__BackingField,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v12->fields.supportTool = support;
      p_supportTool = &v12->fields.supportTool;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.supportTool,
        (int32_t)support,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v12->fields.onDecide = decideAction;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v12->fields.onDecide,
        (int32_t)decideAction,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      titleLabel = v12->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42, v43);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_4056/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0);
        detailLabel = v12->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_4053/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0);
          craftCompletionHeaderLb = v12->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_4054/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0);
            supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_4055/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0);
              decideButtonLb = v12->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3835/*"COMMON_CONFIRM_USE"*/,
                                                                    0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                cancelButtonLb = v12->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                                      0);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
                  supportTool = v12->fields.supportTool;
                  this = (EventCraftUseSupportToolDialogComponent_o *)v12->fields.supportToolItem;
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
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51, v52);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v53);
                  if ( !byte_5969EF2 )
                  {
                    sub_2213A60(&NetworkManager_TypeInfo);
                    byte_5969EF2 = 1;
                  }
                  this = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager_TypeInfo;
                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v53);
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
                    this = (EventCraftUseSupportToolDialogComponent_o *)v12->fields.supportToolItem;
                    if ( this )
                    {
                      ItemIconComponent__SetPossession((ItemIconComponent_o *)this, entity->fields.num, 0);
LABEL_33:
                      EventCraftUseSupportToolDialogComponent__SetTimeLabel(v12, (const MethodInfo *)item);
                      v12->fields.state = 1;
                      v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v56,
                        (Il2CppObject *)v12,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__,
                        0);
                      BaseDialog__Open((BaseDialog_o *)v12, v56, 0, 0, 0);
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
    sub_2213CDC(this, item);
  }
}


void EventCraftUseSupportToolDialogComponent__SetTimeLabel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  EventCraftUseSupportToolDialogComponent_o *v4; // x19
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int64_t startedAt; // x20
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x22
  System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList; // x23
  int32_t tradeNum; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t CraftFinishTime; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x22
  UILabel_o *craftCompletionBeforeTimeLb; // x21
  int v17; // w8
  System_String_o *v18; // x0
  __int64 v19; // x2
  const MethodInfo *v20; // x5
  struct EventTradeInfo_o *v21; // x8
  EventTradeGoodsEntity_o *v22; // x21
  System_Collections_Generic_List_EventCraftPickupInfo__o *v23; // x22
  ItemEntity_o *supportTool; // x23
  int32_t v25; // w24
  int64_t v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  int64_t v32; // x20
  UILabel_o *craftCompletionAfterTimeLb; // x21
  int v34; // w8
  System_String_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  int64_t v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  EventCraftUseSupportToolDialogComponent___c_c *v40; // x0
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__25_0; // x22
  Il2CppObject *v43; // x23
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  int64_t Time; // x22
  int64_t v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  int64_t v58; // x21
  int32_t TradePickupTime; // w0
  const MethodInfo_45E4A50 *v60; // x3
  const MethodInfo_45E4A50 *v61; // x3
  int64_t v62; // x8
  int64_t v63; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v65; // x0
  __int64 v66; // [xsp+0h] [xbp-70h] BYREF
  int64_t v67; // [xsp+8h] [xbp-68h]
  System_Nullable_long__o v68; // 0:x0.16
  System_Nullable_long__o v69; // 0:x0.16

  v4 = this;
  if ( (byte_596A55E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_2213A60(&EventCraftTimeCalculation_TypeInfo);
    sub_2213A60(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__);
    sub_2213A60(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_13950/*"TIME_FORMAT_1"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_2213A60(&StringLiteral_14056/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    byte_596A55E = 1;
  }
  eventTradeInfo = v4->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_51;
  startedAt = eventTradeInfo->fields.startedAt;
  tradeGoodsEntity = v4->fields.tradeGoodsEntity;
  pickupInfoList = v4->fields.pickupInfoList;
  tradeNum = eventTradeInfo->fields.tradeNum;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method, v2);
  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                      tradeGoodsEntity,
                      pickupInfoList,
                      0,
                      tradeNum,
                      startedAt,
                      v3);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
  v15 = CraftFinishTime + startedAt - NetworkManager__getTime(0);
  craftCompletionBeforeTimeLb = v4->fields.craftCompletionBeforeTimeLb;
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v15 < 0 )
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_14056/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0);
  }
  else
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13950/*"TIME_FORMAT_1"*/, 0);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v15, 0, v18, 0);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb )
    goto LABEL_51;
  UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0);
  v21 = v4->fields.eventTradeInfo;
  if ( !v21 )
    goto LABEL_51;
  v22 = v4->fields.tradeGoodsEntity;
  v23 = v4->fields.pickupInfoList;
  supportTool = v4->fields.supportTool;
  v25 = v21->fields.tradeNum;
  v26 = v21->fields.startedAt;
  if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method, v19);
  v29 = EventCraftTimeCalculation__GetCraftFinishTime(v22, v23, supportTool, v25, v26, v20);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
  v32 = v29 + startedAt - NetworkManager__getTime(0);
  craftCompletionAfterTimeLb = v4->fields.craftCompletionAfterTimeLb;
  v34 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v32 < 0 )
  {
    if ( !v34 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_14056/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0);
  }
  else
  {
    if ( !v34 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13950/*"TIME_FORMAT_1"*/, 0);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v32, 0, v35, 0);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionAfterTimeLb )
    goto LABEL_51;
  UILabel__set_text(craftCompletionAfterTimeLb, (System_String_o *)this, 0);
  v38 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.pickupInfoList, 0) )
  {
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.pickupInfoList;
    v40 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    if ( !*(&EventCraftUseSupportToolDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftUseSupportToolDialogComponent___c_TypeInfo, v36, v37);
      v40 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    }
    static_fields = v40->static_fields;
    _9__25_0 = (System_Func_object__long__o *)static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !*(&v40->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v40, v36, v37);
        static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)static_fields->__9;
      _9__25_0 = (System_Func_object__long__o *)sub_2213CCC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__25_0,
        v43,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__,
        0);
      v44 = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      v44->__9__25_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__25_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44->__9__25_0, (int32_t)_9__25_0, v45, v46, v47, v48, v49, v50);
    }
    v51 = System_Linq_Enumerable__Select_object__long_(
            v39,
            (System_Func_TSource__TResult__o *)_9__25_0,
            (const MethodInfo_3890EA4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v38 = System_Linq_Enumerable__Max_78608412((System_Collections_Generic_IEnumerable_long__o *)v51, 0);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36, v37);
  Time = NetworkManager__getTime(0);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52, v53);
  v55 = System_Math__Max_77153272(v38 - Time, 0, 0);
  if ( !v4->fields.supportTool )
    goto LABEL_45;
  v58 = v55;
  TradePickupTime = ItemEntity__GetTradePickupTime(v4->fields.supportTool, 0);
  v66 = 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v66,
    TradePickupTime,
    (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v66 )
    goto LABEL_45;
  v68.fields.value = v66 >> 32;
  *(_QWORD *)&v68.fields.hasValue = &v66;
  v66 = 0;
  v67 = 0;
  System_Nullable_long____ctor(v68, Method_System_Nullable_long___ctor__, v60);
  if ( (_BYTE)v66 )
  {
    v62 = v67;
    *(_QWORD *)&v69.fields.hasValue = &v66;
    v66 = 0;
    v67 = 0;
    v69.fields.value = v62 + v58;
    System_Nullable_long____ctor(v69, Method_System_Nullable_long___ctor__, v61);
    v63 = v67;
  }
  else
  {
LABEL_45:
    v63 = 0;
  }
  supportToolLeftTimeLb = v4->fields.supportToolLeftTimeLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56, v57);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_13950/*"TIME_FORMAT_1"*/, 0);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v63, 0, v65, 0);
  if ( !supportToolLeftTimeLb
    || (UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0),
        (this = (EventCraftUseSupportToolDialogComponent_o *)v4->fields.decideButton) == 0) )
  {
LABEL_51:
    sub_2213CDC(this, method);
  }
  ((void (__fastcall *)(EventCraftUseSupportToolDialogComponent_o *, bool, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    v32 >= 0,
    this->klass->vtable._5_set_closeBtnObject.method);
}


void EventCraftUseSupportToolDialogComponent__Update(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  float time; // s8

  if ( (byte_596A55C & 1) == 0 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A55C = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3, v4);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A562 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A562 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A564 & 1) == 0 )
  {
    sub_2213A60(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    byte_596A564 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return x->fields.endedAt;
}