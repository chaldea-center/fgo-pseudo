void __fastcall ContinueDeviceInputMenu___ctor(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1159F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B1159F = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ContinueDeviceInputMenu__Close(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceInputMenu__Close_31592096(this, 0LL, v2);
}


void __fastcall ContinueDeviceInputMenu__Close_31592096(
        ContinueDeviceInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v13; // x21
  UnityEngine_Component_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B1159B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v7, v8);
    sub_1BCA7E0(&Method_ContinueDeviceInputMenu_EndClose__, v9, v10);
    byte_4B1159B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 4;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v13 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v13)
    || (v14 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v13,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL), !v14)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v14,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(passward1Input, v11);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0LL);
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ContinueDeviceInputMenu__EndOpen(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v7; // x20
  UnityEngine_Component_o *v8; // x19

  if ( (byte_4B1159A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    byte_4B1159A = 1;
  }
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 2;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v7 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v7)
    || (v8 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v7,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0LL), !v8)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v8,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(passward1Input, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0LL);
}


void __fastcall ContinueDeviceInputMenu__Init(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *titleLabel; // x0
  UIInput_o *v9; // x21
  UIInput_o *v10; // x20

  if ( (byte_4B11598 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B11598 = 1;
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
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.passward2Input )
    goto LABEL_15;
  v9 = (UIInput_o *)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.passward2Input,
                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !v9 )
    goto LABEL_15;
  v10 = (UIInput_o *)titleLabel;
  UIInput__set_value(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v10
    || (UIInput__set_value(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v9,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v10,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceInputMenu__OnChangeInput(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UILineInput_o *passward1Input; // x0
  System_String_o *v11; // x20
  int stringLength; // w8
  System_String_o *v13; // x21
  int32_t v14; // w22
  uint16_t Chars; // w0
  int32_t v16; // w22
  uint16_t v17; // w0
  bool v18; // w0
  __int64 v19; // x1
  UILabel_o *warningLabel2; // x20
  bool v21; // w21
  __int64 *v22; // x8
  System_String_o *v23; // x0

  if ( (byte_4B1159C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3906/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3905/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3913/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v8, v9);
    byte_4B1159C = 1;
  }
  passward1Input = this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_38;
  passward1Input = (UILineInput_o *)UILineInput__GetText(passward1Input, 0LL);
  if ( !this->fields.passward2Input )
    goto LABEL_38;
  v11 = (System_String_o *)passward1Input;
  passward1Input = (UILineInput_o *)UILineInput__GetText(this->fields.passward2Input, 0LL);
  if ( !v11 )
    goto LABEL_38;
  stringLength = v11->fields._stringLength;
  v13 = (System_String_o *)passward1Input;
  if ( stringLength > 0 )
  {
    if ( stringLength < 4 )
      goto LABEL_25;
    if ( !passward1Input )
      goto LABEL_38;
    if ( passward1Input->fields.m_CachedPtr < 4 )
      goto LABEL_25;
    v14 = 0;
    do
    {
      Chars = System_String__get_Chars(v11, v14, 0LL);
      if ( (unsigned __int16)(Chars - 48) >= 0xAu && (unsigned __int16)((Chars & 0xFFDF) - 65) > 0x19u )
        goto LABEL_25;
      ++v14;
    }
    while ( v14 < v11->fields._stringLength );
    if ( v13->fields._stringLength >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = System_String__get_Chars(v13, v16, 0LL);
        if ( (unsigned __int16)(v17 - 48) >= 0xAu && (unsigned __int16)((v17 & 0xFFDF) - 65) > 0x19u )
          break;
        if ( ++v16 >= v13->fields._stringLength )
          goto LABEL_19;
      }
LABEL_25:
      warningLabel2 = this->fields.warningLabel2;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      v23 = (System_String_o *)StringLiteral_3906/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/;
      goto LABEL_28;
    }
LABEL_19:
    v18 = System_String__op_Inequality(v11, v13, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    v21 = v18;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    if ( v21 )
    {
      v22 = &StringLiteral_3905/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/;
      goto LABEL_35;
    }
    passward1Input = (UILineInput_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0LL);
      method = 0LL;
      goto LABEL_30;
    }
LABEL_38:
    sub_1BCAA3C(passward1Input, method);
  }
  if ( !passward1Input )
    goto LABEL_38;
  if ( passward1Input->fields.m_CachedPtr >= 1 )
    goto LABEL_25;
  warningLabel2 = this->fields.warningLabel2;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v22 = &StringLiteral_3913/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/;
LABEL_35:
  v23 = (System_String_o *)*v22;
LABEL_28:
  passward1Input = (UILineInput_o *)LocalizationManager__Get(v23, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1159E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ContinueDeviceInputMenu_OnClickCancel__, method, v2);
    byte_4B1159E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ContinueDeviceInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ContinueDeviceInputMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ContinueDeviceInputMenu__Callback(this, 0LL, v6);
  }
}


void __fastcall ContinueDeviceInputMenu__OnClickDecide(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILineInput_o *passward1Input; // x0
  System_String_o *Text; // x0
  System_String_o *v6; // x20
  _QWORD *v7; // x8
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B1159D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ContinueDeviceInputMenu_OnClickDecide__, method, v2);
    byte_4B1159D = 1;
  }
  if ( this->fields.state == 2 )
  {
    passward1Input = this->fields.passward1Input;
    if ( !passward1Input )
      sub_1BCAA3C(0LL, method);
    Text = UILineInput__GetText(passward1Input, 0LL);
    this->fields.state = 3;
    v6 = Text;
    v7 = Method_ContinueDeviceInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_ContinueDeviceInputMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    ContinueDeviceInputMenu__Callback(this, v6, v9);
  }
}


