void __fastcall DeckNameInputMenu___ctor(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F5A7B & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F5A7B = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckNameInputMenu__Callback(
        DeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  DeckNameInputMenu_CallbackFunc_o *v9; // x20
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    DeckNameInputMenu_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall DeckNameInputMenu__ChangeInput(
        DeckNameInputMenu_o *this,
        System_String_o *inputName,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_o **p_changeName; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  int32_t v14; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  _BOOL4 v19; // w8
  struct UICommonButton_o *decideButton; // x0

  if ( (byte_40F5A73 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, inputName);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40F5A73 = 1;
  }
  this->fields.changeName = inputName;
  p_changeName = &this->fields.changeName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)inputName,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_17;
  if ( !*p_changeName )
    goto LABEL_20;
  v12 = System_String__Trim_43731064(*p_changeName, 0LL);
  if ( System_String__op_Equality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL) )
  {
    goto LABEL_17;
  }
  v13 = *p_changeName;
  if ( !v13 )
    goto LABEL_20;
  if ( v13->fields.m_stringLength >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v13, v14, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v14 >= v13->fields.m_stringLength )
        goto LABEL_12;
    }
LABEL_17:
    LOBYTE(v19) = 0;
    goto LABEL_18;
  }
LABEL_12:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !v17 )
LABEL_20:
    sub_B170D4();
  v18 = System_String__Trim_43731064(v17, 0LL);
  v19 = !System_String__IsNullOrEmpty(v18, 0LL);
LABEL_18:
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_20;
  ((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
    decideButton,
    v19,
    decideButton->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall DeckNameInputMenu__Close(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckNameInputMenu__Close_16644864(this, 0LL, v2);
}


void __fastcall DeckNameInputMenu__Close_16644864(
        DeckNameInputMenu_o *this,
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
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40F5A75 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_DeckNameInputMenu_EndClose__, v11);
    byte_40F5A75 = 1;
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
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              inputTarget,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_DeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
}


void __fastcall DeckNameInputMenu__EndClose(DeckNameInputMenu_o *this, const MethodInfo *method)
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

  DeckNameInputMenu__Init(this, method);
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


void __fastcall DeckNameInputMenu__EndOpen(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40F5A74 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40F5A74 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                inputTarget,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL);
  }
}


void __fastcall DeckNameInputMenu__Init(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40F5A71 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40F5A71 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !inputTarget)
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              inputTarget,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckNameInputMenu__OnChangeInput(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x1
  const MethodInfo *v5; // x2

  nameInput = this->fields.nameInput;
  if ( !nameInput )
    sub_B170D4();
  Text = UILineInput__GetText(nameInput, 0LL);
  DeckNameInputMenu__ChangeInput(this, Text, v5);
}


void __fastcall DeckNameInputMenu__OnClickCancel(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x3

  if ( (byte_40F5A77 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F5A77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    DeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v4);
  }
}


void __fastcall DeckNameInputMenu__OnClickClear(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F5A78 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F5A78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_B170D4();
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    DeckNameInputMenu__OnChangeInput(this, v5);
  }
}


void __fastcall DeckNameInputMenu__OnClickDecide(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *changeName; // x20
  System_String_o *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F5A76 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F5A76 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    changeName = this->fields.changeName;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__ReplaceNameTag(changeName, 1, 0LL);
    DeckNameInputMenu__Callback(this, 1, v5, v6);
  }
}


void __fastcall DeckNameInputMenu__OnClickInit(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F5A79 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F5A79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_B170D4();
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    DeckNameInputMenu__ChangeInput(this, this->fields.initName, v4);
  }
}


