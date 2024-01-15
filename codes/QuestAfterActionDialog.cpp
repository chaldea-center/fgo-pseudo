void __fastcall QuestAfterActionDialog___ctor(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FA0D4 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA0D4 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestAfterActionDialog__Init(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA0D0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FA0D0 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(closeLabel, v8, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall QuestAfterActionDialog__OnClickCloseButton(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FA0D2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA0D2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall QuestAfterActionDialog__Open(
        QuestAfterActionDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1

  QuestAfterActionDialog__Init(this, (const MethodInfo *)title);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0LL), (messageLabel = this->fields.messageLabel) == 0LL) )
    sub_B170D4();
  UILabel__set_text(messageLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  QuestAfterActionDialog__ResetScrollPosition(this, v17);
}


void __fastcall QuestAfterActionDialog__ResetScrollPosition(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  UIPanel_o *v6; // x0
  float height; // s0
  struct UILabel_o *v8; // x8
  int v9; // w8
  UIScrollView_o *v10; // x0

  if ( (byte_40FA0D1 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FA0D1 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_45680548(gameObject, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  v6 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( !v6 )
    goto LABEL_15;
  height = UIPanel__get_height(v6, 0LL);
  v8 = this->fields.messageLabel;
  if ( !v8 )
    goto LABEL_15;
  v9 = height <= (float)v8->fields.mHeight ? 1 : 4;
  HIDWORD(scrollView->fields.onDragStarted) = v9;
  v10 = this->fields.scrollView;
  if ( !v10 )
LABEL_15:
    sub_B170D4();
  UIScrollView__ResetPosition(v10, 0LL);
}


void __fastcall QuestAfterActionDialog___OnClickCloseButton_b__8_0(
        QuestAfterActionDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  QuestAfterActionDialog__Init(this, v3);
}


System_String_o *__fastcall QuestAfterActionDialog__get_closeBtnPath(
        QuestAfterActionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA0D3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416/*"Window/CloseButton"*/, method);
    byte_40FA0D3 = 1;
  }
  return (System_String_o *)StringLiteral_15416/*"Window/CloseButton"*/;
}