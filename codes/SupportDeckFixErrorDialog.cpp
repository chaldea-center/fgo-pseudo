void __fastcall SupportDeckFixErrorDialog___ctor(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418AE55 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE55 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Close(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AE52 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SupportDeckFixErrorDialog_OnFinishedClose__, v3);
    byte_418AE52 = 1;
  }
  this->fields.state = 3;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Init(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_418AE50 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AE50 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeButtonLabel) == 0LL) )
  {
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnClickClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418AE53 & 1) == 0 )
  {
    sub_B2C35C(&Method_SupportDeckFixErrorDialog_OnClickClose__, method);
    byte_418AE53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckFixErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportDeckFixErrorDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_SupportDeckFixErrorDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    SupportDeckFixErrorDialog__Close(this, v5);
  }
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *errorListViewManager; // x0

  errorListViewManager = (ListViewManager_o *)this->fields.errorListViewManager;
  if ( !errorListViewManager )
    sub_B2C434(0LL, method);
  ListViewManager__DestroyList(errorListViewManager, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedOpen(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0

  errorListViewManager = this->fields.errorListViewManager;
  this->fields.state = 2;
  if ( !errorListViewManager )
    sub_B2C434(0LL, method);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  System_Action_o *v18; // x20

  if ( (byte_418AE51 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, messageList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SupportDeckFixErrorDialog_OnFinishedOpen__, v6);
    sub_B2C35C(&StringLiteral_12480/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_12483/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, v8);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v9);
    byte_418AE51 = 1;
  }
  state = this->fields.state;
  if ( state == 3 || !state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    SupportDeckFixErrorListViewManager__CreateList((SupportDeckFixErrorListViewManager_o *)gameObject, messageList, v13);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    SupportDeckFixErrorListViewManager__SetMode((SupportDeckFixErrorListViewManager_o *)gameObject, 1, v14);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12480/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeButtonLabel = this->fields.closeButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeButtonLabel) )
    {
LABEL_16:
      sub_B2C434(gameObject, v12);
    }
    UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
  }
}


System_String_o *__fastcall SupportDeckFixErrorDialog__get_closeBtnPath(
        SupportDeckFixErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE54 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2745/*"BaseWindow/CloseButton"*/, method);
    byte_418AE54 = 1;
  }
  return (System_String_o *)StringLiteral_2745/*"BaseWindow/CloseButton"*/;
}