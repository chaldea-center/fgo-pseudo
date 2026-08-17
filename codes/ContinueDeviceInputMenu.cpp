void ContinueDeviceInputMenu___ctor(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B455 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596B455 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ContinueDeviceInputMenu__Callback(
        ContinueDeviceInputMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ContinueDeviceInputMenu_CallbackFunc_o *v9; // x20
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ContinueDeviceInputMenu__Close(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ContinueDeviceInputMenu__Close_39758288(this, 0, v2);
}


void ContinueDeviceInputMenu__Close_39758288(
        ContinueDeviceInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Component_o *v13; // x20
  System_Action_o *v14; // x20

  if ( (byte_596B451 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_ContinueDeviceInputMenu_EndClose__);
    byte_596B451 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 4;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v12 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v12)
    || (v13 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v12,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0), !v13)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v13,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(passward1Input, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 0, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0);
}


void ContinueDeviceInputMenu__EndClose(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ContinueDeviceInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ContinueDeviceInputMenu__EndOpen(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *passward1Input; // x0
  UnityEngine_Component_o *v4; // x20
  UnityEngine_Component_o *v5; // x19

  if ( (byte_596B450 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    byte_596B450 = 1;
  }
  passward1Input = (UnityEngine_Component_o *)this->fields.passward1Input;
  this->fields.state = 2;
  if ( !passward1Input
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      passward1Input,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !this->fields.passward2Input)
    || (v4 = passward1Input,
        passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)this->fields.passward2Input,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___),
        !v4)
    || (v5 = passward1Input,
        (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       v4,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0), !v5)
    || (passward1Input = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      v5,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(passward1Input, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)passward1Input, 1, 0);
}


void ContinueDeviceInputMenu__Init(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UIInput_o *v4; // x21
  UIInput_o *v5; // x20

  if ( (byte_596B44E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B44E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel1;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.warningLabel2;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.passward1Input;
  if ( !titleLabel )
    goto LABEL_15;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)titleLabel,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !this->fields.passward2Input )
    goto LABEL_15;
  v4 = (UIInput_o *)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this->fields.passward2Input,
                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  if ( !v4 )
    goto LABEL_15;
  v5 = (UIInput_o *)titleLabel;
  UIInput__set_value(v4, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v5
    || (UIInput__set_value(v5, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v5,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_15:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ContinueDeviceInputMenu__OnChangeInput(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *passward1Input; // x0
  System_String_o *v4; // x20
  __int64 v5; // x2
  int stringLength; // w8
  System_String_o *v7; // x21
  int32_t v8; // w22
  uint16_t Chars; // w0
  int32_t v10; // w22
  uint16_t v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  bool v14; // w8
  UILabel_o *warningLabel2; // x20
  int v16; // w9
  __int64 *v17; // x8
  System_String_o *v18; // x0

  if ( (byte_596B452 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3960/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/);
    sub_2213A60(&StringLiteral_3959/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/);
    sub_2213A60(&StringLiteral_3967/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/);
    byte_596B452 = 1;
  }
  passward1Input = this->fields.passward1Input;
  if ( !passward1Input )
    goto LABEL_40;
  passward1Input = (UILineInput_o *)UILineInput__GetText(passward1Input, 0);
  if ( !this->fields.passward2Input )
    goto LABEL_40;
  v4 = (System_String_o *)passward1Input;
  passward1Input = (UILineInput_o *)UILineInput__GetText(this->fields.passward2Input, 0);
  if ( !v4 )
    goto LABEL_40;
  stringLength = v4->fields._stringLength;
  v7 = (System_String_o *)passward1Input;
  if ( stringLength > 0 )
  {
    if ( (unsigned int)stringLength < 4 )
      goto LABEL_25;
    if ( !passward1Input )
      goto LABEL_40;
    if ( SLODWORD(passward1Input->fields.m_CachedPtr) < 4 )
      goto LABEL_25;
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(v4, v8, 0);
      if ( (unsigned __int16)(Chars - 48) >= 0xAu && (unsigned __int16)((Chars & 0xFFDF) - 65) > 0x19u )
        goto LABEL_25;
      ++v8;
    }
    while ( v8 < v4->fields._stringLength );
    if ( v7->fields._stringLength >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = System_String__get_Chars(v7, v10, 0);
        if ( (unsigned __int16)(v11 - 48) >= 0xAu && (unsigned __int16)((v11 & 0xFFDF) - 65) > 0x19u )
          break;
        if ( ++v10 >= v7->fields._stringLength )
          goto LABEL_19;
      }
LABEL_25:
      warningLabel2 = this->fields.warningLabel2;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v5);
      v18 = (System_String_o *)StringLiteral_3960/*"CONTINUE_DEVICE_INPUT_PASSWARD_LOW"*/;
      goto LABEL_28;
    }
LABEL_19:
    v14 = System_String__op_Inequality(v4, v7, 0);
    warningLabel2 = this->fields.warningLabel2;
    v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v14 )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
      v17 = &StringLiteral_3959/*"CONTINUE_DEVICE_INPUT_PASSWARD_DIFFERENT"*/;
      goto LABEL_35;
    }
    if ( !v16 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    passward1Input = (UILineInput_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3967/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0);
    if ( warningLabel2 )
    {
      UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0);
      method = 0;
      goto LABEL_30;
    }
LABEL_40:
    sub_2213CDC(passward1Input, method);
  }
  if ( !passward1Input )
    goto LABEL_40;
  if ( SLODWORD(passward1Input->fields.m_CachedPtr) >= 1 )
    goto LABEL_25;
  warningLabel2 = this->fields.warningLabel2;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v5);
  v17 = &StringLiteral_3967/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/;
