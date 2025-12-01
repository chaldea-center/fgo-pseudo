void TermsOfUseMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TermsOfUseMenu_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC4C00 & 1) == 0 )
  {
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    sub_1C713B0(&StringLiteral_22371/*"none"*/);
    sub_1C713B0(&StringLiteral_15221/*"UsePolicyConsent"*/);
    byte_4CC4C00 = 1;
  }
  TermsOfUseMenu_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_15221/*"UsePolicyConsent"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TermsOfUseMenu_TypeInfo->static_fields,
    StringLiteral_15221/*"UsePolicyConsent"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_22371/*"none"*/;
  static_fields = TermsOfUseMenu_TypeInfo->static_fields;
  static_fields->SAVE_DEFAULT_STR = (struct System_String_o *)StringLiteral_22371/*"none"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_DEFAULT_STR, v7, v9, v10, v11, v12, v13, v14);
}


void TermsOfUseMenu___ctor(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC4BFF & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC4BFF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TermsOfUseMenu__Callback(TermsOfUseMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct TermsOfUseMenu_CallbackFunc_o *v9; // x20
  struct TermsOfUseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void TermsOfUseMenu__Close(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TermsOfUseMenu__Close_37951096(this, 0, v2);
}


void TermsOfUseMenu__Close_37951096(TermsOfUseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC4BFA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_TermsOfUseMenu_EndClose__);
    byte_4CC4BFA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TermsOfUseMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void TermsOfUseMenu__EndClose(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TermsOfUseMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C71354(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4CC4BF8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4BF8 = 1;
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
    sub_1C71608(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool TermsOfUseMenu__IsConcent(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  TermsOfUseMenu_c *v3; // x0
  System_String_o *String; // x19
  const MethodInfo *v5; // x1
  System_String_o *updateVersion; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CC4BF5 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    byte_4CC4BF5 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  updateVersion = 0;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v3 = TermsOfUseMenu_TypeInfo;
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    v3 = TermsOfUseMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v3->static_fields->SAVE_KEY, v3->static_fields->SAVE_DEFAULT_STR, 0);
  if ( System_String__op_Equality(String, TermsOfUseMenu_TypeInfo->static_fields->SAVE_DEFAULT_STR, 0) )
  {
    return 1;
  }
  else
  {
    if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    return TermsOfUseMenu__TryUpdateTermsVersion(&updateVersion, v5)
        && System_String__op_Inequality(String, updateVersion, 0);
  }
}


bool TermsOfUseMenu__IsConcentFirst(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  TermsOfUseMenu_c *v4; // x0
  System_String_o *String; // x0

  if ( (byte_4CC4BF6 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    byte_4CC4BF6 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = TermsOfUseMenu_TypeInfo;
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    v4 = TermsOfUseMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DEFAULT_STR, 0);
  return System_String__op_Equality(String, TermsOfUseMenu_TypeInfo->static_fields->SAVE_DEFAULT_STR, 0);
}


void TermsOfUseMenu__OnClickCancel(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC4BFD & 1) == 0 )
  {
    sub_1C713B0(&Method_TermsOfUseMenu_OnClickCancel__);
    byte_4CC4BFD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_TermsOfUseMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_TermsOfUseMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  TermsOfUseMenu_c *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CC4BFC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C713B0(&Method_TermsOfUseMenu_OnClickDecide__);
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    byte_4CC4BFC = 1;
  }
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v4);
    AdManager__TrackEvent((AdManager_o *)Instance, 2, 3, -1, -1, 0, 0);
    this->fields.state = 3;
    v5 = Method_TermsOfUseMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_TermsOfUseMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    v7 = TermsOfUseMenu_TypeInfo;
    if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    TermsOfUseMenu__Save((const MethodInfo *)v7);
    TermsOfUseMenu__Callback(this, 1, v8);
  }
}


void TermsOfUseMenu__OnClickShow(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x20
  System_String_o *WebViewAddress_41656216; // x21
  System_Action_o *v7; // x22

  if ( (byte_4CC4BFB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_TermsOfUseMenu_OnClickShow__);
    sub_1C713B0(&Method_TermsOfUseMenu_OnEndShowWebView__);
    sub_1C713B0(&WebViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_15559/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/);
    byte_4CC4BFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_TermsOfUseMenu_OnClickShow__;
    if ( (*((_BYTE *)Method_TermsOfUseMenu_OnClickShow__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_TermsOfUseMenu_OnClickShow__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_15559/*"WEB_VIEW_TITLE_TERMS_OF_USE"*/, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    WebViewAddress_41656216 = NetworkManager__getWebViewAddress_41656216(4, 0);
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_TermsOfUseMenu_OnEndShowWebView__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView(v5, WebViewAddress_41656216, v7, 0);
  }
}


void TermsOfUseMenu__OnEndShowWebView(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  ;
}


