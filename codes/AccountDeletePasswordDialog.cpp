void AccountDeletePasswordDialog___cctor(const MethodInfo *method)
{
  struct AccountDeletePasswordDialog_StaticFields *static_fields; // x8

  if ( (byte_4D2A452 & 1) == 0 )
  {
    sub_1C93AD4(&AccountDeletePasswordDialog_TypeInfo);
    byte_4D2A452 = 1;
  }
  static_fields = AccountDeletePasswordDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALREADY_WARNING_LABEL_POS_Y = 0x1342840000LL;
  *(_QWORD *)&static_fields->ALREADY_ACCOUNT_POS_Y = 0xC1E8000040A00000LL;
  static_fields->ALREADY_MESSAGE_LABEL_POS_Y = -113.0;
}


void AccountDeletePasswordDialog___ctor(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A451 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2A451 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountDeletePasswordDialog__Close(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountDeletePasswordDialog__Close_31477236(this, 0, v2);
}


void AccountDeletePasswordDialog__Close_31477236(
        AccountDeletePasswordDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D2A448 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AccountDeletePasswordDialog_EndClose__);
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2A448 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C93A78(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountDeletePasswordDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountDeletePasswordDialog__EndClose(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeEndFunc; // x20

  AccountDeletePasswordDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  if ( closeEndFunc )
  {
    this->fields.closeEndFunc = 0;
    sub_1C93A78(&this->fields.closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeEndFunc->fields.invoke_impl)(
      closeEndFunc->fields.method_code,
      closeEndFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *AccountDeletePasswordDialog__GetPasswordText(
        AccountDeletePasswordDialog_o *this,
        bool open,
        const MethodInfo *method)
{
  AccountDeletePasswordDialog_o *v4; // x19
  System_String_o *passwordText; // x19
  int stringLength; // w20
  System_String_o *v7; // x0

  v4 = this;
  if ( (byte_4D2A447 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1849/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/);
    this = (AccountDeletePasswordDialog_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A447 = 1;
  }
  passwordText = v4->fields.passwordText;
  if ( !open )
  {
    if ( !passwordText )
      sub_1C93D2C(this, open);
    stringLength = passwordText->fields._stringLength;
    passwordText = (System_String_o *)StringLiteral_1/*""*/;
    if ( stringLength >= 1 )
    {
      do
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1849/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/, 0);
        --stringLength;
        passwordText = System_String__Concat_64425724(passwordText, v7, 0);
      }
      while ( stringLength );
    }
  }
  return passwordText;
}


UnityEngine_Vector2_o AccountDeletePasswordDialog__GetScreenPosition(
        AccountDeletePasswordDialog_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *main; // x19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Camera_o *v10; // x0
  __int64 v11; // x1
  unsigned __int64 v12; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D2A44F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A44F = 1;
  }
  main = (UnityEngine_Object_o *)UnityEngine_Camera__get_main(0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(main, 0, 0) )
  {
    if ( !byte_4D2A019 )
    {
      sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
      byte_4D2A019 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
  }
  else
  {
    v10 = UnityEngine_Camera__get_main(0);
    if ( !v10 )
      sub_1C93D2C(0, v11);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    v12 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_71924480(v10, v14, 0);
    result.fields.y = *((float *)&v12 + 1);
    LODWORD(result.fields.x) = v12;
  }
  return result;
}


void AccountDeletePasswordDialog__Init(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *infoLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *warningLabel; // x20
  UnityEngine_Object_o *passwordTitleLabel; // x20
  UnityEngine_Object_o *passwordLabel; // x20
  UnityEngine_Object_o *userIdTitleLabel; // x20
  UnityEngine_Object_o *userIdLabel; // x20
  UnityEngine_Object_o *nameTitleLabel; // x20
  UnityEngine_Object_o *nameLabel; // x20
  UnityEngine_Object_o *buttonCopyLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v18; // x1

  if ( (byte_4D2A445 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2A445 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoLabel, 0, 0) )
  {
    gameObject = this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0, 0) )
  {
    gameObject = this->fields.warningLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  passwordTitleLabel = (UnityEngine_Object_o *)this->fields.passwordTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(passwordTitleLabel, 0, 0) )
  {
    gameObject = this->fields.passwordTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  passwordLabel = (UnityEngine_Object_o *)this->fields.passwordLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(passwordLabel, 0, 0) )
  {
    gameObject = this->fields.passwordLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  userIdTitleLabel = (UnityEngine_Object_o *)this->fields.userIdTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(userIdTitleLabel, 0, 0) )
  {
    gameObject = this->fields.userIdTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  userIdLabel = (UnityEngine_Object_o *)this->fields.userIdLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(userIdLabel, 0, 0) )
  {
    gameObject = this->fields.userIdLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  nameTitleLabel = (UnityEngine_Object_o *)this->fields.nameTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameTitleLabel, 0, 0) )
  {
    gameObject = this->fields.nameTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    gameObject = this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCopyLabel = (UnityEngine_Object_o *)this->fields.buttonCopyLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCopyLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCopyLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_70:
    sub_1C93D2C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v18);
}


bool AccountDeletePasswordDialog__IsHitWindow(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  struct UICamera_StaticFields *static_fields; // x9
  UnityEngine_Component_o *passwordWindow; // x0
  UnityEngine_Object_o *hoveredObject; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D2A450 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A450 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( !this->fields.passwordWindow )
    sub_1C93D2C(v3, method);
  static_fields = v3->static_fields;
  passwordWindow = (UnityEngine_Component_o *)this->fields.passwordWindow;
  hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(passwordWindow, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(hoveredObject, gameObject, 0);
}


void AccountDeletePasswordDialog__OnClickCancel(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_o *clickFunc; // x8

  if ( (byte_4D2A44B & 1) == 0 )
  {
    sub_1C93AD4(&Method_AccountDeletePasswordDialog_OnClickCancel__);
    byte_4D2A44B = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC();
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeletePasswordDialog__Close_31477236(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_1C93D2C(v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_1C93A78(&this->fields.clickFunc, 0);
  }
}


void AccountDeletePasswordDialog__OnClickCopy(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *passwordText; // x19

  if ( (byte_4D2A44C & 1) == 0 )
  {
    sub_1C93AD4(&Method_AccountDeletePasswordDialog_OnClickCopy__);
    sub_1C93AD4(&UnityEngine_GUIUtility_TypeInfo);
    byte_4D2A44C = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickCopy__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickCopy__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC();
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(this->fields.passwordText, 0) )
  {
    passwordText = this->fields.passwordText;
    if ( !UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo);
    UnityEngine_GUIUtility__set_systemCopyBuffer(passwordText, 0);
  }
}


void AccountDeletePasswordDialog__OnClickDecide(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  AccountDeletePasswordDialog_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4D2A449 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AccountDeletePasswordDialog_OnClickDecide__);
    byte_4D2A449 = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC();
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v7 = AccountDeletePasswordDialog__WaitForOpen(v5, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void AccountDeletePasswordDialog__OnEnable(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4D2A44D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/);
    byte_4D2A44D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45665756(transform, (System_String_o *)StringLiteral_15749/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


void AccountDeletePasswordDialog__Open(
        AccountDeletePasswordDialog_o *this,
        bool already,
        System_String_o *password,
        System_Action_o *func,
        const MethodInfo *method)
{
  UILabel_o *passwordTitleLabel; // x23
  System_String_o *Instance; // x0
  __int64 v11; // x1
  UILabel_o *userIdTitleLabel; // x23
  UILabel_o *nameTitleLabel; // x23
  UILabel_o *buttonCopyLabel; // x23
  UILabel_o *buttonDecideLabel; // x23
  UILabel_o *buttonCancelLabel; // x23
  UILabel_o *warningLabel; // x23
  UILabel_o *titleLabel; // x22
  UILabel_o *infoLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *passwordLabel; // x21
  const MethodInfo *v22; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  AccountDeletePasswordDialog_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  UILabel_o *v26; // x21
  UILabel_o *v27; // x21
  const MethodInfo *v28; // x2
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *DispFriendCode; // x22
  System_String_o *v31; // x1
  const MethodInfo *v32; // x4

  if ( (byte_4D2A446 & 1) == 0 )
  {
    sub_1C93AD4(&AccountDeletePasswordDialog_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1844/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1853/*"ACCOUNT_DELETE_PASSWORD_NAME"*/);
    sub_1C93AD4(&StringLiteral_1845/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1846/*"ACCOUNT_DELETE_PASSWORD_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_1854/*"ACCOUNT_DELETE_PASSWORD_PASSWORD"*/);
    sub_1C93AD4(&StringLiteral_1852/*"ACCOUNT_DELETE_PASSWORD_ISSUED_WARNING"*/);
    sub_1C93AD4(&StringLiteral_1848/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_1855/*"ACCOUNT_DELETE_PASSWORD_USER_ID"*/);
    sub_1C93AD4(&StringLiteral_1851/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_1843/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_INFO"*/);
    sub_1C93AD4(&StringLiteral_1850/*"ACCOUNT_DELETE_PASSWORD_ISSUED_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_1847/*"ACCOUNT_DELETE_PASSWORD_COPY"*/);
    byte_4D2A446 = 1;
  }
  passwordTitleLabel = this->fields.passwordTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1854/*"ACCOUNT_DELETE_PASSWORD_PASSWORD"*/, 0);
  if ( !passwordTitleLabel )
    goto LABEL_37;
  UILabel__set_text(passwordTitleLabel, Instance, 0);
  userIdTitleLabel = this->fields.userIdTitleLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1855/*"ACCOUNT_DELETE_PASSWORD_USER_ID"*/, 0);
  if ( !userIdTitleLabel )
    goto LABEL_37;
  UILabel__set_text(userIdTitleLabel, Instance, 0);
  nameTitleLabel = this->fields.nameTitleLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1853/*"ACCOUNT_DELETE_PASSWORD_NAME"*/, 0);
  if ( !nameTitleLabel )
    goto LABEL_37;
  UILabel__set_text(nameTitleLabel, Instance, 0);
  buttonCopyLabel = this->fields.buttonCopyLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1847/*"ACCOUNT_DELETE_PASSWORD_COPY"*/, 0);
  if ( !buttonCopyLabel )
    goto LABEL_37;
  UILabel__set_text(buttonCopyLabel, Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1848/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_37;
  UILabel__set_text(buttonDecideLabel, Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1846/*"ACCOUNT_DELETE_PASSWORD_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_37;
  UILabel__set_text(buttonCancelLabel, Instance, 0);
  warningLabel = this->fields.warningLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1852/*"ACCOUNT_DELETE_PASSWORD_ISSUED_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_37;
  UILabel__set_text(warningLabel, Instance, 0);
  this->fields.passwordText = password;
  sub_1C93A78(&this->fields.passwordText, password);
  this->fields.isAlready = already;
  titleLabel = this->fields.titleLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( already )
      goto LABEL_14;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( already )
    {
LABEL_14:
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1845/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, Instance, 0);
        infoLabel = this->fields.infoLabel;
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1843/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_INFO"*/, 0);
        if ( infoLabel )
        {
          UILabel__set_text(infoLabel, Instance, 0);
          messageLabel = this->fields.messageLabel;
          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1844/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/, 0);
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, Instance, 0);
            passwordLabel = this->fields.passwordLabel;
            Instance = AccountDeletePasswordDialog__GetPasswordText(this, 0, v22);
            if ( passwordLabel )
            {
              UILabel__set_text(passwordLabel, Instance, 0);
              Instance = (System_String_o *)this->fields.warningLabel;
              if ( Instance )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                v24 = AccountDeletePasswordDialog_TypeInfo;
                if ( !AccountDeletePasswordDialog_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AccountDeletePasswordDialog_TypeInfo);
                  v24 = AccountDeletePasswordDialog_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(gameObject, v24->static_fields->ALREADY_WARNING_LABEL_POS_Y, 0);
                Instance = (System_String_o *)this->fields.warningLabel;
                if ( Instance )
                {
                  UILabel__set_fontSize(
                    (UILabel_o *)Instance,
                    AccountDeletePasswordDialog_TypeInfo->static_fields->ALREADY_WARNING_LABEL_FONT_SIZE,
                    0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.accountObject,
                    AccountDeletePasswordDialog_TypeInfo->static_fields->ALREADY_ACCOUNT_POS_Y,
                    0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.nameObject,
                    AccountDeletePasswordDialog_TypeInfo->static_fields->ALREADY_NAME_POS_Y,
                    0);
                  Instance = (System_String_o *)this->fields.messageLabel;
                  if ( Instance )
                  {
                    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v25,
                      AccountDeletePasswordDialog_TypeInfo->static_fields->ALREADY_MESSAGE_LABEL_POS_Y,
                      0);
                    goto LABEL_29;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C93D2C(Instance, v11);
    }
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1851/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, Instance, 0);
  v26 = this->fields.messageLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1850/*"ACCOUNT_DELETE_PASSWORD_ISSUED_MESSAGE"*/, 0);
  if ( !v26 )
    goto LABEL_37;
  UILabel__set_text(v26, Instance, 0);
  v27 = this->fields.passwordLabel;
  Instance = AccountDeletePasswordDialog__GetPasswordText(this, 1, v28);
  if ( !v27 )
    goto LABEL_37;
  UILabel__set_text(v27, Instance, 0);
LABEL_29:
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
  Instance = (System_String_o *)System_String__IsNullOrEmpty(DispFriendCode, 0);
  if ( !this->fields.userIdLabel )
    goto LABEL_37;
  v31 = ((unsigned __int8)Instance & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : DispFriendCode;
  UILabel__set_text(this->fields.userIdLabel, v31, 0);
  if ( !SelfUserGame )
    goto LABEL_37;
  Instance = (System_String_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)Instance, SelfUserGame->fields.name, 0);
  this->fields.clickFunc = func;
  sub_1C93A78(&this->fields.clickFunc, func);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v32);
}


void AccountDeletePasswordDialog__SetPasswordTextOpen(
        AccountDeletePasswordDialog_o *this,
        bool open,
        const MethodInfo *method)
{
  char isPasswordOpen; // w8
  UILabel_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *passwordLabel; // x20

  isPasswordOpen = this->fields.isPasswordOpen;
  if ( !open )
  {
    if ( !this->fields.isPasswordOpen )
      goto LABEL_9;
    passwordLabel = this->fields.passwordLabel;
    v6 = AccountDeletePasswordDialog__GetPasswordText(this, 0, method);
    if ( passwordLabel )
    {
      UILabel__set_text(passwordLabel, v6, 0);
      isPasswordOpen = 0;
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( !this->fields.isPasswordOpen )
  {
    v5 = this->fields.passwordLabel;
    v6 = AccountDeletePasswordDialog__GetPasswordText(this, 1, method);
    if ( v5 )
    {
      UILabel__set_text(v5, v6, 0);
      goto LABEL_5;
    }
LABEL_10:
    sub_1C93D2C(v6, v7);
  }
LABEL_5:
  isPasswordOpen = 1;
LABEL_9:
  this->fields.isPasswordOpen = isPasswordOpen;
}


void AccountDeletePasswordDialog__Update(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *passwordWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  bool v7; // w0

  if ( (byte_4D2A44E & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A44E = 1;
  }
  if ( this->fields.isAlready )
  {
    passwordWindow = (UnityEngine_Component_o *)this->fields.passwordWindow;
    if ( !passwordWindow )
      sub_1C93D2C(0, method);
    gameObject = UnityEngine_Component__get_gameObject(passwordWindow, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v7 = UICamera__IsPressed(gameObject, 0) && AccountDeletePasswordDialog__IsHitWindow(this, v5);
    AccountDeletePasswordDialog__SetPasswordTextOpen(this, v7, v6);
  }
}


System_Collections_IEnumerator_o *AccountDeletePasswordDialog__WaitForOpen(
        AccountDeletePasswordDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4D2A44A & 1) == 0 )
  {
    sub_1C93AD4(&AccountDeletePasswordDialog__WaitForOpen_d__33_TypeInfo);
    byte_4D2A44A = 1;
  }
  v2 = sub_1C93D20(AccountDeletePasswordDialog__WaitForOpen_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void AccountDeletePasswordDialog__WaitForOpen_d__33___ctor(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AccountDeletePasswordDialog__WaitForOpen_d__33__MoveNext(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        const MethodInfo *method)
{
  unsigned int _1__state; // w8
  Il2CppObject **p__2__current; // x19
  System_String_o *WebViewAddress_42109268; // x19
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **v8; // x19

  if ( (byte_4D2A453 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D2A453 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      WebViewAddress_42109268 = NetworkManager__getWebViewAddress_42109268(12, 0);
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__OpenURL(WebViewAddress_42109268, 0);
    }
    return 0;
  }
  else
  {
    this->fields.__1__state = -1;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( SoundManager__isBusyVoice(0, 0) )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C93A78(p__2__current, 0);
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1C93D20(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, 0.5, 0);
      this->fields.__2__current = (Il2CppObject *)v7;
      v8 = &this->fields.__2__current;
      sub_1C93A78(v8, v7);
      *((_DWORD *)v8 - 2) = 2;
    }
    return 1;
  }
}


Il2CppObject *AccountDeletePasswordDialog__WaitForOpen_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AccountDeletePasswordDialog__WaitForOpen_d__33__System_Collections_IEnumerator_Reset(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_AccountDeletePasswordDialog__WaitForOpen_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *AccountDeletePasswordDialog__WaitForOpen_d__33__System_Collections_IEnumerator_get_Current(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AccountDeletePasswordDialog__WaitForOpen_d__33__System_IDisposable_Dispose(
        AccountDeletePasswordDialog__WaitForOpen_d__33_o *this,
        const MethodInfo *method)
{
  ;
}