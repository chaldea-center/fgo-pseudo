void __fastcall EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDB5D & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDDB5D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoMakeFarmGrowthDialog__CheckAssertion(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoMakeFarmGrowthDialog__Init(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall EventInfoMakeFarmGrowthDialog__OnClickCloseButton(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BDDB5C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
    sub_1C21E38(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__);
    byte_4BDDB5C = 1;
  }
  v3 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall EventInfoMakeFarmGrowthDialog__Open(
        EventInfoMakeFarmGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventConquestInfos; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ItemIconComponent_o *object; // x0
  __int64 v14; // x1
  int32_t *v15; // x22
  System_Text_StringBuilder_o *v16; // x23
  System_String_o *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_String_o *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  UILabel_o *countLabel; // x22
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDDB5B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_First_EventConquestInfo___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5717/*"EVENT_CONQUEST_UP_FARM_TITLE"*/);
    sub_1C21E38(&StringLiteral_5713/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/);
    sub_1C21E38(&StringLiteral_5716/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_5714/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_5715/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/);
    byte_4BDDB5B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = (System_Collections_Generic_IEnumerable_TSource__o *)v5->static_fields->eventConquestInfos;
  if ( eventConquestInfos && eventConquestInfos[1].monitor )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    this->fields.closeCallback = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v7, v8, v9, v10, v11, v12);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_2FD0884 *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v15 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_39386620(object, v15[4], v15[5], -1, 0, 0LL);
    v16 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v16, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5714/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0LL);
    v38 = v15[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v18, v19, v20);
    if ( !v16 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v16, v17, (Il2CppObject *)object, 0LL);
    if ( v15[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5713/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0LL);
      v37 = v15[9];
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v22, v23, v24);
      System_Text_StringBuilder__AppendFormat(v16, v21, v25, 0LL);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                                      v16,
                                      v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0LL);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5715/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0LL);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0LL);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5717/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0LL),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5716/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0LL),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_25:
      sub_1C22094(object, v14);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    this->fields.closeCallback = closeAction;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.closeCallback,
      (int64_t)closeAction,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  else
  {
    ActionExtensions__Call(closeAction, 0LL);
  }
}


void __fastcall EventInfoMakeFarmGrowthDialog___OnClickCloseButton_b__10_0(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
}