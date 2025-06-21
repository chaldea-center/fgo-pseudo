void __fastcall EventCraftUseSupportToolDialogComponent___ctor(
        EventCraftUseSupportToolDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1688C & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1688C = 1;
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

  if ( (byte_4B1688A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventCraftUseSupportToolDialogComponent_Init__, v3);
    byte_4B1688A = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B16889 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__, method);
    byte_4B16889 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventCraftUseSupportToolDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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

  if ( (byte_4B16888 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int__int___, method);
    sub_1BCAFF8(&Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__, v3);
    byte_4B16888 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_EventCraftUseSupportToolDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1BCB254(v6, v7);
    ActionExtensions__Call_int__int_(
      (System_Action_T1__T2__o *)this->fields.onDecide,
      this->fields.storeIdx,
      tradeGoodsEntity->fields.id,
      (const MethodInfo_2F6A3D8 *)Method_ActionExtensions_Call_int__int___);
  }
}


void __fastcall EventCraftUseSupportToolDialogComponent__Open(
        EventCraftUseSupportToolDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        int32_t storeIndex,
        ItemEntity_o *support,
        System_Action_int__int__o *decideAction,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v9; // x20
  EventCraftUseSupportToolDialogComponent_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
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
  System_Action_o *v32; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v9 = item;
  v10 = this;
  if ( (byte_4B16886 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_3657/*"COMMON_CONFIRM_USE"*/, v16);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1BCAFF8(&StringLiteral_3874/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/, v18);
    sub_1BCAFF8(&StringLiteral_3875/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/, v19);
    sub_1BCAFF8(&StringLiteral_3873/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/, v20);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1BCAFF8(&StringLiteral_3872/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/, v21);
    byte_4B16886 = 1;
  }
  entity = 0LL;
  if ( !v10->fields.state )
  {
    v10->fields.storeIdx = storeIndex;
    if ( v9 )
    {
      v10->fields.tradeGoodsEntity = v9->fields._TradeGoodsEntity_k__BackingField;
      sub_1BCAF9C(&v10->fields.tradeGoodsEntity);
      v10->fields.eventTradeInfo = v9->fields._TradeInfo_k__BackingField;
      sub_1BCAF9C(&v10->fields.eventTradeInfo);
      v10->fields.pickupInfoList = v9->fields._PickupInfoList_k__BackingField;
      sub_1BCAF9C(&v10->fields.pickupInfoList);
      v10->fields.supportTool = support;
      p_supportTool = &v10->fields.supportTool;
      sub_1BCAF9C(&v10->fields.supportTool);
      v10->fields.onDecide = decideAction;
      sub_1BCAF9C(&v10->fields.onDecide);
      titleLabel = v10->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3875/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_TITLE"*/,
                                                            0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        detailLabel = v10->fields.detailLabel;
        this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3872/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_DESCRIPTION"*/,
                                                              0LL);
        if ( detailLabel )
        {
          UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
          craftCompletionHeaderLb = v10->fields.craftCompletionHeaderLb;
          this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3873/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_HEADER"*/,
                                                                0LL);
          if ( craftCompletionHeaderLb )
          {
            UILabel__set_text(craftCompletionHeaderLb, (System_String_o *)this, 0LL);
            supportToolLeftTimeHeaderLb = v10->fields.supportToolLeftTimeHeaderLb;
            this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3874/*"CRAFT_EVENT_SUPPORT_TOOL_DIALOG_LEFT_TIME_HEADER"*/,
                                                                  0LL);
            if ( supportToolLeftTimeHeaderLb )
            {
              UILabel__set_text(supportToolLeftTimeHeaderLb, (System_String_o *)this, 0LL);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_USE"*/,
                                                                    0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                cancelButtonLb = v10->fields.cancelButtonLb;
                this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/,
                                                                      0LL);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
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
                    item = 0LL;
                    if ( !this )
                      goto LABEL_35;
                  }
                  ItemIconComponent__SetItem((ItemIconComponent_o *)this, (int32_t)item, -1, 1, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4B165D1 )
                  {
                    sub_1BCAFF8(&NetworkManager_TypeInfo, item);
                    byte_4B165D1 = 1;
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
                                                                        0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_33;
                  if ( entity )
                  {
                    this = (EventCraftUseSupportToolDialogComponent_o *)v10->fields.supportToolItem;
                    if ( this )
                    {
                      ItemIconComponent__SetPossession((ItemIconComponent_o *)this, entity->fields.num, 0LL);
LABEL_33:
                      EventCraftUseSupportToolDialogComponent__SetTimeLabel(v10, (const MethodInfo *)item);
                      v10->fields.state = 1;
                      v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                      System_Action___ctor(
                        v32,
                        (Il2CppObject *)v10,
                        Method_EventCraftUseSupportToolDialogComponent__Open_b__24_0__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)v10, v32, 0, 0LL);
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
    sub_1BCB254(this, item);
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
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  int64_t v48; // x22
  int64_t v49; // x0
  int64_t v50; // x21
  int32_t TradePickupTime; // w1
  const MethodInfo_37D95B4 *v52; // x3
  const MethodInfo_37D95B4 *v53; // x3
  __int64 v54; // x8
  int64_t v55; // x21
  UILabel_o *supportToolLeftTimeLb; // x22
  System_String_o *v57; // x0
  __int64 v58; // [xsp+0h] [xbp-70h] BYREF
  __int64 v59; // [xsp+8h] [xbp-68h]
  System_Nullable_int__o v60; // 0:x0.8
  System_Nullable_long__o v61; // 0:x0.16
  System_Nullable_long__o v62; // 0:x0.16

  v3 = this;
  if ( (byte_4B16887 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, method);
    sub_1BCAFF8(&EventCraftTimeCalculation_TypeInfo, v4);
    sub_1BCAFF8(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&System_Math_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Nullable_long__GetValueOrDefault__, v9);
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, v10);
    sub_1BCAFF8(&Method_System_Nullable_long___ctor__, v11);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v12);
    sub_1BCAFF8(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v14);
    sub_1BCAFF8(&Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__, v15);
    sub_1BCAFF8(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_13278/*"TIME_FORMAT_1"*/, v17);
    this = (EventCraftUseSupportToolDialogComponent_o *)sub_1BCAFF8(&StringLiteral_13383/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v18);
    byte_4B16887 = 1;
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
                                                          (System_String_o *)StringLiteral_13383/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
  }
  else
  {
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13278/*"TIME_FORMAT_1"*/, 0LL);
    this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v27, 0LL, v28, 0LL);
  }
  method = (const MethodInfo *)this;
  if ( !craftCompletionBeforeTimeLb
    || (UILabel__set_text(craftCompletionBeforeTimeLb, (System_String_o *)this, 0LL),
        (v30 = v3->fields.eventTradeInfo) == 0LL) )
  {
LABEL_47:
    sub_1BCB254(this, method);
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
                                                          (System_String_o *)StringLiteral_13383/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                          0LL);
    goto LABEL_24;
  }
  if ( (v39 & 0x8000000000000000LL) != 0 )
    goto LABEL_23;
