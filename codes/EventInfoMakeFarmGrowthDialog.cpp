void EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C287E1 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C287E1 = 1;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v3, v4);
}


void EventInfoMakeFarmGrowthDialog__OnClickCloseButton(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C287E0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
    sub_1C2D490(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__);
    byte_4C287E0 = 1;
  }
  v3 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  __int64 v10; // x1
  int32_t *v11; // x22
  System_Text_StringBuilder_o *v12; // x23
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_String_o *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  UILabel_o *countLabel; // x22
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C287DF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_First_EventConquestInfo___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5568/*"EVENT_CONQUEST_UP_FARM_TITLE"*/);
    sub_1C2D490(&StringLiteral_5564/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/);
    sub_1C2D490(&StringLiteral_5567/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_5565/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_5566/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/);
    byte_4C287DF = 1;
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v7, v8);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v11 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_40700316(object, v11[4], v11[5], -1, 0, 0);
    v12 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v12, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5565/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0);
    v30 = v11[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v14, v15, v16);
    if ( !v12 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v12, v13, (Il2CppObject *)object, 0);
    if ( v11[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5564/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0);
      v29 = v11[9];
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v18, v19, v20);
      System_Text_StringBuilder__AppendFormat(v12, v17, v21, 0);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                      v12,
                                      v12->klass->vtable._3_ToString.method);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5567/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !closeLabel) )
    {
LABEL_25:
      sub_1C2D6EC(object, v10);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0);
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
    this->fields.closeCallback = closeAction;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeAction, v27, v28);
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