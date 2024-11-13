void __fastcall SupportDeckFixErrorDialog___ctor(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12A2B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12A2B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Close(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B12A28 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportDeckFixErrorDialog_OnFinishedClose__, v5, v6);
    byte_4B12A28 = 1;
  }
  this->fields.state = 3;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Init(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B12A26 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12A26 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeButtonLabel) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnClickClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B12A29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportDeckFixErrorDialog_OnClickClose__, method, v2);
    byte_4B12A29 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_SupportDeckFixErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportDeckFixErrorDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportDeckFixErrorDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    SupportDeckFixErrorDialog__Close(this, v6);
  }
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *errorListViewManager; // x0

  errorListViewManager = (ListViewManager_o *)this->fields.errorListViewManager;
  if ( !errorListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(errorListViewManager, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedOpen(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0

  errorListViewManager = this->fields.errorListViewManager;
  this->fields.state = 2;
  if ( !errorListViewManager )
    sub_1BCAA3C(0LL, method);
  SupportDeckFixErrorListViewManager__SetMode(errorListViewManager, 2, v2);
}


void __fastcall SupportDeckFixErrorDialog__Open(
        SupportDeckFixErrorDialog_o *this,
        System_String_array *messageList,
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
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x20

  if ( (byte_4B12A27 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, messageList, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SupportDeckFixErrorDialog_OnFinishedOpen__, v7, v8);
    sub_1BCA7E0(&StringLiteral_12543/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12546/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v13, v14);
    byte_4B12A27 = 1;
  }
  state = this->fields.state;
  if ( state == 3 || !state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportDeckFixErrorListViewManager__CreateList((SupportDeckFixErrorListViewManager_o *)gameObject, messageList, v18);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportDeckFixErrorListViewManager__SetMode((SupportDeckFixErrorListViewManager_o *)gameObject, 1, v19);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12546/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12543/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeButtonLabel = this->fields.closeButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeButtonLabel) )
    {
LABEL_15:
      sub_1BCAA3C(gameObject, v17);
    }
    UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
  }
}


System_String_o *__fastcall SupportDeckFixErrorDialog__get_closeBtnPath(
        SupportDeckFixErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12A2A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3222/*"BaseWindow/CloseButton"*/, method, v2);
    byte_4B12A2A = 1;
  }
  return (System_String_o *)StringLiteral_3222/*"BaseWindow/CloseButton"*/;
}