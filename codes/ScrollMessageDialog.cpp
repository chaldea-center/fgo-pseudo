void ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C31A63 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31A63 = 1;
  }
  this->fields.onClickSeKind = 1;
  *(_OWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = xmmword_C0CB10;
  *(_OWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_POS_Y = xmmword_C0C7E0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_31381708(this, 0, v2);
}


void ScrollMessageDialog__Close_31381708(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C31A5F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ScrollMessageDialog_EndClose__);
    byte_4C31A5F = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C32BC4(&this->fields.closeEndFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ScrollMessageDialog__EndClose(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  ScrollMessageDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C32BC4(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void ScrollMessageDialog__EndOpen(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ScrollMessageDialog__Init(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4C31A5C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31A5C = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0, 0) )
  {
    gameObject = this->fields.secondTitleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtn, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.okBtn;
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_30:
    sub_1C32E7C(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C31A61 & 1) == 0 )
  {
    sub_1C32C20(&Method_ScrollMessageDialog_OnClickCancel__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31A61 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ScrollMessageDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseScrollMessageDialog((CommonUI_o *)Instance, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ScrollMessageDialog__OnClickOk(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C31A60 & 1) == 0 )
  {
    sub_1C32C20(&Method_ScrollMessageDialog_OnClickOk__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C31A60 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_ScrollMessageDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    CommonUI__CloseScrollMessageDialog((CommonUI_o *)Instance, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScrollMessageDialog__Open(
        ScrollMessageDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t leftIndent,
        ScrollMessageDialog_ClickDelegate_o *func,
        int32_t btnSe,
        bool canMaskTouchClose,
        System_Collections_Generic_Dictionary_string__object__o *script,
        bool canBackKeyClose,
        const MethodInfo *method)
{
  __int64 mPanel; // x0
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x20
  UnityEngine_Object_o *listViewBack; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x26
  UnityEngine_GameObject_o *v22; // x0
  struct UIScrollView_o *scrollView; // x8
  int32_t TitleFontSize; // w26
  int32_t IntValue; // w0
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v27; // x1
  UnityEngine_Object_o *secondTitleLabel; // x25
  System_String_o *v29; // x1
  UnityEngine_Object_o *messageLabel; // x25
  UILabel_o *v31; // x8
  int32_t v32; // w23
  UILabel_o *v33; // x0
  int32_t MESSAGE_FONT_SIZE; // w2
  System_String_o *v35; // x1
  int32_t v36; // w3
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v38; // x22
  float v39; // s0
  float v40; // s8
  float v41; // s1
  UnityEngine_BoxCollider_o *v42; // x22
  int v43; // s0
  int v44; // s8
  int v45; // s1 OVERLAPPED
  float v46; // s2
  int v47; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v49; // x22
  System_Action_o *v50; // x20
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C31A5D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ScrollMessageDialog_EndOpen__);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_24096/*"titleFontSize"*/);
    sub_1C32C20(&StringLiteral_21545/*"messageFontSize"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31A5D = 1;
  }
  this->fields.clickFunc = func;
  mPanel = sub_1C32BC4(&this->fields.clickFunc, func);
  if ( !canBackKeyClose )
  {
    v17 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ScrollMessageDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                        this,
                                        this->klass->vtable._4_get_closeBtnObject.method);
    AndroidBackKeyManager__RemoveBackBtn(v17, 0);
  }
  if ( !title )
    goto LABEL_95;
  v18 = StringLiteral_1/*""*/;
  if ( System_String__Contains(title, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mPanel = (__int64)System_String__Split(title, 0xAu, 0, 0);
    if ( !mPanel )
      goto LABEL_95;
    if ( *(_DWORD *)(mPanel + 24) < 2u )
      sub_1C32E84(mPanel);
    title = *(System_String_o **)(mPanel + 32);
    v18 = *(_QWORD *)(mPanel + 40);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0, 0) )
    {
      mPanel = (__int64)this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_95;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = (__int64)this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_95;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
    }
    baseView = (UnityEngine_Object_o *)this->fields.baseView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseView, 0, 0) )
    {
      mPanel = (__int64)this->fields.baseView;
      if ( !mPanel )
        goto LABEL_95;
      mPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      mPanel = (__int64)this->fields.baseView;
      if ( !mPanel )
        goto LABEL_95;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = (__int64)this->fields.baseView;
      if ( !mPanel )
        goto LABEL_95;
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(v22, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_95;
      mPanel = (__int64)scrollView->fields.mPanel;
      if ( !mPanel )
        goto LABEL_95;
      v55.fields.x = *(float *)(mPanel + 296);
      v55.fields.y = *(float *)(mPanel + 300);
      v55.fields.z = *(float *)(mPanel + 304);
      v55.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)mPanel, v55, 0);
      mPanel = (__int64)this->fields.baseView;
      if ( !mPanel )
        goto LABEL_95;
      mPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_95;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
  }
  TitleFontSize = this->fields.TitleFontSize;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (const MethodInfo_3458A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) >= 1 )
    {
      IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_24096/*"titleFontSize"*/, 0, 0);
      if ( IntValue >= 1 )
        TitleFontSize = IntValue;
    }
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    mPanel = (__int64)this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_95;
    UILabel__set_fontSize((UILabel_o *)mPanel, TitleFontSize, 0);
    mPanel = (__int64)this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_95;
    v27 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)mPanel, v27, 0);
    mPanel = (__int64)this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_95;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0, 0) )
  {
    mPanel = (__int64)this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_95;
    UILabel__set_fontSize((UILabel_o *)mPanel, TitleFontSize, 0);
    mPanel = (__int64)this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_95;
    v29 = (System_String_o *)(v18 ? v18 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)mPanel, v29, 0);
    mPanel = (__int64)this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_95;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_86;
  mPanel = (__int64)this->fields.messageLabel;
  if ( !mPanel )
    goto LABEL_95;
  if ( leftIndent < 0 )
  {
    UILabel__set_alignment((UILabel_o *)mPanel, 2, 0);
    if ( !script )
    {
LABEL_69:
      v31 = this->fields.messageLabel;
      goto LABEL_70;
    }
  }
  else
  {
    UILabel__set_alignment((UILabel_o *)mPanel, 1, 0);
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    mPanel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0);
    if ( !mPanel )
      goto LABEL_95;
    v53.fields.y = this->fields.MessageLabelDefaultPosition.fields.y;
    v53.fields.z = this->fields.MessageLabelDefaultPosition.fields.z;
    v53.fields.x = (float)(this->fields.MessageLabelDefaultPosition.fields.x + -20.0) + (float)leftIndent;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mPanel, v53, 0);
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    UIWidget__set_width((UIWidget_o *)mPanel, 660 - leftIndent, 0);
    if ( !script )
      goto LABEL_69;
  }
  mPanel = System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             (const MethodInfo_3458A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
  if ( (int)mPanel <= 0 )
    goto LABEL_69;
  mPanel = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_21545/*"messageFontSize"*/, 0, 0);
  v31 = this->fields.messageLabel;
  if ( (int)mPanel >= 1 )
  {
    if ( !v31 )
      goto LABEL_95;
    v32 = mPanel;
    UILabel__set_fontSize(this->fields.messageLabel, mPanel, 0);
    v33 = this->fields.messageLabel;
    MESSAGE_FONT_SIZE = v32;
    if ( message )
      v35 = message;
    else
      v35 = (System_String_o *)StringLiteral_1/*""*/;
    v36 = v32;
    goto LABEL_75;
  }
