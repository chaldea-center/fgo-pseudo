void __fastcall ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10FCA & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10FCA = 1;
  }
  *(_QWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT = 0x4180000000000118LL;
  *(_QWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = 0x18000002BCLL;
  this->fields.onClickSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_30917836(this, 0LL, v2);
}


void __fastcall ScrollMessageDialog__Close_30917836(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B10FC6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ScrollMessageDialog_EndClose__, v5, v6);
    byte_4B10FC6 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(&this->fields.closeEndFunc, callback);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ScrollMessageDialog__EndClose(ScrollMessageDialog_o *this, const MethodInfo *method)
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
    *p_closeEndFunc = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ScrollMessageDialog__EndOpen(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ScrollMessageDialog__Init(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v7; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4B10FC3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B10FC3 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.secondTitleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(okBtn, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.okBtn;
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_30:
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10FC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ScrollMessageDialog_OnClickCancel__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B10FC8 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v6 = Method_ScrollMessageDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_ScrollMessageDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, this->fields.onClickSeKind, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v9);
    CommonUI__CloseScrollMessageDialog((CommonUI_o *)Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall ScrollMessageDialog__OnClickOk(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10FC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ScrollMessageDialog_OnClickOk__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B10FC7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v6 = Method_ScrollMessageDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickOk__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_ScrollMessageDialog_OnClickOk__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, this->fields.onClickSeKind, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v9);
    CommonUI__CloseScrollMessageDialog((CommonUI_o *)Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollMessageDialog__Open(
        ScrollMessageDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        int32_t leftIndent,
        ScrollMessageDialog_ClickDelegate_o *func,
        int32_t btnSe,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  System_String_o *v13; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  void *mPanel; // x0
  __int64 v30; // x1
  void *v31; // x28
  UnityEngine_Object_o *listViewBack; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_GameObject_o *v35; // x0
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *titleLabel; // x25
  System_String_o *v38; // x1
  UnityEngine_Object_o *secondTitleLabel; // x24
  System_String_o *v40; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Transform_o *v42; // x24
  unsigned int localPosition; // s0
  float v44; // s8
  int v45; // s1
  int v46; // s9
  int v47; // s2
  float v48; // s0
  int v49; // s1
  System_String_o *v50; // x1
  __int64 v51; // x1
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v53; // x22
  float v54; // s0
  float v55; // s8
  float v56; // s1
  UnityEngine_BoxCollider_o *v57; // x22
  int v58; // s0
  int v59; // s8
  int v60; // s1
  float v61; // s2
  int v62; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v64; // x1
  UILabel_o *v65; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Action_o *v69; // x20
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = title;
  if ( (byte_4B10FC4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ScrollMessageDialog_EndOpen__, v21, v22);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B10FC4 = 1;
  }
  this->fields.clickFunc = func;
  mPanel = (void *)sub_1BCA784(&this->fields.clickFunc, func);
  if ( !v13 )
    goto LABEL_84;
  v31 = StringLiteral_1/*""*/;
  if ( System_String__Contains(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    mPanel = System_String__Split(v13, 0xAu, 0, 0LL);
    if ( !mPanel )
      goto LABEL_84;
    if ( *((_DWORD *)mPanel + 6) < 2u )
      sub_1BCAA44(mPanel, v30);
    v13 = (System_String_o *)*((_QWORD *)mPanel + 4);
    v31 = (void *)*((_QWORD *)mPanel + 5);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0LL, 0LL) )
    {
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
    }
    baseView = (UnityEngine_Object_o *)this->fields.baseView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Inequality(baseView, 0LL, 0LL) )
    {
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_84;
      mPanel = scrollView->fields.mPanel;
      if ( !mPanel )
        goto LABEL_84;
      v71.fields.x = *((float *)mPanel + 74);
      v71.fields.y = *((float *)mPanel + 75);
      v71.fields.z = *((float *)mPanel + 76);
      v71.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)mPanel, v71, 0LL);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
    }
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v38 = v13 ? v13 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)mPanel, v38, 0LL);
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v40 = (System_String_o *)(v31 ? v31 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)mPanel, v40, 0LL);
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_84;
    if ( (leftIndent & 0x80000000) != 0 )
    {
      UILabel__set_alignment((UILabel_o *)mPanel, 2, 0LL);
    }
    else
    {
      UILabel__set_alignment((UILabel_o *)mPanel, 1, 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !this->fields.messageLabel )
        goto LABEL_84;
      v42 = (UnityEngine_Transform_o *)mPanel;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mPanel, 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v44 = *(float *)&localPosition;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v45 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)mPanel,
                                               0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v46 = v45;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v47 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)mPanel,
                                               0LL);
      if ( !v42 )
        goto LABEL_84;
      v48 = (float)(v44 + -20.0) + (float)leftIndent;
      v49 = v46;
      UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)(&v47 - 2), 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)mPanel,
                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_width((UIWidget_o *)mPanel, 660 - leftIndent, 0LL);
    }
    mPanel = this->fields.messageLabel;
    if ( !mPanel
      || ((UILabel__set_fontSize((UILabel_o *)mPanel, this->fields.MESSAGE_FONT_SIZE, 0LL), message)
        ? (v50 = message)
        : (v50 = (System_String_o *)StringLiteral_1/*""*/),
          WrapControlText__textBBCodeAdjust(
            this->fields.messageLabel,
            v50,
            this->fields.MESSAGE_FONT_SIZE,
            0,
            9999,
            0LL),
          (mPanel = this->fields.messageLabel) == 0LL) )
    {
LABEL_84:
      sub_1BCAA3C(mPanel, v30);
    }
    UILabel__set_overflowMethod((UILabel_o *)mPanel, 3, 0LL);
    messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    if ( UnityEngine_Object__op_Inequality(messageCollider, 0LL, 0LL) )
    {
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v53 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v55 = v54;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v53 )
        goto LABEL_84;
      v70.fields.y = v56 * -0.5;
      v70.fields.x = v55 * 0.5;
      v70.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v53, v70, 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v57 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v59 = v58;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v57 )
        goto LABEL_84;
      v61 = 1.0;
      v62 = v59;
      UnityEngine_BoxCollider__set_size(v57, *(UnityEngine_Vector3_o *)(&v60 - 1), 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v65 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
    mPanel = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v65 )
    {
      UILabel__set_text(v65, (System_String_o *)mPanel, 0LL);
      goto LABEL_82;
    }
    goto LABEL_84;
  }
LABEL_82:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  mPanel = this->fields.scrollView;
  if ( !mPanel )
    goto LABEL_84;
  UIScrollView__ResetPosition((UIScrollView_o *)mPanel, 0LL);
  this->fields.isButtonEnable = 0;
  v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v66, v67, v68);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


void __fastcall ScrollMessageDialog__Open_30917544(
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
  __int64 v17; // x1
  const MethodInfo *v18; // x7
  UnityEngine_Object_o *subTitleLabel; // x27
  __int64 v20; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B10FC5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, title, subTitle);
    byte_4B10FC5 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subTitle, 0LL) )
  {
    subTitleLabel = (UnityEngine_Object_o *)this->fields.subTitleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality(subTitleLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel) == 0LL) )
      {
LABEL_13:
        sub_1BCAA3C(gameObject, v20);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0LL);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, v18);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B10FC9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10FC9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollMessageDialog_ClickDelegate___ctor(
        ScrollMessageDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A04FB4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04F6C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScrollMessageDialog_ClickDelegate__BeginInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4B10FCB & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B10FCB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ScrollMessageDialog_ClickDelegate__Invoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}