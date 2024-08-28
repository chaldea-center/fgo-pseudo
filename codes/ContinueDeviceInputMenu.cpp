void __fastcall ContinueDeviceInputMenu___ctor(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A041BF & 1) == 0 )
  {
    sub_1B686D4(&BaseMenu_TypeInfo, method);
    byte_4A041BF = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceInputMenu__Callback(
        ContinueDeviceInputMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct ContinueDeviceInputMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ContinueDeviceInputMenu_CallbackFunc_o *v4; // x20
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B68678(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ContinueDeviceInputMenu__Close(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceInputMenu__Close_30792036(this, 0LL, v2);
}


void __fastcall ContinueDeviceInputMenu__Close_30792036(
        ContinueDeviceInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v10; // x21
  UnityEngine_Component_o *v11; // x20
  System_Action_o *v12; // x20

  if ( (byte_4A041BB & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIInput___, v6);
    sub_1B686D4(&Method_ContinueDeviceInputMenu_EndClose__, v7);
    byte_4A041BB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B68678(&this->fields.closeCallbackFunc);
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 4;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v10 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v10)
    || (v11 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v10,
                                                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL), !v11)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v11,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B68930(passward1Input, v8);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL);
  v12 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall ContinueDeviceInputMenu__EndClose(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B68678(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ContinueDeviceInputMenu__EndOpen(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v5; // x20
  UnityEngine_Component_o *v6; // x19

  if ( (byte_4A041BA & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_4A041BA = 1;
  }
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 2;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v5 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v5)
    || (v6 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v5,
                                                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0LL), !v6)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v6,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B68930(passward1Input, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0LL);
}


void __fastcall ContinueDeviceInputMenu__Init(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UIInput_o *v6; // x21
  UIInput_o *v7; // x20

  if ( (byte_4A041B8 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_1B686D4(&StringLiteral_1/*""*/, v4);
    byte_4A041B8 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel1;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.warningLabel2;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.passward1Input;
  if ( !titleLabel )
    goto LABEL_15;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)titleLabel,
                              (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.passward2Input )
    goto LABEL_15;
  v6 = (UIInput_o *)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.passward2Input,
                              (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !v6 )
    goto LABEL_15;
  v7 = (UIInput_o *)titleLabel;
  UIInput__set_value(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v7
    || (UIInput__set_value(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v6,
                                     (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v7,
                                     (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1B68930(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceInputMenu__OnChangeInput(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILineInput_o *passward1Input; // x0
  System_String_o *v7; // x20
  int stringLength; // w8
  System_String_o *v9; // x21
  int32_t v10; // w22
  uint16_t Chars; // w0
  int32_t v12; // w22
  uint16_t v13; // w0
  bool v14; // w0
  UILabel_o *warningLabel2; // x20
  bool v16; // w21
  __int64 *v17; // x8
  System_String_o *v18; // x0

  if ( (byte_4A041BC & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_3849/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, v3);
    sub_1B686D4(&StringLiteral_3848/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, v4);
    sub_1B686D4(&StringLiteral_3856/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v5);
    byte_4A041BC = 1;
  }
  passward1Input = this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_38;
  passward1Input = (UILineInput_o *)UILineInput__GetText(passward1Input, 0LL);
  if ( !this->fields.passward2Input )
    goto LABEL_38;
  v7 = (System_String_o *)passward1Input;
  passward1Input = (UILineInput_o *)UILineInput__GetText(this->fields.passward2Input, 0LL);
  if ( !v7 )
    goto LABEL_38;
  stringLength = v7->fields._stringLength;
  v9 = (System_String_o *)passward1Input;
  if ( stringLength > 0 )
  {
    if ( stringLength < 4 )
      goto LABEL_25;
    if ( !passward1Input )
      goto LABEL_38;
    if ( passward1Input->fields.m_CachedPtr < 4 )
      goto LABEL_25;
    v10 = 0;
    do
    {
      Chars = System_String__get_Chars(v7, v10, 0LL);
      if ( (unsigned __int16)(Chars - 48) >= 0xAu && (unsigned __int16)((Chars & 0xFFDF) - 65) > 0x19u )
        goto LABEL_25;
      ++v10;
    }
    while ( v10 < v7->fields._stringLength );
    if ( v9->fields._stringLength >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = System_String__get_Chars(v9, v12, 0LL);
        if ( (unsigned __int16)(v13 - 48) >= 0xAu && (unsigned __int16)((v13 & 0xFFDF) - 65) > 0x19u )
          break;
        if ( ++v12 >= v9->fields._stringLength )
          goto LABEL_19;
      }
LABEL_25:
      warningLabel2 = this->fields.warningLabel2;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = (System_String_o *)StringLiteral_3849/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/;
      goto LABEL_28;
    }
LABEL_19:
    v14 = System_String__op_Inequality(v7, v9, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    v16 = v14;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v16 )
    {
      v17 = &StringLiteral_3848/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/;
      goto LABEL_35;
    }
    passward1Input = (UILineInput_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3856/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0LL);
      method = 0LL;
      goto LABEL_30;
    }
LABEL_38:
    sub_1B68930(passward1Input, method);
  }
  if ( !passward1Input )
    goto LABEL_38;
  if ( passward1Input->fields.m_CachedPtr >= 1 )
    goto LABEL_25;
  warningLabel2 = this->fields.warningLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = &StringLiteral_3856/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/;
LABEL_35:
  v18 = (System_String_o *)*v17;
LABEL_28:
  passward1Input = (UILineInput_o *)LocalizationManager__Get(v18, 0LL);
  if ( !warningLabel2 )
    goto LABEL_38;
  UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0LL);
  method = (const MethodInfo *)(&dword_0 + 3);
LABEL_30:
  passward1Input = (UILineInput_o *)this->fields.decideButton;
  if ( !passward1Input )
    goto LABEL_38;
  ((void (__fastcall *)(UILineInput_o *, const MethodInfo *, __int64, Il2CppRuntimeInterfaceOffsetPair *))passward1Input->klass[1]._1.implementedInterfaces)(
    passward1Input,
    method,
    1LL,
    passward1Input->klass[1]._1.interfaceOffsets);
}


void __fastcall ContinueDeviceInputMenu__OnClickCancel(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A041BE & 1) == 0 )
  {
    sub_1B686D4(&Method_ContinueDeviceInputMenu_OnClickCancel__, method);
    byte_4A041BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ContinueDeviceInputMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ContinueDeviceInputMenu__Callback(this, 0LL, v5);
  }
}


void __fastcall ContinueDeviceInputMenu__OnClickDecide(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *passward1Input; // x0
  System_String_o *Text; // x0
  System_String_o *v5; // x20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4A041BD & 1) == 0 )
  {
    sub_1B686D4(&Method_ContinueDeviceInputMenu_OnClickDecide__, method);
    byte_4A041BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    passward1Input = this->fields.passward1Input;
    if ( !passward1Input )
      sub_1B68930(0LL, method);
    Text = UILineInput__GetText(passward1Input, 0LL);
    this->fields.state = 3;
    v5 = Text;
    v6 = Method_ContinueDeviceInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B686EC(Method_ContinueDeviceInputMenu_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    ContinueDeviceInputMenu__Callback(this, v5, v8);
  }
}


void __fastcall ContinueDeviceInputMenu__Open(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t state; // w8
  __int64 v17; // x1
  System_String_o *decideButton; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *explanation1Label; // x20
  UILabel_o *warningLabel1; // x20
  UILabel_o *warningLabel2; // x20
  UILabel_o *explanation2Label; // x20
  UILabel_o *decideLabel; // x20
  UIInput_o *v25; // x20
  UIInput_o *v26; // x21
  System_String_o *v27; // x22
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x1

  if ( (byte_4A041B9 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIInput___, v6);
    sub_1B686D4(&Method_ContinueDeviceInputMenu_EndOpen__, v7);
    sub_1B686D4(&LocalizationManager_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_3847/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, v9);
    sub_1B686D4(&StringLiteral_3844/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, v10);
    sub_1B686D4(&StringLiteral_3845/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, v11);
    sub_1B686D4(&StringLiteral_3850/*"CONTINUE_DEVICE_INPUT_TITLE"*/, v12);
    sub_1B686D4(&StringLiteral_3846/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, v13);
    sub_1B686D4(&StringLiteral_1/*""*/, v14);
    sub_1B686D4(&StringLiteral_3856/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v15);
    byte_4A041B9 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(&this->fields.callbackFunc);
    ContinueDeviceInputMenu__EndOpen(this, v29);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B68678(&this->fields.callbackFunc);
    decideButton = (System_String_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_23;
    ((void (__fastcall *)(System_String_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToInt16.method)(
      decideButton,
      3LL,
      0LL,
      decideButton->klass->vtable._15_System_IConvertible_ToUInt16.methodPtr);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, decideButton, 0LL);
    explanation1Label = this->fields.explanation1Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0LL);
    if ( !explanation1Label )
      goto LABEL_23;
    UILabel__set_text(explanation1Label, decideButton, 0LL);
    warningLabel1 = this->fields.warningLabel1;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    if ( !warningLabel1 )
      goto LABEL_23;
    UILabel__set_text(warningLabel1, decideButton, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3856/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( !warningLabel2 )
      goto LABEL_23;
    UILabel__set_text(warningLabel2, decideButton, 0LL);
    explanation2Label = this->fields.explanation2Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0LL);
    if ( !explanation2Label )
      goto LABEL_23;
    UILabel__set_text(explanation2Label, decideButton, 0LL);
    decideLabel = this->fields.decideLabel;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3844/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_23;
    UILabel__set_text(decideLabel, decideButton, 0LL);
    decideButton = (System_String_o *)this->fields.passward1Input;
    if ( !decideButton )
      goto LABEL_23;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)decideButton,
                                        (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.passward2Input )
      goto LABEL_23;
    v25 = (UIInput_o *)decideButton;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.passward2Input,
                                        (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v25
      || (v26 = (UIInput_o *)decideButton, UIInput__set_value(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v26)
      || (UIInput__set_value(v26, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v25,
                                               (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v26,
                                               (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL) )
    {
LABEL_23:
      sub_1B68930(decideButton, v17);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    UIInput__set_defaultText(v25, v27, 0LL);
    UIInput__set_defaultText(v26, v27, 0LL);
    this->fields.state = 1;
    v28 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v28, 0LL);
  }
}


void __fastcall ContinueDeviceInputMenu__add_callbackFunc(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceInputMenu_o *v11; // x0
  ContinueDeviceInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A041B6 & 1) == 0 )
  {
    sub_1B686D4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_4A041B6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceInputMenu_CallbackFunc_c *)v8->klass != ContinueDeviceInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_1B68BF0(v8);
  ContinueDeviceInputMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ContinueDeviceInputMenu__remove_callbackFunc(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ContinueDeviceInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A041B7 & 1) == 0 )
  {
    sub_1B686D4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_4A041B7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ContinueDeviceInputMenu_CallbackFunc_c *)v8->klass != ContinueDeviceInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_1B68BF0(v8);
  ContinueDeviceInputMenu__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceInputMenu_CallbackFunc___ctor(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19A9464;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19A9444;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A93FC;
}


System_IAsyncResult_o *__fastcall ContinueDeviceInputMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1B68688(this, &v6, callback, object);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__EndInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__Invoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}