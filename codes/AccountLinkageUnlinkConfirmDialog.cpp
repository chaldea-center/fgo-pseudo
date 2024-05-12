void __fastcall AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438CDEA & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_B775C4(&StringLiteral_361/*"#494949"*/);
    byte_438CDEA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_361/*"#494949"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_361/*"#494949"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall AccountLinkageUnlinkConfirmDialog___ctor(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438CDE9 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CDE9 = 1;
  }
  this->fields.DEFULT_MESSAGE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0xF0000002BCLL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageUnlinkConfirmDialog__Close_28553448(this, 0LL, v2);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close_28553448(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438CDE5 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__);
    sub_B775C4(&System_Action_TypeInfo);
    byte_438CDE5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__EndClose(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
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

  AccountLinkageUnlinkConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__EndOpen(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Init(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20

  if ( (byte_438CDE3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CDE3 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_29;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_29:
    sub_B7769C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x22
  System_String_o *v6; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x24
  __int64 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438CDE7 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_10648/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_438CDE7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10648/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0LL);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
    if ( !v7 )
      sub_B7769C(v8, v9);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v3,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v4,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    {
      buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
    }
    v12 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B775CC(Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__);
    v13 = (System_Reflection_MethodBase_o *)sub_B775A8(v12, v12[3]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      AccountLinkageUnlinkConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickDecide(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438CDE6 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438CDE6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( this->fields.isDecideBtnSe )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    SoundManager__playSystemSe(v3, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      AccountLinkageUnlinkConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnEnable(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438CDE8 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_4308/*"CommonConfirmDialog/Window/CancelButton"*/);
    byte_438CDE8 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_4308/*"CommonConfirmDialog/Window/CancelButton"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OpenLinkageDlg(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        System_Nullable_Color__o *decideColor,
        System_Nullable_Color__o *cancelColor,
        int32_t decideTxtSize,
        int32_t decideMaxLine,
        int32_t cancelTxtSize,
        int32_t cancelMaxLine,
        const MethodInfo *method)
{
  struct UnityEngine_Color_o value; // q0
  struct UnityEngine_Color_o v19; // q0
  System_String_o *v20; // [xsp+80h] [xbp-50h]
  const MethodInfo *v21; // [xsp+88h] [xbp-48h]
  System_Nullable_Color__o v22; // [xsp+90h] [xbp-40h] BYREF
  System_Nullable_Color__o v23; // [xsp+B0h] [xbp-20h] BYREF

  value = decideColor->fields.value;
  *(_DWORD *)&v23.fields.has_value = *(_DWORD *)&decideColor->fields.has_value;
  v23.fields.value = value;
  v19 = cancelColor->fields.value;
  *(_DWORD *)&v22.fields.has_value = *(_DWORD *)&cancelColor->fields.has_value;
  v22.fields.value = v19;
  AccountLinkageUnlinkConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    0.0,
    messagePosY,
    spacingY,
    messageWidgetSize,
    &v23,
    &v22,
    decideTxtSize,
    decideMaxLine,
    cancelTxtSize,
    cancelMaxLine,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    480,
    -162.0,
    v20,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageUnlinkConfirmDialog__Setup(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        System_Nullable_Color__o *decideColor,
        System_Nullable_Color__o *cancelColor,
        int32_t decideTxtSize,
        int32_t decideMaxLine,
        int32_t cancelTxtSize,
        int32_t cancelMaxLine,
        bool canMaskTouchClose,
        int32_t maskType,
        System_Nullable_float__o titlePosY,
        int32_t titleFontSize,
        bool setCondensedScale,
        int32_t minFontSize,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        System_String_o *addMsg,
        const MethodInfo *method)
{
  int32_t v32; // w21
  int32_t v36; // w19
  UnityEngine_Object_o *titleLabel; // x27
  unsigned __int64 v38; // x1
  unsigned __int64 baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v42; // x27
  System_String_o *v43; // x1
  UnityEngine_Object_o *messageLabel; // x19
  UnityEngine_GameObject_o *v45; // x0
  UILabel_o *v46; // x19
  int32_t v47; // w19
  int32_t v48; // w3
  int32_t v49; // w4
  UnityEngine_Object_o *buttonDecideLabel; // x19
  UILabel_o *v51; // x19
  UILabel_o *v52; // x19
  System_Nullable_Color__o *v53; // x11
  float *p_g; // x8
  float *p_b; // x9
  float *p_a; // x10
  UnityEngine_Object_o *buttonCancelLabel; // x19
  UILabel_o *v58; // x19
  UILabel_o *v59; // x19
  System_Nullable_Color__o *v60; // x11
  float *v61; // x8
  float *v62; // x9
  float *v63; // x10
  UnityEngine_Object_o *buttonDecide; // x19
  UnityEngine_Object_o *buttonCancel; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Action_o *v67; // x19
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v32 = fontsize;
  v36 = titleFontSize;
  if ( (byte_438CDE4 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_Color__get_HasValue__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CDE4 = 1;
  }
  this->fields.clickFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message,
    (System_String_array **)decideTxt,
    (System_Boolean_array **)cancelTxt,
    (System_Int32_array **)isDecideSe,
    (System_Int32_array *)func,
    *(System_Int32_array **)&fontsize);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_113;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    value = 180.0;
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
      value = titlePosY.fields.value;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    v42 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v36 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 464LL);
    }
    if ( !v42 )
      goto LABEL_113;
    UILabel__set_fontSize(v42, v36, 0LL);
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_113;
    if ( title )
      v43 = title;
    else
      v43 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v43, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_113;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(v45, messagePosY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_113;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_113;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_113;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0LL);
    v46 = this->fields.messageLabel;
    if ( !v32 )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v32 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 464LL);
    }
    if ( !v46 )
      goto LABEL_113;
    UILabel__set_fontSize(v46, v32, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_113;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_113;
      v47 = *(_DWORD *)(baseWindow + 160);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0LL);
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_113;
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_113;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v47, 0LL);
    }
    else
    {
      if ( message )
        v38 = (unsigned __int64)message;
      else
        v38 = (unsigned __int64)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_113;
      v48 = minFontSize;
      if ( minFontSize < 1 )
      {
        v48 = 0;
        v49 = 0;
      }
      else
      {
        v49 = 500;
      }
      WrapControlText__textAdjust(
        (UILabel_o *)baseWindow,
        (System_String_o *)v38,
        *(_DWORD *)(baseWindow + 416),
        v48,
        v49,
        0LL);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v51 = this->fields.buttonDecideLabel;
    v38 = (unsigned __int64)decideTxt;
    if ( !decideTxt )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
      v38 = baseWindow;
    }
    if ( !v51 )
      goto LABEL_113;
    UILabel__set_text(v51, (System_String_o *)v38, 0LL);
    v52 = this->fields.buttonDecideLabel;
    v38 = (unsigned int)decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v38 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 464LL);
    }
    if ( !v52 )
      goto LABEL_113;
    UILabel__set_fontSize(v52, v38, 0LL);
    v53 = decideColor;
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( decideColor->fields.has_value )
    {
      if ( !baseWindow )
        goto LABEL_113;
      p_g = &decideColor->fields.value.fields.g;
      p_b = &decideColor->fields.value.fields.b;
      p_a = &decideColor->fields.value.fields.a;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_113;
      v53 = (System_Nullable_Color__o *)(baseWindow + 140);
      p_g = (float *)(baseWindow + 144);
      p_b = (float *)(baseWindow + 148);
      p_a = (float *)(baseWindow + 152);
    }
    v72.fields.b = *p_b;
    v72.fields.g = *p_g;
    v72.fields.r = v53->fields.value.fields.r;
    v72.fields.a = *p_a;
    UIWidget__set_color((UIWidget_o *)baseWindow, v72, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_113;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v58 = this->fields.buttonCancelLabel;
    v38 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
      v38 = baseWindow;
    }
    if ( v58 )
    {
      UILabel__set_text(v58, (System_String_o *)v38, 0LL);
      v59 = this->fields.buttonCancelLabel;
      v38 = (unsigned int)cancelTxtSize;
      if ( !cancelTxtSize )
      {
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
        }
        v38 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 464LL);
      }
      if ( v59 )
      {
        UILabel__set_fontSize(v59, v38, 0LL);
        v60 = cancelColor;
        baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
        if ( cancelColor->fields.has_value )
        {
          if ( !baseWindow )
            goto LABEL_113;
          v61 = &cancelColor->fields.value.fields.g;
          v62 = &cancelColor->fields.value.fields.b;
          v63 = &cancelColor->fields.value.fields.a;
        }
        else
        {
          if ( !baseWindow )
            goto LABEL_113;
          v60 = (System_Nullable_Color__o *)(baseWindow + 140);
          v61 = (float *)(baseWindow + 144);
          v62 = (float *)(baseWindow + 148);
          v63 = (float *)(baseWindow + 152);
        }
        v73.fields.b = *v62;
        v73.fields.g = *v61;
        v73.fields.r = v60->fields.value.fields.r;
        v73.fields.a = *v63;
        UIWidget__set_color((UIWidget_o *)baseWindow, v73, 0LL);
        baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
        if ( baseWindow )
        {
          UILabel__set_maxLineCount((UILabel_o *)baseWindow, cancelMaxLine, 0LL);
          goto LABEL_95;
        }
      }
    }
LABEL_113:
    sub_B7769C(baseWindow, v38);
  }
LABEL_95:
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0LL);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_113;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)baseWindow,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UIWidget__set_height((UIWidget_o *)Component_srcLineSprite, windowHeight, 0LL);
      goto LABEL_112;
    }
    goto LABEL_113;
  }
LABEL_112:
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0LL);
  v67 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, maskType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_4389F1F & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4389F1F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o **v7; // x25
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
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v18; // x8
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
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}