void __fastcall ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FE16B & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FE16B = 1;
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

  ScrollMessageDialog__Close_32994084(this, 0LL, v2);
}


void __fastcall ScrollMessageDialog__Close_32994084(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FE167 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ScrollMessageDialog_EndClose__, v10);
    byte_40FE167 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *v5; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  UILabel_o *v7; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v9; // x0
  UnityEngine_Object_o *okBtn; // x20
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FE164 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FE164 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v5 = this->fields.titleLabel;
    if ( !v5 )
      goto LABEL_35;
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    v7 = this->fields.secondTitleLabel;
    if ( !v7 )
      goto LABEL_35;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v9 = this->fields.messageLabel;
    if ( !v9 )
      goto LABEL_35;
    UILabel__set_text(v9, (System_String_o *)StringLiteral_1, 0LL);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtn, 0LL, 0LL) )
  {
    v11 = this->fields.okBtn;
    if ( !v11 )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(v11, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v13 = this->fields.okBtnLabel;
    if ( !v13 )
      goto LABEL_35;
    UILabel__set_text(v13, (System_String_o *)StringLiteral_1, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ScrollMessageDialog__OnClickCancel(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t onClickSeKind; // w20
  CommonUI_o *Instance; // x0
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FE169 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FE169 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  ScrollMessageDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FE168 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FE168 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
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
  System_String_o *v23; // x28
  __int64 v24; // x2
  System_String_array *v25; // x0
  __int64 v26; // x2
  System_String_array *v27; // x1
  UnityEngine_Object_o *listViewBack; // x25
  UIWidget_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x25
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UIWidget_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  struct UIScrollView_o *scrollView; // x8
  UIPanel_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Object_o *titleLabel; // x25
  UILabel_o *v43; // x0
  System_String_o *v44; // x1
  UILabel_o *v45; // x0
  UnityEngine_Object_o *secondTitleLabel; // x24
  UILabel_o *v47; // x0
  System_String_o *v48; // x1
  UILabel_o *v49; // x0
  UnityEngine_Object_o *messageLabel; // x24
  UILabel_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v54; // x24
  UnityEngine_Transform_o *v55; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v57; // x0
  float v58; // s8
  UnityEngine_Transform_o *v59; // x0
  int v60; // s1
  UnityEngine_Component_o *v61; // x0
  int v62; // s9
  UnityEngine_Transform_o *v63; // x0
  int v64; // s2
  float v65; // s0
  int v66; // s1
  UnityEngine_Component_o *v67; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UILabel_o *v69; // x0
  System_String_o *v70; // x1
  UILabel_o *v71; // x0
  UnityEngine_Object_o *messageCollider; // x22
  struct UILabel_o *v73; // x0
  UnityEngine_BoxCollider_o *v74; // x22
  float v75; // s0
  struct UILabel_o *v76; // x0
  float v77; // s8
  float v78; // s1
  struct UILabel_o *v79; // x0
  UnityEngine_BoxCollider_o *v80; // x22
  int v81; // s0
  struct UILabel_o *v82; // x0
  int v83; // s8
  int v84; // s1
  float v85; // s2
  int v86; // s0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v88; // x22
  System_String_o *v89; // x0
  UIScrollView_o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Action_o *v95; // x20
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = title;
  if ( (byte_40FE165 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&char___TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_ScrollMessageDialog_EndOpen__, v19);
    sub_B16FFC(&StringLiteral_26, v20);
    sub_B16FFC(&StringLiteral_3252, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FE165 = 1;
  }
  this->fields.clickFunc = func;
  sub_B16F98(
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
  v23 = (System_String_o *)StringLiteral_1;
  if ( System_String__Contains(v13, (System_String_o *)StringLiteral_26, 0LL) )
  {
    v25 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v24);
    if ( !v25 )
      goto LABEL_94;
    v27 = v25;
    if ( !v25->max_length )
      goto LABEL_95;
    LOWORD(v25->m_Items[0]) = 10;
    v25 = System_String__Split(v13, (System_Char_array *)v25, 0LL);
    if ( !v25 )
      goto LABEL_94;
    if ( v25->max_length < 2 )
    {
LABEL_95:
      sub_B17100(v25, v27, v26);
      sub_B170A0();
    }
    v13 = v25->m_Items[0];
    v23 = v25->m_Items[1];
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0LL, 0LL) )
    {
      v29 = (UIWidget_o *)this->fields.listViewBack;
      if ( !v29 )
        goto LABEL_94;
      UIWidget__set_height(v29, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      v30 = (UnityEngine_Component_o *)this->fields.listViewBack;
      if ( !v30 )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
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
      v33 = (UnityEngine_Component_o *)this->fields.baseView;
      if ( !v33 )
        goto LABEL_94;
      v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
      if ( !v34 )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(v34, 0, 0LL);
      v35 = this->fields.baseView;
      if ( !v35 )
        goto LABEL_94;
      UIWidget__set_height(v35, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0LL);
      v36 = (UnityEngine_Component_o *)this->fields.baseView;
      if ( !v36 )
        goto LABEL_94;
      v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
      GameObjectExtensions__SetLocalPositionY(v37, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0LL);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_94;
      v39 = *(UIPanel_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
      if ( !v39 )
        goto LABEL_94;
      v97.fields.x = v39->fields.mClipRange.fields.x;
      v97.fields.y = v39->fields.mClipRange.fields.y;
      v97.fields.z = v39->fields.mClipRange.fields.z;
      v97.fields.w = 260.0;
      UIPanel__set_baseClipRegion(v39, v97, 0LL);
      v40 = (UnityEngine_Component_o *)this->fields.baseView;
      if ( !v40 )
        goto LABEL_94;
      v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
      if ( !v41 )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive(v41, 1, 0LL);
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
    v43 = this->fields.titleLabel;
    if ( !v43 )
      goto LABEL_94;
    v44 = v13 ? v13 : (System_String_o *)StringLiteral_1;
    UILabel__set_text(v43, v44, 0LL);
    v45 = this->fields.titleLabel;
    if ( !v45 )
      goto LABEL_94;
    UILabel__SetCondensedScale(v45, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0LL, 0LL) )
  {
    v47 = this->fields.secondTitleLabel;
    if ( !v47 )
      goto LABEL_94;
    v48 = v23 ? v23 : (System_String_o *)StringLiteral_1;
    UILabel__set_text(v47, v48, 0LL);
    v49 = this->fields.secondTitleLabel;
    if ( !v49 )
      goto LABEL_94;
    UILabel__SetCondensedScale(v49, this->fields.TITLE_LABEL_MAX_WIDTH, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v51 = this->fields.messageLabel;
    if ( !v51 )
      goto LABEL_94;
    if ( (leftIndent & 0x80000000) != 0 )
    {
      UILabel__set_alignment(v51, 2, 0LL);
    }
    else
    {
      UILabel__set_alignment(v51, 1, 0LL);
      v52 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v52 )
        goto LABEL_94;
      transform = UnityEngine_Component__get_transform(v52, 0LL);
      if ( !this->fields.messageLabel )
        goto LABEL_94;
      v54 = transform;
      v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.messageLabel, 0LL);
      if ( !v55 )
        goto LABEL_94;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v55, 0LL);
      v57 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v57 )
        goto LABEL_94;
      v58 = *(float *)&localPosition;
      v59 = UnityEngine_Component__get_transform(v57, 0LL);
      if ( !v59 )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v60 - 1) = UnityEngine_Transform__get_localPosition(v59, 0LL);
      v61 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v61 )
        goto LABEL_94;
      v62 = v60;
      v63 = UnityEngine_Component__get_transform(v61, 0LL);
      if ( !v63 )
        goto LABEL_94;
      *(UnityEngine_Vector3_o *)(&v64 - 2) = UnityEngine_Transform__get_localPosition(v63, 0LL);
      if ( !v54 )
        goto LABEL_94;
      v65 = (float)(v58 + -20.0) + (float)leftIndent;
      v66 = v62;
      UnityEngine_Transform__set_localPosition(v54, *(UnityEngine_Vector3_o *)(&v64 - 2), 0LL);
      v67 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v67 )
        goto LABEL_94;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  v67,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_WebViewObject )
        goto LABEL_94;
      UIWidget__set_width((UIWidget_o *)Component_WebViewObject, 660 - leftIndent, 0LL);
    }
    v69 = this->fields.messageLabel;
    if ( !v69
      || ((UILabel__set_fontSize(v69, this->fields.MESSAGE_FONT_SIZE, 0LL), message)
        ? (v70 = message)
        : (v70 = (System_String_o *)StringLiteral_1),
          WrapControlText__textBBCodeAdjust(
            this->fields.messageLabel,
            v70,
            this->fields.MESSAGE_FONT_SIZE,
            0,
            9999,
            0LL),
          (v71 = this->fields.messageLabel) == 0LL) )
    {
LABEL_94:
      sub_B170D4();
    }
    UILabel__set_overflowMethod(v71, 3, 0LL);
    messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(messageCollider, 0LL, 0LL) )
    {
      v73 = this->fields.messageLabel;
      if ( !v73 )
        goto LABEL_94;
      v74 = this->fields.messageCollider;
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v73->klass->vtable._22_get_localSize.method)(
        v73,
        v73->klass->vtable._23_get_drawingDimensions.methodPtr);
      v76 = this->fields.messageLabel;
      if ( !v76 )
        goto LABEL_94;
      v77 = v75;
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v76->klass->vtable._22_get_localSize.method)(
        v76,
        v76->klass->vtable._23_get_drawingDimensions.methodPtr);
      if ( !v74 )
        goto LABEL_94;
      v96.fields.y = v78 * -0.5;
      v96.fields.x = v77 * 0.5;
      v96.fields.z = 0.0;
      UnityEngine_BoxCollider__set_center(v74, v96, 0LL);
      v79 = this->fields.messageLabel;
      if ( !v79 )
        goto LABEL_94;
      v80 = this->fields.messageCollider;
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v79->klass->vtable._22_get_localSize.method)(
        v79,
        v79->klass->vtable._23_get_drawingDimensions.methodPtr);
      v82 = this->fields.messageLabel;
      if ( !v82 )
        goto LABEL_94;
      v83 = v81;
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v82->klass->vtable._22_get_localSize.method)(
        v82,
        v82->klass->vtable._23_get_drawingDimensions.methodPtr);
      if ( !v80 )
        goto LABEL_94;
      v85 = 1.0;
      v86 = v83;
      UnityEngine_BoxCollider__set_size(v80, *(UnityEngine_Vector3_o *)(&v84 - 1), 0LL);
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
    v88 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
    if ( v88 )
    {
      UILabel__set_text(v88, v89, 0LL);
      goto LABEL_92;
    }
    goto LABEL_94;
  }
LABEL_92:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v90 = this->fields.scrollView;
  if ( !v90 )
    goto LABEL_94;
  UIScrollView__ResetPosition(v90, 0LL);
  this->fields.isButtonEnable = 0;
  v95 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
}


void __fastcall ScrollMessageDialog__Open_32993772(
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
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v21; // x0
  UIScrollView_o *scrollView; // x0

  if ( (byte_40FE166 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, title);
    byte_40FE166 = 1;
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
      v19 = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !v19
        || (gameObject = UnityEngine_Component__get_gameObject(v19, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v21 = this->fields.subTitleLabel) == 0LL) )
      {
LABEL_14:
        sub_B170D4();
      }
      UILabel__set_text(v21, subTitle, 0LL);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, v17);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  UIScrollView__ResetPosition(scrollView, 0LL);
}


UnityEngine_GameObject_o *__fastcall ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FE16A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE16A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScrollMessageDialog_ClickDelegate___ctor(
        ScrollMessageDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F75F8 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40F75F8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ScrollMessageDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScrollMessageDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isOk, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isOk, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
}