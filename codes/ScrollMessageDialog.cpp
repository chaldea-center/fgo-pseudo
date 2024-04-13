void __fastcall ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE380 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE380 = 1;
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

  ScrollMessageDialog__Close_34844704(this, 0LL, v2);
}


void __fastcall ScrollMessageDialog__Close_34844704(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EE37C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ScrollMessageDialog_EndClose__, v10, v11, v12);
    byte_42EE37C = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall ScrollMessageDialog__EndOpen(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ScrollMessageDialog__Init(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v9; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_42EE379 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EE379 = 1;
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
    sub_B5D69C(gameObject, v9);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t onClickSeKind; // w20
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42EE37E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EE37E = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v10);
    CommonUI__CloseScrollMessageDialog(Instance, 0LL, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ScrollMessageDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall ScrollMessageDialog__OnClickOk(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t onClickSeKind; // w20
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42EE37D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EE37D = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v10);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  void *transform; // x0
  __int64 v40; // x1
  void *v41; // x28
  UnityEngine_Object_o *listViewBack; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_GameObject_o *v45; // x0
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *titleLabel; // x25
  System_String_o *v48; // x1
  UnityEngine_Object_o *secondTitleLabel; // x24
  System_String_o *v50; // x1
  UnityEngine_Object_o *messageLabel; // x24
  UnityEngine_Transform_o *v52; // x24
  unsigned int localPosition; // s0
  float v54; // s8
  int v55; // s1
  int v56; // s9
  int v57; // s2
  float v58; // s0
  int v59; // s1
  System_String_o *v60; // x1
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v62; // x22
  float v63; // s0
  float v64; // s8
  float v65; // s1
  UnityEngine_BoxCollider_o *v66; // x22
  int v67; // s0
  int v68; // s8
  int v69; // s1
  float v70; // s2
  int v71; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v73; // x22
  System_Action_o *v74; // x20
  __int64 v75; // x0
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = title;
  if ( (byte_42EE37A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, *(_QWORD *)&leftIndent);
    sub_B5D5C4(&char___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ScrollMessageDialog_EndOpen__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1/*""*/, v36, v37, v38);
    byte_42EE37A = 1;
  }
  this->fields.clickFunc = func;
  sub_B5D560(
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
  v41 = StringLiteral_1/*""*/;
  if ( System_String__Contains(v13, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    transform = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
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
      v75 = sub_B5D6C8(transform);
      sub_B5D668(v75, 0LL);
    }
    v13 = (System_String_o *)*((_QWORD *)transform + 4);
    v41 = (void *)*((_QWORD *)transform + 5);
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
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_94;
      transform = *(void **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
      if ( !transform )
        goto LABEL_94;
      v77.fields.x = *((float *)transform + 72);
      v77.fields.y = *((float *)transform + 73);
      v77.fields.z = *((float *)transform + 74);
      v77.fields.w = 260.0;
      UIPanel__set_baseClipRegion((UIPanel_o *)transform, v77, 0LL);
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
    v48 = v13 ? v13 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v48, 0LL);
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
    v50 = (System_String_o *)(v41 ? v41 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)transform, v50, 0LL);
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
      v52 = (UnityEngine_Transform_o *)transform;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0LL);
      if ( !transform )
        goto LABEL_94;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v54 = *(float *)&localPosition;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v55 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v56 = v55;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v57 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
      if ( !v52 )
        goto LABEL_94;
      v58 = (float)(v54 + -20.0) + (float)leftIndent;
      v59 = v56;
      UnityEngine_Transform__set_localPosition(v52, *(UnityEngine_Vector3_o *)(&v57 - 2), 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      transform = UnityEngine_Component__GetComponent_WebViewObject_(
                    (UnityEngine_Component_o *)transform,
                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !transform )
        goto LABEL_94;
      UIWidget__set_width((UIWidget_o *)transform, 660 - leftIndent, 0LL);
    }
    transform = this->fields.messageLabel;
    if ( !transform
      || ((UILabel__set_fontSize((UILabel_o *)transform, this->fields.MESSAGE_FONT_SIZE, 0LL), message)
        ? (v60 = message)
        : (v60 = (System_String_o *)StringLiteral_1/*""*/),
          WrapControlText__textBBCodeAdjust(
            this->fields.messageLabel,
            v60,
            this->fields.MESSAGE_FONT_SIZE,
            0,
            9999,
            0LL),
          (transform = this->fields.messageLabel) == 0LL) )
    {
LABEL_94:
      sub_B5D69C(transform, v40);
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
      v62 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 672LL));
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v64 = v63;
      transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                            transform,
                            *(_QWORD *)(*(_QWORD *)transform + 672LL));
      if ( !v62 )
        goto LABEL_94;
      v76.fields.y = v65 * -0.5;
      v76.fields.x = v64 * 0.5;
      v76.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v62, v76, 0LL);
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v66 = this->fields.messageCollider;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 672LL));
      transform = this->fields.messageLabel;
      if ( !transform )
        goto LABEL_94;
      v68 = v67;
      transform = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)transform + 664LL))(
                            transform,
                            *(_QWORD *)(*(_QWORD *)transform + 672LL));
      if ( !v66 )
        goto LABEL_94;
      v70 = 1.0;
      v71 = v68;
      UnityEngine_BoxCollider__set_size(v66, *(UnityEngine_Vector3_o *)(&v69 - 1), 0LL);
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
    v73 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v73 )
    {
      UILabel__set_text(v73, (System_String_o *)transform, 0LL);
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
  v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
}


void __fastcall ScrollMessageDialog__Open_34844392(
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

  if ( (byte_42EE37B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)title, (_DWORD)subTitle, message);
    byte_42EE37B = 1;
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
        sub_B5D69C(gameObject, v19);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EE37F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE37F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5D24 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E5D24 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollMessageDialog_ClickDelegate__Invoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScrollMessageDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ScrollMessageDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScrollMessageDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScrollMessageDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isOk, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isOk, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isOk,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isOk, v21);
    goto LABEL_37;
  }
}