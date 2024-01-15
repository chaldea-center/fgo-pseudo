void __fastcall EventPointReplaseRewardDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventPointReplaseRewardDialog_StaticFields *static_fields; // x9
  EventPointReplaseRewardDialog_c *v3; // x8
  struct EventPointReplaseRewardDialog_StaticFields *v4; // x9
  struct EventPointReplaseRewardDialog_StaticFields *v5; // x8

  if ( (byte_40FAC61 & 1) == 0 )
  {
    sub_B16FFC(&EventPointReplaseRewardDialog_TypeInfo, v1);
    byte_40FAC61 = 1;
  }
  EventPointReplaseRewardDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x429C000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v3 = EventPointReplaseRewardDialog_TypeInfo;
  v4 = EventPointReplaseRewardDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_POS.fields.x = 0x4190000041C80000LL;
  v4->MESSAGE_BASE_POS.fields.z = 0.0;
  v3->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v3->static_fields->MESSAGE_BASE_SIZE_Y = 270;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v5->BUTTON_BASE_POS.fields.z = 0.0;
}


void __fastcall EventPointReplaseRewardDialog___ctor(EventPointReplaseRewardDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC60 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FAC60 = 1;
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

  EventPointReplaseRewardDialog__Close_26647380(this, 0LL, v2);
}


void __fastcall EventPointReplaseRewardDialog__Close_26647380(
        EventPointReplaseRewardDialog_o *this,
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

  if ( (byte_40FAC5E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventPointReplaseRewardDialog_EndClose__, v10);
    byte_40FAC5E = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
  UILabel_o *messageLabel; // x0
  UnityEngine_Object_o *v6; // x20
  UILabel_o *v7; // x0
  UnityEngine_Object_o *v8; // x20
  UILabel_o *v9; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FAC5C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FAC5C = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      messageLabel = this->fields.messageLabel;
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
        {
          v7 = this->fields.titleLabel;
          if ( !v7 )
            goto LABEL_26;
          UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v8 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        {
          v9 = this->fields.messageLabel;
          if ( !v9 )
            goto LABEL_26;
          UILabel__set_text(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
        {
          v11 = this->fields.okBtnLabel;
          if ( !v11 )
            goto LABEL_26;
          UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          BaseDialog__Init((BaseDialog_o *)this, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall EventPointReplaseRewardDialog__OnClickOk(
        EventPointReplaseRewardDialog_o *this,
        const MethodInfo *method)
{
  EventPointReplaseRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FAC5F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FAC5F = 1;
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UIPanel_o *TargetPanel; // x21
  UnityEngine_Object_o *titleLabel; // x27
  UILabel_o *v32; // x0
  UILabel_o *v33; // x0
  System_String_o *v34; // x1
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x25
  EventPointReplaseRewardDialog_c *v37; // x8
  EventPointReplaseRewardDialog_c *v38; // x0
  float *p_BANNER_RETRY_MAX; // x8
  UnityEngine_Object_o *messageLabel; // x26
  float v41; // s9
  float v42; // s10
  float v43; // s8
  int32_t v44; // w25
  UIWidget_o *v45; // x26
  UILabel_o *v46; // x0
  UILabel_o *v47; // x0
  struct UILabel_o *v48; // x0
  System_String_o *v49; // x1
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v53; // x22
  System_String_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v58; // x0
  EventPointReplaseRewardDialog_c *v59; // x8
  UnityEngine_GameObject_o *v60; // x22
  int32_t keepPanelDepth; // w1
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Action_o *v66; // x20
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  MESSAGE_FONT_SIZE = messageFontSize;
  if ( (byte_40FAC5D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&Method_EventPointReplaseRewardDialog_EndOpen__, v18);
    sub_B16FFC(&EventPointReplaseRewardDialog_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    byte_40FAC5D = 1;
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL) )
    {
      if ( !TargetPanel )
        goto LABEL_71;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v32 = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !v32 )
      goto LABEL_71;
    UILabel__set_fontSize(v32, titleSize, 0LL);
    v33 = this->fields.titleLabel;
    if ( !v33 )
      goto LABEL_71;
    v34 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v33, v34, 0LL);
    v35 = (UnityEngine_Component_o *)this->fields.titleLabel;
    if ( !v35 )
      goto LABEL_71;
    gameObject = UnityEngine_Component__get_gameObject(v35, 0LL);
    v37 = EventPointReplaseRewardDialog_TypeInfo;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v37 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(gameObject, v37->static_fields->TITLE_BASE_POS, 0LL);
  }
  v38 = EventPointReplaseRewardDialog_TypeInfo;
  if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    v38 = EventPointReplaseRewardDialog_TypeInfo;
  }
  p_BANNER_RETRY_MAX = (float *)&v38->static_fields->BANNER_RETRY_MAX;
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  v42 = p_BANNER_RETRY_MAX[4];
  v41 = p_BANNER_RETRY_MAX[5];
  v43 = p_BANNER_RETRY_MAX[6];
  v44 = *((_DWORD *)p_BANNER_RETRY_MAX + 8);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v45 = (UIWidget_o *)this->fields.messageLabel;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
    }
    if ( !v45 )
      goto LABEL_71;
    UIWidget__SetDimensions(v45, EventPointReplaseRewardDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X, v44, 0LL);
    v46 = this->fields.messageLabel;
    if ( !v46 )
      goto LABEL_71;
    UILabel__set_maxLineCount(v46, maxLine, 0LL);
    v47 = this->fields.messageLabel;
    if ( !messageFontSize )
      MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
    if ( !v47 )
      goto LABEL_71;
    UILabel__set_fontSize(v47, MESSAGE_FONT_SIZE, 0LL);
    v48 = this->fields.messageLabel;
    if ( !v48 )
      goto LABEL_71;
    v49 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v48, v49, v48->fields.mFontSize, 0, 0, 0LL);
    v50 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v50 )
      goto LABEL_71;
    v51 = UnityEngine_Component__get_gameObject(v50, 0LL);
    v68.fields.x = v42;
    v68.fields.y = v41;
    v68.fields.z = v43;
    GameObjectExtensions__SetLocalPosition(v51, v68, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v53 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v53 )
      goto LABEL_71;
    UILabel__set_text(v53, v54, 0LL);
    v55 = (UnityEngine_Component_o *)this->fields.okBtnLabel;
    if ( !v55 )
      goto LABEL_71;
    transform = UnityEngine_Component__get_transform(v55, 0LL);
    if ( !transform )
      goto LABEL_71;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_71;
    v58 = UnityEngine_Component__get_gameObject(parent, 0LL);
    v59 = EventPointReplaseRewardDialog_TypeInfo;
    v60 = v58;
    if ( (BYTE3(EventPointReplaseRewardDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventPointReplaseRewardDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointReplaseRewardDialog_TypeInfo);
      v59 = EventPointReplaseRewardDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v60, v59->static_fields->BUTTON_BASE_POS, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL) )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, keepPanelDepth, 0LL);
      goto LABEL_70;
    }
LABEL_71:
    sub_B170D4();
  }
LABEL_70:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v66 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v62, v63, v64, v65);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_EventPointReplaseRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointReplaseRewardDialog_ClickDelegate___ctor(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
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
  if ( (byte_40F7013 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40F7013 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EventPointReplaseRewardDialog_ClickDelegate__EndInvoke(
        EventPointReplaseRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  EventPointReplaseRewardDialog_ClickDelegate_o *v18; // x8
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
  EventPointReplaseRewardDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (EventPointReplaseRewardDialog_ClickDelegate_o **)(v3 + 32);
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