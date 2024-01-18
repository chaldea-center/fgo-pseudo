void __fastcall ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418D09F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418D09F = 1;
  }
  *(_QWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT = 0x4180000000000118LL;
  this->fields.onClickSeKind = 1;
  *(_QWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = 0x18000002BCLL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_34043144(this, 0LL, v2);
}


void __fastcall ScrollMessageDialog__Close_34043144(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418D09B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ScrollMessageDialog_EndClose__, v10);
    byte_418D09B = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ScrollMessageDialog__EndClose(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  ScrollMessageDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B2C2F8(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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

  if ( (byte_418D098 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418D098 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.secondTitleLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtn, 0LL, 0LL) )
  {
    gameObject = (UILabel_o *)this->fields.okBtn;
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.okBtnLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_B2C434(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t onClickSeKind; // w20
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418D09D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418D09D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    onClickSeKind = this->fields.onClickSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickSeKind, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    CommonUI__CloseScrollMessageDialog(Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ScrollMessageDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall ScrollMessageDialog__OnClickOk(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t onClickSeKind; // w20
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418D09C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418D09C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    onClickSeKind = this->fields.onClickSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickSeKind, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    CommonUI__CloseScrollMessageDialog(Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ScrollMessageDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
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
  __int64 v22; // x1
  void *transform; // x0
  __int64 v24; // x1
  void *v25; // x28
  UnityEngine_Object_o *listViewBack; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_GameObject_o *v29; // x0
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *titleLabel; // x25
  System_String_o *v32; // x1
  UnityEngine_Object_o *secondTitleLabel; // x24
  System_String_o *v34; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Transform_o *v36; // x24
  unsigned int localPosition; // s0
  float v38; // s8
  int v39; // s1
  int v40; // s9
  int v41; // s2
  float v42; // s0
  int v43; // s1
  System_String_o *v44; // x1
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v46; // x22
  float v47; // s0
  float v48; // s8
  float v49; // s1
  UnityEngine_BoxCollider_o *v50; // x22
  int v51; // s0
  int v52; // s8
  int v53; // s1
  float v54; // s2
  int v55; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v57; // x22
  System_Action_o *v58; // x20
  __int64 v59; // x0
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = title;
  if ( (byte_418D099 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&char___TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_ScrollMessageDialog_EndOpen__, v19);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v20);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418D099 = 1;
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message,
    *(System_String_array ***)&leftIndent,
    (System_Boolean_array **)func,
    *(System_Int32_array ***)&btnSe,
    (System_Int32_array *)canMaskTouchClose,
    (System_Int32_array *)method);
  if ( !v13 )
    goto LABEL_94;
  v25 = StringLiteral_1/*""*/;
  if ( System_String__Contains(v13, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    transform = (void *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_94;
    if ( !*((_DWORD *)transform + 6) )
      goto LABEL_95;
    *((_WORD *)transform + 16) = 10;
    transform = System_String__Split(v13, (System_Char_array *)transform, 0LL);
    if ( !transform )
      goto LABEL_94;
    if ( *((_DWORD *)transform + 6) < 2u )
    {
LABEL_95:
      v59 = sub_B2C460(transform);
      sub_B2C400(v59, 0LL);
    }
    v13 = (System_String_o *)*((_QWORD *)transform + 4);
    v25 = (void *)*((_QWORD *)transform + 5);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0LL, 0LL) )
    {
      transform = this->fields.listViewBack;
      if ( !transform )
        goto LABEL_94;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      transform = this->fields.listViewBack;
      if ( !transform )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
    }
    baseView = (UnityEngine_Object_o *)this->fields.baseView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseView, 0LL, 0LL) )
    {
      transform = this->fields.baseView;
      if ( !transform )
        goto LABEL_94;
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
      transform = this->fields.baseView;
      if ( !transform )
        goto LABEL_94;
      UIWidget__set_height((UIWidget_o *)transform, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      transform = this->fields.baseView;
      if ( !transform )
        goto LABEL_94;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      GameObjectExtensions__SetLocalPositionY(v29, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_94;
      transform = *(void **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
      if ( !transform )
        goto LABEL_94;
      v61.fields.x = *((float *)transform + 72);
      v61.fields.y = *((float *)transform + 73);
      v61.fields.z = *((float *)transform + 74);
      v61.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)transform, v61, 0LL);
      transform = this->fields.baseView;
      if ( !transform )
        goto LABEL_94;
      transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    }
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_94;
    v32 = v13 ? v13 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v32, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_94;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    transform = this->fields.secondTitleLabel;
    if ( !transform )
      goto LABEL_94;
    v34 = (System_String_o *)(v25 ? v25 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)transform, v34, 0LL);
    transform = this->fields.secondTitleLabel;
    if ( !transform )
      goto LABEL_94;
    UILabel__SetCondensedScale((UILabel_o *)transform, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_94;
    if ( (leftIndent & 0x80000000) != 0 )
    {
      UILabel__set_alignment((UILabel_o *)transform, 2, 0LL);
    }
    else
    {
      UILabel__set_alignment((UILabel_o *)transform, 1, 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !this->fields.messageLabel )
        goto LABEL_94;
      v36 = (UnityEngine_Transform_o *)transform;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0LL);
      if ( !transform )
        goto LABEL_94;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v38 = *(float *)&localPosition;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v39 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v40 = v39;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v41 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
      if ( !v36 )
        goto LABEL_94;
      v42 = (float)(v38 + -20.0) + (float)leftIndent;
      v43 = v40;
      UnityEngine_Transform__set_localPosition(v36, *(UnityEngine_Vector3_o *)(&v41 - 2), 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      transform = UnityEngine_Component__GetComponent_WebViewObject_(
                    (UnityEngine_Component_o *)transform,
                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !transform )
        goto LABEL_94;
      UIWidget__set_width((UIWidget_o *)transform, 660 - leftIndent, 0LL);
    }
    transform = this->fields.messageLabel;
    if ( !transform
      || ((UILabel__set_fontSize((UILabel_o *)transform, this->fields.MESSAGE_FONT_SIZE, 0LL), message)
        ? (v44 = message)
        : (v44 = (System_String_o *)StringLiteral_1/*""*/),
          WrapControlText__textBBCodeAdjust(
            this->fields.messageLabel,
            v44,
            this->fields.MESSAGE_FONT_SIZE,
            0,
            9999,
            0LL),
          (transform = this->fields.messageLabel) == 0LL) )
    {
LABEL_94:
      sub_B2C434(transform, v24);
    }
    UILabel__set_overflowMethod((UILabel_o *)transform, 3, 0LL);
    messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(messageCollider, 0LL, 0LL) )
    {
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v46 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 672LL));
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v48 = v47;
      transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                            transform,
                            *(_QWORD *)(*(_QWORD *)transform + 672LL));
      if ( !v46 )
        goto LABEL_94;
      v60.fields.y = v49 * -0.5;
      v60.fields.x = v48 * 0.5;
      v60.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v46, v60, 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v50 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 672LL));
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v52 = v51;
      transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                            transform,
                            *(_QWORD *)(*(_QWORD *)transform + 672LL));
      if ( !v50 )
        goto LABEL_94;
      v54 = 1.0;
      v55 = v52;
      UnityEngine_BoxCollider__set_size(v50, *(UnityEngine_Vector3_o *)(&v53 - 1), 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v57 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v57 )
    {
      UILabel__set_text(v57, (System_String_o *)transform, 0LL);
      goto LABEL_92;
    }
    goto LABEL_94;
  }
LABEL_92:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_94;
  UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
  this->fields.isButtonEnable = 0;
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
}


void __fastcall ScrollMessageDialog__Open_34042832(
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

  if ( (byte_418D09A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, title);
    byte_418D09A = 1;
  }
  if ( !System_String__IsNullOrEmpty(subTitle, 0LL) )
  {
    subTitleLabel = (UnityEngine_Object_o *)this->fields.subTitleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(subTitleLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel) == 0LL) )
      {
LABEL_14:
        sub_B2C434(gameObject, v19);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0LL);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, v17);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_14;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
}


UnityEngine_GameObject_o *__fastcall ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_418D09E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D09E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScrollMessageDialog_ClickDelegate__BeginInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_41853B4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOk);
    byte_41853B4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollMessageDialog_ClickDelegate__Invoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScrollMessageDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ScrollMessageDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ScrollMessageDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScrollMessageDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isOk, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isOk, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isOk, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isOk, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isOk,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isOk, v22);
    goto LABEL_37;
  }
}