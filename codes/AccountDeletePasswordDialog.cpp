void AccountDeletePasswordDialog___cctor(const MethodInfo *method)
{
  struct AccountDeletePasswordDialog_StaticFields *static_fields; // x8

  if ( (byte_5969DE8 & 1) == 0 )
  {
    sub_2213A60(&AccountDeletePasswordDialog_TypeInfo);
    byte_5969DE8 = 1;
  }
  static_fields = AccountDeletePasswordDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALREADY_WARNING_LABEL_POS_Y = 0x1342840000LL;
  *(_QWORD *)&static_fields->ALREADY_ACCOUNT_POS_Y = 0xC1E8000040A00000LL;
  static_fields->ALREADY_MESSAGE_LABEL_POS_Y = -113.0;
}


void AccountDeletePasswordDialog___ctor(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969DE7 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969DE7 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountDeletePasswordDialog__Close(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountDeletePasswordDialog__Close_37269512(this, 0, v2);
}


void AccountDeletePasswordDialog__Close_37269512(
        AccountDeletePasswordDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_5969DDE & 1) == 0 )
  {
    sub_2213A60(&Method_AccountDeletePasswordDialog_EndClose__);
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969DDE = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213A04(&this->fields.closeEndFunc, 0);
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
  if ( (byte_5969DDD & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1935/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/);
    this = (AccountDeletePasswordDialog_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969DDD = 1;
  }
  passwordText = v4->fields.passwordText;
  if ( !open )
  {
    if ( !passwordText )
      sub_2213CDC(this, open);
    stringLength = passwordText->fields._stringLength;
    passwordText = (System_String_o *)StringLiteral_1/*""*/;
    if ( stringLength >= 1 )
    {
      do
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, open, method);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1935/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/, 0);
        --stringLength;
        passwordText = System_String__Concat_75651716(passwordText, v7, 0);
      }
      while ( stringLength );
    }
  }
  return passwordText;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o AccountDeletePasswordDialog__GetScreenPosition(
        AccountDeletePasswordDialog_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *main; // x19
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v10; // s0 OVERLAPPED
  float v11; // s1
  UnityEngine_Camera_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_5969DE5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969DE5 = 1;
  }
  main = (UnityEngine_Object_o *)UnityEngine_Camera__get_main(0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality(main, 0, 0) )
  {
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v10 = static_fields->zeroVector.fields.x;
    v11 = static_fields->zeroVector.fields.y;
  }
  else
  {
    v12 = UnityEngine_Camera__get_main(0);
    if ( !v12 )
      sub_2213CDC(0, v13);
    v15.fields.x = x;
    v15.fields.y = y;
    v15.fields.z = z;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToScreenPoint_83198204(v12, v15, 0);
  }
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void AccountDeletePasswordDialog__Init(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *infoLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *warningLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *passwordTitleLabel; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *passwordLabel; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *userIdTitleLabel; // x20
  __int64 v19; // x2
  UnityEngine_Object_o *userIdLabel; // x20
  __int64 v21; // x2
  UnityEngine_Object_o *nameTitleLabel; // x20
  __int64 v23; // x2
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v25; // x2
  UnityEngine_Object_o *buttonCopyLabel; // x20
  __int64 v27; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v29; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v31; // x1

  if ( (byte_5969DDB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969DDB = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  infoLabel = (UnityEngine_Object_o *)this->fields.infoLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(infoLabel, 0, 0) )
  {
    gameObject = this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  warningLabel = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0, 0) )
  {
    gameObject = this->fields.warningLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  passwordTitleLabel = (UnityEngine_Object_o *)this->fields.passwordTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(passwordTitleLabel, 0, 0) )
  {
    gameObject = this->fields.passwordTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  passwordLabel = (UnityEngine_Object_o *)this->fields.passwordLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
  if ( UnityEngine_Object__op_Inequality(passwordLabel, 0, 0) )
  {
    gameObject = this->fields.passwordLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  userIdTitleLabel = (UnityEngine_Object_o *)this->fields.userIdTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v17);
  if ( UnityEngine_Object__op_Inequality(userIdTitleLabel, 0, 0) )
  {
    gameObject = this->fields.userIdTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  userIdLabel = (UnityEngine_Object_o *)this->fields.userIdLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v19);
  if ( UnityEngine_Object__op_Inequality(userIdLabel, 0, 0) )
  {
    gameObject = this->fields.userIdLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  nameTitleLabel = (UnityEngine_Object_o *)this->fields.nameTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v21);
  if ( UnityEngine_Object__op_Inequality(nameTitleLabel, 0, 0) )
  {
    gameObject = this->fields.nameTitleLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v23);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
  {
    gameObject = this->fields.nameLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCopyLabel = (UnityEngine_Object_o *)this->fields.buttonCopyLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v25);
  if ( UnityEngine_Object__op_Inequality(buttonCopyLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCopyLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v27);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_70;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v29);
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
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v31);
}


