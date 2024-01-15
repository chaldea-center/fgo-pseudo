void __fastcall ContinueDeviceInputMenu___ctor(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FBD9C & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FBD9C = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ContinueDeviceInputMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ContinueDeviceInputMenu__Close(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceInputMenu__Close_28477848(this, 0LL, v2);
}


void __fastcall ContinueDeviceInputMenu__Close_28477848(
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
  UnityEngine_Component_o *passward1Input; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v15; // x21
  WebViewObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x20
  UnityEngine_Collider_o *v18; // x0
  UnityEngine_Collider_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x20

  if ( (byte_40FBD98 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B16FFC(&Method_ContinueDeviceInputMenu_EndClose__, v12);
    byte_40FBD98 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
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
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    passward1Input,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v15 = (UnityEngine_Component_o *)Component_WebViewObject,
        v16 = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)this->fields.passward2Input,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v15)
    || (v17 = (UnityEngine_Component_o *)v16,
        (v18 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           v15,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled(v18, 0, 0LL), !v17)
    || (v19 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v17,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v19, 0, 0LL);
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v24, 0LL);
}


void __fastcall ContinueDeviceInputMenu__EndClose(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ContinueDeviceInputMenu__EndOpen(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *passward1Input; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v6; // x20
  WebViewObject_o *v7; // x0
  UnityEngine_Component_o *v8; // x19
  UnityEngine_Collider_o *v9; // x0
  UnityEngine_Collider_o *v10; // x0

  if ( (byte_40FBD97 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    byte_40FBD97 = 1;
  }
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 2;
  if ( !passward1Input
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    passward1Input,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v6 = (UnityEngine_Component_o *)Component_WebViewObject,
        v7 = UnityEngine_Component__GetComponent_WebViewObject_(
               (UnityEngine_Component_o *)this->fields.passward2Input,
               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v6)
    || (v8 = (UnityEngine_Component_o *)v7,
        (v9 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v6,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled(v9, 1, 0LL), !v8)
    || (v10 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v8,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v10, 1, 0LL);
}


void __fastcall ContinueDeviceInputMenu__Init(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *warningLabel1; // x0
  UILabel_o *warningLabel2; // x0
  UnityEngine_Component_o *passward1Input; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIInput_o *v11; // x21
  WebViewObject_o *v12; // x0
  UIInput_o *v13; // x20
  UnityEngine_Collider_o *v14; // x0
  UnityEngine_Collider_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBD95 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FBD95 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_15;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel1 = this->fields.warningLabel1;
  if ( !warningLabel1 )
    goto LABEL_15;
  UILabel__set_text(warningLabel1, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningLabel2 = this->fields.warningLabel2;
  if ( !warningLabel2 )
    goto LABEL_15;
  UILabel__set_text(warningLabel2, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_15;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              passward1Input,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.passward2Input )
    goto LABEL_15;
  v11 = (UIInput_o *)Component_WebViewObject;
  v12 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.passward2Input,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !v11 )
    goto LABEL_15;
  v13 = (UIInput_o *)v12;
  UIInput__set_value(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v13
    || (UIInput__set_value(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (v14 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)v11,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled(v14, 0, 0LL),
        (v15 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)v13,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
    || (UnityEngine_Collider__set_enabled(v15, 0, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ContinueDeviceInputMenu__OnChangeInput(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILineInput_o *passward1Input; // x0
  System_String_o *Text; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int m_stringLength; // w8
  System_String_o *v11; // x21
  int32_t v12; // w22
  uint16_t Chars; // w0
  int32_t v14; // w22
  uint16_t v15; // w0
  bool v16; // w0
  UILabel_o *warningLabel2; // x20
  __int64 *v18; // x8
  System_String_o *v19; // x0
  __int64 v20; // x1
  struct UICommonButton_o *decideButton; // x0
  System_String_o *v22; // x0

  if ( (byte_40FBD99 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3367/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/, v3);
    sub_B16FFC(&StringLiteral_3366/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/, v4);
    sub_B16FFC(&StringLiteral_3374/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v5);
    byte_40FBD99 = 1;
  }
  passward1Input = this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_43;
  Text = UILineInput__GetText(passward1Input, 0LL);
  if ( !this->fields.passward2Input )
    goto LABEL_43;
  v8 = Text;
  v9 = UILineInput__GetText(this->fields.passward2Input, 0LL);
  if ( !v8 )
    goto LABEL_43;
  m_stringLength = v8->fields.m_stringLength;
  v11 = v9;
  if ( m_stringLength <= 0 )
  {
    if ( !v9 )
      goto LABEL_43;
    if ( v9->fields.m_stringLength < 1 )
    {
      warningLabel2 = this->fields.warningLabel2;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_3374/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/;
      goto LABEL_30;
    }
    goto LABEL_26;
  }
  if ( m_stringLength < 4 )
    goto LABEL_26;
  if ( !v9 )
    goto LABEL_43;
  if ( v9->fields.m_stringLength < 4 )
  {
LABEL_26:
    warningLabel2 = this->fields.warningLabel2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_3367/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/;
    goto LABEL_30;
  }
  v12 = 0;
  do
  {
    Chars = System_String__get_Chars(v8, v12, 0LL);
    if ( (unsigned __int16)(Chars - 48) >= 0xAu && (unsigned __int16)((Chars & 0xFFDF) - 65) > 0x19u )
      goto LABEL_26;
    ++v12;
  }
  while ( v12 < v8->fields.m_stringLength );
  if ( v11->fields.m_stringLength >= 1 )
  {
    v14 = 0;
    do
    {
      v15 = System_String__get_Chars(v11, v14, 0LL);
      if ( (unsigned __int16)(v15 - 48) >= 0xAu && (unsigned __int16)((v15 & 0xFFDF) - 65) > 0x19u )
        goto LABEL_26;
    }
    while ( ++v14 < v11->fields.m_stringLength );
  }
  v16 = System_String__op_Inequality(v8, v11, 0LL);
  warningLabel2 = this->fields.warningLabel2;
  if ( !v16 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, v22, 0LL);
      v20 = 0LL;
      goto LABEL_32;
    }
LABEL_43:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = &StringLiteral_3366/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/;
LABEL_30:
  v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
  if ( !warningLabel2 )
    goto LABEL_43;
  UILabel__set_text(warningLabel2, v19, 0LL);
  v20 = 3LL;
LABEL_32:
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_43;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v20,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall ContinueDeviceInputMenu__OnClickCancel(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FBD9B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBD9B = 1;
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

  if ( (byte_40FBD9A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBD9A = 1;
  }
  if ( this->fields.state == 2 )
  {
    passward1Input = this->fields.passward1Input;
    if ( !passward1Input )
      sub_B170D4();
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
  struct UICommonButton_o *decideButton; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v24; // x0
  UILabel_o *explanation1Label; // x20
  System_String_o *v26; // x0
  UILabel_o *warningLabel1; // x20
  System_String_o *v28; // x0
  UILabel_o *warningLabel2; // x20
  System_String_o *v30; // x0
  UILabel_o *explanation2Label; // x20
  System_String_o *v32; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v34; // x0
  UnityEngine_Component_o *passward1Input; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIInput_o *v37; // x20
  WebViewObject_o *v38; // x0
  UIInput_o *v39; // x21
  UnityEngine_Collider_o *v40; // x0
  UnityEngine_Collider_o *v41; // x0
  System_String_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x20
  const MethodInfo *v48; // x1

  if ( (byte_40FBD96 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_B16FFC(&Method_ContinueDeviceInputMenu_EndOpen__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_3365/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, v14);
    sub_B16FFC(&StringLiteral_3362/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, v15);
    sub_B16FFC(&StringLiteral_3363/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, v16);
    sub_B16FFC(&StringLiteral_3368/*"CONTINUE_DEVICE_INPUT_TITLE"*/, v17);
    sub_B16FFC(&StringLiteral_3364/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, v18);
    sub_B16FFC(&StringLiteral_1/*""*/, v19);
    sub_B16FFC(&StringLiteral_3374/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, v20);
    byte_40FBD96 = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ContinueDeviceInputMenu__EndOpen(this, v48);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    decideButton = this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_24;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
      decideButton,
      3LL,
      0LL,
      decideButton->klass->vtable._15_OnPress.methodPtr);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3368/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_24;
    UILabel__set_text(titleLabel, v24, 0LL);
    explanation1Label = this->fields.explanation1Label;
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3363/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0LL);
    if ( !explanation1Label )
      goto LABEL_24;
    UILabel__set_text(explanation1Label, v26, 0LL);
    warningLabel1 = this->fields.warningLabel1;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3365/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    if ( !warningLabel1 )
      goto LABEL_24;
    UILabel__set_text(warningLabel1, v28, 0LL);
    warningLabel2 = this->fields.warningLabel2;
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0LL);
    if ( !warningLabel2 )
      goto LABEL_24;
    UILabel__set_text(warningLabel2, v30, 0LL);
    explanation2Label = this->fields.explanation2Label;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3364/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0LL);
    if ( !explanation2Label )
      goto LABEL_24;
    UILabel__set_text(explanation2Label, v32, 0LL);
    decideLabel = this->fields.decideLabel;
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3362/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_24;
    UILabel__set_text(decideLabel, v34, 0LL);
    passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
    if ( !passward1Input )
      goto LABEL_24;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                passward1Input,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.passward2Input )
      goto LABEL_24;
    v37 = (UIInput_o *)Component_WebViewObject;
    v38 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)this->fields.passward2Input,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v37
      || (v39 = (UIInput_o *)v38, UIInput__set_value(v37, (System_String_o *)StringLiteral_1/*""*/, 0LL), !v39)
      || (UIInput__set_value(v39, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (v40 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)v37,
                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL)
      || (UnityEngine_Collider__set_enabled(v40, 0, 0LL),
          (v41 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)v39,
                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL) )
    {
LABEL_24:
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(v41, 0, 0LL);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3365/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0LL);
    UIInput__set_defaultText(v37, v42, 0LL);
    UIInput__set_defaultText(v39, v42, 0LL);
    this->fields.state = 1;
    v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v47, 0LL);
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

  if ( (byte_40FBD93 & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_40FBD93 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FBD94 & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, value);
    byte_40FBD94 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__EndInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall ContinueDeviceInputMenu_CallbackFunc__Invoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ContinueDeviceInputMenu_CallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  ContinueDeviceInputMenu_CallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  ContinueDeviceInputMenu_CallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ContinueDeviceInputMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, result, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, result, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
    }
  }
}