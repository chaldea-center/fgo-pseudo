void __fastcall EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x9
  EventPointReplaseRewardDialog_c *v5; // x8
  struct EventPointReplaseRewardDialog_StaticFields *v6; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v7; // x8

  if ( (byte_42E8DD8 & 1) == 0 )
  {
    sub_B5D5C4(&EventPointReplaseRewardDialog_TypeInfo, v1, v2, v3);
    byte_42E8DD8 = 1;
  }
  EventPointReplaseRewardDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v5 = EventPointReplaseRewardDialog_TypeInfo;
  v6 = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&v6->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v6->MESSAGE_BASE_POS.fields.z = 0.0;
  v5->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v5->static_fields->MESSAGE_BASE_SIZE_Y = 270;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
}


void __fastcall EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8DD7 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8DD7 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 24;
  this->fields.isInitPanelDepth = 1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointReplaseRewardDialog__Close(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointReplaseRewardDialog__Close_25737500(this, 0LL, v2);
}


void __fastcall EventPointReplaseRewardDialog__Close_25737500(
        EventPointReplaseRewardDialog_o *this,
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

  if ( (byte_42E8DD5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventPointReplaseRewardDialog_EndClose__, v10, v11, v12);
    byte_42E8DD5 = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall EventPointReplaseRewardDialog__EndClose(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
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

  EventPointReplaseRewardDialog__Init(this, method);
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


void __fastcall EventPointReplaseRewardDialog__EndOpen(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall EventPointReplaseRewardDialog__Init(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_42E8DD3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E8DD3 = 1;
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
        v9 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
        {
          titleLabel = this->fields.titleLabel;
          if ( !titleLabel )
            goto LABEL_26;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
        {
          titleLabel = this->fields.messageLabel;
          if ( !titleLabel )
            goto LABEL_26;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
        {
          titleLabel = this->fields.okBtnLabel;
          if ( !titleLabel )
            goto LABEL_26;
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
LABEL_26:
    sub_B5D69C(titleLabel, method);
  }
}


void __fastcall EventPointReplaseRewardDialog__OnClickOk(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E8DD6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8DD6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      EventPointReplaseRewardDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UIPanel_o *TargetPanel; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v46; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  EventPointReplaseRewardDialog_c *v48; // x8
  EventPointReplaseRewardDialog_c *v49; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v52; // s9
  float v53; // s10
  float v54; // s8
  int32_t v55; // w25
  UIWidget_o *v56; // x26
  System_String_o *v57; // x1
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v60; // x22
  UnityEngine_GameObject_o *v61; // x0
  EventPointReplaseRewardDialog_c *v62; // x8
  UnityEngine_GameObject_o *v63; // x22
  System_Action_o *v64; // x20
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_42E8DD4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, func);
    sub_B5D5C4(&Method_EventPointReplaseRewardDialog_EndOpen__, v18, v19, v20);
    sub_B5D5C4(&EventPointReplaseRewardDialog_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42E8DD4 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_71;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_71;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_71;
    v46 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v46, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v48 = EventPointReplaseRewardDialog_TypeInfo;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v48 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v48->static_fields->TITLE_BASE_POS, 0LL);
  }
  v49 = EventPointReplaseRewardDialog_TypeInfo;
  if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    v49 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v49->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v53 = p_BANNER_RETRY_MAX[4];
  v52 = p_BANNER_RETRY_MAX[5];
  v54 = p_BANNER_RETRY_MAX[6];
  v55 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    transform = (UILabel_o *)EventPointReplaseRewardDialog_TypeInfo;
    v56 = (UIWidget_o *)this->fields.messageLabel;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    }
    if ( !v56 )
      goto LABEL_71;
    UIWidget__SetDimensions(v56, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v55, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_71;
    UILabel__set_maxLineCount(transform, maxLine, 0LL);
    transform = this->fields.messageLabel;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_71;
    UILabel__set_fontSize(transform, MESSAGE_FONT_SIZE, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_71;
    v57 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(transform, v57, transform->fields.mFontSize, 0, 0, 0LL);
    transform = this->fields.messageLabel;
    if ( !transform )
      goto LABEL_71;
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v66.fields.x = v53;
    v66.fields.y = v52;
    v66.fields.z = v54;
    GameObjectExtensions__SetLocalPosition(v58, v66, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v60 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v60 )
      goto LABEL_71;
    UILabel__set_text(v60, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_71;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_71;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_71;
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v62 = EventPointReplaseRewardDialog_TypeInfo;
    v63 = v61;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v62 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v63, v62->static_fields->BUTTON_BASE_POS, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, keepPanelDepth, 0LL);
      goto LABEL_70;
    }
LABEL_71:
    sub_B5D69C(transform, keepPanelDepth);
  }
LABEL_70:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointReplaseRewardDialog_ClickDelegate___ctor(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
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


System_IAsyncResult_o *__fastcall EventPointReplaseRewardDialog_ClickDelegate__BeginInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_42E6582 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E6582 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointReplaseRewardDialog_ClickDelegate__Invoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventPointReplaseRewardDialog_ClickDelegate_o **v7; // x25
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
  EventPointReplaseRewardDialog_ClickDelegate_o *v19; // x8
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
  EventPointReplaseRewardDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (EventPointReplaseRewardDialog_ClickDelegate_o **)(v3 + 32);
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