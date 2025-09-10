void DeckNameInputMenu___ctor(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B50 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C22B50 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DeckNameInputMenu__Callback(
        DeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct DeckNameInputMenu_CallbackFunc_o *v5; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)name, method);
    ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      name,
      v5->fields.method);
  }
}


void DeckNameInputMenu__ChangeInput(DeckNameInputMenu_o *this, System_String_o *inputName, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_changeName; // x20
  __int64 v7; // x1
  System_String_o *decideButton; // x0
  System_String_o *v9; // x0
  _BOOL4 v10; // w8
  System_String_o *v11; // x20
  int32_t v12; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v15; // x0

  if ( (byte_4C22B48 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22B48 = 1;
  }
  this->fields.changeName = inputName;
  p_changeName = &this->fields.changeName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.changeName, (int32_t)inputName, (int32_t)method, v3);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0) )
    goto LABEL_7;
  decideButton = *p_changeName;
  if ( !*p_changeName )
    goto LABEL_19;
  v9 = System_String__Trim(decideButton, 0);
  if ( System_String__op_Equality(v9, (System_String_o *)StringLiteral_1/*""*/, 0) )
    goto LABEL_7;
  decideButton = (System_String_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0);
  if ( ((unsigned __int8)decideButton & 1) != 0 )
    goto LABEL_7;
  v11 = *p_changeName;
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._stringLength >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v11, v12, 0);
      if ( EmojiUtility__IsEmojiChar(Chars, 0) )
        break;
      if ( ++v12 >= v11->fields._stringLength )
        goto LABEL_15;
    }
LABEL_7:
    LOBYTE(v10) = 0;
    goto LABEL_8;
  }
LABEL_15:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__ReplaceNameTag(name, 0, 0);
  if ( !decideButton )
LABEL_19:
    sub_1C2D6EC(decideButton, v7);
  v15 = System_String__Trim(decideButton, 0);
  v10 = !System_String__IsNullOrEmpty(v15, 0);
LABEL_8:
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_19;
  ((void (__fastcall *)(System_String_o *, _BOOL4, const MethodInfo *))decideButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    decideButton,
    v10,
    decideButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
}


void DeckNameInputMenu__Close(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckNameInputMenu__Close_33794072(this, 0, v2);
}


void DeckNameInputMenu__Close_33794072(DeckNameInputMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v8; // x20

  if ( (byte_4C22B4A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&Method_DeckNameInputMenu_EndClose__);
    byte_4C22B4A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   inputTarget,
                                                   (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C2D6EC(inputTarget, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DeckNameInputMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void DeckNameInputMenu__EndClose(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DeckNameInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void DeckNameInputMenu__EndOpen(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_4C22B49 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C22B49 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     inputTarget,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C2D6EC(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0);
  }
}


void DeckNameInputMenu__Init(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C22B46 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C22B46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DeckNameInputMenu__OnChangeInput(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x1
  const MethodInfo *v5; // x2

  nameInput = this->fields.nameInput;
  if ( !nameInput )
    sub_1C2D6EC(0, method);
  Text = UILineInput__GetText(nameInput, 0);
  DeckNameInputMenu__ChangeInput(this, Text, v5);
}


void DeckNameInputMenu__OnClickCancel(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C22B4C & 1) == 0 )
  {
    sub_1C2D490(&Method_DeckNameInputMenu_OnClickCancel__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22B4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckNameInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_DeckNameInputMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    DeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v5);
  }
}


void DeckNameInputMenu__OnClickClear(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C22B4D & 1) == 0 )
  {
    sub_1C2D490(&Method_DeckNameInputMenu_OnClickClear__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22B4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckNameInputMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_DeckNameInputMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C2D6EC(0, v5);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0);
    DeckNameInputMenu__OnChangeInput(this, v7);
  }
}


void DeckNameInputMenu__OnClickDecide(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *changeName; // x20
  System_String_o *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4C22B4B & 1) == 0 )
  {
    sub_1C2D490(&Method_DeckNameInputMenu_OnClickDecide__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C22B4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckNameInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_DeckNameInputMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    changeName = this->fields.changeName;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__ReplaceNameTag(changeName, 1, 0);
    DeckNameInputMenu__Callback(this, 1, v6, v7);
  }
}


