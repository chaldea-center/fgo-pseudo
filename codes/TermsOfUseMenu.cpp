void TermsOfUseMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TermsOfUseMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DECC & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    sub_2213A60(&StringLiteral_23396/*"none"*/);
    sub_2213A60(&StringLiteral_15826/*"UsePolicyConsent"*/);
    byte_596DECC = 1;
  }
  v7 = StringLiteral_15826/*"UsePolicyConsent"*/;
  TermsOfUseMenu_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_15826/*"UsePolicyConsent"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)TermsOfUseMenu_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_23396/*"none"*/;
  static_fields = TermsOfUseMenu_TypeInfo->static_fields;
  static_fields->SAVE_DEFAULT_STR = (struct System_String_o *)StringLiteral_23396/*"none"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_DEFAULT_STR, v8, v10, v11, v12, v13, v14, v15);
}


void TermsOfUseMenu___ctor(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DECB & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596DECB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TermsOfUseMenu__Callback(TermsOfUseMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct TermsOfUseMenu_CallbackFunc_o *v9; // x20
  struct TermsOfUseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void TermsOfUseMenu__Close(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseMenu__Close_44513636(this, 0, v2);
}


void TermsOfUseMenu__Close_44513636(TermsOfUseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596DEC6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TermsOfUseMenu_EndClose__);
    byte_596DEC6 = 1;
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
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TermsOfUseMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void TermsOfUseMenu__EndClose(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void TermsOfUseMenu__EndOpen(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void TermsOfUseMenu__Init(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596DEC4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DEC4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool TermsOfUseMenu__IsConcent(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  TermsOfUseMenu_c *v4; // x0
  System_String_o *String; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  System_String_o *updateVersion; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596DEC1 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    byte_596DEC1 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  updateVersion = 0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v4 = TermsOfUseMenu_TypeInfo;
  if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, method, v2);
    v4 = TermsOfUseMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DEFAULT_STR, 0);
  if ( System_String__op_Equality(String, TermsOfUseMenu_TypeInfo->static_fields->SAVE_DEFAULT_STR, 0) )
  {
    return 1;
  }
  else
  {
    if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v6, v7);
    return TermsOfUseMenu__TryUpdateTermsVersion(&updateVersion, v6)
        && System_String__op_Inequality(String, updateVersion, 0);
  }
}


bool TermsOfUseMenu__IsConcentFirst(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  TermsOfUseMenu_c *v5; // x0
  System_String_o *String; // x0

  if ( (byte_596DEC2 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    byte_596DEC2 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = TermsOfUseMenu_TypeInfo;
  if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, method, v2);
    v5 = TermsOfUseMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v5->static_fields->SAVE_KEY, v5->static_fields->SAVE_DEFAULT_STR, 0);
  return System_String__op_Equality(String, TermsOfUseMenu_TypeInfo->static_fields->SAVE_DEFAULT_STR, 0);
}


void TermsOfUseMenu__OnClickCancel(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596DEC9 & 1) == 0 )
  {
    sub_2213A60(&Method_TermsOfUseMenu_OnClickCancel__);
    byte_596DEC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TermsOfUseMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    TermsOfUseMenu__Callback(this, 0, v5);
  }
}


void TermsOfUseMenu__OnClickDecide(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  TermsOfUseMenu_c *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_596DEC8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_TermsOfUseMenu_OnClickDecide__);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    byte_596DEC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v4);
    AdManager__TrackEvent((AdManager_o *)Instance, 2, 3, -1, -1, 0, 0);
    this->fields.state = 3;
    v5 = Method_TermsOfUseMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_TermsOfUseMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    v9 = TermsOfUseMenu_TypeInfo;
    if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v7, v8);
    TermsOfUseMenu__Save((const MethodInfo *)v9);
    TermsOfUseMenu__Callback(this, 1, v10);
  }
}


void TermsOfUseMenu__OnClickShow(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x20
  System_String_o *WebViewAddress_48359816; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_596DEC7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_TermsOfUseMenu_OnClickShow__);
    sub_2213A60(&Method_TermsOfUseMenu_OnEndShowWebView__);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_16167/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_596DEC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_TermsOfUseMenu_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickShow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TermsOfUseMenu_OnClickShow__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_16167/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(4, 0);
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_TermsOfUseMenu_OnEndShowWebView__, 0);
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v12, v13);
    WebViewManager__OpenView(v9, WebViewAddress_48359816, v11, 0);
  }
}


void TermsOfUseMenu__OnEndShowWebView(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  ;
}


void TermsOfUseMenu__Open(TermsOfUseMenu_o *this, TermsOfUseMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  TermsOfUseMenu_o *v16; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o **v20; // x8
  System_String_o *v21; // x21
  UILabel_o *showLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  System_Action_o *v25; // x20

  if ( (byte_596DEC5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_TermsOfUseMenu_EndOpen__);
    sub_2213A60(&StringLiteral_13939/*"TERMS_OF_USE_TITLE"*/);
    sub_2213A60(&StringLiteral_13938/*"TERMS_OF_USE_SHOW"*/);
    sub_2213A60(&StringLiteral_13936/*"TERMS_OF_USE_MESSAGE1"*/);
    sub_2213A60(&StringLiteral_13929/*"TERMS_OF_USE_DECIDE"*/);
    sub_2213A60(&StringLiteral_13928/*"TERMS_OF_USE_CANCEL"*/);
    sub_2213A60(&StringLiteral_13937/*"TERMS_OF_USE_MESSAGE2"*/);
    byte_596DEC5 = 1;
  }
  if ( !this->fields.state )
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13939/*"TERMS_OF_USE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_18;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    v20 = (System_String_o **)(TermsOfUseMenu__IsConcentFirst(v16, v17) ? &StringLiteral_13936/*"TERMS_OF_USE_MESSAGE1"*/ : &StringLiteral_13937/*"TERMS_OF_USE_MESSAGE2"*/);
    v21 = *v20;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0);
    if ( !messageLabel )
      goto LABEL_18;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    showLabel = this->fields.showLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13938/*"TERMS_OF_USE_SHOW"*/, 0);
    if ( !showLabel
      || (UILabel__set_text(showLabel, (System_String_o *)gameObject, 0),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13928/*"TERMS_OF_USE_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
          decideLabel = this->fields.decideLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13929/*"TERMS_OF_USE_DECIDE"*/, 0),
          !decideLabel) )
    {
LABEL_18:
      sub_2213CDC(gameObject, v11);
    }
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_TermsOfUseMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
  }
}


