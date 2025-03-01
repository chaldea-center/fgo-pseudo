void __fastcall EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C01712 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4C01712 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Close(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C01710 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_EventCraftUseSupportToolDialogComponent_Init__, v3);
    byte_4C01710 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftUseSupportToolDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Init(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent__OnClickCancel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C0170F & 1) == 0 )
  {
    sub_1C2E12C(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__, method);
    byte_4C0170F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    EventCraftUseSupportToolDialogComponent__Close(this, v5);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__OnClickDecide(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( (byte_4C0170E & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_int__int___, method);
    sub_1C2E12C(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__, v3);
    byte_4C0170E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2E144(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C2E388(v6, v7);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_2F24234 *)Method_ActionExtensions_Call_int__int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftUseSupportToolDialogComponent__Open(
        EventCraftUseSupportToolDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *support,
        System_Action_int__int__o *decideAction,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventCraftListViewItem_o *v11; // x20
  EventCraftUseSupportToolDialogComponent_o *v12; // x19
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
  int64_t TradeGoodsEntity_k__BackingField; // x1
  int64_t TradeInfo_k__BackingField; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t PickupInfoList_k__BackingField; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct ItemEntity_o **p_supportTool; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *craftCompletionHeaderLb; // x21
  UILabel_o *supportToolLeftTimeHeaderLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  struct ItemEntity_o *supportTool; // x8
  Il2CppObject *Master_object; // x21
  int32_t id; // w3
  System_Action_o *v61; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v11 = item;
  v12 = this;
  if ( (byte_4C0170C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, item);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserItemMaster___, v13);
    sub_1C2E12C(&DataManager_TypeInfo, v14);
    sub_1C2E12C(&Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__, v15);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v16);
    sub_1C2E12C(&NetworkManager_TypeInfo, v17);
    sub_1C2E12C(&StringLiteral_3806/*"COMMON_CONFIRM_USE"*/, v18);
    sub_1C2E12C(&StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/, v19);
    sub_1C2E12C(&StringLiteral_4004/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v20);
    sub_1C2E12C(&StringLiteral_4005/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/, v21);
    sub_1C2E12C(&StringLiteral_4003/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/, v22);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C2E12C(&StringLiteral_4002/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/, v23);
    byte_4C0170C = 1;
  }
  entity = 0LL;
  if ( !v12->fields.state )
  {
    v12->fields.storeIdx = storeIndex;
    if ( v11 )
    {
      TradeGoodsEntity_k__BackingField = (int64_t)v11->fields._TradeGoodsEntity_k__BackingField;
      v12->fields.tradeGoodsEntity = (struct EventTradeGoodsEntity_o *)TradeGoodsEntity_k__BackingField;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v12->fields.tradeGoodsEntity,
        TradeGoodsEntity_k__BackingField,
        *(int64_t *)&storeIndex,
        (int32_t)support,
        (System_String_o *)decideAction,
        (BattleSetupInfo_o *)method,
        v6,
        v7);
      TradeInfo_k__BackingField = (int64_t)v11->fields._TradeInfo_k__BackingField;
      v12->fields.eventTradeInfo = (struct EventTradeInfo_o *)TradeInfo_k__BackingField;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v12->fields.eventTradeInfo,
        TradeInfo_k__BackingField,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      PickupInfoList_k__BackingField = (int64_t)v11->fields._PickupInfoList_k__BackingField;
      v12->fields.pickupInfoList = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)PickupInfoList_k__BackingField;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v12->fields.pickupInfoList,
        PickupInfoList_k__BackingField,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v12->fields.supportTool = support;
      p_supportTool = &v12->fields.supportTool;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v12->fields.supportTool,
        (int64_t)support,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v12->fields.onDecide = decideAction;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v12->fields.onDecide,
        (int64_t)decideAction,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      titleLabel = v12->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_4005/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        detailLabel = v12->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_4002/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0LL);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
          craftCompletionHeaderLb = v12->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_4003/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0LL);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0LL);
            supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_4004/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0LL);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
              decideButtonLb = v12->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3806/*"COMMON_CONFIRM_USE"*/,
                                                                    0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                cancelButtonLb = v12->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3798/*"COMMON_CONFIRM_CANCEL"*/,
                                                                      0LL);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
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
                    item = 0LL;
                    if ( !this )
                      goto LABEL_35;
                  }
                  ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)item, -1, 1, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4BF81D5 )
                  {
                    sub_1C2E12C(&NetworkManager_TypeInfo, item);
                    byte_4BF81D5 = 1;
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
                                                                        *(_QWORD *)&this->fields.cancelButtonLb->fields.updateAnchors,
                                                                        id,
                                                                        0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_33;
                  if ( entity )
                  {
                    this = (EventCraftUseSupportToolDialogComponent_o *)v12->fields.supportToolItem;
                    if ( this )
                    {
                      ItemIconComponent__SetPossession((ItemIconComponent_o *)this, entity->fields.num, 0LL);
LABEL_33:
                      EventCraftUseSupportToolDialogComponent__SetTimeLabel(v12, (const MethodInfo *)item);
                      v12->fields.state = 1;
                      v61 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                      System_Action___ctor(
                        v61,
                        (Il2CppObject *)v12,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)v12, v61, 0, 0LL);
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
    sub_1C2E388(this, item);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__SetTimeLabel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventCraftUseSupportToolDialogComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int64_t startedAt; // x20
  System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList; // x22
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x23
  int32_t tradeNum; // w21
  int64_t CraftFinishTime; // x22
  int64_t Time; // x8
  UILabel_o *craftCompletionBeforeTimeLb; // x21
  int64_t v27; // x22
  System_String_o *v28; // x0
  const MethodInfo *v29; // x5
  struct EventTradeInfo_o *v30; // x8
  System_Collections_Generic_List_EventCraftPickupInfo__o *v31; // x24
  EventTradeGoodsEntity_o *v32; // x25
  ItemEntity_o *supportTool; // x23
  int32_t v34; // w21
  int64_t v35; // x22
  int64_t v36; // x22
  int64_t v37; // x8
  UILabel_o *craftCompletionAfterTimeLb; // x21
  int64_t v39; // x20
  System_String_o *v40; // x0
  int64_t v41; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  EventCraftUseSupportToolDialogComponent___c_c *v43; // x0
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v45; // x23
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0
  int64_t v54; // x22
  int64_t v55; // x0
  int64_t v56; // x21
  int32_t TradePickupTime; // w1
  const MethodInfo_37886F4 *v58; // x3
  const MethodInfo_37886F4 *v59; // x3
  __int64 v60; // x8
  int64_t v61; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v63; // x0
  __int64 v64; // [xsp+0h] [xbp-70h] BYREF
  __int64 v65; // [xsp+8h] [xbp-68h]
  System_Nullable_int__o v66; // 0:x0.8
  System_Nullable_long__o v67; // 0:x0.16
  System_Nullable_long__o v68; // 0:x0.16

  v3 = this;
  if ( (byte_4C0170D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, method);
    sub_1C2E12C(&EventCraftTimeCalculation_TypeInfo, v4);
    sub_1C2E12C(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&System_Math_TypeInfo, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    sub_1C2E12C(&Method_System_Nullable_long__GetValueOrDefault__, v9);
    sub_1C2E12C(&Method_System_Nullable_int__GetValueOrDefault__, v10);
    sub_1C2E12C(&Method_System_Nullable_long___ctor__, v11);
    sub_1C2E12C(&Method_System_Nullable_int___ctor__, v12);
    sub_1C2E12C(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1C2E12C(&Method_System_Nullable_int__get_HasValue__, v14);
    sub_1C2E12C(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__, v15);
    sub_1C2E12C(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_13570/*"TIME_FORMAT_1"*/, v17);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C2E12C(&StringLiteral_13674/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v18);
    byte_4C0170D = 1;
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
                      0LL,
                      tradeNum,
                      startedAt,
                      v2);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  craftCompletionBeforeTimeLb = v3->fields.craftCompletionBeforeTimeLb;
  v27 = CraftFinishTime + startedAt - Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v27 & 0x8000000000000000LL) != 0 )
  {
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13674/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
  }
  else
  {
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13570/*"TIME_FORMAT_1"*/, 0LL);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v27, 0LL, v28, 0LL);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb
    || (UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0LL),
        (v30 = v3->fields.eventTradeInfo) == 0LL) )
  {
LABEL_47:
    sub_1C2E388(this, method);
  }
  v32 = v3->fields.tradeGoodsEntity;
  v31 = v3->fields.pickupInfoList;
  supportTool = v3->fields.supportTool;
  v34 = v30->fields.tradeNum;
  v35 = v30->fields.startedAt;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
  v36 = EventCraftTimeCalculation__GetCraftFinishTime(v32, v31, supportTool, v34, v35, v29);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v37 = NetworkManager__getTime(0LL);
  craftCompletionAfterTimeLb = v3->fields.craftCompletionAfterTimeLb;
  v39 = v36 + startedAt - v37;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v39 & 0x8000000000000000LL) == 0 )
      goto LABEL_21;