void __fastcall ContinueDeviceInputMenu__Open(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t state; // w8
  __int64 v28; // x1
  System_String_o *decideButton; // x0
  __int64 v30; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *explanation1Label; // x20
  UILabel_o *warningLabel1; // x20
  UILabel_o *warningLabel2; // x20
  UILabel_o *explanation2Label; // x20
  UILabel_o *decideLabel; // x20
  UIInput_o *v37; // x20
  UIInput_o *v38; // x21
  System_String_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x20
  const MethodInfo *v44; // x1

  if ( (byte_4B11599 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v7, v8);
    sub_1BCA7E0(&Method_ContinueDeviceInputMenu_EndOpen__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_3904/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3901/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3902/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3907/*"CONTINUE_DEVICE_INPUT_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3903/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3913/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v25, v26);
    byte_4B11599 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    ContinueDeviceInputMenu__EndOpen(this, v44);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3907/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, decideButton, 0LL);
    explanation1Label = this->fields.explanation1Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3902/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0LL);
    if ( !explanation1Label )
      goto LABEL_23;
    UILabel__set_text(explanation1Label, decideButton, 0LL);
    warningLabel1 = this->fields.warningLabel1;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3904/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    if ( !warningLabel1 )
      goto LABEL_23;
    UILabel__set_text(warningLabel1, decideButton, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( !warningLabel2 )
      goto LABEL_23;
    UILabel__set_text(warningLabel2, decideButton, 0LL);
    explanation2Label = this->fields.explanation2Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3903/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0LL);
    if ( !explanation2Label )
      goto LABEL_23;
    UILabel__set_text(explanation2Label, decideButton, 0LL);
    decideLabel = this->fields.decideLabel;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3901/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_23;
    UILabel__set_text(decideLabel, decideButton, 0LL);
    decideButton = (System_String_o *)this->fields.passward1Input;
    if ( !decideButton )
      goto LABEL_23;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)decideButton,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.passward2Input )
      goto LABEL_23;
    v37 = (UIInput_o *)decideButton;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.passward2Input,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v37
      || (v38 = (UIInput_o *)decideButton, UIInput__set_value(v37, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v38)
      || (UIInput__set_value(v38, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v37,
                                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v38,
                                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL) )
    {
LABEL_23:
      sub_1BCAA3C(decideButton, v28);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0LL);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3904/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    UIInput__set_defaultText(v37, v39, 0LL);
    UIInput__set_defaultText(v38, v39, 0LL);
    this->fields.state = 1;
    v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v43, 0LL);
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

  if ( (byte_4B11596 & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11596 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11597 & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11597 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ContinueDeviceInputMenu_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A05AF4;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A05AD4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05A8C;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__EndInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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