LABEL_35:
  v18 = (System_String_o *)*v17;
LABEL_28:
  passward1Input = (UILineInput_o *)LocalizationManager__Get(v18, 0);
  if ( !warningLabel2 )
    goto LABEL_40;
  UILabel__set_text(warningLabel2, (System_String_o *)passward1Input, 0);
  method = (const MethodInfo *)(&dword_0 + 3);
LABEL_30:
  passward1Input = (UILineInput_o *)this->fields.decideButton;
  if ( !passward1Input )
    goto LABEL_40;
  ((void (__fastcall *)(UILineInput_o *, const MethodInfo *, __int64, Il2CppClass **))passward1Input->klass[1]._1.nestedTypes)(
    passward1Input,
    method,
    1,
    passward1Input->klass[1]._1.implementedInterfaces);
}


void ContinueDeviceInputMenu__OnClickCancel(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B454 & 1) == 0 )
  {
    sub_2213A60(&Method_ContinueDeviceInputMenu_OnClickCancel__);
    byte_596B454 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ContinueDeviceInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ContinueDeviceInputMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ContinueDeviceInputMenu__Callback(this, 0, v5);
  }
}


void ContinueDeviceInputMenu__OnClickDecide(ContinueDeviceInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *passward1Input; // x0
  System_String_o *Text; // x20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596B453 & 1) == 0 )
  {
    sub_2213A60(&Method_ContinueDeviceInputMenu_OnClickDecide__);
    byte_596B453 = 1;
  }
  if ( this->fields.state == 2 )
  {
    passward1Input = this->fields.passward1Input;
    if ( !passward1Input )
      sub_2213CDC(0, method);
    Text = UILineInput__GetText(passward1Input, 0);
    this->fields.state = 3;
    v5 = Method_ContinueDeviceInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ContinueDeviceInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ContinueDeviceInputMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    ContinueDeviceInputMenu__Callback(this, Text, v7);
  }
}


