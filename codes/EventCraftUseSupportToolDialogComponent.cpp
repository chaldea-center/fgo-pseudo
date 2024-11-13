void __fastcall EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A022 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A022 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent__Close(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A020 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventCraftUseSupportToolDialogComponent_Init__, v5, v6);
    byte_4B1A020 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftUseSupportToolDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A01F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A01F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    EventCraftUseSupportToolDialogComponent__Close(this, v6);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__OnClickDecide(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  if ( (byte_4B1A01E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int__int___, method, v2);
    sub_1BCA7E0(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__, v4, v5);
    byte_4B1A01E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1BCAA3C(v8, v9);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_2E6581C *)Method_ActionExtensions_Call_int__int___);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t TradeGoodsEntity_k__BackingField; // x1
  int64_t TradeInfo_k__BackingField; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t PickupInfoList_k__BackingField; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ItemEntity_o **p_supportTool; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *detailLabel; // x21
  UILabel_o *craftCompletionHeaderLb; // x21
  UILabel_o *supportToolLeftTimeHeaderLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  struct ItemEntity_o *supportTool; // x8
  __int64 v71; // x1
  __int64 v72; // x1
  Il2CppObject *Master_object; // x21
  int32_t id; // w3
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Action_o *v78; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v11 = item;
  v12 = this;
  if ( (byte_4B1A01C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&storeIndex);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventCraftUseSupportToolDialogComponent__Open_b__22_0__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_3794/*"COMMON_CONFIRM_USE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3990/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3991/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3989/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/, v31, v32);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1BCA7E0(&StringLiteral_3988/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/, v33, v34);
    byte_4B1A01C = 1;
  }
  entity = 0LL;
  if ( !v12->fields.state )
  {
    v12->fields.storeIdx = storeIndex;
    if ( v11 )
    {
      TradeGoodsEntity_k__BackingField = (int64_t)v11->fields._TradeGoodsEntity_k__BackingField;
      v12->fields.tradeGoodsEntity = (struct EventTradeGoodsEntity_o *)TradeGoodsEntity_k__BackingField;
      sub_1BCA784(
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v12->fields.eventTradeInfo,
        TradeInfo_k__BackingField,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      PickupInfoList_k__BackingField = (int64_t)v11->fields._PickupInfoList_k__BackingField;
      v12->fields.pickupInfoList = (struct System_Collections_Generic_List_EventCraftPickupInfo__o *)PickupInfoList_k__BackingField;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v12->fields.pickupInfoList,
        PickupInfoList_k__BackingField,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v12->fields.supportTool = support;
      p_supportTool = &v12->fields.supportTool;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v12->fields.supportTool,
        (int64_t)support,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      v12->fields.onDecide = decideAction;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v12->fields.onDecide,
        (int64_t)decideAction,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      titleLabel = v12->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3991/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        detailLabel = v12->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3988/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0LL);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
          craftCompletionHeaderLb = v12->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3989/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0LL);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0LL);
            supportToolLeftTimeHeaderLb = v12->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3990/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0LL);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
              decideButtonLb = v12->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3794/*"COMMON_CONFIRM_USE"*/,
                                                                    0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                cancelButtonLb = v12->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
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
                      goto LABEL_31;
                  }
                  else
                  {
                    item = 0LL;
                    if ( !this )
                      goto LABEL_31;
                  }
                  ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)item, -1, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v71);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v72);
                  this = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__get_UserId(0LL);
                  if ( *p_supportTool )
                  {
                    id = (*p_supportTool)->fields.id;
                    if ( !Master_object )
                      goto LABEL_31;
                  }
                  else
                  {
                    id = 0;
                    if ( !Master_object )
                      goto LABEL_31;
                  }
                  this = (EventCraftUseSupportToolDialogComponent_o *)UserItemMaster__TryGetEntity(
                                                                        (UserItemMaster_o *)Master_object,
                                                                        &entity,
                                                                        (int64_t)this,
                                                                        id,
                                                                        0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_29;
                  if ( entity )
                  {
                    this = (EventCraftUseSupportToolDialogComponent_o *)v12->fields.supportToolItem;
                    if ( this )
                    {
                      ItemIconComponent__SetPossession((ItemIconComponent_o *)this, entity->fields.num, 0LL);
LABEL_29:
                      EventCraftUseSupportToolDialogComponent__SetTimeLabel(v12, (const MethodInfo *)item);
                      v12->fields.state = 1;
                      v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v75, v76, v77);
                      System_Action___ctor(
                        v78,
                        (Il2CppObject *)v12,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__22_0__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)v12, v78, 0, 0LL);
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
LABEL_31:
    sub_1BCAA3C(this, item);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__SetTimeLabel(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  EventCraftUseSupportToolDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int64_t startedAt; // x20
  System_Collections_Generic_List_EventCraftPickupInfo__o *pickupInfoList; // x22
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x23
  int32_t tradeNum; // w21
  __int64 v40; // x1
  int64_t CraftFinishTime; // x22
  __int64 v42; // x1
  int64_t Time; // x8
  UILabel_o *craftCompletionBeforeTimeLb; // x21
  int64_t v45; // x22
  System_String_o *v46; // x0
  const MethodInfo *v47; // x5
  struct EventTradeInfo_o *v48; // x8
  System_Collections_Generic_List_EventCraftPickupInfo__o *v49; // x24
  EventTradeGoodsEntity_o *v50; // x25
  ItemEntity_o *supportTool; // x23
  int32_t v52; // w21
  int64_t v53; // x22
  __int64 v54; // x1
  int64_t v55; // x22
  __int64 v56; // x1
  int64_t v57; // x8
  UILabel_o *craftCompletionAfterTimeLb; // x21
  int64_t v59; // x20
  System_String_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  int64_t v64; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x21
  EventCraftUseSupportToolDialogComponent___c_c *v66; // x0
  System_Func_T__TResult__o *_9__23_0; // x22
  Il2CppObject *v68; // x23
  struct EventCraftUseSupportToolDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v76; // x0
  __int64 v77; // x1
  int64_t v78; // x22
  int64_t v79; // x0
  __int64 v80; // x1
  int64_t v81; // x21
  int32_t TradePickupTime; // w1
  const MethodInfo_36BF22C *v83; // x3
  const MethodInfo_36BF22C *v84; // x3
  __int64 v85; // x8
  int64_t v86; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v88; // x0
  __int64 v89; // [xsp+0h] [xbp-70h] BYREF
  __int64 v90; // [xsp+8h] [xbp-68h]
  System_Nullable_int__o v91; // 0:x0.8
  System_Nullable_long__o v92; // 0:x0.16
  System_Nullable_long__o v93; // 0:x0.16

  v4 = this;
  if ( (byte_4B1A01D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, method, v2);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Nullable_long__GetValueOrDefault__, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v23, v24);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v25, v26);
    sub_1BCA7E0(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__23_0__, v27, v28);
    sub_1BCA7E0(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_13467/*"TIME_FORMAT_1"*/, v31, v32);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v33, v34);
    byte_4B1A01D = 1;
  }
  eventTradeInfo = v4->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_47;
  startedAt = eventTradeInfo->fields.startedAt;
  tradeGoodsEntity = v4->fields.tradeGoodsEntity;
  pickupInfoList = v4->fields.pickupInfoList;
  tradeNum = eventTradeInfo->fields.tradeNum;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method);
  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                      tradeGoodsEntity,
                      pickupInfoList,
                      0LL,
                      tradeNum,
                      startedAt,
                      v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Time = NetworkManager__getTime(0LL);
  craftCompletionBeforeTimeLb = v4->fields.craftCompletionBeforeTimeLb;
  v45 = CraftFinishTime + startedAt - Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  if ( (v45 & 0x8000000000000000LL) != 0 )
  {
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
  }
  else
  {
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v45, 0LL, v46, 0LL);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb
    || (UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0LL),
        (v48 = v4->fields.eventTradeInfo) == 0LL) )
  {
LABEL_47:
    sub_1BCAA3C(this, method);
  }
  v50 = v4->fields.tradeGoodsEntity;
  v49 = v4->fields.pickupInfoList;
  supportTool = v4->fields.supportTool;
  v52 = v48->fields.tradeNum;
  v53 = v48->fields.startedAt;
  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, method);
  v55 = EventCraftTimeCalculation__GetCraftFinishTime(v50, v49, supportTool, v52, v53, v47);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54);
  v57 = NetworkManager__getTime(0LL);
  craftCompletionAfterTimeLb = v4->fields.craftCompletionAfterTimeLb;
  v59 = v55 + startedAt - v57;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
    if ( (v59 & 0x8000000000000000LL) == 0 )
      goto LABEL_21;
