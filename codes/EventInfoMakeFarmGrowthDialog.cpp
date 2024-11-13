void __fastcall EventInfoMakeFarmGrowthDialog___ctor(EventInfoMakeFarmGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1778D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1778D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall EventInfoMakeFarmGrowthDialog__OnClickCloseButton(
        EventInfoMakeFarmGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B1778C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__, v6, v7);
    byte_4B1778C = 1;
  }
  v8 = Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoMakeFarmGrowthDialog_OnClickCloseButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventInfoMakeFarmGrowthDialog__OnClickCloseButton_b__10_0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall EventInfoMakeFarmGrowthDialog__Open(
        EventInfoMakeFarmGrowthDialog_o *this,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
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
  TerminalPramsManager_c *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventConquestInfos; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  ItemIconComponent_o *object; // x0
  __int64 v34; // x1
  int32_t *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Text_StringBuilder_o *v39; // x23
  __int64 v40; // x1
  System_String_o *v41; // x24
  __int64 v42; // x1
  System_String_o *v43; // x24
  Il2CppObject *v44; // x0
  UILabel_o *countLabel; // x22
  __int64 v46; // x1
  UILabel_o *headerLabel; // x22
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  UILabel_o *closeLabel; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1778B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_EventConquestInfo___, closeAction, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5678/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5674/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5677/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_5675/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_5676/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, v23, v24);
    byte_4B1778B = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, closeAction);
    v25 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = (System_Collections_Generic_IEnumerable_TSource__o *)v25->static_fields->eventConquestInfos;
  if ( eventConquestInfos && eventConquestInfos[1].monitor )
  {
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
    this->fields.closeCallback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v27, v28, v29, v30, v31, v32);
    object = (ItemIconComponent_o *)System_Linq_Enumerable__First_object_(
                                      eventConquestInfos,
                                      (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_EventConquestInfo___);
    if ( !object )
      goto LABEL_25;
    v35 = (int32_t *)object;
    object = this->fields.countIcon;
    if ( !object )
      goto LABEL_25;
    ItemIconComponent__SetGift_38855180(object, v35[4], v35[5], -1, 0, 0LL);
    v39 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v36, v37, v38);
    System_Text_StringBuilder___ctor(v39, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5675/*"EVENT_CONQUEST_UP_FARM_ITEM_FORMAT"*/, 0LL);
    v58 = v35[8];
    object = (ItemIconComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
    if ( !v39 )
      goto LABEL_25;
    System_Text_StringBuilder__AppendFormat(v39, v41, (Il2CppObject *)object, 0LL);
    if ( v35[9] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5674/*"EVENT_CONQUEST_UP_FARM_ITEM_ADD_FORMAT"*/, 0LL);
      v57 = v35[9];
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
      System_Text_StringBuilder__AppendFormat(v39, v43, v44, 0LL);
    }
    countLabel = this->fields.countLabel;
    object = (ItemIconComponent_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                      v39,
                                      v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !countLabel )
      goto LABEL_25;
    UILabel__set_text(countLabel, (System_String_o *)object, 0LL);
    headerLabel = this->fields.headerLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_CONQUEST_UP_FARM_ITEM_HEADER"*/, 0LL);
    if ( !headerLabel )
      goto LABEL_25;
    UILabel__set_text(headerLabel, (System_String_o *)object, 0LL);
    titleLabel = this->fields.titleLabel;
    object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_CONQUEST_UP_FARM_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)object, 0LL),
          messageLabel = this->fields.messageLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_CONQUEST_UP_FARM_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)object, 0LL),
          closeLabel = this->fields.closeLabel,
          object = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeLabel) )
    {
LABEL_25:
      sub_1BCAA3C(object, v34);
    }
    UILabel__set_text(closeLabel, (System_String_o *)object, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    this->fields.closeCallback = closeAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeCallback,
      (int64_t)closeAction,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
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