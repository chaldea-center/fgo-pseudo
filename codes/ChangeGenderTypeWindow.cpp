void __fastcall ChangeGenderTypeWindow___ctor(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4B62008 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B62008 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeGenderTypeWindow__Callback(
        ChangeGenderTypeWindow_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct ChangeGenderTypeWindow_CallbackFunc_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BE4A70(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      result,
      (unsigned int)this->fields.changeGenderType,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ChangeGenderTypeWindow__Close(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeGenderTypeWindow__Close_31813540(this, 0LL, v2);
}


void __fastcall ChangeGenderTypeWindow__Close_31813540(
        ChangeGenderTypeWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (qword_4B62000 & 0x100000000000000LL) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_ChangeGenderTypeWindow_EndClose__, v5);
    HIBYTE(qword_4B62000) = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ChangeGenderTypeWindow__EndClose(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeGenderTypeWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BE4A70(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ChangeGenderTypeWindow__EndOpen(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void __fastcall ChangeGenderTypeWindow__Init(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeGenderTypeWindow__OnClickFemale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 2;
  v3 = !System_Int32__Equals_63504244((_DWORD)this + 144, 2, 0LL);
  ChangeGenderTypeWindow__Callback(this, v3, v4, v5);
}


void __fastcall ChangeGenderTypeWindow__OnClickMale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 1;
  v3 = !System_Int32__Equals_63504244((_DWORD)this + 144, 1, 0LL);
  ChangeGenderTypeWindow__Callback(this, v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGenderTypeWindow__OpenChangeGenderWindow(
        ChangeGenderTypeWindow_o *this,
        int32_t currentType,
        ChangeGenderTypeWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UILabel_o *titleLb; // x20
  UILabel_o *inputInfoLb; // x20
  UILabel_o *femaleTxt; // x20
  UILabel_o *maleTxt; // x20
  System_Action_o *v19; // x20

  if ( (qword_4B62000 & 0x1000000000000LL) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&currentType);
    sub_1BE4ACC(&Method_ChangeGenderTypeWindow_EndOpen__, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_8651/*"MALE_TEXT"*/, v9);
    sub_1BE4ACC(&StringLiteral_6502/*"FEMALE_TEXT"*/, v10);
    sub_1BE4ACC(&StringLiteral_3468/*"CHANGE_GENDER_INFO"*/, v11);
    sub_1BE4ACC(&StringLiteral_3469/*"CHANGE_GENDER_TITLE"*/, v12);
    BYTE6(qword_4B62000) = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.currentGenderType = currentType;
  sub_1BE4A70(&this->fields.callbackFunc);
  titleLb = this->fields.titleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3469/*"CHANGE_GENDER_TITLE"*/, 0LL);
  if ( !titleLb )
    goto LABEL_11;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CHANGE_GENDER_INFO"*/, 0LL);
  if ( !inputInfoLb
    || (UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL),
        femaleTxt = this->fields.femaleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6502/*"FEMALE_TEXT"*/, 0LL),
        !femaleTxt)
    || (UILabel__set_text(femaleTxt, (System_String_o *)gameObject, 0LL),
        maleTxt = this->fields.maleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8651/*"MALE_TEXT"*/, 0LL),
        !maleTxt) )
  {
LABEL_11:
    sub_1BE4D28(gameObject, v14);
  }
  UILabel__set_text(maleTxt, (System_String_o *)gameObject, 0LL);
  this->fields.state = 1;
  v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
}


void __fastcall ChangeGenderTypeWindow__add_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeGenderTypeWindow_o *v11; // x0
  ChangeGenderTypeWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (qword_4B62000 & 0x100000000LL) == 0 )
  {
    sub_1BE4ACC(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo, value);
    BYTE4(qword_4B62000) = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeGenderTypeWindow_o *)sub_1BE4FE8(v8);
  ChangeGenderTypeWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ChangeGenderTypeWindow__remove_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeGenderTypeWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (qword_4B62000 & 0x10000000000LL) == 0 )
  {
    sub_1BE4ACC(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo, value);
    BYTE5(qword_4B62000) = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeGenderTypeWindow_o *)sub_1BE4FE8(v8);
  ChangeGenderTypeWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGenderTypeWindow_CallbackFunc___ctor(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1FB00;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1FAA8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ChangeGenderTypeWindow_CallbackFunc__BeginInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v16[0] = result;
  v15 = changeType;
  if ( (byte_4B62009 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    sub_1BE4ACC(&int_TypeInfo, v9);
    byte_4B62009 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&changeType, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall ChangeGenderTypeWindow_CallbackFunc__EndInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ChangeGenderTypeWindow_CallbackFunc__Invoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    changeType,
    *(_QWORD *)&this->fields.extra_arg);
}