bool AccountDeletePasswordDialog__IsHitWindow(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UICamera_c *v4; // x0
  struct UICamera_StaticFields *static_fields; // x9
  UnityEngine_Component_o *passwordWindow; // x0
  UnityEngine_Object_o *hoveredObject; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_5969DE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5969DE6 = 1;
  }
  v4 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, v2);
    v4 = UICamera_TypeInfo;
  }
  if ( !this->fields.passwordWindow )
    sub_2213CDC(v4, method);
  static_fields = v4->static_fields;
  passwordWindow = (UnityEngine_Component_o *)this->fields.passwordWindow;
  hoveredObject = (UnityEngine_Object_o *)static_fields->hoveredObject;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(passwordWindow, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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

  if ( (byte_5969DE1 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountDeletePasswordDialog_OnClickCancel__);
    byte_5969DE1 = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  if ( this->fields.clickFunc )
  {
    AccountDeletePasswordDialog__Close_37269512(this, 0, v5);
    clickFunc = this->fields.clickFunc;
    if ( !clickFunc )
      sub_2213CDC(v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      clickFunc->fields.method);
    this->fields.clickFunc = 0;
    sub_2213A04(&this->fields.clickFunc, 0);
  }
}


void AccountDeletePasswordDialog__OnClickCopy(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *passwordText; // x19

  if ( (byte_5969DE2 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountDeletePasswordDialog_OnClickCopy__);
    sub_2213A60(&UnityEngine_GUIUtility_TypeInfo);
    byte_5969DE2 = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickCopy__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickCopy__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( !System_String__IsNullOrEmpty(this->fields.passwordText, 0) )
  {
    passwordText = this->fields.passwordText;
    if ( !*(&UnityEngine_GUIUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIUtility_TypeInfo, v5, v6);
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

  if ( (byte_5969DDF & 1) == 0 )
  {
    sub_2213A60(&Method_AccountDeletePasswordDialog_OnClickDecide__);
    byte_5969DDF = 1;
  }
  v3 = Method_AccountDeletePasswordDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_AccountDeletePasswordDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v7 = AccountDeletePasswordDialog__WaitForOpen(v5, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void AccountDeletePasswordDialog__OnEnable(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5969DE3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/);
    byte_5969DE3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16267/*"Window/Objects/Buttons/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x1
  __int64 v19; // x2
  LocalizationManager_c *v20; // x0
  UILabel_o *titleLabel; // x22
  int v22; // w8
  UILabel_o *infoLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *passwordLabel; // x21
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  AccountDeletePasswordDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *v32; // x21
  UILabel_o *v33; // x21
  const MethodInfo *v34; // x2
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *DispFriendCode; // x22
  bool IsNullOrEmpty; // w8
  const MethodInfo *v38; // x4

  if ( (byte_5969DDC & 1) == 0 )
  {
    sub_2213A60(&AccountDeletePasswordDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_2213A60(&StringLiteral_1930/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1939/*"ACCOUNT_DELETE_PASSWORD_NAME"*/);
    sub_2213A60(&StringLiteral_1931/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_TITLE"*/);
    sub_2213A60(&StringLiteral_1932/*"ACCOUNT_DELETE_PASSWORD_CANCEL"*/);
    sub_2213A60(&StringLiteral_1940/*"ACCOUNT_DELETE_PASSWORD_PASSWORD"*/);
    sub_2213A60(&StringLiteral_1938/*"ACCOUNT_DELETE_PASSWORD_ISSUED_WARNING"*/);
    sub_2213A60(&StringLiteral_1934/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/);
    sub_2213A60(&StringLiteral_1941/*"ACCOUNT_DELETE_PASSWORD_USER_ID"*/);
    sub_2213A60(&StringLiteral_1937/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1929/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_INFO"*/);
    sub_2213A60(&StringLiteral_1936/*"ACCOUNT_DELETE_PASSWORD_ISSUED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1933/*"ACCOUNT_DELETE_PASSWORD_COPY"*/);
    byte_5969DDC = 1;
  }
  passwordTitleLabel = this->fields.passwordTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, already, password);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1940/*"ACCOUNT_DELETE_PASSWORD_PASSWORD"*/, 0);
  if ( !passwordTitleLabel )
    goto LABEL_39;
  UILabel__set_text(passwordTitleLabel, Instance, 0);
  userIdTitleLabel = this->fields.userIdTitleLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1941/*"ACCOUNT_DELETE_PASSWORD_USER_ID"*/, 0);
  if ( !userIdTitleLabel )
    goto LABEL_39;
  UILabel__set_text(userIdTitleLabel, Instance, 0);
  nameTitleLabel = this->fields.nameTitleLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1939/*"ACCOUNT_DELETE_PASSWORD_NAME"*/, 0);
  if ( !nameTitleLabel )
    goto LABEL_39;
  UILabel__set_text(nameTitleLabel, Instance, 0);
  buttonCopyLabel = this->fields.buttonCopyLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1933/*"ACCOUNT_DELETE_PASSWORD_COPY"*/, 0);
  if ( !buttonCopyLabel )
    goto LABEL_39;
  UILabel__set_text(buttonCopyLabel, Instance, 0);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1934/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/, 0);
  if ( !buttonDecideLabel )
    goto LABEL_39;
  UILabel__set_text(buttonDecideLabel, Instance, 0);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1932/*"ACCOUNT_DELETE_PASSWORD_CANCEL"*/, 0);
  if ( !buttonCancelLabel )
    goto LABEL_39;
  UILabel__set_text(buttonCancelLabel, Instance, 0);
  warningLabel = this->fields.warningLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1938/*"ACCOUNT_DELETE_PASSWORD_ISSUED_WARNING"*/, 0);
  if ( !warningLabel )
    goto LABEL_39;
  UILabel__set_text(warningLabel, Instance, 0);
  this->fields.passwordText = password;
  sub_2213A04(&this->fields.passwordText, password);
  v20 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.isAlready = already;
  v22 = *(&v20->_2.cctor_finished + 1);
  if ( already )
  {
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1931/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_39;
    UILabel__set_text(titleLabel, Instance, 0);
    infoLabel = this->fields.infoLabel;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1929/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_INFO"*/, 0);
    if ( !infoLabel )
      goto LABEL_39;
    UILabel__set_text(infoLabel, Instance, 0);
    messageLabel = this->fields.messageLabel;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1930/*"ACCOUNT_DELETE_PASSWORD_ALREADY_ISSUED_MESSAGE"*/, 0);
    if ( !messageLabel )
      goto LABEL_39;
    UILabel__set_text(messageLabel, Instance, 0);
    passwordLabel = this->fields.passwordLabel;
    Instance = AccountDeletePasswordDialog__GetPasswordText(this, 0, v26);
    if ( !passwordLabel )
      goto LABEL_39;
    UILabel__set_text(passwordLabel, Instance, 0);
    Instance = (System_String_o *)this->fields.warningLabel;
    if ( !Instance )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v30 = AccountDeletePasswordDialog_TypeInfo;
    if ( !*(&AccountDeletePasswordDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountDeletePasswordDialog_TypeInfo, v27, v28);
      v30 = AccountDeletePasswordDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(gameObject, v30->static_fields->ALREADY_WARNING_LABEL_POS_Y, 0);
    Instance = (System_String_o *)this->fields.warningLabel;
    if ( !Instance )
      goto LABEL_39;
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
    if ( !Instance )
      goto LABEL_39;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    GameObjectExtensions__SetLocalPositionY(
      v31,
      AccountDeletePasswordDialog_TypeInfo->static_fields->ALREADY_MESSAGE_LABEL_POS_Y,
      0);
  }
  else
  {
    if ( !v22 )
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1937/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_39;
    UILabel__set_text(titleLabel, Instance, 0);
    v32 = this->fields.messageLabel;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_1936/*"ACCOUNT_DELETE_PASSWORD_ISSUED_MESSAGE"*/, 0);
    if ( !v32 )
      goto LABEL_39;
    UILabel__set_text(v32, Instance, 0);
    v33 = this->fields.passwordLabel;
    Instance = AccountDeletePasswordDialog__GetPasswordText(this, 1, v34);
    if ( !v33 )
      goto LABEL_39;
    UILabel__set_text(v33, Instance, 0);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  DispFriendCode = NetworkManager__GetDispFriendCode((NetworkManager_o *)Instance, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(DispFriendCode, 0);
  Instance = (System_String_o *)this->fields.userIdLabel;
  if ( IsNullOrEmpty )
  {
    if ( !Instance )
      goto LABEL_39;
    DispFriendCode = (System_String_o *)StringLiteral_1/*""*/;
  }
  else if ( !Instance )
  {
    goto LABEL_39;
  }
  UILabel__set_text((UILabel_o *)Instance, DispFriendCode, 0);
  if ( !SelfUserGame || (Instance = (System_String_o *)this->fields.nameLabel) == 0 )
LABEL_39:
    sub_2213CDC(Instance, v11);
  UILabel__set_text((UILabel_o *)Instance, SelfUserGame->fields.name, 0);
  this->fields.clickFunc = func;
  sub_2213A04(&this->fields.clickFunc, func);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, v38);
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
    sub_2213CDC(v6, v7);
  }
