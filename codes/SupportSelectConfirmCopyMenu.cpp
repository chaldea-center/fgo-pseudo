void SupportSelectConfirmCopyMenu___ctor(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5934AE7 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934AE7 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.currentState = 2;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmCopyMenu__Close(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5934AE3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SupportSelectConfirmCopyMenu_OnFinishedClose__);
    byte_5934AE3 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SupportSelectConfirmCopyMenu__OnClickCancel(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_5934AE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectConfirmCopyMenu_OnClickCancel__);
    byte_5934AE5 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmCopyMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmCopyMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectConfirmCopyMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        0,
        onClickButton->fields.method);
  }
}


void SupportSelectConfirmCopyMenu__OnClickDecide(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_5934AE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectConfirmCopyMenu_OnClickDecide__);
    byte_5934AE4 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmCopyMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmCopyMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectConfirmCopyMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        1,
        onClickButton->fields.method);
  }
}


void SupportSelectConfirmCopyMenu__OnFinishedClose(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickButton = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton, 0, v2, v3, v4, v5, v6, v7);
}


void SupportSelectConfirmCopyMenu__OnFinishedOpen(SupportSelectConfirmCopyMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void SupportSelectConfirmCopyMenu__Open(
        SupportSelectConfirmCopyMenu_o *this,
        SupportServantData_o *baseDeckData,
        SupportServantData_o *targetDeckData,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  LocalizationManager_c *v9; // x0
  int v10; // w8
  UILabel_o *titleLabel; // x23
  System_String_o *baseDeckObj; // x0
  __int64 v13; // x1
  UILabel_o *messageLabel; // x23
  UILabel_o *baseDeckTitleLabel; // x23
  UILabel_o *targetDeckTitleLabel; // x23
  UILabel_o *decideButtonLabel; // x23
  UILabel_o *cancelButtonLabel; // x23
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x4
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Action_o *v27; // x20

  if ( (byte_5934AE2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__);
    sub_21FFC50(&StringLiteral_13023/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/);
    sub_21FFC50(&StringLiteral_13022/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_13024/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_13019/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/);
    sub_21FFC50(&StringLiteral_13020/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_13021/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/);
    byte_5934AE2 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    v9 = LocalizationManager_TypeInfo;
    v10 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    titleLabel = this->fields.titleLabel;
    this->fields.currentState = 0;
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(v9, baseDeckData, targetDeckData);
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13024/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, baseDeckObj, 0);
    messageLabel = this->fields.messageLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13022/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_16;
    UILabel__set_text(messageLabel, baseDeckObj, 0);
    baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13019/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_BASE_DECK"*/, 0);
    if ( !baseDeckTitleLabel )
      goto LABEL_16;
    UILabel__set_text(baseDeckTitleLabel, baseDeckObj, 0);
    targetDeckTitleLabel = this->fields.targetDeckTitleLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13023/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_TARGET_DECK"*/, 0);
    if ( !targetDeckTitleLabel )
      goto LABEL_16;
    UILabel__set_text(targetDeckTitleLabel, baseDeckObj, 0);
    decideButtonLabel = this->fields.decideButtonLabel;
    baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13021/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_DECIDE"*/, 0);
    if ( !decideButtonLabel
      || (UILabel__set_text(decideButtonLabel, baseDeckObj, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          baseDeckObj = LocalizationManager__Get((System_String_o *)StringLiteral_13020/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_CONFIRM_CANCEL"*/, 0),
          !cancelButtonLabel)
      || (UILabel__set_text(cancelButtonLabel, baseDeckObj, 0),
          (baseDeckObj = (System_String_o *)this->fields.baseDeckObj) == 0)
      || (SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
            baseDeckData,
            0,
            1,
            v19),
          (baseDeckObj = (System_String_o *)this->fields.targetDeckObj) == 0) )
    {
LABEL_16:
      sub_21FFECC(baseDeckObj, v13);
    }
    SupportSelectDeckListViewItemDraw__SetSupportData(
      (SupportSelectDeckListViewItemDraw_o *)baseDeckObj,
      targetDeckData,
      0,
      1,
      v20);
    this->fields.onClickButton = onClickButton;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
      (int32_t)onClickButton,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_SupportSelectConfirmCopyMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
  }
}


void SupportSelectConfirmCopyMenu__add_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmCopyMenu_o *v13; // x0
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934AE0 & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    byte_5934AE0 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_onClickButton, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, v9, v10);
  SupportSelectConfirmCopyMenu__remove_onClickButton(v13, v14, v15);
}


System_String_o *SupportSelectConfirmCopyMenu__get_closeBtnPath(
        SupportSelectConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_5934AE6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4818/*"ConfirmWindow/CancelButton"*/);
    byte_5934AE6 = 1;
  }
  return (System_String_o *)StringLiteral_4818/*"ConfirmWindow/CancelButton"*/;
}


void SupportSelectConfirmCopyMenu__remove_onClickButton(
        SupportSelectConfirmCopyMenu_o *this,
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmCopyMenu_o *v13; // x0
  SupportServantData_o *v14; // x1
  SupportServantData_o *v15; // x2
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_5934AE1 & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    byte_5934AE1 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmCopyMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_onClickButton, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, v9, v10);
  SupportSelectConfirmCopyMenu__Open(v13, v14, v15, v16, v17);
}


void SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF4058;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF4010;
}


System_IAsyncResult_o *SupportSelectConfirmCopyMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SupportSelectConfirmCopyMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SupportSelectConfirmCopyMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}