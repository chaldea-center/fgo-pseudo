void EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x8
  EventPointReplaseRewardDialog_c *v2; // x8
  struct EventPointReplaseRewardDialog_StaticFields *v3; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v4; // x8

  if ( (byte_4CC1B82 & 1) == 0 )
  {
    sub_1C713B0(&EventPointReplaseRewardDialog_TypeInfo);
    byte_4CC1B82 = 1;
  }
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v2 = EventPointReplaseRewardDialog_TypeInfo;
  v3 = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&v3->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v3->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_SIZE_X = 0x10E000002BCLL;
  *(_QWORD *)&v4->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v4->BUTTON_BASE_POS.fields.z = 0.0;
}


void EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1B81 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1B81 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 24;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventPointReplaseRewardDialog__Close(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointReplaseRewardDialog__Close_32537680(this, 0, v2);
}


void EventPointReplaseRewardDialog__Close_32537680(
        EventPointReplaseRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CC1B7F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventPointReplaseRewardDialog_EndClose__);
    byte_4CC1B7F = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C71354(&this->fields.closeEndFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void EventPointReplaseRewardDialog__EndClose(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  EventPointReplaseRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C71354(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void EventPointReplaseRewardDialog__EndOpen(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void EventPointReplaseRewardDialog__Init(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4CC1B7D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1B7D = 1;
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
        v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
        {
          titleLabel = this->fields.titleLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
        {
          titleLabel = this->fields.messageLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(titleLabel, method);
  }
}


void EventPointReplaseRewardDialog__OnClickOk(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC1B80 & 1) == 0 )
  {
    sub_1C713B0(&Method_EventPointReplaseRewardDialog_OnClickOk__);
    byte_4CC1B80 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_EventPointReplaseRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_EventPointReplaseRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventPointReplaseRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  UIPanel_o *TargetPanel; // x21
  UILabel_o *transform; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  EventPointReplaseRewardDialog_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x25
  EventPointReplaseRewardDialog_c *v27; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v30; // s9
  float v31; // s10
  float v32; // s8
  int32_t v33; // w25
  UIWidget_o *v34; // x26
  System_String_o *v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v38; // x22
  UnityEngine_GameObject_o *v39; // x0
  EventPointReplaseRewardDialog_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x22
  System_Action_o *v42; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_4CC1B7E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventPointReplaseRewardDialog_EndOpen__);
    sub_1C713B0(&EventPointReplaseRewardDialog_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1B7E = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_61;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C71354(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v23 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v23, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v25 = EventPointReplaseRewardDialog_TypeInfo;
    v26 = gameObject;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v25 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v26, v25->static_fields->TITLE_BASE_POS, 0);
  }
  v27 = EventPointReplaseRewardDialog_TypeInfo;
  if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    v27 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v27->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v31 = p_BANNER_RETRY_MAX[4];
  v30 = p_BANNER_RETRY_MAX[5];
  v32 = p_BANNER_RETRY_MAX[6];
  v33 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    transform = (UILabel_o *)EventPointReplaseRewardDialog_TypeInfo;
    v34 = (UIWidget_o *)this->fields.messageLabel;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    if ( !v34 )
      goto LABEL_61;
    UIWidget__SetDimensions(v34, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v33, 0);
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
    v35 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(transform, v35, transform->fields.mFontSize, 0, 0);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v43.fields.x = v31;
    v43.fields.y = v30;
    v43.fields.z = v32;
    GameObjectExtensions__SetLocalPosition(v36, v43, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v38 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v38 )
      goto LABEL_61;
    UILabel__set_text(v38, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_61;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v40 = EventPointReplaseRewardDialog_TypeInfo;
    v41 = v39;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v40 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v41, v40->static_fields->BUTTON_BASE_POS, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(transform, v21);
  }
LABEL_60:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v42 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
}


void EventPointReplaseRewardDialog_ClickDelegate___ctor(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9E658;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9E610;
}


System_IAsyncResult_o *EventPointReplaseRewardDialog_ClickDelegate__BeginInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4CC1B83 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC1B83 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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