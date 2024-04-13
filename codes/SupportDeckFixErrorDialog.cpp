void __fastcall SupportDeckFixErrorDialog___ctor(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC95B & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC95B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Close(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EC958 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportDeckFixErrorDialog_OnFinishedClose__, v5, v6, v7);
    byte_42EC958 = 1;
  }
  this->fields.state = 3;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__Init(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EC956 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC956 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeButtonLabel) == 0LL) )
  {
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnClickClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EC959 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SupportDeckFixErrorDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EC959 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_SupportDeckFixErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportDeckFixErrorDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_SupportDeckFixErrorDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    SupportDeckFixErrorDialog__Close(this, v7);
  }
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedClose(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *errorListViewManager; // x0

  errorListViewManager = (ListViewManager_o *)this->fields.errorListViewManager;
  if ( !errorListViewManager )
    sub_B5D69C(0LL, method);
  ListViewManager__DestroyList(errorListViewManager, 0LL);
}


void __fastcall SupportDeckFixErrorDialog__OnFinishedOpen(SupportDeckFixErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportDeckFixErrorListViewManager_o *errorListViewManager; // x0

  errorListViewManager = this->fields.errorListViewManager;
  this->fields.state = 2;
  if ( !errorListViewManager )
    sub_B5D69C(0LL, method);
  SupportDeckFixErrorListViewManager__SetMode(errorListViewManager, 2, v2);
}


void __fastcall SupportDeckFixErrorDialog__Open(
        SupportDeckFixErrorDialog_o *this,
        System_String_array *messageList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *closeButtonLabel; // x20
  System_Action_o *v29; // x20

  if ( (byte_42EC957 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)messageList, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SupportDeckFixErrorDialog_OnFinishedOpen__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12628/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12631/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v18, v19, v20);
    byte_42EC957 = 1;
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
    SupportDeckFixErrorListViewManager__CreateList((SupportDeckFixErrorListViewManager_o *)gameObject, messageList, v24);
    gameObject = (UnityEngine_GameObject_o *)this->fields.errorListViewManager;
    if ( !gameObject )
      goto LABEL_16;
    SupportDeckFixErrorListViewManager__SetMode((SupportDeckFixErrorListViewManager_o *)gameObject, 1, v25);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12631/*"SUPPORT_DECK_FIXED_ERROR_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12628/*"SUPPORT_DECK_FIXED_ERROR_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          closeButtonLabel = this->fields.closeButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !closeButtonLabel) )
    {
LABEL_16:
      sub_B5D69C(gameObject, v23);
    }
    UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
    v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SupportDeckFixErrorDialog_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
  }
}


System_String_o *__fastcall SupportDeckFixErrorDialog__get_closeBtnPath(
        SupportDeckFixErrorDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC95A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2799/*"BaseWindow/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42EC95A = 1;
  }
  return (System_String_o *)StringLiteral_2799/*"BaseWindow/CloseButton"*/;
}