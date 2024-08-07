void __fastcall ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A0267D & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A0267D = 1;
  }
  *(_QWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT = 0x4180000000000118LL;
  *(_QWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = 0x18000002BCLL;
  this->fields.onClickSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_45042848(this, 0LL, v2);
}


void __fastcall ScrollMessageDialog__Close_45042848(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A02679 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_ScrollMessageDialog_EndClose__, v6);
    byte_4A02679 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall ScrollMessageDialog__EndClose(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  ScrollMessageDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B649A4(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ScrollMessageDialog__EndOpen(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ScrollMessageDialog__Init(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4A02676 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v3);
    byte_4A02676 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.secondTitleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtn, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.okBtn;
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64C5C(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A0267B & 1) == 0 )
  {
    sub_1B64A00(&Method_ScrollMessageDialog_OnClickCancel__, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A0267B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ScrollMessageDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64A18(Method_ScrollMessageDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B649E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickSeKind, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v7);
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
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct ScrollMessageDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A0267A & 1) == 0 )
  {
    sub_1B64A00(&Method_ScrollMessageDialog_OnClickOk__, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A0267A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ScrollMessageDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64A18(Method_ScrollMessageDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B649E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickSeKind, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B64C5C(0LL, v7);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *mPanel; // x0
  __int64 v23; // x1
  void *v24; // x28
  UnityEngine_Object_o *listViewBack; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_GameObject_o *v28; // x0
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *titleLabel; // x25
  System_String_o *v31; // x1
  UnityEngine_Object_o *secondTitleLabel; // x24
  System_String_o *v33; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Transform_o *v35; // x24
  unsigned int localPosition; // s0
  float v37; // s8
  int v38; // s1
  int v39; // s9
  int v40; // s2
  float v41; // s0
  int v42; // s1
  System_String_o *v43; // x1
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v45; // x22
  float v46; // s0
  float v47; // s8
  float v48; // s1
  UnityEngine_BoxCollider_o *v49; // x22
  int v50; // s0
  int v51; // s8
  int v52; // s1
  float v53; // s2
  int v54; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v56; // x22
  System_Action_o *v57; // x20
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = title;
  if ( (byte_4A02677 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, title);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UIWidget___, v15);
    sub_1B64A00(&LocalizationManager_TypeInfo, v16);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64A00(&Method_ScrollMessageDialog_EndOpen__, v18);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v19);
    sub_1B64A00(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v20);
    sub_1B64A00(&StringLiteral_1/*""*/, v21);
    byte_4A02677 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, (int32_t)message, leftIndent);
  if ( !v13 )
    goto LABEL_84;
  v24 = StringLiteral_1/*""*/;
  if ( System_String__Contains(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    mPanel = System_String__Split(v13, 0xAu, 0, 0LL);
    if ( !mPanel )
      goto LABEL_84;
    if ( *((_DWORD *)mPanel + 6) < 2u )
      sub_1B64C64(mPanel, v23);
    v13 = (System_String_o *)*((_QWORD *)mPanel + 4);
    v24 = (void *)*((_QWORD *)mPanel + 5);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_84;
      mPanel = scrollView->fields.mPanel;
      if ( !mPanel )
        goto LABEL_84;
      v59.fields.x = *((float *)mPanel + 74);
      v59.fields.y = *((float *)mPanel + 75);
      v59.fields.z = *((float *)mPanel + 76);
      v59.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)mPanel, v59, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v31 = v13 ? v13 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)mPanel, v31, 0LL);
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    v33 = (System_String_o *)(v24 ? v24 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)mPanel, v33, 0LL);
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_84;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v35 = (UnityEngine_Transform_o *)mPanel;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mPanel, 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v37 = *(float *)&localPosition;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v38 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)mPanel,
                                               0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v39 = v38;
      mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_84;
      *(UnityEngine_Vector3_o *)(&v40 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)mPanel,
                                               0LL);
      if ( !v35 )
        goto LABEL_84;
      v41 = (float)(v37 + -20.0) + (float)leftIndent;
      v42 = v39;
      UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)(&v40 - 2), 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      mPanel = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)mPanel,
                 (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !mPanel )
        goto LABEL_84;
      UIWidget__set_width((UIWidget_o *)mPanel, 660 - leftIndent, 0LL);
    }
    mPanel = this->fields.messageLabel;
    if ( !mPanel
      || ((UILabel__set_fontSize((UILabel_o *)mPanel, this->fields.MESSAGE_FONT_SIZE, 0LL), message)
        ? (v43 = message)
        : (v43 = (System_String_o *)StringLiteral_1/*""*/),
          WrapControlText__textBBCodeAdjust(
            this->fields.messageLabel,
            v43,
            this->fields.MESSAGE_FONT_SIZE,
            0,
            9999,
            0LL),
          (mPanel = this->fields.messageLabel) == 0LL) )
    {
LABEL_84:
      sub_1B64C5C(mPanel, v23);
    }
    UILabel__set_overflowMethod((UILabel_o *)mPanel, 3, 0LL);
    messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageCollider, 0LL, 0LL) )
    {
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v45 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v47 = v46;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v45 )
        goto LABEL_84;
      v58.fields.y = v48 * -0.5;
      v58.fields.x = v47 * 0.5;
      v58.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v45, v58, 0LL);
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v49 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
        mPanel,
        *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      mPanel = this->fields.messageLabel;
      if ( !mPanel )
        goto LABEL_84;
      v51 = v50;
      mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                         mPanel,
                         *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
      if ( !v49 )
        goto LABEL_84;
      v53 = 1.0;
      v54 = v51;
      UnityEngine_BoxCollider__set_size(v49, *(UnityEngine_Vector3_o *)(&v52 - 1), 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v56 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mPanel = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v56 )
    {
      UILabel__set_text(v56, (System_String_o *)mPanel, 0LL);
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
  v57 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


void __fastcall ScrollMessageDialog__Open_45042556(
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

  if ( (byte_4A02678 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, title);
    byte_4A02678 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subTitle, 0LL) )
  {
    subTitleLabel = (UnityEngine_Object_o *)this->fields.subTitleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subTitleLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel) == 0LL) )
      {
LABEL_13:
        sub_1B64C5C(gameObject, v19);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0LL);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, v17);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A0267C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A0267C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B64C5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B15E8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B15A0;
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
  if ( (byte_4A0267E & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, isOk);
    byte_4A0267E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
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