void TermsOfUseMenu__Save(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0
  TermsOfUseMenu_c *v4; // x8
  System_String_o *UseTermsLatestVersion; // x19

  if ( (byte_596DEC3 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&TermsOfUseMenu_TypeInfo);
    byte_596DEC3 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1, v2);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = TermsOfUseMenu_TypeInfo;
  UseTermsLatestVersion = v3->static_fields->UseTermsLatestVersion;
  if ( !*(&TermsOfUseMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo, v1, v2);
    v4 = TermsOfUseMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v4->static_fields->SAVE_KEY, UseTermsLatestVersion, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TermsOfUseMenu__TryUpdateTermsVersion(System_String_o **updateVersion, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  BalanceConfig_c *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  bool IsNullOrEmpty; // w8
  BalanceConfig_c *v20; // x0
  int v21; // w9
  System_String_o *UseTermsLatestVersion; // x1
  System_String_o *UseTermsAgreementRequiredAppVersion; // x21
  System_Version_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *version; // x21
  System_Version_o *v29; // x22

  if ( (byte_596DEC0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&System_Version_TypeInfo);
    byte_596DEC0 = 1;
  }
  *updateVersion = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)updateVersion, 0, v2, v3, v4, v5, v6, v7);
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v10);
    v11 = BalanceConfig_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v11->static_fields->UseTermsAgreementRequiredAppVersion, 0);
  v20 = BalanceConfig_TypeInfo;
  v21 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( IsNullOrEmpty )
  {
    if ( v21 )
    {
LABEL_8:
      UseTermsLatestVersion = v20->static_fields->UseTermsLatestVersion;
      *updateVersion = UseTermsLatestVersion;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)updateVersion,
        (int32_t)UseTermsLatestVersion,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      return 1;
    }
LABEL_7:
    j_il2cpp_runtime_class_init_0(v20, v12, v13);
    v20 = BalanceConfig_TypeInfo;
    goto LABEL_8;
  }
  if ( !v21 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12, v13);
    v20 = BalanceConfig_TypeInfo;
  }
  UseTermsAgreementRequiredAppVersion = v20->static_fields->UseTermsAgreementRequiredAppVersion;
  v25 = (System_Version_o *)sub_2213CCC(System_Version_TypeInfo);
  System_Version___ctor_77276360(v25, UseTermsAgreementRequiredAppVersion, 0);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v26, v27);
  version = UnityEngine_Application__get_version(0);
  v29 = (System_Version_o *)sub_2213CCC(System_Version_TypeInfo);
  System_Version___ctor_77276360(v29, version, 0);
  if ( System_Version__op_LessThanOrEqual(v25, v29, 0) )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_8;
    goto LABEL_7;
  }
  return 0;
}


void TermsOfUseMenu__add_callbackFunc(
        TermsOfUseMenu_o *this,
        TermsOfUseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TermsOfUseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TermsOfUseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TermsOfUseMenu_o *v13; // x0
  TermsOfUseMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DEBE & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    byte_596DEBE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TermsOfUseMenu_CallbackFunc_c *)v8->klass != TermsOfUseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TermsOfUseMenu_CallbackFunc_TypeInfo, v9, v10);
  TermsOfUseMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *TermsOfUseMenu__get_closeBtnPath(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_596DECA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596DECA = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void TermsOfUseMenu__remove_callbackFunc(
        TermsOfUseMenu_o *this,
        TermsOfUseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TermsOfUseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TermsOfUseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  System_String_o **v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DEBF & 1) == 0 )
  {
    sub_2213A60(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    byte_596DEBF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TermsOfUseMenu_CallbackFunc_c *)v8->klass != TermsOfUseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TermsOfUseMenu_CallbackFunc_TypeInfo, v9, v10);
  TermsOfUseMenu__TryUpdateTermsVersion(v13, v14);
}


void TermsOfUseMenu_CallbackFunc___ctor(
        TermsOfUseMenu_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20091F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20091A8;
}


System_IAsyncResult_o *TermsOfUseMenu_CallbackFunc__BeginInvoke(
        TermsOfUseMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void TermsOfUseMenu_CallbackFunc__EndInvoke(
        TermsOfUseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void TermsOfUseMenu_CallbackFunc__Invoke(TermsOfUseMenu_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}