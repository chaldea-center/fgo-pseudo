void __fastcall SupportDeckFixErrorDialog___ctor(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FD4D1 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD4D1 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Close(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FD4CE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SupportDeckFixErrorDialog_OnFinishedClose__, v6);
    byte_40FD4CE = 1;
  }
  this->fields.state = 3;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Init(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *closeButtonLabel; // x0

  if ( (byte_40FD4CC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD4CC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeButtonLabel = this->fields.closeButtonLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(closeButtonLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnClickClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40FD4CF & 1) == 0 )
  {
    sub_B16FFC(&Method_SupportDeckFixErrorDialog_OnClickClose__, method);
    byte_40FD4CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckFixErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportDeckFixErrorDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_SupportDeckFixErrorDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    SupportDeckFixErrorDialog__Close(this, v5);
  }
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *errorListViewManager; // x0

  errorListViewManager = (ListViewManager_o *)this->fields.errorListViewManager;
  if ( !errorListViewManager )
    sub_B170D4();
  ListViewManager__DestroyList(errorListViewManager, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedOpen(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0

  errorListViewManager = this->fields.errorListViewManager;
  this->fields.state = 2;
  if ( !errorListViewManager )
    sub_B170D4();
  SupportDeckFixErrorListViewManager__SetMode(errorListViewManager, 2, v2);
}


void __fastcall SupportDeckFixErrorDialog__Open(
        SupportDeckFixErrorDialog_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0
  const MethodInfo *v14; // x2
  SupportDeckFixErrorListViewManager_o *v15; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v17; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v19; // x0
  UILabel_o *closeButtonLabel; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40FD4CD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, messageList);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SupportDeckFixErrorDialog_OnFinishedOpen__, v6);
    sub_B16FFC(&StringLiteral_12424/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, v7);
    sub_B16FFC(&StringLiteral_12427/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, v8);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v9);
    byte_40FD4CD = 1;
  }
  state = this->fields.state;
  if ( state == 3 || !state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    errorListViewManager = this->fields.errorListViewManager;
    if ( !errorListViewManager )
      goto LABEL_16;
    SupportDeckFixErrorListViewManager__CreateList(errorListViewManager, messageList, v12);
    v15 = this->fields.errorListViewManager;
    if ( !v15 )
      goto LABEL_16;
    SupportDeckFixErrorListViewManager__SetMode(v15, 1, v14);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, v17, 0LL),
          messageLabel = this->fields.messageLabel,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, v19, 0LL),
          closeButtonLabel = this->fields.closeButtonLabel,
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeButtonLabel) )
    {
LABEL_16:
      sub_B170D4();
    }
    UILabel__set_text(closeButtonLabel, v21, 0LL);
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
  }
}


System_String_o *__fastcall SupportDeckFixErrorDialog__get_closeBtnPath(
        SupportDeckFixErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FD4D0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2733/*"BaseWindow/CloseButton"*/, method);
    byte_40FD4D0 = 1;
  }
  return (System_String_o *)StringLiteral_2733/*"BaseWindow/CloseButton"*/;
}