void DeckNameInputMenu__OnClickInit(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C22B4E & 1) == 0 )
  {
    sub_1C2D490(&Method_DeckNameInputMenu_OnClickInit__);
    byte_4C22B4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckNameInputMenu_OnClickInit__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickInit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_DeckNameInputMenu_OnClickInit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C2D6EC(0, v5);
    UIInput__set_value(inputTarget, this->fields.initName, 0);
    DeckNameInputMenu__ChangeInput(this, this->fields.initName, v7);
  }
}


void DeckNameInputMenu__Open(
        DeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        DeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  CGThumbnailListItem_o *inputTarget; // x20
  UIInput_OnValidate_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *initLabel; // x20
  System_Action_o *v29; // x20

  if ( (byte_4C22B47 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&Method_DeckNameInputMenu_EndOpen__);
    sub_1C2D490(&Method_EmojiUtility_ValidateNameText__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UIInput_OnValidate_TypeInfo);
    sub_1C2D490(&StringLiteral_10250/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_10254/*"PARTY_ORGANIZATION_NAME_INIT"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_10249/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_10253/*"PARTY_ORGANIZATION_NAME_CLEAR"*/);
    byte_4C22B47 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.changeName = deckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.changeName, (int32_t)deckName, v11, v12);
  this->fields.baseName = deckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseName, (int32_t)deckName, v13, v14);
  this->fields.initName = initName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.initName, (int32_t)initName, v15, v16);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10249/*"PARTY_ORGANIZATION_INPUT_DECK_NAME_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_18;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  UIInput__set_value((UIInput_o *)gameObject, deckName, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  inputTarget = (CGThumbnailListItem_o *)this->fields.inputTarget;
  v22 = (UIInput_OnValidate_o *)sub_1C2D6DC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v22, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_18;
  inputTarget[1].klass = (CGThumbnailListItem_c *)v22;
  sub_1C2D434(inputTarget + 1, (int32_t)v22, v23, v24);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_18;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_18;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_NAME_CLEAR"*/, 0);
  if ( !clearLabel
    || (UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0),
        initLabel = this->fields.initLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_NAME_INIT"*/, 0),
        !initLabel)
    || (UILabel__set_text(initLabel, (System_String_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(gameObject, v10);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))gameObject->klass[1]._1.name)(
    gameObject,
    0,
    gameObject->klass[1]._1.namespaze);
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_DeckNameInputMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0);
}


void DeckNameInputMenu__add_callbackFunc(
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

  if ( (byte_4C22B44 & 1) == 0 )
  {
    sub_1C2D490(&DeckNameInputMenu_CallbackFunc_TypeInfo);
    byte_4C22B44 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_1C2D9AC(v8);
  DeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *DeckNameInputMenu__get_closeBtnPath(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B4F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3071/*"BaseWindow/CancleButton"*/);
    byte_4C22B4F = 1;
  }
  return (System_String_o *)StringLiteral_3071/*"BaseWindow/CancleButton"*/;
}


void DeckNameInputMenu__remove_callbackFunc(
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

  if ( (byte_4C22B45 & 1) == 0 )
  {
    sub_1C2D490(&DeckNameInputMenu_CallbackFunc_TypeInfo);
    byte_4C22B45 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_1C2D9AC(v8);
  DeckNameInputMenu__Init(v11, v12);
}


void DeckNameInputMenu_CallbackFunc___ctor(
        DeckNameInputMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6BC74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6BC1C;
}


System_IAsyncResult_o *DeckNameInputMenu_CallbackFunc__BeginInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4C22B51 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22B51 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, changeName, callback, object);
  v11[1] = changeName;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v11, callback, object);
}


void DeckNameInputMenu_CallbackFunc__EndInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void DeckNameInputMenu_CallbackFunc__Invoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    changeName,
    this->fields.method);
}