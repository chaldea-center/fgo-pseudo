void SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C23952 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23952 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C2394E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__);
    byte_4C2394E = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void SupportSelectConfirmDeckMenu__OnClickCancel(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_4C23950 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectConfirmDeckMenu_OnClickCancel__);
    byte_4C23950 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2394F & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectConfirmDeckMenu_OnClickDecide__);
    byte_4C2394F = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.onClickButton = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickButton, 0, v2, v3);
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
  UILabel_o *v11; // x22
  UILabel_o *messageLabel; // x22
  __int64 *v13; // x8
  UILabel_o *titleLabel; // x22
  System_String_o *Empty; // x1
  UILabel_o *v16; // x22
  UILabel_o *v17; // x22
  struct UILabel_o *nameLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x20

  if ( (byte_4C2394D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__);
    sub_1C2D490(&StringLiteral_12526/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/);
    sub_1C2D490(&StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12531/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12528/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/);
    sub_1C2D490(&StringLiteral_12527/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12529/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12530/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/);
    sub_1C2D490(&StringLiteral_12532/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/);
    sub_1C2D490(&StringLiteral_12513/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/);
    byte_4C2394D = 1;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12530/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_34;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      messageLabel = this->fields.messageLabel;
      v13 = &StringLiteral_12529/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( kind == 1 )
      {
        v16 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12528/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0);
        if ( !v16 )
          goto LABEL_34;
        UILabel__set_text(v16, (System_String_o *)gameObject, 0);
        v17 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12527/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0);
        if ( !v17 )
          goto LABEL_34;
        UILabel__set_text(v17, (System_String_o *)gameObject, 0);
        nameLabel = this->fields.nameLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0);
        if ( !supportData )
          goto LABEL_34;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)supportData->fields._deckName_k__BackingField,
                                                   0);
        if ( !nameLabel )
          goto LABEL_34;
        Empty = (System_String_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)nameLabel;
        goto LABEL_27;
      }
      if ( kind )
        goto LABEL_28;
      v11 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12532/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0);
      if ( !v11 )
        goto LABEL_34;
      UILabel__set_text(v11, (System_String_o *)gameObject, 0);
      messageLabel = this->fields.messageLabel;
      v13 = &StringLiteral_12531/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v13, 0);
    if ( !messageLabel )
      goto LABEL_34;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_27:
    UILabel__set_text((UILabel_o *)gameObject, Empty, 0);
LABEL_28:
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12525/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12513/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0);
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
            v21);
          this->fields.onClickButton = onClickButton;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickButton, (int32_t)onClickButton, v22, v23);
          v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0);
          return;
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(gameObject, v10);
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmDeckMenu_o *v11; // x0
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2394B & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    byte_4C2394B = 1;
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
    v9 = sub_1C676E8(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23951 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4640/*"ConfirmWindow/CancelButton"*/);
    byte_4C23951 = 1;
  }
  return (System_String_o *)StringLiteral_4640/*"ConfirmWindow/CancelButton"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmDeckMenu_o *v11; // x0
  int32_t v12; // w1
  SupportServantData_o *v13; // x2
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4C2394C & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    byte_4C2394C = 1;
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
    v9 = sub_1C676E8(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectConfirmDeckMenu__Open(v11, v12, v13, v14, v15);
}


void SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E5F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E5AC;
}


System_IAsyncResult_o *SupportSelectConfirmDeckMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C23953 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C23953 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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