LABEL_23:
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
    goto LABEL_24;
  }
  if ( (v59 & 0x8000000000000000LL) != 0 )
    goto LABEL_23;
LABEL_21:
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v59, 0LL, v60, 0LL);
LABEL_24:
  method = (const MethodInfo *)this;
  if ( !craftCompletionAfterTimeLb )
    goto LABEL_47;
  UILabel__set_text(craftCompletionAfterTimeLb, (System_String_o *)this, 0LL);
  v64 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.pickupInfoList, 0LL) )
  {
    v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.pickupInfoList;
    v66 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    if ( !EventCraftUseSupportToolDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftUseSupportToolDialogComponent___c_TypeInfo, v61);
      v66 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
    }
    _9__23_0 = (System_Func_T__TResult__o *)v66->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66, v61);
        v66 = EventCraftUseSupportToolDialogComponent___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v66->static_fields->__9;
      _9__23_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                v61,
                                                v62,
                                                v63);
      System_Func_object__long____ctor(
        _9__23_0,
        v68,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__23_0__,
        0LL);
      static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__23_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
        (int64_t)_9__23_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    v76 = System_Linq_Enumerable__Select_object__long_(
            v65,
            (System_Func_TSource__TResult__o *)_9__23_0,
            (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v64 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v76, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v61);
  v78 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v77);
  v79 = System_Math__Max_63220208(v64 - v78, 0LL, 0LL);
  if ( !v4->fields.supportTool )
    goto LABEL_41;
  v81 = v79;
  TradePickupTime = ItemEntity__GetTradePickupTime(v4->fields.supportTool, 0LL);
  v91 = (System_Nullable_int__o)&v89;
  v89 = 0LL;
  System_Nullable_int____ctor(v91, TradePickupTime, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v89 )
    goto LABEL_41;
  v92.fields.value = v89 >> 32;
  *(_QWORD *)&v92.fields.hasValue = &v89;
  v89 = 0LL;
  v90 = 0LL;
  System_Nullable_long____ctor(v92, Method_System_Nullable_long___ctor__, v83);
  if ( (_BYTE)v89 )
  {
    v85 = v90;
    *(_QWORD *)&v93.fields.hasValue = &v89;
    v89 = 0LL;
    v90 = 0LL;
    v93.fields.value = v85 + v81;
    System_Nullable_long____ctor(v93, Method_System_Nullable_long___ctor__, v84);
    v86 = v90;
  }
  else
  {
LABEL_41:
    v86 = 0LL;
  }
  supportToolLeftTimeLb = v4->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v86, 0LL, v88, 0LL);
  if ( !supportToolLeftTimeLb )
    goto LABEL_47;
  UILabel__set_text(supportToolLeftTimeLb, (System_String_o *)this, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(EventCraftUseSupportToolDialogComponent_o *, bool, Il2CppMethodPointer))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    v59 >= 0,
    this->klass->vtable._6_get_closeBtnPath.methodPtr);
}


// attributes: thunk
void __fastcall EventCraftUseSupportToolDialogComponent__Update(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftUseSupportToolDialogComponent__SetTimeLabel(this, method);
}


void __fastcall EventCraftUseSupportToolDialogComponent___Open_b__22_0(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventCraftUseSupportToolDialogComponent__get_closeBtnObject(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A021 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A021 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A023 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v1, v2);
    byte_4B1A023 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftUseSupportToolDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___ctor(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventCraftUseSupportToolDialogComponent___c___SetTimeLabel_b__23_0(
        EventCraftUseSupportToolDialogComponent___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}