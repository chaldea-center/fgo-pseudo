void __fastcall TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FC8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14FC8 = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UILabel_o *titleLabel; // x0
  __int64 v14; // x1
  UILabel_o *closeLabel; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *decideLabel; // x20
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UILabel_o *v25; // x20
  struct System_Action_o **p_decideAction; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B14FC3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B14FC3 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0LL, 0LL) )
  {
    v25 = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( v25 )
    {
      UILabel__set_text(v25, (System_String_o *)titleLabel, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(titleLabel, v12);
  }
LABEL_15:
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.decideAction = 0LL;
  p_decideAction = &this->fields.decideAction;
  sub_1BCA784((PartyOrganizationUtility_o *)p_decideAction, 0LL, v27, v28, v29, v30, v31, v32);
  *((_DWORD *)p_decideAction + 4) = 8;
  p_decideAction[1] = (struct System_Action_o *)0x100000002LL;
}


void __fastcall TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4B14FC5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TextLabelScrollDialog_OnClickCloseButton__, v5, v6);
    sub_1BCA7E0(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, v7, v8);
    byte_4B14FC5 = 1;
  }
  if ( !this->fields.state )
  {
    v9 = Method_TextLabelScrollDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_TextLabelScrollDialog_OnClickCloseButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.closeSE, 0LL);
  }
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4B14FC6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TextLabelScrollDialog_OnClickDecideButton__, v5, v6);
    sub_1BCA7E0(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, v7, v8);
    byte_4B14FC6 = 1;
  }
  if ( !this->fields.state )
  {
    v9 = Method_TextLabelScrollDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_TextLabelScrollDialog_OnClickDecideButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.decideSE, 0LL);
  }
  this->fields.state = 1;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall TextLabelScrollDialog__Open(
        TextLabelScrollDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1

  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *, System_String_o *, System_Action_o *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    message,
    closeAction,
    decideAction,
    method);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.messageLabel) == 0LL) )
    sub_1BCAA3C(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.decideAction = decideAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.decideAction,
    (int64_t)decideAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  TextLabelScrollDialog__ResetScrollPosition(this, v25);
  this->fields.state = 0;
}


void __fastcall TextLabelScrollDialog__ResetScrollPosition(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v9; // x8
  int v10; // w8

  if ( (byte_4B14FC4 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B14FC4 = 1;
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


void __fastcall TextLabelScrollDialog__SetCloseSE(
        TextLabelScrollDialog_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  this->fields.closeSE = seKind;
}


void __fastcall TextLabelScrollDialog__SetDecideSE(
        TextLabelScrollDialog_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  this->fields.decideSE = seKind;
}


void __fastcall TextLabelScrollDialog___OnClickCloseButton_b__14_0(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall TextLabelScrollDialog___OnClickDecideButton_b__15_0(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.decideAction, 0LL);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall TextLabelScrollDialog__get_closeBtnPath(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FC7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, method, v2);
    byte_4B14FC7 = 1;
  }
  return (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/;
}