LABEL_5:
  isPasswordOpen = 1;
LABEL_9:
  this->fields.isPasswordOpen = isPasswordOpen;
}


void AccountDeletePasswordDialog__Update(AccountDeletePasswordDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *passwordWindow; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  bool v9; // w0

  if ( (byte_5969DE4 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5969DE4 = 1;
  }
  if ( this->fields.isAlready )
  {
    passwordWindow = (UnityEngine_Component_o *)this->fields.passwordWindow;
    if ( !passwordWindow )
      sub_2213CDC(0, method);
    gameObject = UnityEngine_Component__get_gameObject(passwordWindow, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4, v5);
    v9 = UICamera__IsPressed(gameObject, 0) && AccountDeletePasswordDialog__IsHitWindow(this, v7);
    AccountDeletePasswordDialog__SetPasswordTextOpen(this, v9, v8);
  }
}


System_Collections_IEnumerator_o *AccountDeletePasswordDialog__WaitForOpen(
        AccountDeletePasswordDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5969DE0 & 1) == 0 )
  {
    sub_2213A60(&AccountDeletePasswordDialog__WaitForOpen_d__33_TypeInfo);
    byte_5969DE0 = 1;
  }
  v2 = sub_2213CCC(AccountDeletePasswordDialog__WaitForOpen_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  result = (System_Collections_IEnumerator_o *)v2;
  *(_DWORD *)(v2 + 16) = 0;
  return result;
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
  __int64 v2; // x2
  unsigned int _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *WebViewAddress_48359816; // x19
  UnityEngine_WaitForSeconds_o *v10; // x20
  Il2CppObject **v11; // x19

  if ( (byte_5969DE9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5969DE9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
      WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(12, 0);
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7, v8);
      UnityEngine_Application__OpenURL(WebViewAddress_48359816, 0);
    }
    return 0;
  }
  else
  {
    this->fields.__1__state = -1;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    if ( SoundManager__isBusyVoice(0, 0) )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04(p__2__current, 0);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
    else
    {
      v10 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, 0.5, 0);
      this->fields.__2__current = (Il2CppObject *)v10;
      v11 = &this->fields.__2__current;
      sub_2213A04(v11, v10);
      result = 1;
      *((_DWORD *)v11 - 2) = 2;
    }
  }
  return result;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AccountDeletePasswordDialog__WaitForOpen_d__33_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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