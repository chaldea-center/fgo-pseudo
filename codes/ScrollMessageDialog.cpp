void ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C21430 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21430 = 1;
  }
  *(_QWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT = 0x4180000000000118LL;
  *(_QWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = 0x18000002BCLL;
  this->fields.onClickSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_31357120(this, 0, v2);
}


void ScrollMessageDialog__Close_31357120(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C2142C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ScrollMessageDialog_EndClose__);
    byte_4C2142C = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C2D434(&this->fields.closeEndFunc);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D434(p_closeEndFunc);
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
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4C21429 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21429 = 1;
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
    sub_1C2D6EC(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C2142E & 1) == 0 )
  {
    sub_1C2D490(&Method_ScrollMessageDialog_OnClickCancel__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2142E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ScrollMessageDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
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
  __int64 v6; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C2142D & 1) == 0 )
  {
    sub_1C2D490(&Method_ScrollMessageDialog_OnClickOk__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2142D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ScrollMessageDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
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
        const MethodInfo *method)
{
  void *mPanel; // x0
  __int64 v16; // x1
  __int64 v17; // x28
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_Object_o *listViewBack; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_GameObject_o *v23; // x0
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *titleLabel; // x25
  System_String_o *v26; // x1
  UnityEngine_Object_o *secondTitleLabel; // x24
  System_String_o *v28; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Transform_o *v30; // x24
  unsigned int localPosition; // s0
  float v32; // s8
  float y; // s9
  float v34; // s0
  float v35; // s1
  System_String_o *v36; // x1
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
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2142A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_ScrollMessageDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2142A = 1;
  }
  this->fields.clickFunc = func;
  mPanel = (void *)sub_1C2D434(&this->fields.clickFunc);
  if ( !title )
    goto LABEL_84;
  v17 = StringLiteral_1/*""*/;
  if ( System_String__Contains(title, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mPanel = System_String__Split(title, 0xAu, 0, 0);
    if ( !mPanel )
      goto LABEL_84;
    if ( *((_DWORD *)mPanel + 6) < 2u )
      sub_1C2D6F4(mPanel, v16, v18, v19);
    title = (System_String_o *)*((_QWORD *)mPanel + 4);
    v17 = *((_QWORD *)mPanel + 5);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0, 0) )
    {
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
    }
    baseView = (UnityEngine_Object_o *)this->fields.baseView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseView, 0, 0) )
    {
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(v23, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_84;
      mPanel = scrollView->fields.mPanel;
      if ( !mPanel )
        goto LABEL_84;
      v54.fields.x = *((float *)mPanel + 74);
      v54.fields.y = *((float *)mPanel + 75);
      v54.fields.z = *((float *)mPanel + 76);
      v54.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)mPanel, v54, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v26 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)mPanel, v26, 0);
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0, 0) )
  {
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v28 = (System_String_o *)(v17 ? v17 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)mPanel, v28, 0);
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_84;
    if ( leftIndent < 0 )
    {
      UILabel__set_alignment((UILabel_o *)mPanel, 2, 0);
    }
    else
    {
      UILabel__set_alignment((UILabel_o *)mPanel, 1, 0);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0);
      if ( !this->fields.messageLabel )
        goto LABEL_84;
      v30 = (UnityEngine_Transform_o *)mPanel;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0);
      if ( !mPanel )
        goto LABEL_84;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mPanel, 0);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v32 = *(float *)&localPosition;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_84;
      v51 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mPanel, 0);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      y = v51.fields.y;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_84;
      v52 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mPanel, 0);
      if ( !v30 )
        goto LABEL_84;
      v34 = (float)(v32 + -20.0) + (float)leftIndent;
      v35 = y;
      UnityEngine_Transform__set_localPosition(v30, v52, 0);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)mPanel,
                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_width((UIWidget_o *)mPanel, 660 - leftIndent, 0);
    }
    mPanel = this->fields.messageLabel;
    if ( !mPanel
      || ((UILabel__set_fontSize((UILabel_o *)mPanel, this->fields.MESSAGE_FONT_SIZE, 0), message)
        ? (v36 = message)
        : (v36 = (System_String_o *)StringLiteral_1/*""*/),
          WrapControlText__textBBCodeAdjust(this->fields.messageLabel, v36, this->fields.MESSAGE_FONT_SIZE, 0, 0),
          (mPanel = this->fields.messageLabel) == 0) )
    {
LABEL_84:
      sub_1C2D6EC(mPanel, v16);
    }
    UILabel__set_overflowMethod((UILabel_o *)mPanel, 3, 0);
    messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageCollider, 0, 0) )
    {
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v38 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v40 = v39;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v38 )
        goto LABEL_84;
      v53.fields.y = v41 * -0.5;
      v53.fields.x = v40 * 0.5;
      v53.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v38, v53, 0);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v42 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v44 = v43;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v42 )
        goto LABEL_84;
      v46 = 1.0;
      v47 = v44;
      UnityEngine_BoxCollider__set_size(v42, *(UnityEngine_Vector3_o *)(&v45 - 1), 0);
    }
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v49 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mPanel = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v49 )
    {
      UILabel__set_text(v49, (System_String_o *)mPanel, 0);
      goto LABEL_82;
    }
    goto LABEL_84;
  }
LABEL_82:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  mPanel = this->fields.scrollView;
  if ( !mPanel )
    goto LABEL_84;
  UIScrollView__ResetPosition((UIScrollView_o *)mPanel, 0);
  this->fields.isButtonEnable = 0;
  v50 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0);
}


void ScrollMessageDialog__Open_31356828(
        ScrollMessageDialog_o *this,
        System_String_o *title,
        System_String_o *subTitle,
        System_String_o *message,
        int32_t leftIndent,
        ScrollMessageDialog_ClickDelegate_o *func,
        int32_t btnSe,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  const MethodInfo *v17; // x7
  UnityEngine_Object_o *subTitleLabel; // x27
  __int64 v19; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C2142B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2142B = 1;
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
        sub_1C2D6EC(gameObject, v19);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, v17);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C2142F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2142F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A69080;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69038;
}


System_IAsyncResult_o *ScrollMessageDialog_ClickDelegate__BeginInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4C21431 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C21431 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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