void TermsOfUseMenu__Open(TermsOfUseMenu_o *this, TermsOfUseMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  TermsOfUseMenu_o *v14; // x0
  const MethodInfo *v15; // x1
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  UILabel_o *showLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  System_Action_o *v21; // x20

  if ( (byte_4CC4BF9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_TermsOfUseMenu_EndOpen__);
    sub_1C713B0(&StringLiteral_13392/*"TERMS_OF_USE_TITLE"*/);
    sub_1C713B0(&StringLiteral_13391/*"TERMS_OF_USE_SHOW"*/);
    sub_1C713B0(&StringLiteral_13389/*"TERMS_OF_USE_MESSAGE1"*/);
    sub_1C713B0(&StringLiteral_13382/*"TERMS_OF_USE_DECIDE"*/);
    sub_1C713B0(&StringLiteral_13381/*"TERMS_OF_USE_CANCEL"*/);
    sub_1C713B0(&StringLiteral_13390/*"TERMS_OF_USE_MESSAGE2"*/);
    byte_4CC4BF9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)method,
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TERMS_OF_USE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_18;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    messageLabel = this->fields.messageLabel;
    v16 = (System_String_o **)(TermsOfUseMenu__IsConcentFirst(v14, v15) ? &StringLiteral_13389/*"TERMS_OF_USE_MESSAGE1"*/ : &StringLiteral_13390/*"TERMS_OF_USE_MESSAGE2"*/);
    v17 = *v16;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v17, 0);
    if ( !messageLabel )
      goto LABEL_18;
    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
    showLabel = this->fields.showLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13391/*"TERMS_OF_USE_SHOW"*/, 0);
    if ( !showLabel
      || (UILabel__set_text(showLabel, (System_String_o *)gameObject, 0),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13381/*"TERMS_OF_USE_CANCEL"*/, 0),
          !cancelLabel)
      || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
          decideLabel = this->fields.decideLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13382/*"TERMS_OF_USE_DECIDE"*/, 0),
          !decideLabel) )
    {
LABEL_18:
      sub_1C71608(gameObject, v11);
    }
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v21 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_TermsOfUseMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
  }
}


void TermsOfUseMenu__Save(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0
  TermsOfUseMenu_c *v2; // x8
  System_String_o *UseTermsLatestVersion; // x19

  if ( (byte_4CC4BF7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&TermsOfUseMenu_TypeInfo);
    byte_4CC4BF7 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  v2 = TermsOfUseMenu_TypeInfo;
  UseTermsLatestVersion = v1->static_fields->UseTermsLatestVersion;
  if ( !TermsOfUseMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TermsOfUseMenu_TypeInfo);
    v2 = TermsOfUseMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v2->static_fields->SAVE_KEY, UseTermsLatestVersion, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool TermsOfUseMenu__TryUpdateTermsVersion(System_String_o **updateVersion, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BalanceConfig_c *v9; // x0
  bool IsNullOrEmpty; // w0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BalanceConfig_c *v17; // x8
  uint32_t cctor_finished; // w9
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *UseTermsAgreementRequiredAppVersion; // x21
  System_Version_o *v21; // x20
  System_String_o *version; // x21
  System_Version_o *v23; // x22
  BalanceConfig_c *v24; // x0
  System_String_o *UseTermsLatestVersion; // x1

  if ( (byte_4CC4BF4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&System_Version_TypeInfo);
    byte_4CC4BF4 = 1;
  }
  *updateVersion = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)updateVersion, 0, v2, v3, v4, v5, v6, v7);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v9->static_fields->UseTermsAgreementRequiredAppVersion, 0);
  v17 = BalanceConfig_TypeInfo;
  cctor_finished = BalanceConfig_TypeInfo->_2.cctor_finished;
  if ( IsNullOrEmpty )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    static_fields = v17->static_fields;
LABEL_17:
    UseTermsLatestVersion = static_fields->UseTermsLatestVersion;
    *updateVersion = UseTermsLatestVersion;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)updateVersion,
      (int32_t)UseTermsLatestVersion,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    return 1;
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  UseTermsAgreementRequiredAppVersion = v17->static_fields->UseTermsAgreementRequiredAppVersion;
  v21 = (System_Version_o *)sub_1C715FC(System_Version_TypeInfo);
  System_Version___ctor_65677000(v21, UseTermsAgreementRequiredAppVersion, 0);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  version = UnityEngine_Application__get_version(0);
  v23 = (System_Version_o *)sub_1C715FC(System_Version_TypeInfo);
  System_Version___ctor_65677000(v23, version, 0);
  if ( System_Version__op_LessThanOrEqual(v21, v23, 0) )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    static_fields = v24->static_fields;
    goto LABEL_17;
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
  __int64 v9; // x0
  bool v10; // zf
  TermsOfUseMenu_o *v11; // x0
  TermsOfUseMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC4BF2 & 1) == 0 )
  {
    sub_1C713B0(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    byte_4CC4BF2 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  TermsOfUseMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *TermsOfUseMenu__get_closeBtnPath(TermsOfUseMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC4BFE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15645/*"Window/CancelButton"*/);
    byte_4CC4BFE = 1;
  }
  return (System_String_o *)StringLiteral_15645/*"Window/CancelButton"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  System_String_o **v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC4BF3 & 1) == 0 )
  {
    sub_1C713B0(&TermsOfUseMenu_CallbackFunc_TypeInfo);
    byte_4CC4BF3 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  TermsOfUseMenu__TryUpdateTermsVersion(v11, v12);
}


void TermsOfUseMenu_CallbackFunc___ctor(
        TermsOfUseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA4B50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA4B08;
}


System_IAsyncResult_o *TermsOfUseMenu_CallbackFunc__BeginInvoke(
        TermsOfUseMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CC4C01 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC4C01 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void TermsOfUseMenu_CallbackFunc__EndInvoke(
        TermsOfUseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void TermsOfUseMenu_CallbackFunc__Invoke(TermsOfUseMenu_CallbackFunc_o *this, bool result, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}