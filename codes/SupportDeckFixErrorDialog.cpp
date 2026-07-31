void SupportDeckFixErrorDialog___ctor(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934AC9 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934AC9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportDeckFixErrorDialog__Close(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5934AC6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SupportDeckFixErrorDialog_OnFinishedClose__);
    byte_5934AC6 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 3;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SupportDeckFixErrorDialog__Init(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5934AC4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934AC4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.closeButtonLabel) == 0) )
  {
    sub_21FFECC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SupportDeckFixErrorDialog__OnClickClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5934AC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportDeckFixErrorDialog_OnClickClose__);
    byte_5934AC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckFixErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportDeckFixErrorDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportDeckFixErrorDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SupportDeckFixErrorDialog__Close(this, v5);
  }
}


void SupportDeckFixErrorDialog__OnFinishedClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *errorListViewManager; // x0

  errorListViewManager = (ListViewManager_o *)this->fields.errorListViewManager;
  if ( !errorListViewManager )
    sub_21FFECC(0, method);
  ListViewManager__DestroyList(errorListViewManager, 0);
}


void SupportDeckFixErrorDialog__OnFinishedOpen(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0

  errorListViewManager = this->fields.errorListViewManager;
  this->fields.state = 2;
  if ( !errorListViewManager )
    sub_21FFECC(0, method);
  SupportDeckFixErrorListViewManager__SetMode(errorListViewManager, 2, v2);
}


void SupportDeckFixErrorDialog__Open(
        SupportDeckFixErrorDialog_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  System_Action_o *v15; // x20

  if ( (byte_5934AC5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SupportDeckFixErrorDialog_OnFinishedOpen__);
    sub_21FFC50(&StringLiteral_12991/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12994/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5934AC5 = 1;
  }
  state = this->fields.state;
  if ( state == 3 || !state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportDeckFixErrorListViewManager__CreateList((SupportDeckFixErrorListViewManager_o *)gameObject, messageList, v8);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportDeckFixErrorListViewManager__SetMode((SupportDeckFixErrorListViewManager_o *)gameObject, 1, v9);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12994/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12991/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          closeButtonLabel = this->fields.closeButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !closeButtonLabel) )
    {
LABEL_15:
      sub_21FFECC(gameObject, v7);
    }
    UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0);
    v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
  }
}


System_String_o *SupportDeckFixErrorDialog__get_closeBtnPath(
        SupportDeckFixErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_5934AC8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3194/*"BaseWindow/CloseButton"*/);
    byte_5934AC8 = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CloseButton"*/;
}