LABEL_70:
  if ( !v31 )
    goto LABEL_95;
  UILabel__set_fontSize(v31, this->fields.MESSAGE_FONT_SIZE, 0);
  v33 = this->fields.messageLabel;
  MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
  if ( message )
    v35 = message;
  else
    v35 = (System_String_o *)StringLiteral_1/*""*/;
  v36 = 0;
LABEL_75:
  WrapControlText__textBBCodeAdjust(v33, v35, MESSAGE_FONT_SIZE, v36, 0);
  mPanel = (__int64)this->fields.messageLabel;
  if ( !mPanel )
    goto LABEL_95;
  UILabel__set_overflowMethod((UILabel_o *)mPanel, 3, 0);
  messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageCollider, 0, 0) )
  {
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    v38 = this->fields.messageCollider;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mPanel + 664LL))(
      mPanel,
      *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    v40 = v39;
    mPanel = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mPanel + 664LL))(
               mPanel,
               *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    if ( !v38 )
      goto LABEL_95;
    v54.fields.y = v41 * -0.5;
    v54.fields.x = v40 * 0.5;
    v54.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v38, v54, 0);
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    v42 = this->fields.messageCollider;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mPanel + 664LL))(
      mPanel,
      *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    mPanel = (__int64)this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_95;
    v44 = v43;
    mPanel = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)mPanel + 664LL))(
               mPanel,
               *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    if ( !v42 )
      goto LABEL_95;
    v46 = 1.0;
    v47 = v44;
    UnityEngine_BoxCollider__set_size(v42, *(UnityEngine_Vector3_o *)(&v45 - 1), 0);
  }
LABEL_86:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v49 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mPanel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v49 )
    {
      UILabel__set_text(v49, (System_String_o *)mPanel, 0);
      goto LABEL_93;
    }
LABEL_95:
    sub_1C32E7C(mPanel);
  }
LABEL_93:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  mPanel = (__int64)this->fields.scrollView;
  if ( !mPanel )
    goto LABEL_95;
  UIScrollView__ResetPosition((UIScrollView_o *)mPanel, 0);
  this->fields.isButtonEnable = 0;
  v50 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 1, 0);
}


void ScrollMessageDialog__Open_31381384(
        ScrollMessageDialog_o *this,
        System_String_o *title,
        System_String_o *subTitle,
        System_String_o *message,
        int32_t leftIndent,
        ScrollMessageDialog_ClickDelegate_o *func,
        int32_t btnSe,
        bool canMaskTouchClose,
        bool canBackKeyClose,
        const MethodInfo *method)
{
  UnityEngine_Object_o *subTitleLabel; // x27
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_4C31A5E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31A5E = 1;
  }
  if ( !System_String__IsNullOrEmpty(subTitle, 0) )
  {
    subTitleLabel = (UnityEngine_Object_o *)this->fields.subTitleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subTitleLabel, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel) == 0) )
      {
LABEL_13:
        sub_1C32E7C(gameObject);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, 0, canBackKeyClose, v20);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
}


UnityEngine_GameObject_o *ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31A62 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31A62 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void ScrollMessageDialog_ClickDelegate___ctor(
        ScrollMessageDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E640;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E5F8;
}


System_IAsyncResult_o *ScrollMessageDialog_ClickDelegate__BeginInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isOk;
  if ( (byte_4C31A64 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C31A64 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void ScrollMessageDialog_ClickDelegate__Invoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}