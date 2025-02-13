void __fastcall EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BE0473 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE0473 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Close(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BE0471 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventCraftUseSupportToolDialogComponent_Init__);
    byte_4BE0471 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventCraftUseSupportToolDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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

  if ( (byte_4BE0470 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    byte_4BE0470 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    EventCraftUseSupportToolDialogComponent__Close(this, v5);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__OnClickDecide(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( (byte_4BE046F & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int__int___);
    sub_1C21E38(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    byte_4BE046F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C22094(v5, v6);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_2F028A4 *)Method_ActionExtensions_Call_int__int___);
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
  int64_t TradeGoodsEntity_k__BackingField; // x1
  int64_t TradeInfo_k__BackingField; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t PickupInfoList_k__BackingField; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ItemEntity_o **p_supportTool; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *craftCompletionHeaderLb; // x21
  UILabel_o *supportToolLeftTimeHeaderLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  struct ItemEntity_o *supportTool; // x8
  Il2CppObject *Master_object; // x21
  int32_t id; // w3
  System_Action_o *v50; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v11 = item;
  v12 = this;
  if ( (byte_4BE046D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3818/*"COMMON_CONFIRM_USE"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_4016/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/);
    sub_1C21E38(&StringLiteral_4017/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_4015/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C21E38(&StringLiteral_4014/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/);
    byte_4BE046D = 1;
  }
  entity = 0LL;
  if ( !v12->fields.state )
  {
    v12->fields.storeIdx = storeIndex;
    if ( v11 )
    {
      TradeGoodsEntity_k__BackingField = (int64_t)v11->fields._TradeGoodsEntity_k__BackingField;
      v12->fields.tradeGoodsEntity = (struct EventTradeGoodsEntity_o *)TradeGoodsEntity_k__BackingField;
      sub_1C21DDC(
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
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v12->fields.eventTradeInfo,
        TradeInfo_k__BackingField,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      PickupInfoList_k__BackingField = (int64_t)v11->fields._PickupInfoList_k__BackingField;
      v12->fields.pickupInfoList = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)PickupInfoList_k__BackingField;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v12->fields.pickupInfoList,
        PickupInfoList_k__BackingField,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v12->fields.supportTool = support;
      p_supportTool = &v12->fields.supportTool;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v12->fields.supportTool,
        (int64_t)support,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v12->fields.onDecide = decideAction;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v12->fields.onDecide,
        (int64_t)decideAction,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      titleLabel = v12->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_4017/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        detailLabel = v12->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_4014/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0LL);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
          craftCompletionHeaderLb = v12->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_4015/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0LL);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0LL);
            supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_4016/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0LL);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
              decideButtonLb = v12->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3818/*"COMMON_CONFIRM_USE"*/,
                                                                    0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                cancelButtonLb = v12->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/,
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
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4BD6FF5 )
                  {
                    sub_1C21E38(&NetworkManager_TypeInfo);
                    byte_4BD6FF5 = 1;
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
                      v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                      System_Action___ctor(
                        v50,
                        (Il2CppObject *)v12,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)v12, v50, 0, 0LL);
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
    sub_1C22094(this, item);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__SetTimeLabel(
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
  System_Func_T__TResult__o *_9__25_0; // x22
  Il2CppObject *v30; // x23
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v38; // x0
  int64_t v39; // x22
  int64_t v40; // x0
  int64_t v41; // x21
  int32_t TradePickupTime; // w1
  const MethodInfo_376BF2C *v43; // x3
  const MethodInfo_376BF2C *v44; // x3
  __int64 v45; // x8
  int64_t v46; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v48; // x0
  __int64 v49; // [xsp+0h] [xbp-70h] BYREF
  __int64 v50; // [xsp+8h] [xbp-68h]
  System_Nullable_int__o v51; // 0:x0.8
  System_Nullable_long__o v52; // 0:x0.16
  System_Nullable_long__o v53; // 0:x0.16

  v3 = this;
  if ( (byte_4BE046E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C21E38(&EventCraftTimeCalculation_TypeInfo);
    sub_1C21E38(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_long__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__);
    sub_1C21E38(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13560/*"TIME_FORMAT_1"*/);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1C21E38(&StringLiteral_13664/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    byte_4BE046E = 1;
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
  v12 = CraftFinishTime + startedAt - Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v12 & 0x8000000000000000LL) != 0 )
  {
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13664/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
  }
  else
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_FORMAT_1"*/, 0LL);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v12, 0LL, v13, 0LL);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb
    || (UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0LL),
        (v15 = v3->fields.eventTradeInfo) == 0LL) )
  {
LABEL_47:
    sub_1C22094(this, method);
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
  v22 = NetworkManager__getTime(0LL);
  craftCompletionAfterTimeLb = v3->fields.craftCompletionAfterTimeLb;
  v24 = v21 + startedAt - v22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v24 & 0x8000000000000000LL) == 0 )
      goto LABEL_21;
LABEL_23:
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13664/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
    goto LABEL_24;
  }
  if ( (v24 & 0x8000000000000000LL) != 0 )
    goto LABEL_23;
LABEL_21:
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v24, 0LL, v25, 0LL);
LABEL_24:
  method = (const MethodInfo *)this;
  if ( !craftCompletionAfterTimeLb )
    goto LABEL_47;
  UILabel__set_text(craftCompletionAfterTimeLb, (System_String_o *)this, 0LL);
  v26 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields.pickupInfoList, 0LL) )
  {
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.pickupInfoList;
    v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    if ( !EventCraftUseSupportToolDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
      v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    }
    _9__25_0 = (System_Func_T__TResult__o *)v28->static_fields->__9__25_0;
    if ( !_9__25_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__25_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__25_0,
        v30,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__,
        0LL);
      static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__25_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__25_0,
        (int64_t)_9__25_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    v38 = System_Linq_Enumerable__Select_object__long_(
            v27,
            (System_Func_TSource__TResult__o *)_9__25_0,
            (const MethodInfo_2FE12C4 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v26 = System_Linq_Enumerable__Max_65339244((System_Collections_Generic_IEnumerable_long__o *)v38, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v39 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v40 = System_Math__Max_63934632(v26 - v39, 0LL, 0LL);
  if ( !v3->fields.supportTool )
    goto LABEL_41;
  v41 = v40;
  TradePickupTime = ItemEntity__GetTradePickupTime(v3->fields.supportTool, 0LL);
  v51 = (System_Nullable_int__o)&v49;
  v49 = 0LL;
  System_Nullable_int____ctor(v51, TradePickupTime, (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v49 )
    goto LABEL_41;
  v52.fields.value = v49 >> 32;
  *(_QWORD *)&v52.fields.hasValue = &v49;
  v49 = 0LL;
  v50 = 0LL;
  System_Nullable_long____ctor(v52, Method_System_Nullable_long___ctor__, v43);
  if ( (_BYTE)v49 )
  {
    v45 = v50;
    *(_QWORD *)&v53.fields.hasValue = &v49;
    v49 = 0LL;
    v50 = 0LL;
    v53.fields.value = v45 + v41;
    System_Nullable_long____ctor(v53, Method_System_Nullable_long___ctor__, v44);
    v46 = v50;
  }
  else
  {
LABEL_41:
    v46 = 0LL;
  }
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v46, 0LL, v48, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_47;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)v3->fields.decideButton;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(EventCraftUseSupportToolDialogComponent_o *, bool, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    v24 >= 0,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Update(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s8

  if ( (byte_4BE046C & 1) == 0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BE046C = 1;
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

  if ( (byte_4BE0472 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0472 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0474 & 1) == 0 )
  {
    sub_1C21E38(&EventCraftUseSupportToolDialogComponent___c_TypeInfo);
    byte_4BE0474 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.endedAt;
}