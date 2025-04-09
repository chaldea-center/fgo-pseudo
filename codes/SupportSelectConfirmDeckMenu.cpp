void __fastcall SupportSelectConfirmDeckMenu___ctor(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49B767F & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B767F = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__Close(SupportSelectConfirmDeckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49B767B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, v3);
    byte_49B767B = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickCancel(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_49B767D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SupportSelectConfirmDeckMenu_OnClickCancel__, method);
    byte_49B767D = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_SupportSelectConfirmDeckMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        0LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmDeckMenu__OnClickDecide(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton; // x8

  if ( (byte_49B767C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SupportSelectConfirmDeckMenu_OnClickDecide__, method);
    byte_49B767C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectConfirmDeckMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmDeckMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_SupportSelectConfirmDeckMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onClickButton->fields.m_target)(
        onClickButton->fields.original_method_info,
        1LL,
        *(_QWORD *)&onClickButton->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmDeckMenu__OnFinishedClose(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.onClickButton = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClickButton, 0, v2, v3);
}


void __fastcall SupportSelectConfirmDeckMenu__OnFinishedOpen(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu__Open(
        SupportSelectConfirmDeckMenu_o *this,
        int32_t kind,
        SupportServantData_o *supportData,
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *onClickButton,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UILabel_o *v23; // x22
  UILabel_o *messageLabel; // x22
  __int64 *v25; // x8
  UILabel_o *titleLabel; // x22
  System_String_o *Empty; // x1
  UILabel_o *v28; // x22
  UILabel_o *v29; // x22
  struct UILabel_o *nameLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v33; // x4
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20

  if ( (byte_49B767A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&string_TypeInfo, v10);
    sub_1B4CF90(&Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, v11);
    sub_1B4CF90(&StringLiteral_12238/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, v12);
    sub_1B4CF90(&StringLiteral_12237/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, v13);
    sub_1B4CF90(&StringLiteral_12243/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/, v14);
    sub_1B4CF90(&StringLiteral_12240/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, v15);
    sub_1B4CF90(&StringLiteral_12239/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, v16);
    sub_1B4CF90(&StringLiteral_12241/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/, v17);
    sub_1B4CF90(&StringLiteral_12242/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, v18);
    sub_1B4CF90(&StringLiteral_12244/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, v19);
    sub_1B4CF90(&StringLiteral_12225/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, v20);
    byte_49B767A = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( kind == 2 )
    {
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12242/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_34;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12241/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( kind == 1 )
      {
        v28 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12240/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_TITLE"*/, 0LL);
        if ( !v28 )
          goto LABEL_34;
        UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
        v29 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_MESSAGE"*/, 0LL);
        if ( !v29 )
          goto LABEL_34;
        UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
        nameLabel = this->fields.nameLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_INIT_ALL_DECK_NAME"*/, 0LL);
        if ( !supportData )
          goto LABEL_34;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)supportData->fields._deckName_k__BackingField,
                                                   0LL);
        if ( !nameLabel )
          goto LABEL_34;
        Empty = (System_String_o *)gameObject;
        gameObject = (UnityEngine_GameObject_o *)nameLabel;
        goto LABEL_27;
      }
      if ( kind )
        goto LABEL_28;
      v23 = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_TITLE"*/, 0LL);
      if ( !v23 )
        goto LABEL_34;
      UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
      messageLabel = this->fields.messageLabel;
      v25 = &StringLiteral_12243/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_REMOVE_ALL_MESSAGE"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
    if ( !messageLabel )
      goto LABEL_34;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_27:
    UILabel__set_text((UILabel_o *)gameObject, Empty, 0LL);
LABEL_28:
    decideButtonLabel = this->fields.decideButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12237/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_DECIDE"*/, 0LL);
    if ( decideButtonLabel )
    {
      UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
      cancelButtonLabel = this->fields.cancelButtonLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12225/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_CANCEL"*/, 0LL);
      if ( cancelButtonLabel )
      {
        UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.deckInfoObj;
        if ( gameObject )
        {
          SupportSelectDeckListViewItemDraw__SetSupportData(
            (SupportSelectDeckListViewItemDraw_o *)gameObject,
            supportData,
            0,
            1,
            v33);
          this->fields.onClickButton = onClickButton;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClickButton, (int32_t)onClickButton, v34, v35);
          v36 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v36, (Il2CppObject *)this, Method_SupportSelectConfirmDeckMenu_OnFinishedOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
          return;
        }
      }
    }
LABEL_34:
    sub_1B4D1EC(gameObject, v22);
  }
}


void __fastcall SupportSelectConfirmDeckMenu__add_onClickButton(
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

  if ( (byte_49B7678 & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_49B7678 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  SupportSelectConfirmDeckMenu__remove_onClickButton(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectConfirmDeckMenu__get_closeBtnPath(
        SupportSelectConfirmDeckMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B767E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_4588/*"ConfirmWindow/CancelButton"*/, method);
    byte_49B767E = 1;
  }
  return (System_String_o *)StringLiteral_4588/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall SupportSelectConfirmDeckMenu__remove_onClickButton(
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

  if ( (byte_49B7679 & 1) == 0 )
  {
    sub_1B4CF90(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, value);
    byte_49B7679 = 1;
  }
  onClickButton = this->fields.onClickButton;
  p_onClickButton = &this->fields.onClickButton;
  v6 = (System_Delegate_o *)onClickButton;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmDeckMenu_OnClickButtonEvent_c *)v8->klass != SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_onClickButton, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
  SupportSelectConfirmDeckMenu__Open(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1998CC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1998C80;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__BeginInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_49B7680 & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isDecide);
    byte_49B7680 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__EndInvoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall SupportSelectConfirmDeckMenu_OnClickButtonEvent__Invoke(
        SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}