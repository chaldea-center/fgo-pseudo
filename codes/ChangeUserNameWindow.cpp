void __fastcall ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4BAFB02 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BAFB02 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeUserNameWindow__Callback(
        ChangeUserNameWindow_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct ChangeUserNameWindow_CallbackFunc_o *v5; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C13CC8(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      name,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_32000976(this, 0LL, v2);
}


void __fastcall ChangeUserNameWindow__Close_32000976(
        ChangeUserNameWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BAFAFE & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_ChangeUserNameWindow_EndClose__, v5);
    byte_4BAFAFE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(&this->fields.closeCallbackFunc);
  this->fields.state = 3;
  v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ChangeUserNameWindow__EndClose(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeUserNameWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C13CC8(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
    sub_1C13F80(0LL, v4);
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
  float v11; // s0
  float v12; // s3
  float v13; // s1
  float v14; // s2
  System_String_o *v15; // x0

  if ( (byte_4BAFAFC & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BAFAFC = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_23;
  Text = UILineInput__GetText(nameInput, 0LL);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_23;
  v7 = System_String__Trim(Text, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v8, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v8 < Text->fields._stringLength );
  }
  if ( (System_String__IndexOf_62999520(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) & 0x80000000) == 0 )
  {
LABEL_12:
    IsNullOrEmpty = 1;
    goto LABEL_13;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
  if ( !nameInput )
LABEL_23:
    sub_1C13F80(nameInput, method);
  v15 = System_String__Trim((System_String_o *)nameInput, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v15, 0LL);
LABEL_13:
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)nameInput, !IsNullOrEmpty, 0LL);
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_23;
  ((void (__fastcall *)(UILineInput_o *, bool, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    !IsNullOrEmpty,
    nameInput->klass[1]._1.byval_arg.data);
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  v11 = 1.0;
  if ( IsNullOrEmpty )
    v11 = 0.5;
  if ( !nameInput )
    goto LABEL_23;
  v12 = 1.0;
  v13 = v11;
  v14 = v11;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)nameInput, *(UnityEngine_Color_o *)&v11, 0LL);
}


void __fastcall ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BAFB00 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BAFB00 = 1;
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4BAFAFF & 1) == 0 )
  {
    sub_1C13D24(&Method_ChangeUserNameWindow_OnClickDecide__, method);
    sub_1C13D24(&LocalizationManager_TypeInfo, v3);
    byte_4BAFAFF = 1;
  }
  submitBtn = (UILineInput_o *)this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(UILineInput_o *, const char *))submitBtn->klass[1]._1.gc_desc)(
          submitBtn,
          submitBtn->klass[1]._1.name) & 1) != 0 )
  {
    submitBtn = this->fields.nameInput;
    if ( submitBtn )
    {
      Text = UILineInput__GetText(submitBtn, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
      ChangeUserNameWindow__Callback(this, 1, v6, v7);
      return;
    }
LABEL_12:
    sub_1C13F80(submitBtn, method);
  }
  v8 = Method_ChangeUserNameWindow_OnClickDecide__;
  if ( (*((_BYTE *)Method_ChangeUserNameWindow_OnClickDecide__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C13D3C(Method_ChangeUserNameWindow_OnClickDecide__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
}


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
  struct UIInput_o *inputTarget; // x21
  UIInput_OnValidate_o *v21; // x22
  UILabel_o *titleTxtLb; // x21
  UILabel_o *titleLb; // x21
  System_Action_o *v24; // x20
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BAFAFB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, usrName);
    sub_1C13D24(&Method_ChangeUserNameWindow_EndOpen__, v7);
    sub_1C13D24(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&UIInput_OnValidate_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_3800/*"COMMON"*/, v11);
    sub_1C13D24(&StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, v12);
    sub_1C13D24(&StringLiteral_3475/*"CHANGE_GENDER_TITLE"*/, v13);
    sub_1C13D24(&StringLiteral_3479/*"CHANGE_SKILL_TITLE"*/, v14);
    byte_4BAFAFB = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON"*/, 0LL);
  if ( !submitTxtLb )
    goto LABEL_16;
  UILabel__set_text(submitTxtLb, gameObject, 0LL);
  cancelTxtLb = this->fields.cancelTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, 0LL);
  if ( !cancelTxtLb )
    goto LABEL_16;
  UILabel__set_text(cancelTxtLb, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  ChangeUserNameWindow__resetInputVal(this, v19);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer))gameObject->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
    gameObject,
    0LL,
    gameObject->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  v25.fields.r = 0.5;
  v25.fields.g = 0.5;
  v25.fields.b = 0.5;
  v25.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v25, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C13CC8(&this->fields.callbackFunc);
  inputTarget = this->fields.inputTarget;
  v21 = (UIInput_OnValidate_o *)sub_1C13F70(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v21, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v21;
  sub_1C13CC8(&inputTarget->fields.onValidate);
  titleTxtLb = this->fields.titleTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CHANGE_SKILL_TITLE"*/, 0LL);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, gameObject, 0LL),
        titleLb = this->fields.titleLb,
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CHANGE_GENDER_TITLE"*/, 0LL),
        !titleLb)
    || (UILabel__set_text(titleLb, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.nameText) == 0LL) )
  {
LABEL_16:
    sub_1C13F80(gameObject, v17);
  }
  UILabel__set_text((UILabel_o *)gameObject, usrName, 0LL);
  this->fields.state = 1;
  v24 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
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

  if ( (byte_4BAFAF9 & 1) == 0 )
  {
    sub_1C13D24(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_4BAFAF9 = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeUserNameWindow_o *)sub_1C14240(v8);
  ChangeUserNameWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ChangeUserNameWindow__get_closeBtnPath(
        ChangeUserNameWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BAFB01 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_3230/*"BaseWindow/ButtonRoot/CancleButton"*/, method);
    byte_4BAFB01 = 1;
  }
  return (System_String_o *)StringLiteral_3230/*"BaseWindow/ButtonRoot/CancleButton"*/;
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

  if ( (byte_4BAFAFA & 1) == 0 )
  {
    sub_1C13D24(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_4BAFAFA = 1;
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
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeUserNameWindow_o *)sub_1C14240(v8);
  ChangeUserNameWindow__Init(v11, v12);
}


void __fastcall ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_4BAFAFD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BAFAFD = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_1C13F80(0LL, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A4E310;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A4E2B8;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4BAFB03 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, result);
    byte_4BAFB03 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, changeName, callback, object);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v11, callback, object);
}


void __fastcall ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall ChangeUserNameWindow_CallbackFunc__Invoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    changeName,
    *(_QWORD *)&this->fields.extra_arg);
}