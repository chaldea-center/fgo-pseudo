void __fastcall ChangeGenderTypeWindow___ctor(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( (byte_418A11D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A11D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGenderTypeWindow__Callback(
        ChangeGenderTypeWindow_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x0
  ChangeGenderTypeWindow_CallbackFunc_o *v10; // x19
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_callbackFunc,
      0LL,
      *(System_String_array ***)&changeType,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    ChangeGenderTypeWindow_CallbackFunc__Invoke(v10, result, this->fields.changeGenderType, 0LL);
  }
}


void __fastcall ChangeGenderTypeWindow__Close(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeGenderTypeWindow__Close_29463456(this, 0LL, v2);
}


void __fastcall ChangeGenderTypeWindow__Close_29463456(
        ChangeGenderTypeWindow_o *this,
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

  if ( (byte_418A11C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ChangeGenderTypeWindow_EndClose__, v10);
    byte_418A11C = 1;
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
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ChangeGenderTypeWindow__EndClose(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
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

  ChangeGenderTypeWindow__Init(this, method);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeGenderTypeWindow__OnClickFemale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  ChangeGenderTypeWindow_o *v5; // x0
  bool v6; // w1

  this->fields.changeGenderType = 2;
  if ( System_Int32__Equals_38381340((_DWORD)this + 136, 2, 0LL) )
  {
    v5 = this;
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v5 = this;
  }
  ChangeGenderTypeWindow__Callback(v5, v6, v3, v4);
}


void __fastcall ChangeGenderTypeWindow__OnClickMale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  ChangeGenderTypeWindow_o *v5; // x0
  bool v6; // w1

  this->fields.changeGenderType = 1;
  if ( System_Int32__Equals_38381340((_DWORD)this + 136, 1, 0LL) )
  {
    v5 = this;
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v5 = this;
  }
  ChangeGenderTypeWindow__Callback(v5, v6, v3, v4);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UILabel_o *titleLb; // x20
  UILabel_o *inputInfoLb; // x20
  UILabel_o *femaleTxt; // x20
  UILabel_o *maleTxt; // x20
  System_Action_o *v25; // x20

  if ( (byte_418A11B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&currentType);
    sub_B2C35C(&Method_ChangeGenderTypeWindow_EndOpen__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8618/*"MALE_TEXT"*/, v9);
    sub_B2C35C(&StringLiteral_6332/*"FEMALE_TEXT"*/, v10);
    sub_B2C35C(&StringLiteral_2951/*"CHANGE_GENDER_INFO"*/, v11);
    sub_B2C35C(&StringLiteral_2952/*"CHANGE_GENDER_TITLE"*/, v12);
    byte_418A11B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.currentGenderType = currentType;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  titleLb = this->fields.titleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"CHANGE_GENDER_TITLE"*/, 0LL);
  if ( !titleLb )
    goto LABEL_12;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2951/*"CHANGE_GENDER_INFO"*/, 0LL);
  if ( !inputInfoLb
    || (UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL),
        femaleTxt = this->fields.femaleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6332/*"FEMALE_TEXT"*/, 0LL),
        !femaleTxt)
    || (UILabel__set_text(femaleTxt, (System_String_o *)gameObject, 0LL),
        maleTxt = this->fields.maleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8618/*"MALE_TEXT"*/, 0LL),
        !maleTxt) )
  {
LABEL_12:
    sub_B2C434(gameObject, v14);
  }
  UILabel__set_text(maleTxt, (System_String_o *)gameObject, 0LL);
  this->fields.state = 1;
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
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

  if ( (byte_418A119 & 1) == 0 )
  {
    sub_B2C35C(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo, value);
    byte_418A119 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418A11A & 1) == 0 )
  {
    sub_B2C35C(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo, value);
    byte_418A11A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = result;
  v12 = changeType;
  if ( (byte_4184EC2 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    sub_B2C35C(&int_TypeInfo, v9);
    byte_4184EC2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ChangeGenderTypeWindow_CallbackFunc__EndInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGenderTypeWindow_CallbackFunc__Invoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ChangeGenderTypeWindow_CallbackFunc_o **v9; // x26
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
  void (__fastcall **v20)(__int64 *, bool, _QWORD, _QWORD); // x0
  ChangeGenderTypeWindow_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ChangeGenderTypeWindow_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

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
    v9 = (ChangeGenderTypeWindow_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, result, *(_QWORD *)&changeType, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(result, (unsigned int)changeType, v23);
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
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, result, (unsigned int)changeType, v20);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v17)(
            v22,
            result,
            (unsigned int)changeType,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            result,
            (unsigned int)changeType,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v24)(v22, result, (unsigned int)changeType, v23);
    goto LABEL_36;
  }
}