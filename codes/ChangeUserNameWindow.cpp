void __fastcall ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB6EC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB6EC = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    ChangeUserNameWindow_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_30565472(this, 0LL, v2);
}


void __fastcall ChangeUserNameWindow__Close_30565472(
        ChangeUserNameWindow_o *this,
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
  System_Action_o *v13; // x20

  if ( (byte_42EB6E8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ChangeUserNameWindow_EndClose__, v10, v11, v12);
    byte_42EB6E8 = 1;
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
  this->fields.state = 3;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow__OnChangeInput(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v13; // x0
  int32_t v14; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  UIButtonColor_o *submitBtn; // x19
  int v18; // s0
  System_String_o *v22; // x0

  if ( (byte_42EB6E6 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EB6E6 = 1;
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
  v13 = System_String__Trim_44565120(Text, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v14 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v14, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v14 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_44650136(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    nameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( nameInput )
    {
      v22 = System_String__Trim_44565120((System_String_o *)nameInput, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v22, 0LL);
      goto LABEL_13;
    }
LABEL_25:
    sub_B5D69C(nameInput, method);
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
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_gray(0LL);
    if ( !submitBtn )
      goto LABEL_25;
  }
  else
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( !submitBtn )
      goto LABEL_25;
  }
  UIButtonColor__set_defaultColor(submitBtn, *(UnityEngine_Color_o *)&v18, 0LL);
}


void __fastcall ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EB6EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB6EA = 1;
  }
  ChangeUserNameWindow__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v3);
}


void __fastcall ChangeUserNameWindow__OnClickDecide(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILineInput_o *submitBtn; // x0
  System_String_o *Text; // x20
  System_String_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_42EB6E9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB6E9 = 1;
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
      v10 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
      ChangeUserNameWindow__Callback(this, 1, v10, v11);
      return;
    }
LABEL_14:
    sub_B5D69C(submitBtn, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UILabel_o *submitTxtLb; // x22
  System_String_o *gameObject; // x0
  __int64 v33; // x1
  UILabel_o *cancelTxtLb; // x22
  const MethodInfo *v35; // x1
  UIButtonColor_o *submitBtn; // x22
  int v37; // s0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct UIInput_o *inputTarget; // x21
  UIInput_OnValidate_o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UILabel_o *titleTxtLb; // x21
  UILabel_o *titleLb; // x21
  System_Action_o *v57; // x20

  if ( (byte_42EB6E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)usrName, (_DWORD)callback, method);
    sub_B5D5C4(&Method_ChangeUserNameWindow_EndOpen__, v7, v8, v9);
    sub_B5D5C4(&Method_EmojiUtility_ValidateNameText__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UIInput_OnValidate_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3014/*"CHANGE_NAME_TITLE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3018/*"CHANGE_TITLE"*/, v28, v29, v30);
    byte_42EB6E5 = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !submitTxtLb )
    goto LABEL_17;
  UILabel__set_text(submitTxtLb, gameObject, 0LL);
  cancelTxtLb = this->fields.cancelTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelTxtLb )
    goto LABEL_17;
  UILabel__set_text(cancelTxtLb, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ChangeUserNameWindow__resetInputVal(this, v35);
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
  *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_gray(0LL);
  if ( !submitBtn )
    goto LABEL_17;
  UIButtonColor__set_defaultColor(submitBtn, *(UnityEngine_Color_o *)&v37, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  inputTarget = this->fields.inputTarget;
  v48 = (UIInput_OnValidate_o *)sub_B5D694(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v48, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_17;
  inputTarget->fields.onValidate = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  titleTxtLb = this->fields.titleTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"CHANGE_TITLE"*/, 0LL);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, gameObject, 0LL),
        titleLb = this->fields.titleLb,
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"CHANGE_NAME_TITLE"*/, 0LL),
        !titleLb)
    || (UILabel__set_text(titleLb, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.nameText) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(gameObject, v33);
  }
  UILabel__set_text((UILabel_o *)gameObject, usrName, 0LL);
  this->fields.state = 1;
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


void __fastcall ChangeUserNameWindow__add_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ChangeUserNameWindow_o *v12; // x0
  ChangeUserNameWindow_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB6E3 & 1) == 0 )
  {
    sub_B5D5C4(&ChangeUserNameWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB6E3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v9->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ChangeUserNameWindow__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall ChangeUserNameWindow__get_closeBtnPath(
        ChangeUserNameWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB6EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2796/*"BaseWindow/CancleBtn"*/, (_DWORD)method, v2, v3);
    byte_42EB6EB = 1;
  }
  return (System_String_o *)StringLiteral_2796/*"BaseWindow/CancleBtn"*/;
}


void __fastcall ChangeUserNameWindow__remove_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ChangeUserNameWindow_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB6E4 & 1) == 0 )
  {
    sub_B5D5C4(&ChangeUserNameWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB6E4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v9->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ChangeUserNameWindow__Init(v12, v13);
}


void __fastcall ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UIInput_o *inputTarget; // x0

  if ( (byte_42EB6E7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB6E7 = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5E4C & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)changeName, callback);
    byte_42E5E4C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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