void __fastcall SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC970 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC970 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    SupportDeckNameInputMenu_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Close(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportDeckNameInputMenu__Close_32796964(this, 0LL, v2);
}


void __fastcall SupportDeckNameInputMenu__Close_32796964(
        SupportDeckNameInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v18; // x20

  if ( (byte_42EC96A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v10, v11, v12);
    sub_B5D5C4(&Method_SupportDeckNameInputMenu_EndClose__, v13, v14, v15);
    byte_42EC96A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B5D69C(inputTarget, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0LL);
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_42EC969 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    byte_42EC969 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     inputTarget,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B5D69C(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0LL);
  }
}


void __fastcall SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42EC965 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    byte_42EC965 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B5D69C(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EC967 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC967 = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_42EC96C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EC96C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v8);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EC96D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EC96D = 1;
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
      sub_B5D69C(0LL, v8);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    SupportDeckNameInputMenu__OnChangeInput(this, v10);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *changeName; // x20
  System_String_o *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_42EC96B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC96B = 1;
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
    v9 = LocalizationManager__ReplaceNameTag(changeName, 1, 0LL);
    SupportDeckNameInputMenu__Callback(this, 1, v9, v10);
  }
}


void __fastcall SupportDeckNameInputMenu__OnClickInit(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EC96E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC96E = 1;
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
      sub_B5D69C(0LL, v5);
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v7);
  }
}


void __fastcall SupportDeckNameInputMenu__Open(
        SupportDeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initLabel; // x21
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v73; // x21
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v82; // x20

  if ( (byte_42EC966 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)deckName, (_DWORD)initName, callback);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v9, v10, v11);
    sub_B5D5C4(&Method_EmojiUtility_ValidateNameText__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UIInput_OnValidate_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SupportDeckNameInputMenu_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12692/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12693/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12696/*"SUPPORT_SELECT_NAME_CLEAR"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12677/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, v39, v40, v41);
    byte_42EC966 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)deckName,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.baseName = deckName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)deckName,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.initName = initName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.initName,
    (System_Int32_array **)initName,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12693/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12692/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_19;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12696/*"SUPPORT_SELECT_NAME_CLEAR"*/, 0LL);
  if ( !clearLabel )
    goto LABEL_19;
  UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
  initLabel = this->fields.initLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12677/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, 0LL);
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
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v73 = (UIInput_OnValidate_o *)sub_B5D694(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v73, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_19;
  inputTarget->fields.onValidate = v73;
  sub_B5D560(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(gameObject, v43);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
}


void __fastcall SupportDeckNameInputMenu__add_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportDeckNameInputMenu_o *v12; // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC963 & 1) == 0 )
  {
    sub_B5D5C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC963 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v9->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportDeckNameInputMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *Text; // x21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UILineInput_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_o **p_changeName; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  int32_t v20; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v23; // x0
  _BOOL4 v24; // w8

  Text = initName;
  if ( (byte_42EC968 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)initName, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EC968 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_21;
  IsNullOrEmpty = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_24;
  v18 = System_String__Trim_44565120((System_String_o *)IsNullOrEmpty, 0LL);
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_21;
  IsNullOrEmpty = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_21;
  v19 = *p_changeName;
  if ( !v19 )
    goto LABEL_24;
  if ( v19->fields.m_stringLength >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v19, v20, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v20 >= v19->fields.m_stringLength )
        goto LABEL_16;
    }
LABEL_21:
    LOBYTE(v24) = 0;
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
    sub_B5D69C(IsNullOrEmpty, v10);
  v23 = System_String__Trim_44565120((System_String_o *)IsNullOrEmpty, 0LL);
  v24 = !System_String__IsNullOrEmpty(v23, 0LL);
LABEL_22:
  IsNullOrEmpty = (UILineInput_o *)this->fields.decideButton;
  if ( !IsNullOrEmpty )
    goto LABEL_24;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, void *))IsNullOrEmpty->klass[1]._1.namespaze)(
    IsNullOrEmpty,
    v24,
    IsNullOrEmpty->klass[1]._1.byval_arg.data);
}


System_String_o *__fastcall SupportDeckNameInputMenu__get_closeBtnPath(
        SupportDeckNameInputMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC96F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2793/*"BaseWindow/ButtonRoot/CancleButton"*/, (_DWORD)method, v2, v3);
    byte_42EC96F = 1;
  }
  return (System_String_o *)StringLiteral_2793/*"BaseWindow/ButtonRoot/CancleButton"*/;
}


void __fastcall SupportDeckNameInputMenu__remove_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportDeckNameInputMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC964 & 1) == 0 )
  {
    sub_B5D5C4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC964 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v9->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportDeckNameInputMenu__Init(v12, v13);
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
  sub_B5D560(
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E647F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)changeName, callback);
    byte_42E647F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, result, changeName);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v11, v13);
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