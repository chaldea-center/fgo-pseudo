void __fastcall ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_418A131 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A131 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeUserNameWindow__Callback(
        ChangeUserNameWindow_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ChangeUserNameWindow_CallbackFunc_o *v9; // x20
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    ChangeUserNameWindow_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_29471444(this, 0LL, v2);
}


void __fastcall ChangeUserNameWindow__Close_29471444(
        ChangeUserNameWindow_o *this,
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

  if ( (byte_418A12D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ChangeUserNameWindow_EndClose__, v10);
    byte_418A12D = 1;
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
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ChangeUserNameWindow__EndClose(ChangeUserNameWindow_o *this, const MethodInfo *method)
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

  ChangeUserNameWindow__Init(this, method);
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


void __fastcall ChangeUserNameWindow__EndOpen(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void __fastcall ChangeUserNameWindow__Init(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow__OnChangeInput(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v7; // x0
  int32_t v8; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  UIButtonColor_o *submitBtn; // x19
  int v12; // s0
  System_String_o *v16; // x0

  if ( (byte_418A12B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418A12B = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_25;
  Text = UILineInput__GetText(nameInput, 0LL);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_25;
  v7 = System_String__Trim_44292864(Text, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v8, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v8 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_44377880(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    nameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( nameInput )
    {
      v16 = System_String__Trim_44292864((System_String_o *)nameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v16, 0LL);
      goto LABEL_13;
    }
LABEL_25:
    sub_B2C434(nameInput, method);
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)nameInput, !IsNullOrEmpty, 0LL);
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_25;
  ((void (__fastcall *)(UILineInput_o *, bool, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    !IsNullOrEmpty,
    nameInput->klass[1]._1.byval_arg.data);
  submitBtn = (UIButtonColor_o *)this->fields.submitBtn;
  if ( IsNullOrEmpty )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( !submitBtn )
      goto LABEL_25;
  }
  else
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( !submitBtn )
      goto LABEL_25;
  }
  UIButtonColor__set_defaultColor(submitBtn, *(UnityEngine_Color_o *)&v12, 0LL);
}


void __fastcall ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418A12F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A12F = 1;
  }
  ChangeUserNameWindow__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall ChangeUserNameWindow__OnClickDecide(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILineInput_o *submitBtn; // x0
  System_String_o *Text; // x20
  System_String_o *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_418A12E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A12E = 1;
  }
  submitBtn = (UILineInput_o *)this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_14;
  if ( (((__int64 (__fastcall *)(UILineInput_o *, const char *))submitBtn->klass[1]._1.gc_desc)(
          submitBtn,
          submitBtn->klass[1]._1.name) & 1) != 0 )
  {
    submitBtn = this->fields.nameInput;
    if ( submitBtn )
    {
      Text = UILineInput__GetText(submitBtn, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v6 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
      ChangeUserNameWindow__Callback(this, 1, v6, v7);
      return;
    }
LABEL_14:
    sub_B2C434(submitBtn, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow__OpenChangeNameWindow(
        ChangeUserNameWindow_o *this,
        System_String_o *usrName,
        ChangeUserNameWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *submitTxtLb; // x22
  System_String_o *gameObject; // x0
  __int64 v17; // x1
  UILabel_o *cancelTxtLb; // x22
  const MethodInfo *v19; // x1
  UIButtonColor_o *submitBtn; // x22
  int v21; // s0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UIInput_o *inputTarget; // x21
  UIInput_OnValidate_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UILabel_o *titleTxtLb; // x21
  UILabel_o *titleLb; // x21
  System_Action_o *v41; // x20

  if ( (byte_418A12A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, usrName);
    sub_B2C35C(&Method_ChangeUserNameWindow_EndOpen__, v7);
    sub_B2C35C(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UIInput_OnValidate_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_2955/*"CHANGE_NAME_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_2959/*"CHANGE_TITLE"*/, v14);
    byte_418A12A = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !submitTxtLb )
    goto LABEL_17;
  UILabel__set_text(submitTxtLb, gameObject, 0LL);
  cancelTxtLb = this->fields.cancelTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelTxtLb )
    goto LABEL_17;
  UILabel__set_text(cancelTxtLb, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ChangeUserNameWindow__resetInputVal(this, v19);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_17;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer))gameObject->klass->vtable._5_Clone.method)(
    gameObject,
    0LL,
    gameObject->klass->vtable._6_GetTypeCode.methodPtr);
  submitBtn = (UIButtonColor_o *)this->fields.submitBtn;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !submitBtn )
    goto LABEL_17;
  UIButtonColor__set_defaultColor(submitBtn, *(UnityEngine_Color_o *)&v21, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  inputTarget = this->fields.inputTarget;
  v32 = (UIInput_OnValidate_o *)sub_B2C42C(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v32, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_17;
  inputTarget->fields.onValidate = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  titleTxtLb = this->fields.titleTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"CHANGE_TITLE"*/, 0LL);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, gameObject, 0LL),
        titleLb = this->fields.titleLb,
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"CHANGE_NAME_TITLE"*/, 0LL),
        !titleLb)
    || (UILabel__set_text(titleLb, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.nameText) == 0LL) )
  {
LABEL_17:
    sub_B2C434(gameObject, v17);
  }
  UILabel__set_text((UILabel_o *)gameObject, usrName, 0LL);
  this->fields.state = 1;
  v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall ChangeUserNameWindow__add_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  ChangeUserNameWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418A128 & 1) == 0 )
  {
    sub_B2C35C(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_418A128 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ChangeUserNameWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ChangeUserNameWindow__get_closeBtnPath(
        ChangeUserNameWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A130 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2742/*"BaseWindow/CancleBtn"*/, method);
    byte_418A130 = 1;
  }
  return (System_String_o *)StringLiteral_2742/*"BaseWindow/CancleBtn"*/;
}


void __fastcall ChangeUserNameWindow__remove_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418A129 & 1) == 0 )
  {
    sub_B2C35C(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_418A129 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ChangeUserNameWindow__Init(v11, v12);
}


void __fastcall ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_418A12C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A12C = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_B2C434(0LL, method);
  UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow_CallbackFunc___ctor(
        ChangeUserNameWindow_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall ChangeUserNameWindow_CallbackFunc__BeginInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_4184EC4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4184EC4 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow_CallbackFunc__Invoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ChangeUserNameWindow_CallbackFunc_o **v9; // x26
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
  ChangeUserNameWindow_CallbackFunc_o *v21; // x8
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
  ChangeUserNameWindow_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

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
    v9 = (ChangeUserNameWindow_CallbackFunc_o **)(v4 + 32);
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