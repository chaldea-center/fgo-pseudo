void __fastcall EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x8
  EventPointReplaseRewardDialog_c *v3; // x8
  struct EventPointReplaseRewardDialog_StaticFields *v4; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v5; // x8

  if ( (byte_4AB0D56 & 1) == 0 )
  {
    sub_1BAB41C(&EventPointReplaseRewardDialog_TypeInfo, v1);
    byte_4AB0D56 = 1;
  }
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v3 = EventPointReplaseRewardDialog_TypeInfo;
  v4 = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v4->MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->MESSAGE_BASE_SIZE_X = 0x10E000002BCLL;
  *(_QWORD *)&v5->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v5->BUTTON_BASE_POS.fields.z = 0.0;
}


void __fastcall EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB0D55 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB0D55 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 24;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventPointReplaseRewardDialog__Close(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventPointReplaseRewardDialog__Close_30870152(this, 0LL, v2);
}


void __fastcall EventPointReplaseRewardDialog__Close_30870152(
        EventPointReplaseRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4AB0D53 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_EventPointReplaseRewardDialog_EndClose__, v5);
    byte_4AB0D53 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BAB3C0(&this->fields.closeEndFunc);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1BAB3C0(p_closeEndFunc);
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
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4AB0D51 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v3);
    byte_4AB0D51 = 1;
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
        v5 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
        {
          titleLabel = this->fields.titleLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
        {
          titleLabel = this->fields.messageLabel;
          if ( !titleLabel )
            goto LABEL_23;
          UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BAB678(titleLabel, method);
  }
}


void __fastcall EventPointReplaseRewardDialog__OnClickOk(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4AB0D54 & 1) == 0 )
  {
    sub_1BAB41C(&Method_EventPointReplaseRewardDialog_OnClickOk__, method);
    byte_4AB0D54 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_EventPointReplaseRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_EventPointReplaseRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434();
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UIPanel_o *TargetPanel; // x21
  UILabel_o *inited; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  EventPointReplaseRewardDialog_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x25
  EventPointReplaseRewardDialog_c *v33; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v36; // s9
  float v37; // s10
  float v38; // s8
  int32_t v39; // w25
  UIWidget_o *v40; // x26
  System_String_o *v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v44; // x22
  UnityEngine_GameObject_o *v45; // x0
  EventPointReplaseRewardDialog_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x22
  System_Action_o *v48; // x20
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_4AB0D52 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, title);
    sub_1BAB41C(&Method_EventPointReplaseRewardDialog_EndOpen__, v19);
    sub_1BAB41C(&EventPointReplaseRewardDialog_TypeInfo, v20);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v21);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v22);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1BAB41C(&StringLiteral_1/*""*/, v24);
    byte_4AB0D52 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    inited = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)inited & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_61;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BAB3C0(&this->fields.clickFunc);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    inited = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !inited )
      goto LABEL_61;
    UILabel__set_fontSize(inited, titleSize, 0LL);
    inited = this->fields.titleLabel;
    if ( !inited )
      goto LABEL_61;
    v29 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(inited, v29, 0LL);
    inited = this->fields.titleLabel;
    if ( !inited )
      goto LABEL_61;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inited, 0LL);
    v31 = EventPointReplaseRewardDialog_TypeInfo;
    v32 = gameObject;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v31 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v32, v31->static_fields->TITLE_BASE_POS, 0LL);
  }
  v33 = EventPointReplaseRewardDialog_TypeInfo;
  if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    v33 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v33->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v37 = p_BANNER_RETRY_MAX[4];
  v36 = p_BANNER_RETRY_MAX[5];
  v38 = p_BANNER_RETRY_MAX[6];
  v39 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    inited = (UILabel_o *)EventPointReplaseRewardDialog_TypeInfo;
    v40 = (UIWidget_o *)this->fields.messageLabel;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
      inited = (UILabel_o *)j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    if ( !v40 )
      goto LABEL_61;
    UIWidget__SetDimensions(v40, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v39, 0LL);
    inited = this->fields.messageLabel;
    if ( !inited )
      goto LABEL_61;
    UILabel__set_maxLineCount(inited, maxLine, 0LL);
    inited = this->fields.messageLabel;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !inited )
      goto LABEL_61;
    UILabel__set_fontSize(inited, MESSAGE_FONT_SIZE, 0LL);
    inited = this->fields.messageLabel;
    if ( !inited )
      goto LABEL_61;
    v41 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(inited, v41, inited->fields.mFontSize, 0, 0, 0LL);
    inited = this->fields.messageLabel;
    if ( !inited )
      goto LABEL_61;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inited, 0LL);
    v49.fields.x = v37;
    v49.fields.y = v36;
    v49.fields.z = v38;
    GameObjectExtensions__SetLocalPosition(v42, v49, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v44 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    inited = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v44 )
      goto LABEL_61;
    UILabel__set_text(v44, (System_String_o *)inited, 0LL);
    inited = this->fields.okBtnLabel;
    if ( !inited )
      goto LABEL_61;
    inited = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)inited, 0LL);
    if ( !inited )
      goto LABEL_61;
    inited = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)inited, 0LL);
    if ( !inited )
      goto LABEL_61;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)inited, 0LL);
    v46 = EventPointReplaseRewardDialog_TypeInfo;
    v47 = v45;
    if ( !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v46 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v47, v46->static_fields->BUTTON_BASE_POS, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inited = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
  if ( ((unsigned __int8)inited & 1) != 0 )
  {
    if ( (panelDepth & 0x80000000) != 0 )
      panelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, panelDepth, 0LL);
      goto LABEL_60;
    }
LABEL_61:
    sub_1BAB678(inited, v27);
  }
LABEL_60:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v48 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
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
  sub_1BAB3C0(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19E7438;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19E73F0;
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
  if ( (byte_4AB0D57 & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, isOk);
    byte_4AB0D57 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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