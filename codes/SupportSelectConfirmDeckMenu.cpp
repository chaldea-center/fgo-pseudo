void SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596CC1E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CC1E = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.currentState = 2;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596CC1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__);
    byte_596CC1A = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SupportSelectConfirmDeckMenu__OnClickCancel(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_596CC1C & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectConfirmDeckMenu_OnClickCancel__);
    byte_596CC1C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportSelectConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        0,
        onClickButton->fields.method);
  }
}


void SupportSelectConfirmDeckMenu__OnClickDecide(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_596CC1B & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectConfirmDeckMenu_OnClickDecide__);
    byte_596CC1B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SupportSelectConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        1,
        onClickButton->fields.method);
  }
}


void SupportSelectConfirmDeckMenu__OnFinishedClose(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickButton = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton, 0, v2, v3, v4, v5, v6, v7);
}


void SupportSelectConfirmDeckMenu__OnFinishedOpen(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  this->fields.currentState = 1;
}


void SupportSelectConfirmDeckMenu__Open(
        SupportSelectConfirmDeckMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportData,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *v13; // x22
  __int64 *v14; // x8
  UILabel_o *v15; // x22
  UILabel_o *messageLabel; // x22
  struct UILabel_o *nameLabel; // x22
  System_String_o *v18; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *v20; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v23; // x4
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Action_o *v30; // x20

  if ( (byte_596CC19 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__);
    sub_2213A60(&StringLiteral_13057/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/);
    sub_2213A60(&StringLiteral_13056/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/);
    sub_2213A60(&StringLiteral_13062/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_13059/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/);
    sub_2213A60(&StringLiteral_13058/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_13060/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_13061/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/);
    sub_2213A60(&StringLiteral_13063/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/);
    sub_2213A60(&StringLiteral_13044/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/);
    byte_596CC19 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( kind == 2 )
    {
      titleLabel = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13061/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_34;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      v14 = &StringLiteral_13060/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( kind == 1 )
      {
        v15 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13059/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0);
        if ( !v15 )
          goto LABEL_34;
        UILabel__set_text(v15, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13058/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0);
        if ( !messageLabel )
          goto LABEL_34;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        nameLabel = this->fields.nameLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13057/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0);
        if ( !supportData )
          goto LABEL_34;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)supportData->fields._deckName_k__BackingField,
                                                   0);
        if ( !nameLabel )
          goto LABEL_34;
        v18 = (System_String_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)nameLabel;
        goto LABEL_27;
      }
      if ( kind )
        goto LABEL_28;
      v13 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13063/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0);
      if ( !v13 )
        goto LABEL_34;
      UILabel__set_text(v13, (System_String_o *)gameObject, 0);
      v14 = &StringLiteral_13062/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    v20 = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
    if ( !v20 )
      goto LABEL_34;
    UILabel__set_text(v20, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_34;
    v18 = **(System_String_o ***)(qword_5984390 + 184);
LABEL_27:
    UILabel__set_text((UILabel_o *)gameObject, v18, 0);
LABEL_28:
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13056/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13044/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0);
      if ( cancelButtonLabel )
      {
        UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.deckInfoObj;
        if ( gameObject )
        {
          SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)gameObject,
            supportData,
            0,
            1,
            v23);
          this->fields.onClickButton = onClickButton;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
            (int32_t)onClickButton,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
          return;
        }
      }
    }
LABEL_34:
    sub_2213CDC(gameObject, v10);
  }
}


void SupportSelectConfirmDeckMenu__add_onClickButton(
        SupportSelectConfirmDeckMenu_o *this,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmDeckMenu_o *v13; // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CC17 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    byte_596CC17 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onClickButton, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, v9, v10);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v13, v14, v15);
}


System_String_o *SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596CC1D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4826/*"ConfirmWindow/CancelButton"*/);
    byte_596CC1D = 1;
  }
  return (System_String_o *)StringLiteral_4826/*"ConfirmWindow/CancelButton"*/;
}


void SupportSelectConfirmDeckMenu__remove_onClickButton(
        SupportSelectConfirmDeckMenu_o *this,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o **p_onClickButton; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmDeckMenu_o *v13; // x0
  int32_t v14; // w1
  SupportServantData_o *v15; // x2
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_596CC18 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    byte_596CC18 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onClickButton, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, v9, v10);
  SupportSelectConfirmDeckMenu__Open(v13, v14, v15, v16, v17);
}


void SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2007098;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2007050;
}


System_IAsyncResult_o *SupportSelectConfirmDeckMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}