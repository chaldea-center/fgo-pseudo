void EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C444DF & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C444DF = 1;
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
  const MethodInfo *v4; // x3

  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v3, v4);
}


void EventInfoMakeFarmGrowthDialog__OnClickCloseButton(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C444DE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
    sub_1C37058(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__);
    byte_4C444DE = 1;
  }
  v3 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  const MethodInfo *v8; // x3
  ItemIconComponent_o *object; // x0
  int32_t *v10; // x22
  System_Text_StringBuilder_o *v11; // x23
  System_String_o *v12; // x24
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  System_String_o *v19; // x24
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  UILabel_o *countLabel; // x22
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C444DD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_EventConquestInfo___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_5577/*"EVENT_CONQUEST_UP_FARM_TITLE"*/);
    sub_1C37058(&StringLiteral_5573/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/);
    sub_1C37058(&StringLiteral_5576/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_5574/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_5575/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/);
    byte_4C444DD = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v7, v8);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v10 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_40921900(object, v10[4], v10[5], -1, 0, 0);
    v11 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v11, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5574/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0);
    v35 = v10[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v13, v14, v15, v16, v17, v18);
    if ( !v11 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v11, v12, (Il2CppObject *)object, 0);
    if ( v10[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5573/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0);
      v34 = v10[9];
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v20, v21, v22, v23, v24, v25);
      System_Text_StringBuilder__AppendFormat(v11, v19, v26, 0);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v11->klass->vtable._3_ToString.methodPtr)(
                                      v11,
                                      v11->klass->vtable._3_ToString.method);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5577/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5576/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_25:
      sub_1C372B4(object);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0);
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
    this->fields.closeCallback = closeAction;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeAction, v32, v33);
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