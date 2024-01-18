void __fastcall ContinueDeviceInputMenu___ctor(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418963F & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418963F = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceInputMenu__Callback(
        ContinueDeviceInputMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ContinueDeviceInputMenu_CallbackFunc_o *v9; // x20
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ContinueDeviceInputMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ContinueDeviceInputMenu__Close(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceInputMenu__Close_28254608(this, 0LL, v2);
}


void __fastcall ContinueDeviceInputMenu__Close_28254608(
        ContinueDeviceInputMenu_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v15; // x21
  UnityEngine_Component_o *v16; // x20
  System_Action_o *v17; // x20

  if ( (byte_418963B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B2C35C(&Method_ContinueDeviceInputMenu_EndClose__, v12);
    byte_418963B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 4;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      passward1Input,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v15 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v15)
    || (v16 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v15,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL), !v16)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      v16,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(passward1Input, v13);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL);
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall ContinueDeviceInputMenu__EndClose(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ContinueDeviceInputMenu__EndOpen(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v5; // x20
  UnityEngine_Component_o *v6; // x19

  if ( (byte_418963A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_418963A = 1;
  }
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 2;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      passward1Input,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v5 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v5)
    || (v6 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       v5,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0LL), !v6)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      v6,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(passward1Input, method);
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

  if ( (byte_4189638 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4189638 = 1;
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
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)titleLabel,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.passward2Input )
    goto LABEL_15;
  v6 = (UIInput_o *)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.passward2Input,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !v6 )
    goto LABEL_15;
  v7 = (UIInput_o *)titleLabel;
  UIInput__set_value(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v7
    || (UIInput__set_value(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v6,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v7,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B2C434(titleLabel, method);
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
  int m_stringLength; // w8
  System_String_o *v9; // x21
  int32_t v10; // w22
  uint16_t Chars; // w0
  int32_t v12; // w22
  uint16_t v13; // w0
  bool v14; // w0
  UILabel_o *warningLabel2; // x20
  __int64 *v16; // x8

  if ( (byte_418963C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3376/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, v3);
    sub_B2C35C(&StringLiteral_3375/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, v4);
    sub_B2C35C(&StringLiteral_3383/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v5);
    byte_418963C = 1;
  }
  passward1Input = this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_43;
  passward1Input = (UILineInput_o *)UILineInput__GetText(passward1Input, 0LL);
  if ( !this->fields.passward2Input )
    goto LABEL_43;
  v7 = (System_String_o *)passward1Input;
  passward1Input = (UILineInput_o *)UILineInput__GetText(this->fields.passward2Input, 0LL);
  if ( !v7 )
    goto LABEL_43;
  m_stringLength = v7->fields.m_stringLength;
  v9 = (System_String_o *)passward1Input;
  if ( m_stringLength <= 0 )
  {
    if ( !passward1Input )
      goto LABEL_43;
    if ( passward1Input->fields.m_CachedPtr < 1 )
    {
      warningLabel2 = this->fields.warningLabel2;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_3383/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/;
      goto LABEL_30;
    }
    goto LABEL_26;
  }
  if ( m_stringLength < 4 )
    goto LABEL_26;
  if ( !passward1Input )
    goto LABEL_43;
  if ( passward1Input->fields.m_CachedPtr < 4 )
  {
LABEL_26:
    warningLabel2 = this->fields.warningLabel2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_3376/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/;
    goto LABEL_30;
  }
  v10 = 0;
  do
  {
    Chars = System_String__get_Chars(v7, v10, 0LL);
    if ( (unsigned __int16)(Chars - 48) >= 0xAu && (unsigned __int16)((Chars & 0xFFDF) - 65) > 0x19u )
      goto LABEL_26;
    ++v10;
  }
  while ( v10 < v7->fields.m_stringLength );
  if ( v9->fields.m_stringLength >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = System_String__get_Chars(v9, v12, 0LL);
      if ( (unsigned __int16)(v13 - 48) >= 0xAu && (unsigned __int16)((v13 & 0xFFDF) - 65) > 0x19u )
        goto LABEL_26;
    }
    while ( ++v12 < v9->fields.m_stringLength );
  }
  v14 = System_String__op_Inequality(v7, v9, 0LL);
  warningLabel2 = this->fields.warningLabel2;
  if ( !v14 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    passward1Input = (UILineInput_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0LL);
      method = 0LL;
      goto LABEL_32;
    }
LABEL_43:
    sub_B2C434(passward1Input, method);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = &StringLiteral_3375/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/;
LABEL_30:
  passward1Input = (UILineInput_o *)LocalizationManager__Get((System_String_o *)*v16, 0LL);
  if ( !warningLabel2 )
    goto LABEL_43;
  UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0LL);
  method = (const MethodInfo *)(&dword_0 + 3);
LABEL_32:
  passward1Input = (UILineInput_o *)this->fields.decideButton;
  if ( !passward1Input )
    goto LABEL_43;
  ((void (__fastcall *)(UILineInput_o *, const MethodInfo *, __int64, Il2CppRuntimeInterfaceOffsetPair *))passward1Input->klass[1]._1.implementedInterfaces)(
    passward1Input,
    method,
    1LL,
    passward1Input->klass[1]._1.interfaceOffsets);
}


void __fastcall ContinueDeviceInputMenu__OnClickCancel(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418963E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418963E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ContinueDeviceInputMenu__Callback(this, 0LL, v3);
  }
}


void __fastcall ContinueDeviceInputMenu__OnClickDecide(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *passward1Input; // x0
  System_String_o *Text; // x0
  System_String_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418963D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418963D = 1;
  }
  if ( this->fields.state == 2 )
  {
    passward1Input = this->fields.passward1Input;
    if ( !passward1Input )
      sub_B2C434(0LL, method);
    Text = UILineInput__GetText(passward1Input, 0LL);
    this->fields.state = 3;
    v5 = Text;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ContinueDeviceInputMenu__Callback(this, v5, v6);
  }
}


