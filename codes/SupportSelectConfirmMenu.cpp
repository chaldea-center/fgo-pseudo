void __fastcall SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD504 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD504 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SupportSelectConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_31169860(this, 0LL, v2);
}


void __fastcall SupportSelectConfirmMenu__Close_31169860(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD500 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SupportSelectConfirmMenu_EndClose__, v10);
    byte_40FD500 = 1;
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
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *decideLabel; // x0

  if ( (byte_40FD4FD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD4FD = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmMenu__OnCancelClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD502 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD502 = 1;
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

  if ( (byte_40FD501 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD501 = 1;
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

  if ( (byte_40FD503 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD503 = 1;
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

  if ( (byte_40FD4FE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, *(_QWORD *)&kind);
    byte_40FD4FE = 1;
  }
  SupportSelectConfirmMenu__Open_31168264(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open_31168264(
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
  UILabel_o *titleLabel; // x20
  System_String_o *v31; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v33; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v39; // x0
  bool v40; // w1
  UILabel_o *v41; // x20
  System_String_o *v42; // x0
  struct UILabel_o *v43; // x20
  __int64 *v44; // x8
  UILabel_o *v45; // x20
  System_String_o *v46; // x0
  UILabel_o *v47; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x1
  UILabel_o *v51; // x0
  UILabel_o *v52; // x22
  System_String_o *v53; // x0
  struct UILabel_o *v54; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Component_o *v61; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v63; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v65; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v67; // x0
  UnityEngine_Component_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x20
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x20
  System_Action_o *v80; // x20

  if ( (byte_40FD4FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SupportSelectConfirmMenu_EndOpen__, v15);
    sub_B16FFC(&StringLiteral_12484/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_12447/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, v17);
    sub_B16FFC(&StringLiteral_12486/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/, v18);
    sub_B16FFC(&StringLiteral_12501/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, v19);
    sub_B16FFC(&StringLiteral_12496/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, v20);
    sub_B16FFC(&StringLiteral_12493/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, v21);
    sub_B16FFC(&StringLiteral_12494/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, v22);
    sub_B16FFC(&StringLiteral_12483/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, v23);
    sub_B16FFC(&StringLiteral_12502/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, v24);
    sub_B16FFC(&StringLiteral_12497/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/, v25);
    sub_B16FFC(&StringLiteral_12500/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, v26);
    sub_B16FFC(&StringLiteral_12448/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/, v27);
    sub_B16FFC(&StringLiteral_12485/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, v28);
    byte_40FD4FF = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      sub_B170D4();
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
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12493/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_73;
        UILabel__set_text(titleLabel, v31, 0LL);
        messageLabel = this->fields.messageLabel;
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12494/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, 0LL);
        if ( !messageLabel )
          goto LABEL_73;
        UILabel__set_text(messageLabel, v33, 0LL);
        closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !closeButton )
          goto LABEL_73;
        v35 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
        if ( !v35 )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(v35, 1, 0LL);
        cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !cancelButton )
          goto LABEL_73;
        v37 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
        if ( !v37 )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(v37, 0, 0LL);
        decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( !decideButton )
          goto LABEL_73;
        v39 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
        if ( !v39 )
          goto LABEL_73;
        v40 = 0;
        goto LABEL_49;
      case 2:
        v41 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12496/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, 0LL);
        if ( !v41 )
          goto LABEL_73;
        UILabel__set_text(v41, v42, 0LL);
        v43 = this->fields.messageLabel;
        v44 = &StringLiteral_12497/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/;
        goto LABEL_34;
      case 3:
        v45 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, 0LL);
        if ( !v45 )
          goto LABEL_73;
        UILabel__set_text(v45, v46, 0LL);
        v43 = this->fields.messageLabel;
        v44 = &StringLiteral_12486/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/;
        goto LABEL_34;
      case 4:
        v47 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, 0LL);
        if ( !v47 )
          goto LABEL_73;
        UILabel__set_text(v47, v48, 0LL);
        v43 = this->fields.messageLabel;
        v44 = &StringLiteral_12448/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/;
LABEL_34:
        v49 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        if ( !v43 )
          goto LABEL_73;
        v50 = v49;
        v51 = v43;
LABEL_42:
        UILabel__set_text(v51, v50, 0LL);
        v57 = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !v57 )
          goto LABEL_73;
        v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
        if ( !v58 )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(v58, 0, 0LL);
        v59 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !v59 )
          goto LABEL_73;
        v60 = UnityEngine_Component__get_gameObject(v59, 0LL);
        if ( !v60 )
          goto LABEL_73;
        UnityEngine_GameObject__SetActive(v60, 1, 0LL);
        v61 = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( !v61 )
          goto LABEL_73;
        v39 = UnityEngine_Component__get_gameObject(v61, 0LL);
        if ( !v39 )
          goto LABEL_73;
        v40 = 1;
LABEL_49:
        UnityEngine_GameObject__SetActive(v39, v40, 0LL);
LABEL_50:
        closeLabel = this->fields.closeLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12501/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, 0LL);
        if ( !closeLabel )
          goto LABEL_73;
        UILabel__set_text(closeLabel, v63, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12500/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, 0LL);
        if ( !cancelLabel )
          goto LABEL_73;
        UILabel__set_text(cancelLabel, v65, 0LL);
        decideLabel = this->fields.decideLabel;
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12502/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_73;
        UILabel__set_text(decideLabel, v67, 0LL);
        v68 = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !v68 )
          goto LABEL_73;
        v69 = UnityEngine_Component__get_gameObject(v68, 0LL);
        if ( !v69 )
          goto LABEL_73;
        if ( !UnityEngine_GameObject__get_activeSelf(v69, 0LL) )
          goto LABEL_64;
        v70 = (UnityEngine_Component_o *)this->fields.closeButton;
        if ( !v70 )
          goto LABEL_73;
        v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
        if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
        }
        AndroidBackKeyManager__AddBackBtn(v71, 0LL);
LABEL_64:
        v72 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !v72 )
          goto LABEL_73;
        v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
        if ( !v73 )
          goto LABEL_73;
        if ( !UnityEngine_GameObject__get_activeSelf(v73, 0LL) )
          goto LABEL_72;
        v78 = (UnityEngine_Component_o *)this->fields.cancelButton;
        if ( !v78 )
          goto LABEL_73;
        v79 = UnityEngine_Component__get_gameObject(v78, 0LL);
        if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
        }
        AndroidBackKeyManager__AddBackBtn(v79, 0LL);
LABEL_72:
        this->fields.state = 1;
        v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v74, v75, v76, v77);
        System_Action___ctor(v80, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
        break;
      case 5:
        v52 = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, 0LL);
        if ( !v52 )
          goto LABEL_73;
        UILabel__set_text(v52, v53, 0LL);
        v54 = this->fields.messageLabel;
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, 0LL);
        v56 = System_String__Format_43739268(v55, (Il2CppObject *)class1, (Il2CppObject *)class2, 0LL);
        if ( !v54 )
          goto LABEL_73;
        v50 = v56;
        v51 = v54;
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

  if ( (byte_40FD4FB & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD4FB = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FD4FC & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD4FC = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportSelectConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
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
  if ( (byte_40F7A9B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7A9B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc__Invoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportSelectConfirmMenu_CallbackFunc_o **v7; // x25
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
  SupportSelectConfirmMenu_CallbackFunc_o *v18; // x8
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
  SupportSelectConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (SupportSelectConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}