LABEL_23:
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13674/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
    goto LABEL_24;
  }
  if ( (v39 & 0x8000000000000000LL) != 0 )
    goto LABEL_23;
LABEL_21:
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13570/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v39, 0LL, v40, 0LL);
LABEL_24:
  method = (const MethodInfo *)this;
  if ( !craftCompletionAfterTimeLb )
    goto LABEL_47;
  UILabel__set_text(craftCompletionAfterTimeLb, (System_String_o *)this, 0LL);
  v41 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.pickupInfoList, 0LL) )
  {
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.pickupInfoList;
    v43 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    if ( !EventCraftUseSupportToolDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
      v43 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    }
    _9__25_0 = (System_Func_T__TResult__o *)v43->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__25_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__25_0,
        v45,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__,
        0LL);
      static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__25_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
        (int64_t)_9__25_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = System_Linq_Enumerable__Select_object__long_(
            v42,
            (System_Func_TSource__TResult__o *)_9__25_0,
            (const MethodInfo_300389C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v41 = System_Linq_Enumerable__Max_65459352((System_Collections_Generic_IEnumerable_long__o *)v53, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v54 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v55 = System_Math__Max_64054740(v41 - v54, 0LL, 0LL);
  if ( !v3->fields.supportTool )
    goto LABEL_41;
  v56 = v55;
  TradePickupTime = ItemEntity__GetTradePickupTime(v3->fields.supportTool, 0LL);
  v66 = (System_Nullable_int__o)&v64;
  v64 = 0LL;
  System_Nullable_int____ctor(v66, TradePickupTime, (const MethodInfo_3787F68 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v64 )
    goto LABEL_41;
  v67.fields.value = v64 >> 32;
  *(_QWORD *)&v67.fields.hasValue = &v64;
  v64 = 0LL;
  v65 = 0LL;
  System_Nullable_long____ctor(v67, Method_System_Nullable_long___ctor__, v58);
  if ( (_BYTE)v64 )
  {
    v60 = v65;
    *(_QWORD *)&v68.fields.hasValue = &v64;
    v64 = 0LL;
    v65 = 0LL;
    v68.fields.value = v60 + v56;
    System_Nullable_long____ctor(v68, Method_System_Nullable_long___ctor__, v59);
    v61 = v65;
  }
  else
  {
LABEL_41:
    v61 = 0LL;
  }
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_13570/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v61, 0LL, v63, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_47;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)v3->fields.decideButton;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(EventCraftUseSupportToolDialogComponent_o *, bool, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    v39 >= 0,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Update(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4C0170B & 1) == 0 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, method);
    byte_4C0170B = 1;
  }
  if ( (float)(UnityEngine_Time__get_time(0LL) - this->fields.updatedTime) >= 1.0 )
  {
    time = UnityEngine_Time__get_time(0LL);
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.updatedTime = floorf(time);
    EventCraftUseSupportToolDialogComponent__SetTimeLabel(this, v3);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent___Open_b__24_0(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventCraftUseSupportToolDialogComponent__get_closeBtnObject(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C01711 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C01711 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2E388(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C01713 & 1) == 0 )
  {
    sub_1C2E12C(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v1);
    byte_4C01713 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___ctor(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftUseSupportToolDialogComponent___c___SetTimeLabel_b__25_0(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.endedAt;
}