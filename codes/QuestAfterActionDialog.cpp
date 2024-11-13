void __fastcall QuestAfterActionDialog___ctor(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13080 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B13080 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall QuestAfterActionDialog__Init(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1307C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1307C = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_1BCAA3C(titleLabel, v8);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall QuestAfterActionDialog__OnClickCloseButton(QuestAfterActionDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B1307E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_QuestAfterActionDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__, v6, v7);
    byte_4B1307E = 1;
  }
  v8 = Method_QuestAfterActionDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_QuestAfterActionDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_QuestAfterActionDialog_OnClickCloseButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_QuestAfterActionDialog__OnClickCloseButton_b__8_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1

  QuestAfterActionDialog__Init(this, (const MethodInfo *)title);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.messageLabel) == 0LL) )
    sub_1BCAA3C(titleLabel, v9);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeAction,
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
  __int64 v2; // x2
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v9; // x8
  int v10; // w8

  if ( (byte_4B1307D & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B1307D = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__UpdateWidgetCollider_47423264(gameObject, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
  if ( !messageLabel )
    goto LABEL_14;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0LL);
  v9 = this->fields.messageLabel;
  if ( !v9 )
    goto LABEL_14;
  v10 = height <= (float)v9->fields.mHeight ? 1 : 4;
  scrollView->fields.contentPivot = v10;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
LABEL_14:
    sub_1BCAA3C(messageLabel, method);
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
  __int64 v2; // x2

  if ( (byte_4B1307F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B1307F = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}