void ScrollMessageDialog___ctor(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596A912 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A912 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.onClickSeKind = 1;
  *(_OWORD *)&this->fields.TITLE_LABEL_MAX_WIDTH = xmmword_E9CAA0;
  *(_OWORD *)&this->fields.MULTILINE_TITLE_MESSAGE_POS_Y = xmmword_E9D150;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ScrollMessageDialog__Close(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ScrollMessageDialog__Close_38500448(this, 0, v2);
}


void ScrollMessageDialog__Close_38500448(
        ScrollMessageDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596A90E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ScrollMessageDialog_EndClose__);
    byte_596A90E = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ScrollMessageDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ScrollMessageDialog__EndClose(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  ScrollMessageDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_2213A04(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ScrollMessageDialog__EndOpen(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ScrollMessageDialog__Init(ScrollMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *secondTitleLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *okBtn; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_596A90B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A90B = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0, 0) )
  {
    gameObject = this->fields.secondTitleLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_30;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtn = (UnityEngine_Object_o *)this->fields.okBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(okBtn, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.okBtn;
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
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
    sub_2213CDC(gameObject, v5);
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

  if ( (byte_596A910 & 1) == 0 )
  {
    sub_2213A60(&Method_ScrollMessageDialog_OnClickCancel__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A910 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScrollMessageDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
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

  if ( (byte_596A90F & 1) == 0 )
  {
    sub_2213A60(&Method_ScrollMessageDialog_OnClickOk__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A90F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ScrollMessageDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_ScrollMessageDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ScrollMessageDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickSeKind, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
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
  void *mPanel; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  void *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x2
  UnityEngine_Object_o *listViewBack; // x26
  __int64 v23; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseView; // x26
  UnityEngine_GameObject_o *v26; // x0
  struct UIScrollView_o *scrollView; // x8
  int32_t TitleFontSize; // w26
  int32_t IntValue; // w0
  UnityEngine_Object_o *titleLabel; // x27
  __int64 v31; // x2
  System_String_o *v32; // x1
  UnityEngine_Object_o *secondTitleLabel; // x25
  __int64 v34; // x2
  System_String_o *v35; // x1
  UnityEngine_Object_o *messageLabel; // x25
  __int64 v37; // x2
  int32_t v38; // w0
  int32_t v39; // w23
  System_String_o *v40; // x8
  UILabel_o *v41; // x0
  bool v42; // zf
  int32_t MESSAGE_FONT_SIZE; // w2
  int32_t v44; // w3
  System_String_o *v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Object_o *messageCollider; // x22
  UnityEngine_BoxCollider_o *v49; // x22
  float v50; // s0
  float v51; // s8
  float v52; // s1
  UnityEngine_BoxCollider_o *v53; // x22
  float v54; // s0
  float v55; // s8
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *v59; // x22
  System_Action_c *v60; // x0
  System_Action_o *v61; // x20
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A90C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScrollMessageDialog_EndOpen__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_25396/*"titleFontSize"*/);
    sub_2213A60(&StringLiteral_22647/*"messageFontSize"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A90C = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    *(System_String_o **)&leftIndent,
    (int32_t)func,
    btnSe,
    canMaskTouchClose,
    (bool)script);
  if ( !canBackKeyClose )
  {
    v18 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ScrollMessageDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                        this,
                                        this->klass->vtable._4_get_closeBtnObject.method);
    AndroidBackKeyManager__RemoveBackBtn(v18, 0);
  }
  if ( !title )
    goto LABEL_92;
  v19 = StringLiteral_1/*""*/;
  if ( System_String__Contains(title, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    mPanel = System_String__Split(title, 0xAu, 0, 0);
    if ( !mPanel )
      goto LABEL_92;
    if ( *((_DWORD *)mPanel + 6) < 2u )
      sub_2213CE4(mPanel);
    title = (System_String_o *)*((_QWORD *)mPanel + 4);
    v19 = (void *)*((_QWORD *)mPanel + 5);
    listViewBack = (UnityEngine_Object_o *)this->fields.listViewBack;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v21);
    if ( UnityEngine_Object__op_Inequality(listViewBack, 0, 0) )
    {
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_92;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = this->fields.listViewBack;
      if ( !mPanel )
        goto LABEL_92;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
    }
    baseView = (UnityEngine_Object_o *)this->fields.baseView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v23);
    if ( UnityEngine_Object__op_Inequality(baseView, 0, 0) )
    {
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_92;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_92;
      UIWidget__set_height((UIWidget_o *)mPanel, this->fields.MULTILINE_TITLE_MESSAGE_HEIGHT, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_92;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(v26, this->fields.MULTILINE_TITLE_MESSAGE_POS_Y, 0);
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_92;
      mPanel = scrollView->fields.mPanel;
      if ( !mPanel )
        goto LABEL_92;
      v67.fields.x = *((float *)mPanel + 74);
      v67.fields.y = *((float *)mPanel + 75);
      v67.fields.w = 260.0;
      v67.fields.z = *((float *)mPanel + 76);
      UIPanel__set_baseClipRegion((UIPanel_o *)mPanel, v67, 0);
      mPanel = this->fields.baseView;
      if ( !mPanel )
        goto LABEL_92;
      mPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
  }
  TitleFontSize = this->fields.TitleFontSize;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) >= 1 )
    {
      IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_25396/*"titleFontSize"*/, 0, 0);
      if ( IntValue >= 1 )
        TitleFontSize = IntValue;
    }
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v20);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_92;
    UILabel__set_fontSize((UILabel_o *)mPanel, TitleFontSize, 0);
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_92;
    v32 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)mPanel, v32, 0);
    mPanel = this->fields.titleLabel;
    if ( !mPanel )
      goto LABEL_92;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  secondTitleLabel = (UnityEngine_Object_o *)this->fields.secondTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v31);
  if ( UnityEngine_Object__op_Inequality(secondTitleLabel, 0, 0) )
  {
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_92;
    UILabel__set_fontSize((UILabel_o *)mPanel, TitleFontSize, 0);
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_92;
    v35 = (System_String_o *)(v19 ? v19 : StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)mPanel, v35, 0);
    mPanel = this->fields.secondTitleLabel;
    if ( !mPanel )
      goto LABEL_92;
    UILabel__SetCondensedScale((UILabel_o *)mPanel, this->fields.TITLE_LABEL_MAX_WIDTH, 0, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v34);
  if ( !UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    goto LABEL_83;
  mPanel = this->fields.messageLabel;
  if ( leftIndent < 0 )
  {
    if ( !mPanel )
      goto LABEL_92;
    UILabel__set_alignment((UILabel_o *)mPanel, 2, 0);
    if ( !script )
      goto LABEL_67;
  }
  else
  {
    if ( !mPanel )
      goto LABEL_92;
    UILabel__set_alignment((UILabel_o *)mPanel, 1, 0);
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    mPanel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0);
    if ( !mPanel )
      goto LABEL_92;
    v64.fields.y = this->fields.MessageLabelDefaultPosition.fields.y;
    v64.fields.x = (float)(this->fields.MessageLabelDefaultPosition.fields.x + -20.0) + (float)leftIndent;
    v64.fields.z = this->fields.MessageLabelDefaultPosition.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mPanel, v64, 0);
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    UIWidget__set_width((UIWidget_o *)mPanel, 660 - leftIndent, 0);
    if ( !script )
      goto LABEL_67;
  }
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1
    || (v38 = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_22647/*"messageFontSize"*/, 0, 0), v38 < 1) )
  {
LABEL_67:
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    UILabel__set_fontSize((UILabel_o *)mPanel, this->fields.MESSAGE_FONT_SIZE, 0);
    v40 = (System_String_o *)StringLiteral_1/*""*/;
    v41 = this->fields.messageLabel;
    v42 = message == 0;
    MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    v44 = 0;
    goto LABEL_69;
  }
  v39 = v38;
  mPanel = this->fields.messageLabel;
  if ( !mPanel )
    goto LABEL_92;
  UILabel__set_fontSize((UILabel_o *)mPanel, v39, 0);
  v40 = (System_String_o *)StringLiteral_1/*""*/;
  v41 = this->fields.messageLabel;
  v42 = message == 0;
  MESSAGE_FONT_SIZE = v39;
  v44 = v39;