void __fastcall DeckNameInputMenu__Open(
        DeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        DeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v46; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v48; // x0
  UIInput_o *inputTarget; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UIInput_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  UIInput_OnValidate_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UILabel_o *decideLabel; // x20
  System_String_o *v65; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v67; // x0
  UILabel_o *clearLabel; // x20
  System_String_o *v69; // x0
  UILabel_o *initLabel; // x20
  System_String_o *v71; // x0
  struct UICommonButton_o *decideButton; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20

  if ( (byte_40F5A72 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, deckName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v9);
    sub_B16FFC(&Method_DeckNameInputMenu_EndOpen__, v10);
    sub_B16FFC(&Method_EmojiUtility_ValidateNameText__, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UIInput_OnValidate_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_10322/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, v14);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B16FFC(&StringLiteral_10326/*"PARTY_ORGANIZATION_NAME_INIT"*/, v16);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_B16FFC(&StringLiteral_10321/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_EXPLANATION"*/, v18);
    sub_B16FFC(&StringLiteral_10325/*"PARTY_ORGANIZATION_NAME_CLEAR"*/, v19);
    byte_40F5A72 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)deckName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.baseName = deckName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)deckName,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.initName = initName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.initName,
    (System_Int32_array **)initName,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_10322/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, v46, 0LL);
  explanationLabel = this->fields.explanationLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10321/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_19;
  UILabel__set_text(explanationLabel, v48, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_19;
  UIInput__set_value(inputTarget, deckName, 0LL);
  v50 = (UnityEngine_Component_o *)this->fields.inputTarget;
  if ( !v50 )
    goto LABEL_19;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v50,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  v52 = this->fields.inputTarget;
  v57 = (UIInput_OnValidate_o *)sub_B170CC(UIInput_OnValidate_TypeInfo, v53, v54, v55, v56);
  UIInput_OnValidate___ctor(v57, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !v52 )
    goto LABEL_19;
  v52->fields.onValidate = v57;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v52->fields.onValidate,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  decideLabel = this->fields.decideLabel;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_19;
  UILabel__set_text(decideLabel, v65, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_19;
  UILabel__set_text(cancelLabel, v67, 0LL);
  clearLabel = this->fields.clearLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_NAME_CLEAR"*/, 0LL);
  if ( !clearLabel
    || (UILabel__set_text(clearLabel, v69, 0LL),
        initLabel = this->fields.initLabel,
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_NAME_INIT"*/, 0LL),
        !initLabel)
    || (UILabel__set_text(initLabel, v71, 0LL), (decideButton = this->fields.decideButton) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
    decideButton,
    0LL,
    decideButton->klass->vtable._6_OnInit.methodPtr);
  this->fields.state = 1;
  v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_DeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall DeckNameInputMenu__add_callbackFunc(
        DeckNameInputMenu_o *this,
        DeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckNameInputMenu_o *v11; // x0
  DeckNameInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F5A6F & 1) == 0 )
  {
    sub_B16FFC(&DeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_40F5A6F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_B173C8(v8);
  DeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall DeckNameInputMenu__get_closeBtnPath(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F5A7A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2731/*"BaseWindow/CancleButton"*/, method);
    byte_40F5A7A = 1;
  }
  return (System_String_o *)StringLiteral_2731/*"BaseWindow/CancleButton"*/;
}


void __fastcall DeckNameInputMenu__remove_callbackFunc(
        DeckNameInputMenu_o *this,
        DeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckNameInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F5A70 & 1) == 0 )
  {
    sub_B16FFC(&DeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_40F5A70 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_B173C8(v8);
  DeckNameInputMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckNameInputMenu_CallbackFunc___ctor(
        DeckNameInputMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall DeckNameInputMenu_CallbackFunc__BeginInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_40F8B4B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8B4B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall DeckNameInputMenu_CallbackFunc__EndInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckNameInputMenu_CallbackFunc__Invoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  DeckNameInputMenu_CallbackFunc_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, System_String_o *, _QWORD); // x0
  DeckNameInputMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, System_String_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  DeckNameInputMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (DeckNameInputMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, System_String_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, result, changeName);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(result, changeName, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, result, changeName, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
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
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))v16)(
            v21,
            result,
            changeName,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))(*v21
                                                                             + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                             + 312))(
            v21,
            result,
            changeName,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_String_o *, __int64))v23)(v21, result, changeName, v22);
    goto LABEL_36;
  }
}