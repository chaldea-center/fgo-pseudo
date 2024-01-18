void __fastcall SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AE88 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE88 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmMenu__Callback(
        SupportSelectConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SupportSelectConfirmMenu_CallbackFunc_o *v9; // x19
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportSelectConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_31152572(this, 0LL, v2);
}


void __fastcall SupportSelectConfirmMenu__Close_31152572(
        SupportSelectConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418AE84 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SupportSelectConfirmMenu_EndClose__, v10);
    byte_418AE84 = 1;
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
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SupportSelectConfirmMenu__EndClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportSelectConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SupportSelectConfirmMenu__EndOpen(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SupportSelectConfirmMenu__Init(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_418AE81 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AE81 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL) )
  {
LABEL_9:
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmMenu__OnCancelClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418AE86 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE86 = 1;
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
    SupportSelectConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall SupportSelectConfirmMenu__OnClickClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418AE85 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 1, v3);
  }
}


void __fastcall SupportSelectConfirmMenu__OnDecideClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418AE87 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE87 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 1, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_418AE82 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&kind);
    byte_418AE82 = 1;
  }
  SupportSelectConfirmMenu__Open_31150976(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open_31150976(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        System_String_o *class1,
        System_String_o *class2,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  bool v33; // w1
  UILabel_o *v34; // x20
  struct UILabel_o *v35; // x20
  __int64 *v36; // x8
  UILabel_o *v37; // x20
  UILabel_o *v38; // x20
  System_String_o *v39; // x1
  UILabel_o *v40; // x0
  UILabel_o *v41; // x22
  struct UILabel_o *v42; // x22
  System_String_o *v43; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  UnityEngine_GameObject_o *v47; // x20
  UnityEngine_GameObject_o *v48; // x20
  System_Action_o *v49; // x20

  if ( (byte_418AE83 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_SupportSelectConfirmMenu_EndOpen__, v15);
    sub_B2C35C(&StringLiteral_12540/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_12503/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_12542/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/, v18);
    sub_B2C35C(&StringLiteral_12557/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, v19);
    sub_B2C35C(&StringLiteral_12552/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, v20);
    sub_B2C35C(&StringLiteral_12549/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, v21);
    sub_B2C35C(&StringLiteral_12550/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, v22);
    sub_B2C35C(&StringLiteral_12539/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_12558/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, v24);
    sub_B2C35C(&StringLiteral_12553/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/, v25);
    sub_B2C35C(&StringLiteral_12556/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, v26);
    sub_B2C35C(&StringLiteral_12504/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/, v27);
    sub_B2C35C(&StringLiteral_12541/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, v28);
    byte_418AE83 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)class1,
      (System_Boolean_array **)class2,
      (System_Int32_array **)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
LABEL_73:
      sub_B2C434(gameObject, v30);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12549/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_73;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12550/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, 0LL);
        if ( !messageLabel )
          goto LABEL_73;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        v33 = 0;
        goto LABEL_49;
      case 2:
        v34 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12552/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, 0LL);
        if ( !v34 )
          goto LABEL_73;
        UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
        v35 = this->fields.messageLabel;
        v36 = &StringLiteral_12553/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/;
        goto LABEL_34;
      case 3:
        v37 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12541/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, 0LL);
        if ( !v37 )
          goto LABEL_73;
        UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
        v35 = this->fields.messageLabel;
        v36 = &StringLiteral_12542/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/;
        goto LABEL_34;
      case 4:
        v38 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, 0LL);
        if ( !v38 )
          goto LABEL_73;
        UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
        v35 = this->fields.messageLabel;
        v36 = &StringLiteral_12504/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/;
LABEL_34:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v36, 0LL);
        if ( !v35 )
          goto LABEL_73;
        v39 = (System_String_o *)gameObject;
        v40 = v35;
LABEL_42:
        UILabel__set_text(v40, v39, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        v33 = 1;
LABEL_49:
        UnityEngine_GameObject__SetActive(gameObject, v33, 0LL);
LABEL_50:
        closeLabel = this->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12557/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, 0LL);
        if ( !closeLabel )
          goto LABEL_73;
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, 0LL);
        if ( !cancelLabel )
          goto LABEL_73;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12558/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_73;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
          goto LABEL_64;
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_73;
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
        }
        AndroidBackKeyManager__AddBackBtn(v47, 0LL);
LABEL_64:
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_73;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_73;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
          goto LABEL_72;
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_73;
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
        }
        AndroidBackKeyManager__AddBackBtn(v48, 0LL);
LABEL_72:
        this->fields.state = 1;
        v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v49, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
        break;
      case 5:
        v41 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12540/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, 0LL);
        if ( !v41 )
          goto LABEL_73;
        UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
        v42 = this->fields.messageLabel;
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(
                                                   v43,
                                                   (Il2CppObject *)class1,
                                                   (Il2CppObject *)class2,
                                                   0LL);
        if ( !v42 )
          goto LABEL_73;
        v39 = (System_String_o *)gameObject;
        v40 = v42;
        goto LABEL_42;
      default:
        goto LABEL_50;
    }
  }
}


void __fastcall SupportSelectConfirmMenu__add_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmMenu_o *v11; // x0
  SupportSelectConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AE7F & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418AE7F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportSelectConfirmMenu__remove_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418AE80 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418AE80 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectConfirmMenu_CallbackFunc__BeginInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_41847CC & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41847CC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc__Invoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportSelectConfirmMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SupportSelectConfirmMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SupportSelectConfirmMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportSelectConfirmMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}