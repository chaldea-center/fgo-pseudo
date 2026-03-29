void EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D31DF2 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D31DF2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoMakeFarmGrowthDialog__CheckAssertion(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoMakeFarmGrowthDialog__Init(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeCallback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallback, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoMakeFarmGrowthDialog__OnClickCloseButton(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31DF1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
    sub_1C93AD4(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__);
    byte_4D31DF1 = 1;
  }
  v3 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventInfoMakeFarmGrowthDialog__Open(
        EventInfoMakeFarmGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventConquestInfos; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ItemIconComponent_o *object; // x0
  __int64 v14; // x1
  int32_t *v15; // x22
  System_Text_StringBuilder_o *v16; // x23
  System_String_o *v17; // x24
  System_String_o *v18; // x24
  Il2CppObject *v19; // x0
  UILabel_o *countLabel; // x22
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D31DF0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_EventConquestInfo___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5601/*"EVENT_CONQUEST_UP_FARM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_5597/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_5600/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_5598/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_5599/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/);
    byte_4D31DF0 = 1;
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
    BaseDialog__Init((BaseDialog_o *)this, 0);
    this->fields.closeCallback = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallback, 0, v7, v8, v9, v10, v11, v12);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v15 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_41640856(object, v15[4], v15[5], -1, 0, 0);
    v16 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v16, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0);
    v32 = v15[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    if ( !v16 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v16, v17, (Il2CppObject *)object, 0);
    if ( v15[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0);
      v31 = v15[9];
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      System_Text_StringBuilder__AppendFormat(v16, v18, v19, 0);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                      v16,
                                      v16->klass->vtable._3_ToString.method);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5599/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5601/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_25:
      sub_1C93D2C(object, v14);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0);
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
    this->fields.closeCallback = closeAction;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback,
      (int32_t)closeAction,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  else
  {
    ActionExtensions__Call(closeAction, 0);
  }
}


void EventInfoMakeFarmGrowthDialog___OnClickCloseButton_b__10_0(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeCallback, 0);
}