void __fastcall EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x8
  EventPointReplaseRewardDialog_c *v4; // x8
  struct EventPointReplaseRewardDialog_StaticFields *v5; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v6; // x8

  if ( (byte_4B11145 & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointReplaseRewardDialog_TypeInfo, v1, v2);
    byte_4B11145 = 1;
  }
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v4 = EventPointReplaseRewardDialog_TypeInfo;
  v5 = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&v5->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v5->MESSAGE_BASE_POS.fields.z = 0.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->MESSAGE_BASE_SIZE_X = 0x10E000002BCLL;
  *(_QWORD *)&v6->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v6->BUTTON_BASE_POS.fields.z = 0.0;
}


void __fastcall EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11144 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11144 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 24;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointReplaseRewardDialog__Close(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointReplaseRewardDialog__Close_31132388(this, 0LL, v2);
}


void __fastcall EventPointReplaseRewardDialog__Close_31132388(
        EventPointReplaseRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11142 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventPointReplaseRewardDialog_EndClose__, v5, v6);
    byte_4B11142 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(&this->fields.closeEndFunc, callback);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall EventPointReplaseRewardDialog__EndClose(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
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
    *p_closeEndFunc = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall EventPointReplaseRewardDialog__EndOpen(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall EventPointReplaseRewardDialog__Init(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4B11140 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B11140 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      titleLabel = this->fields.messageLabel;
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v8 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        {
          titleLabel = this->fields.titleLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
        {
          titleLabel = this->fields.messageLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
        {
          titleLabel = this->fields.okBtnLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( titleLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
          BaseDialog__Init((BaseDialog_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_1BCAA3C(titleLabel, method);
  }
}


void __fastcall EventPointReplaseRewardDialog__OnClickOk(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B11143 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventPointReplaseRewardDialog_OnClickOk__, method, v2);
    byte_4B11143 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_EventPointReplaseRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_EventPointReplaseRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventPointReplaseRewardDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall EventPointReplaseRewardDialog__Open(
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  UIPanel_o *TargetPanel; // x21
  UILabel_o *transform; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  EventPointReplaseRewardDialog_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x25
  EventPointReplaseRewardDialog_c *v42; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v45; // s9
  float v46; // s10
  float v47; // s8
  int32_t v48; // w25
  UIWidget_o *v49; // x26
  System_String_o *v50; // x1
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v53; // x1
  UILabel_o *v54; // x22
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  EventPointReplaseRewardDialog_c *v57; // x8
  UnityEngine_GameObject_o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Action_o *v62; // x20
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_4B11141 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&Method_EventPointReplaseRewardDialog_EndOpen__, v19, v20);
    sub_1BCA7E0(&EventPointReplaseRewardDialog_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    byte_4B11141 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_61;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_61;
    v37 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v37, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v40 = EventPointReplaseRewardDialog_TypeInfo;
    v41 = gameObject;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v39);
      v40 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v41, v40->static_fields->TITLE_BASE_POS, 0LL);
  }
  v42 = EventPointReplaseRewardDialog_TypeInfo;
  if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v34);
    v42 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v42->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v46 = p_BANNER_RETRY_MAX[4];
  v45 = p_BANNER_RETRY_MAX[5];
  v47 = p_BANNER_RETRY_MAX[6];
  v48 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = (UILabel_o *)EventPointReplaseRewardDialog_TypeInfo;
    v49 = (UIWidget_o *)this->fields.messageLabel;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v34);
    if ( !v49 )
      goto LABEL_61;
    UIWidget__SetDimensions(v49, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v48, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_maxLineCount(transform, maxLine, 0LL);
    transform = this->fields.messageLabel;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_61;
    UILabel__set_fontSize(transform, MESSAGE_FONT_SIZE, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    v50 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(transform, v50, transform->fields.mFontSize, 0, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_61;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v63.fields.x = v46;
    v63.fields.y = v45;
    v63.fields.z = v47;
    GameObjectExtensions__SetLocalPosition(v51, v63, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v54 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v54 )
      goto LABEL_61;
    UILabel__set_text(v54, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_61;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_61;
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v57 = EventPointReplaseRewardDialog_TypeInfo;
    v58 = v55;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo, v56);
      v57 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v58, v57->static_fields->BUTTON_BASE_POS, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( (panelDepth & 0x80000000) != 0 )
      panelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, panelDepth, 0LL);
      goto LABEL_60;
    }
LABEL_61:
    sub_1BCAA3C(transform, v34);
  }
LABEL_60:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v59, v60, v61);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointReplaseRewardDialog_ClickDelegate___ctor(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A05338;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A052F0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventPointReplaseRewardDialog_ClickDelegate__BeginInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4B11146 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B11146 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EventPointReplaseRewardDialog_ClickDelegate__Invoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}