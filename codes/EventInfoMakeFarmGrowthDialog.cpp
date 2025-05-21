void __fastcall EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B46063 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B46063 = 1;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v3, v4);
}


void __fastcall EventInfoMakeFarmGrowthDialog__OnClickCloseButton(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B46062 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__, v3);
    sub_1BDB878(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__, v4);
    byte_4B46062 = 1;
  }
  v5 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EventInfoMakeFarmGrowthDialog__Open(
        EventInfoMakeFarmGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
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
  TerminalPramsManager_c *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventConquestInfos; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ItemIconComponent_o *object; // x0
  __int64 v20; // x1
  int32_t *v21; // x22
  System_Text_StringBuilder_o *v22; // x23
  System_String_o *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *countLabel; // x22
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B46061 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_First_EventConquestInfo___, closeAction);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_5609/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, v9);
    sub_1BDB878(&StringLiteral_5605/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, v10);
    sub_1BDB878(&StringLiteral_5608/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, v11);
    sub_1BDB878(&StringLiteral_5606/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, v12);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v13);
    sub_1BDB878(&StringLiteral_5607/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, v14);
    byte_4B46061 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = (System_Collections_Generic_IEnumerable_TSource__o *)v15->static_fields->eventConquestInfos;
  if ( eventConquestInfos && eventConquestInfos[1].monitor )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    this->fields.closeCallback = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v17, v18);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_3056768 *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v21 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_39935088(object, v21[4], v21[5], -1, 0, 0LL);
    v22 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v22, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5606/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0LL);
    v40 = v21[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v24, v25, v26);
    if ( !v22 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v22, v23, (Il2CppObject *)object, 0LL);
    if ( v21[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0LL);
      v39 = v21[9];
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v28, v29, v30);
      System_Text_StringBuilder__AppendFormat(v22, v27, v31, 0LL);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v22->klass->vtable._3_ToString.method)(
                                      v22,
                                      v22->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0LL);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0LL);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0LL);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5609/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0LL),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5608/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0LL),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_25:
      sub_1BDBAD4(object, v20);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    this->fields.closeCallback = closeAction;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeAction, v37, v38);
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