void __fastcall ContinueDeviceInputMenu__Open(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t state; // w8
  __int64 v22; // x1
  System_String_o *decideButton; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *explanation1Label; // x20
  UILabel_o *warningLabel1; // x20
  UILabel_o *warningLabel2; // x20
  UILabel_o *explanation2Label; // x20
  UILabel_o *decideLabel; // x20
  UIInput_o *v30; // x20
  UIInput_o *v31; // x21
  System_String_o *v32; // x22
  System_Action_o *v33; // x20
  const MethodInfo *v34; // x1

  if ( (byte_4189639 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B2C35C(&Method_ContinueDeviceInputMenu_EndOpen__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3374/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, v14);
    sub_B2C35C(&StringLiteral_3371/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, v15);
    sub_B2C35C(&StringLiteral_3372/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, v16);
    sub_B2C35C(&StringLiteral_3377/*"CONTINUE_DEVICE_INPUT_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_3373/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    sub_B2C35C(&StringLiteral_3383/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v20);
    byte_4189639 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ContinueDeviceInputMenu__EndOpen(this, v34);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    decideButton = (System_String_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_24;
    ((void (__fastcall *)(System_String_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
      decideButton,
      3LL,
      0LL,
      decideButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, decideButton, 0LL);
    explanation1Label = this->fields.explanation1Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3372/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0LL);
    if ( !explanation1Label )
      goto LABEL_24;
    UILabel__set_text(explanation1Label, decideButton, 0LL);
    warningLabel1 = this->fields.warningLabel1;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    if ( !warningLabel1 )
      goto LABEL_24;
    UILabel__set_text(warningLabel1, decideButton, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( !warningLabel2 )
      goto LABEL_24;
    UILabel__set_text(warningLabel2, decideButton, 0LL);
    explanation2Label = this->fields.explanation2Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3373/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0LL);
    if ( !explanation2Label )
      goto LABEL_24;
    UILabel__set_text(explanation2Label, decideButton, 0LL);
    decideLabel = this->fields.decideLabel;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_24;
    UILabel__set_text(decideLabel, decideButton, 0LL);
    decideButton = (System_String_o *)this->fields.passward1Input;
    if ( !decideButton )
      goto LABEL_24;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)decideButton,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.passward2Input )
      goto LABEL_24;
    v30 = (UIInput_o *)decideButton;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)this->fields.passward2Input,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v30
      || (v31 = (UIInput_o *)decideButton, UIInput__set_value(v30, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v31)
      || (UIInput__set_value(v31, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)v30,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               (UnityEngine_Component_o *)v31,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL) )
    {
LABEL_24:
      sub_B2C434(decideButton, v22);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    UIInput__set_defaultText(v30, v32, 0LL);
    UIInput__set_defaultText(v31, v32, 0LL);
    this->fields.state = 1;
    v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v33, 0LL);
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

  if ( (byte_4189636 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_4189636 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_B2C728(v8);
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

  if ( (byte_4189637 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_4189637 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_B2C728(v8);
  ContinueDeviceInputMenu__EndOpen(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceInputMenu_CallbackFunc___ctor(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
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
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ContinueDeviceInputMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__EndInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__Invoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ContinueDeviceInputMenu_CallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  ContinueDeviceInputMenu_CallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  ContinueDeviceInputMenu_CallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ContinueDeviceInputMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, result, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = result->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(result, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(result, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(result, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(result, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(result, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, result, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, result, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                result,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, result, v31);
    }
  }
}