LABEL_69:
  if ( v42 )
    v45 = v40;
  else
    v45 = message;
  WrapControlText__textBBCodeAdjust(v41, v45, MESSAGE_FONT_SIZE, v44, 0);
  mPanel = this->fields.messageLabel;
  if ( !mPanel )
    goto LABEL_92;
  UILabel__set_overflowMethod((UILabel_o *)mPanel, 3, 0);
  messageCollider = (UnityEngine_Object_o *)this->fields.messageCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
  if ( UnityEngine_Object__op_Inequality(messageCollider, 0, 0) )
  {
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    v49 = this->fields.messageCollider;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(mPanel, *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    v51 = v50;
    mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                       mPanel,
                       *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    if ( !v49 )
      goto LABEL_92;
    v65.fields.y = v52 * -0.5;
    v65.fields.x = v51 * 0.5;
    v65.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v49, v65, 0);
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    v53 = this->fields.messageCollider;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(mPanel, *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    mPanel = this->fields.messageLabel;
    if ( !mPanel )
      goto LABEL_92;
    v55 = v54;
    mPanel = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mPanel + 664LL))(
                       mPanel,
                       *(_QWORD *)(*(_QWORD *)mPanel + 672LL));
    if ( !v53 )
      goto LABEL_92;
    v66.fields.x = v55;
    v66.fields.z = 1.0;
    UnityEngine_BoxCollider__set_size(v53, v66, 0);
  }
LABEL_83:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v37);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v59 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
    mPanel = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v59 )
    {
      UILabel__set_text(v59, (System_String_o *)mPanel, 0);
      goto LABEL_90;
    }
LABEL_92:
    sub_2213CDC(mPanel, v17);
  }
LABEL_90:
  this->fields.onClickSeKind = btnSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  mPanel = this->fields.scrollView;
  if ( !mPanel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mPanel, 0);
  v60 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v61 = (System_Action_o *)sub_2213CCC(v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ScrollMessageDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 1, 0);
}


void ScrollMessageDialog__Open_38500124(
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
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *subTitleLabel; // x27
  __int64 v21; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_596A90D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A90D = 1;
  }
  if ( !System_String__IsNullOrEmpty(subTitle, 0) )
  {
    subTitleLabel = (UnityEngine_Object_o *)this->fields.subTitleLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( UnityEngine_Object__op_Inequality(subTitleLabel, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.subTitleLabel) == 0) )
      {
LABEL_13:
        sub_2213CDC(gameObject, v21);
      }
      UILabel__set_text((UILabel_o *)gameObject, subTitle, 0);
    }
  }
  ScrollMessageDialog__Open(this, title, message, leftIndent, func, btnSe, canMaskTouchClose, 0, canBackKeyClose, v23);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
}


UnityEngine_GameObject_o *ScrollMessageDialog__get_closeBtnObject(
        ScrollMessageDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A911 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A911 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void ScrollMessageDialog_ClickDelegate___ctor(
        ScrollMessageDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2000060;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2000018;
}


System_IAsyncResult_o *ScrollMessageDialog_ClickDelegate__BeginInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void ScrollMessageDialog_ClickDelegate__EndInvoke(
        ScrollMessageDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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