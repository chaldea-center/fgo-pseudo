void __fastcall TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6596F & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6596F = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  UnityEngine_Object_o *decideLabel; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UILabel_o *v17; // x20
  struct System_Action_o **p_decideAction; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B6596A & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v4);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v6);
    byte_4B6596A = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0LL, 0LL) )
  {
    v17 = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, (System_String_o *)titleLabel, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1BE4D28(titleLabel, v7);
  }
LABEL_15:
  this->fields.closeAction = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.decideAction = 0LL;
  p_decideAction = &this->fields.decideAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_decideAction, 0LL, v19, v20, v21, v22, v23, v24);
  *((_DWORD *)p_decideAction + 4) = 8;
  p_decideAction[1] = (struct System_Action_o *)0x100000002LL;
}


void __fastcall TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B6596C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_TextLabelScrollDialog_OnClickCloseButton__, v3);
    sub_1BE4ACC(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, v4);
    byte_4B6596C = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_TextLabelScrollDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_TextLabelScrollDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.closeSE, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B6596D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_TextLabelScrollDialog_OnClickDecideButton__, v3);
    sub_1BE4ACC(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, v4);
    byte_4B6596D = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_TextLabelScrollDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_TextLabelScrollDialog_OnClickDecideButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.decideSE, 0LL);
  }
  this->fields.state = 1;
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BE4D28(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.decideAction = decideAction;
  sub_1BE4A70(
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
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v7; // x8
  int v8; // w8

  if ( (byte_4B6596B & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, method);
    byte_4B6596B = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_47710900(gameObject, 1, 0LL);
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
    sub_1BE4D28(messageLabel, method);
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
  if ( (byte_4B6596E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15850/*"Window/CloseButton"*/, method);
    byte_4B6596E = 1;
  }
  return (System_String_o *)StringLiteral_15850/*"Window/CloseButton"*/;
}