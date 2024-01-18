void __fastcall SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418AE6A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE6A = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    SupportDeckNameInputMenu_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Close(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportDeckNameInputMenu__Close_31142960(this, 0LL, v2);
}


void __fastcall SupportDeckNameInputMenu__Close_31142960(
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
  __int64 v12; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v14; // x20

  if ( (byte_418AE64 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_SupportDeckNameInputMenu_EndClose__, v11);
    byte_418AE64 = 1;
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
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   inputTarget,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(inputTarget, v12);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0LL);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall SupportDeckNameInputMenu__EndClose(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
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

  SupportDeckNameInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_418AE63 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_418AE63 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     inputTarget,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B2C434(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_418AE5F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_418AE5F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418AE61 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AE61 = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x3

  if ( (byte_418AE66 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418AE66 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v4);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v6; // x1

  if ( (byte_418AE67 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418AE67 = 1;
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
      sub_B2C434(0LL, v4);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    SupportDeckNameInputMenu__OnChangeInput(this, v6);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *changeName; // x20
  System_String_o *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_418AE65 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418AE65 = 1;
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
  __int64 v3; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v5; // x2

  if ( (byte_418AE68 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE68 = 1;
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
      sub_B2C434(0LL, v3);
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v5);
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
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initLabel; // x21
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v60; // x20

  if ( (byte_418AE60 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, deckName);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v9);
    sub_B2C35C(&Method_EmojiUtility_ValidateNameText__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UIInput_OnValidate_TypeInfo, v12);
    sub_B2C35C(&Method_SupportDeckNameInputMenu_EndOpen__, v13);
    sub_B2C35C(&StringLiteral_12544/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, v14);
    sub_B2C35C(&StringLiteral_12545/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_12548/*"SUPPORT_SELECT_NAME_CLEAR"*/, v16);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_12529/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, v19);
    byte_418AE60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)deckName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.baseName = deckName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)deckName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.initName = initName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.initName,
    (System_Int32_array **)initName,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12545/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12544/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_19;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12548/*"SUPPORT_SELECT_NAME_CLEAR"*/, 0LL);
  if ( !clearLabel )
    goto LABEL_19;
  UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
  initLabel = this->fields.initLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12529/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, 0LL);
  if ( !initLabel )
    goto LABEL_19;
  UILabel__set_text(initLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_19;
  UIInput__set_value((UIInput_o *)gameObject, deckName, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v51 = (UIInput_OnValidate_o *)sub_B2C42C(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v51, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_19;
  inputTarget->fields.onValidate = v51;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_19:
    sub_B2C434(gameObject, v21);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  v60 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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

  if ( (byte_418AE5D & 1) == 0 )
  {
    sub_B2C35C(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_418AE5D = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportDeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  System_String_o *Text; // x21
  __int64 v5; // x1
  UILineInput_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o **p_changeName; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  int32_t v17; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v20; // x0
  _BOOL4 v21; // w8

  Text = initName;
  if ( (byte_418AE62 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, initName);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AE62 = 1;
  }
  IsNullOrEmpty = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = this->fields.nameInput;
    if ( !IsNullOrEmpty )
      goto LABEL_24;
    Text = UILineInput__GetText(IsNullOrEmpty, 0LL);
  }
  else if ( !this )
  {
    goto LABEL_24;
  }
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_21;
  IsNullOrEmpty = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_24;
  v15 = System_String__Trim_44292864((System_String_o *)IsNullOrEmpty, 0LL);
  if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_21;
  IsNullOrEmpty = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_21;
  v16 = *p_changeName;
  if ( !v16 )
    goto LABEL_24;
  if ( v16->fields.m_stringLength >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v16, v17, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v17 >= v16->fields.m_stringLength )
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
  IsNullOrEmpty = (UILineInput_o *)LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !IsNullOrEmpty )
LABEL_24:
    sub_B2C434(IsNullOrEmpty, v7);
  v20 = System_String__Trim_44292864((System_String_o *)IsNullOrEmpty, 0LL);
  v21 = !System_String__IsNullOrEmpty(v20, 0LL);
LABEL_22:
  IsNullOrEmpty = (UILineInput_o *)this->fields.decideButton;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, void *))IsNullOrEmpty->klass[1]._1.namespaze)(
    IsNullOrEmpty,
    v21,
    IsNullOrEmpty->klass[1]._1.byval_arg.data);
}


System_String_o *__fastcall SupportDeckNameInputMenu__get_closeBtnPath(
        SupportDeckNameInputMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE69 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2739/*"BaseWindow/ButtonRoot/CancleButton"*/, method);
    byte_418AE69 = 1;
  }
  return (System_String_o *)StringLiteral_2739/*"BaseWindow/ButtonRoot/CancleButton"*/;
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

  if ( (byte_418AE5E & 1) == 0 )
  {
    sub_B2C35C(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_418AE5E = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(
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
  if ( (byte_41847C9 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41847C9 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, System_String_o *, _QWORD); // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, System_String_o *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  SupportDeckNameInputMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, System_String_o *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, result, changeName, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(result, changeName, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, result, changeName, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))v17)(
            v22,
            result,
            changeName,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))(*v22
                                                                             + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                             + 312))(
            v22,
            result,
            changeName,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_String_o *, __int64))v24)(v22, result, changeName, v23);
    goto LABEL_36;
  }
}