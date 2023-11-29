void __fastcall SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD4E6 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD4E6 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__Callback(
        SupportDeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v9; // x20
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    SupportDeckNameInputMenu_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Close(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportDeckNameInputMenu__Close_31160248(this, 0LL, v2);
}


void __fastcall SupportDeckNameInputMenu__Close_31160248(
        SupportDeckNameInputMenu_o *this,
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

  if ( (byte_40FD4E0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_SupportDeckNameInputMenu_EndClose__, v11);
    byte_40FD4E0 = 1;
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
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
}


void __fastcall SupportDeckNameInputMenu__EndClose(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
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

  SupportDeckNameInputMenu__Init(this, method);
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


void __fastcall SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40FD4DF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40FD4DF = 1;
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


void __fastcall SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40FD4DB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40FD4DB = 1;
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


void __fastcall SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FD4DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FD4DD = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1, v2);
}


void __fastcall SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x3

  if ( (byte_40FD4E2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FD4E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1, v4);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40FD4E3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FD4E3 = 1;
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
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1, 0LL);
    SupportDeckNameInputMenu__OnChangeInput(this, v5);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *changeName; // x20
  System_String_o *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40FD4E1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD4E1 = 1;
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
    SupportDeckNameInputMenu__Callback(this, 1, v5, v6);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickInit(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FD4E4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4E4 = 1;
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
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v4);
  }
}


void __fastcall SupportDeckNameInputMenu__Open(
        SupportDeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
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
  UILabel_o *clearLabel; // x21
  System_String_o *v50; // x0
  UILabel_o *initLabel; // x21
  System_String_o *v52; // x0
  UIInput_o *inputTarget; // x0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UIInput_o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  UIInput_OnValidate_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UILabel_o *decideLabel; // x20
  System_String_o *v69; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v71; // x0
  struct UICommonButton_o *decideButton; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20

  if ( (byte_40FD4DC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, deckName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v9);
    sub_B16FFC(&Method_EmojiUtility_ValidateNameText__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UIInput_OnValidate_TypeInfo, v12);
    sub_B16FFC(&Method_SupportDeckNameInputMenu_EndOpen__, v13);
    sub_B16FFC(&StringLiteral_12488, v14);
    sub_B16FFC(&StringLiteral_12489, v15);
    sub_B16FFC(&StringLiteral_12492, v16);
    sub_B16FFC(&StringLiteral_3253, v17);
    sub_B16FFC(&StringLiteral_3251, v18);
    sub_B16FFC(&StringLiteral_12473, v19);
    byte_40FD4DC = 1;
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
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12489, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, v46, 0LL);
  explanationLabel = this->fields.explanationLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12488, 0LL);
  if ( !explanationLabel )
    goto LABEL_19;
  UILabel__set_text(explanationLabel, v48, 0LL);
  clearLabel = this->fields.clearLabel;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12492, 0LL);
  if ( !clearLabel )
    goto LABEL_19;
  UILabel__set_text(clearLabel, v50, 0LL);
  initLabel = this->fields.initLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12473, 0LL);
  if ( !initLabel )
    goto LABEL_19;
  UILabel__set_text(initLabel, v52, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_19;
  UIInput__set_value(inputTarget, deckName, 0LL);
  v54 = (UnityEngine_Component_o *)this->fields.inputTarget;
  if ( !v54 )
    goto LABEL_19;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v54,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  v56 = this->fields.inputTarget;
  v61 = (UIInput_OnValidate_o *)sub_B170CC(UIInput_OnValidate_TypeInfo, v57, v58, v59, v60);
  UIInput_OnValidate___ctor(v61, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !v56 )
    goto LABEL_19;
  v56->fields.onValidate = v61;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v56->fields.onValidate,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  decideLabel = this->fields.decideLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v69, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v71, 0LL), (decideButton = this->fields.decideButton) == 0LL) )
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
  System_Action___ctor(v77, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall SupportDeckNameInputMenu__add_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FD4D9 & 1) == 0 )
  {
    sub_B16FFC(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_40FD4D9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportDeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  System_String_o *Text; // x21
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UILineInput_o *nameInput; // x0
  System_String_o **p_changeName; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  int32_t v16; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  _BOOL4 v21; // w8
  struct UICommonButton_o *decideButton; // x0

  Text = initName;
  if ( (byte_40FD4DE & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, initName);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FD4DE = 1;
  }
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
  {
    nameInput = this->fields.nameInput;
    if ( !nameInput )
      goto LABEL_24;
    Text = UILineInput__GetText(nameInput, 0LL);
  }
  else if ( !this )
  {
    goto LABEL_24;
  }
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_21;
  if ( !*p_changeName )
    goto LABEL_24;
  v14 = System_String__Trim_43731064(*p_changeName, 0LL);
  if ( System_String__op_Equality(v14, (System_String_o *)StringLiteral_1, 0LL)
    || System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL) )
  {
    goto LABEL_21;
  }
  v15 = *p_changeName;
  if ( !v15 )
    goto LABEL_24;
  if ( v15->fields.m_stringLength >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v15, v16, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v16 >= v15->fields.m_stringLength )
        goto LABEL_16;
    }
LABEL_21:
    LOBYTE(v21) = 0;
    goto LABEL_22;
  }
LABEL_16:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !v19 )
LABEL_24:
    sub_B170D4();
  v20 = System_String__Trim_43731064(v19, 0LL);
  v21 = !System_String__IsNullOrEmpty(v20, 0LL);
LABEL_22:
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_24;
  ((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
    decideButton,
    v21,
    decideButton->klass->vtable._6_OnInit.methodPtr);
}


System_String_o *__fastcall SupportDeckNameInputMenu__get_closeBtnPath(
        SupportDeckNameInputMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FD4E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2727, method);
    byte_40FD4E5 = 1;
  }
  return (System_String_o *)StringLiteral_2727;
}


void __fastcall SupportDeckNameInputMenu__remove_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FD4DA & 1) == 0 )
  {
    sub_B16FFC(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_40FD4DA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  SupportDeckNameInputMenu__Init(v11, v12);
}


void __fastcall SupportDeckNameInputMenu__setCallbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

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
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportDeckNameInputMenu_CallbackFunc___ctor(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall SupportDeckNameInputMenu_CallbackFunc__BeginInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_40F7A98 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7A98 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportDeckNameInputMenu_CallbackFunc__Invoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  SupportDeckNameInputMenu_CallbackFunc_o **v9; // x26
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
  SupportDeckNameInputMenu_CallbackFunc_o *v20; // x8
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
  SupportDeckNameInputMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v9 = (SupportDeckNameInputMenu_CallbackFunc_o **)(v4 + 32);
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