LABEL_21:
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13278/*"TIME_FORMAT_1"*/, 0LL);
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
      _9__25_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__25_0,
        v45,
        Method_EventCraftUseSupportToolDialogComponent___c__SetTimeLabel_b__25_0__,
        0LL);
      static_fields = EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__25_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__25_0;
      sub_1BCAF9C(&static_fields->__9__25_0);
    }
    v47 = System_Linq_Enumerable__Select_object__long_(
            v42,
            (System_Func_TSource__TResult__o *)_9__25_0,
            (const MethodInfo_304ECD8 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v41 = System_Linq_Enumerable__Max_65451264((System_Collections_Generic_IEnumerable_long__o *)v47, 0LL);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v48 = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v49 = System_Math__Max_63972472(v41 - v48, 0LL, 0LL);
  if ( !v3->fields.supportTool )
    goto LABEL_41;
  v50 = v49;
  TradePickupTime = ItemEntity__GetTradePickupTime(v3->fields.supportTool, 0LL);
  v60 = (System_Nullable_int__o)&v58;
  v58 = 0LL;
  System_Nullable_int____ctor(v60, TradePickupTime, (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
  if ( !(_BYTE)v58 )
    goto LABEL_41;
  v61.fields.value = v58 >> 32;
  *(_QWORD *)&v61.fields.hasValue = &v58;
  v58 = 0LL;
  v59 = 0LL;
  System_Nullable_long____ctor(v61, Method_System_Nullable_long___ctor__, v52);
  if ( (_BYTE)v58 )
  {
    v54 = v59;
    *(_QWORD *)&v62.fields.hasValue = &v58;
    v58 = 0LL;
    v59 = 0LL;
    v62.fields.value = v54 + v50;
    System_Nullable_long____ctor(v62, Method_System_Nullable_long___ctor__, v53);
    v55 = v59;
  }
  else
  {
LABEL_41:
    v55 = 0LL;
  }
  supportToolLeftTimeLb = v3->fields.supportToolLeftTimeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13278/*"TIME_FORMAT_1"*/, 0LL);
  this = (EventCraftUseSupportToolDialogComponent_o *)LocalizationManager__GetRestTimeInFormat(v55, 0LL, v57, 0LL);
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

  if ( (byte_4B16885 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Math_TypeInfo, method);
    byte_4B16885 = 1;
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

  if ( (byte_4B1688B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1688B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftUseSupportToolDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B1688D & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftUseSupportToolDialogComponent___c_TypeInfo, v1);
    byte_4B1688D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventCraftUseSupportToolDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields->__9 = (struct EventCraftUseSupportToolDialogComponent___c_o *)v2;
  sub_1BCAF9C(EventCraftUseSupportToolDialogComponent___c_TypeInfo->static_fields);
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
    sub_1BCB254(this, 0LL);
  return x->fields.endedAt;
}