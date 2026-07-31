void EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x8
  EventPointReplaseRewardDialog_c *v2; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v3; // x10
  struct EventPointReplaseRewardDialog_StaticFields *v4; // x8

  if ( (byte_59329B5 & 1) == 0 )
  {
    sub_21FFC50(&EventPointReplaseRewardDialog_TypeInfo);
    byte_59329B5 = 1;
  }
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  v2 = EventPointReplaseRewardDialog_TypeInfo;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  static_fields->BANNER_RETRY_MAX = 3;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v3->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_SIZE_X = 0x10E000002BCLL;
  *(_QWORD *)&v4->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v4->BUTTON_BASE_POS.fields.z = 0.0;
}


void EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w9

  if ( (byte_59329B4 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59329B4 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.MESSAGE_FONT_SIZE = 24;
  v5 = *(&v4->_2.cctor_finished + 1);
  this->fields.isInitPanelDepth = 1;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventPointReplaseRewardDialog__Close(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointReplaseRewardDialog__Close_38671044(this, 0, v2);
}


void EventPointReplaseRewardDialog__Close_38671044(
        EventPointReplaseRewardDialog_o *this,
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

  if ( (byte_59329B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventPointReplaseRewardDialog_EndClose__);
    byte_59329B2 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
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
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void EventPointReplaseRewardDialog__EndClose(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
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

  EventPointReplaseRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void EventPointReplaseRewardDialog__EndOpen(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void EventPointReplaseRewardDialog__Init(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_59329B0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59329B0 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      titleLabel = this->fields.messageLabel;
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
        if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
        {
          titleLabel = this->fields.titleLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
        {
          titleLabel = this->fields.messageLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
        if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
        {
          titleLabel = this->fields.okBtnLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( titleLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
          BaseDialog__Init((BaseDialog_o *)this, 0);
          return;
        }
      }
    }
LABEL_23:
    sub_21FFECC(titleLabel, method);
  }
}


void EventPointReplaseRewardDialog__OnClickOk(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_59329B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventPointReplaseRewardDialog_OnClickOk__);
    byte_59329B3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_EventPointReplaseRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_EventPointReplaseRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventPointReplaseRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void EventPointReplaseRewardDialog__Open(
        EventPointReplaseRewardDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        EventPointReplaseRewardDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        const MethodInfo *method)
{
  int32_t MESSAGE_FONT_SIZE; // w23
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UIPanel_o *TargetPanel; // x21
  UnityEngine_Object_c *v27; // x0
  UILabel_o *transform; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *titleLabel; // x27
  __int64 v33; // x2
  System_String_o *v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  EventPointReplaseRewardDialog_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x25
  EventPointReplaseRewardDialog_c *v40; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v43; // s8
  float v44; // s9
  float v45; // s10
  int32_t v46; // w25
  __int64 v47; // x2
  UIWidget_o *v48; // x26
  System_String_o *v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  UILabel_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  EventPointReplaseRewardDialog_c *v58; // x8
  UnityEngine_GameObject_o *v59; // x22
  System_Action_o *v60; // x20
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_59329B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventPointReplaseRewardDialog_EndOpen__);
    sub_21FFC50(&EventPointReplaseRewardDialog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59329B1 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    v27 = UnityEngine_Object_TypeInfo;
    this->fields.isInitPanelDepth = 0;
    if ( !*(&v27->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v27, v19, v20);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_61;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v20, v21, v22, v23, v24, v25);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_fontSize(transform, titleSize, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_61;
    v34 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v34, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v38 = EventPointReplaseRewardDialog_TypeInfo;
    v39 = gameObject;
    if ( !*(&EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v36, v37);
      v38 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v39, v38->static_fields->TITLE_BASE_POS, 0);
  }
  v40 = EventPointReplaseRewardDialog_TypeInfo;
  if ( !*(&EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v29, v33);
    v40 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v40->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v43 = p_BANNER_RETRY_MAX[4];
  v44 = p_BANNER_RETRY_MAX[5];
  v45 = p_BANNER_RETRY_MAX[6];
  v46 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v33);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    transform = (UILabel_o *)EventPointReplaseRewardDialog_TypeInfo;
    v48 = (UIWidget_o *)this->fields.messageLabel;
    if ( !*(&EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v29, v47);
    if ( !v48 )
      goto LABEL_61;
    UIWidget__SetDimensions(v48, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v46, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_maxLineCount(transform, maxLine, 0);
    transform = this->fields.messageLabel;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_fontSize(transform, MESSAGE_FONT_SIZE, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    v49 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(transform, v49, transform->fields.mFontSize, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v61.fields.x = v43;
    v61.fields.y = v44;
    v61.fields.z = v45;
    GameObjectExtensions__SetLocalPosition(v50, v61, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v47);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v54 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v54 )
      goto LABEL_61;
    UILabel__set_text(v54, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_61;
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v58 = EventPointReplaseRewardDialog_TypeInfo;
    v59 = v55;
    if ( !*(&EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v56, v57);
      v58 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v59, v58->static_fields->BUTTON_BASE_POS, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( panelDepth < 0 )
      panelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, panelDepth, 0);
      goto LABEL_60;
    }
LABEL_61:
    sub_21FFECC(transform, v29);
  }
LABEL_60:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v60 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0, 0);
}


void EventPointReplaseRewardDialog_ClickDelegate___ctor(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FED644;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FED5FC;
}


System_IAsyncResult_o *EventPointReplaseRewardDialog_ClickDelegate__BeginInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void EventPointReplaseRewardDialog_ClickDelegate__Invoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}