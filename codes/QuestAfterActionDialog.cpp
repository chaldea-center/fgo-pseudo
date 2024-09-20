void __fastcall QuestAfterActionDialog___ctor(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A58070 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A58070 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestAfterActionDialog__Init(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5806C & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5806C = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1B8880C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void __fastcall QuestAfterActionDialog__OnClickCloseButton(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5806E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_QuestAfterActionDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__);
    byte_4A5806E = 1;
  }
  v3 = Method_QuestAfterActionDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_QuestAfterActionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_QuestAfterActionDialog_OnClickCloseButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall QuestAfterActionDialog__Open(
        QuestAfterActionDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UILabel_o *titleLabel; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1

  QuestAfterActionDialog__Init(this, (const MethodInfo *)title);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.messageLabel) == 0LL) )
    sub_1B8880C(titleLabel, v9);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v11, v12);
  QuestAfterActionDialog__ResetScrollPosition(this, v13);
}


void __fastcall QuestAfterActionDialog__ResetScrollPosition(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v7; // x8
  int v8; // w8

  if ( (byte_4A5806D & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A5806D = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46861332(gameObject, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
  if ( !messageLabel )
    goto LABEL_14;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0LL);
  v7 = this->fields.messageLabel;
  if ( !v7 )
    goto LABEL_14;
  v8 = height <= (float)v7->fields.mHeight ? 1 : 4;
  scrollView->fields.contentPivot = v8;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
LABEL_14:
    sub_1B8880C(messageLabel, method);
  UIScrollView__ResetPosition((UIScrollView_o *)messageLabel, 0LL);
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
  if ( (byte_4A5806F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5806F = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}