void ContinueDeviceInputMenu__Open(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  __int64 v11; // x1
  System_String_o *decideButton; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *explanation1Label; // x20
  UILabel_o *warningLabel1; // x20
  UILabel_o *warningLabel2; // x20
  UILabel_o *explanation2Label; // x20
  UILabel_o *decideLabel; // x20
  UIInput_o *v21; // x20
  UIInput_o *v22; // x21
  System_String_o *v23; // x22
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x1

  if ( (byte_596B44F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_ContinueDeviceInputMenu_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3958/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/);
    sub_2213A60(&StringLiteral_3955/*"CONTINUE_DEVICE_INPUT_DECIDE"*/);
    sub_2213A60(&StringLiteral_3956/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/);
    sub_2213A60(&StringLiteral_3961/*"CONTINUE_DEVICE_INPUT_TITLE"*/);
    sub_2213A60(&StringLiteral_3957/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3967/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/);
    byte_596B44F = 1;
  }
  state = this->fields.state;
  if ( state == 3 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ContinueDeviceInputMenu__EndOpen(this, v25);
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    decideButton = (System_String_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_23;
    ((void (__fastcall *)(System_String_o *, __int64, _QWORD, const MethodInfo *))decideButton->klass->vtable._14_System_IConvertible_ToInt16.methodPtr)(
      decideButton,
      3,
      0,
      decideButton->klass->vtable._14_System_IConvertible_ToInt16.method);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3961/*"CONTINUE_DEVICE_INPUT_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_23;
    UILabel__set_text(titleLabel, decideButton, 0);
    explanation1Label = this->fields.explanation1Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3956/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN1"*/, 0);
    if ( !explanation1Label )
      goto LABEL_23;
    UILabel__set_text(explanation1Label, decideButton, 0);
    warningLabel1 = this->fields.warningLabel1;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3958/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0);
    if ( !warningLabel1 )
      goto LABEL_23;
    UILabel__set_text(warningLabel1, decideButton, 0);
    warningLabel2 = this->fields.warningLabel2;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3967/*"CONTINUE_DEVICE_WARNING_MESSAGE"*/, 0);
    if ( !warningLabel2 )
      goto LABEL_23;
    UILabel__set_text(warningLabel2, decideButton, 0);
    explanation2Label = this->fields.explanation2Label;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3957/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN2"*/, 0);
    if ( !explanation2Label )
      goto LABEL_23;
    UILabel__set_text(explanation2Label, decideButton, 0);
    decideLabel = this->fields.decideLabel;
    decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3955/*"CONTINUE_DEVICE_INPUT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_23;
    UILabel__set_text(decideLabel, decideButton, 0);
    decideButton = (System_String_o *)this->fields.passward1Input;
    if ( !decideButton )
      goto LABEL_23;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)decideButton,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.passward2Input )
      goto LABEL_23;
    v21 = (UIInput_o *)decideButton;
    decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.passward2Input,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v21
      || (v22 = (UIInput_o *)decideButton, UIInput__set_value(v21, (System_String_o *)StringLiteral_1/*""*/, 0), !v22)
      || (UIInput__set_value(v22, (System_String_o *)StringLiteral_1/*""*/, 0),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v21,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0)
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0),
          (decideButton = (System_String_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)v22,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0) )
    {
LABEL_23:
      sub_2213CDC(decideButton, v11);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)decideButton, 0, 0);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3958/*"CONTINUE_DEVICE_INPUT_EXPLANATIOIN3"*/, 0);
    UIInput__set_defaultText(v21, v23, 0);
    UIInput__set_defaultText(v22, v23, 0);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_ContinueDeviceInputMenu_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v24, 0);
  }
}


void ContinueDeviceInputMenu__add_callbackFunc(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ContinueDeviceInputMenu_o *v13; // x0
  ContinueDeviceInputMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B44C & 1) == 0 )
  {
    sub_2213A60(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    byte_596B44C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ContinueDeviceInputMenu_CallbackFunc_c *)v8->klass != ContinueDeviceInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ContinueDeviceInputMenu_o *)sub_221405C(v8, ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v9, v10);
  ContinueDeviceInputMenu__remove_callbackFunc(v13, v14, v15);
}


void ContinueDeviceInputMenu__remove_callbackFunc(
        ContinueDeviceInputMenu_o *this,
        ContinueDeviceInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ContinueDeviceInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ContinueDeviceInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ContinueDeviceInputMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B44D & 1) == 0 )
  {
    sub_2213A60(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    byte_596B44D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ContinueDeviceInputMenu_CallbackFunc_c *)v8->klass != ContinueDeviceInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ContinueDeviceInputMenu_o *)sub_221405C(v8, ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v9, v10);
  ContinueDeviceInputMenu__EndOpen(v13, v14);
}


void ContinueDeviceInputMenu_CallbackFunc___ctor(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
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
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2001CA4;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2001C88;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2001C40;
}


System_IAsyncResult_o *ContinueDeviceInputMenu_CallbackFunc__BeginInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void ContinueDeviceInputMenu_CallbackFunc__EndInvoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ContinueDeviceInputMenu_CallbackFunc__Invoke(
        ContinueDeviceInputMenu_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}