void RuntimeProcessRunner___ctor(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        System_String_o *workingDirectory,
        int32_t timeoutMs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  RuntimeProcessRunner___c_c *v14; // x0
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v16; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  RuntimeProcessRunner___c_c *v30; // x0
  System_Action_o *_9__12_1; // x20
  Il2CppObject *v32; // x21
  struct RuntimeProcessRunner___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D2E7E8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_RuntimeProcessRunner___c___ctor_b__12_0__);
    sub_1C93AD4(&Method_RuntimeProcessRunner___c___ctor_b__12_1__);
    sub_1C93AD4(&RuntimeProcessRunner___c_TypeInfo);
    byte_4D2E7E8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v14 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v14 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_0 = v14->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RuntimeProcessRunner___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v16, Method_RuntimeProcessRunner___c___ctor_b__12_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
      (int32_t)_9__12_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !this )
    sub_1C93D2C(v14, v7);
  this->fields._OnProcessSuccesful_k__BackingField = _9__12_0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  v30 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v30 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_1 = v30->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = RuntimeProcessRunner___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__12_1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__12_1, v32, Method_RuntimeProcessRunner___c___ctor_b__12_1__, 0);
    v33 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v33->__9__12_1 = _9__12_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v33->__9__12_1, (int32_t)_9__12_1, v34, v35, v36, v37, v38, v39);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__12_1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)_9__12_1,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void RuntimeProcessRunner___ctor_39148788(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  RuntimeProcessRunner___c_c *v12; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  RuntimeProcessRunner___c_c *v28; // x0
  System_Action_o *_9__13_1; // x20
  Il2CppObject *v30; // x21
  struct RuntimeProcessRunner___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2E7E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_RuntimeProcessRunner___c___ctor_b__13_0__);
    sub_1C93AD4(&Method_RuntimeProcessRunner___c___ctor_b__13_1__);
    sub_1C93AD4(&RuntimeProcessRunner___c_TypeInfo);
    byte_4D2E7E9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v12 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_0 = v12->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RuntimeProcessRunner___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v14, Method_RuntimeProcessRunner___c___ctor_b__13_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !this )
    sub_1C93D2C(v12, v5);
  this->fields._OnProcessSuccesful_k__BackingField = _9__13_0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)_9__13_0, v6, v7, v8, v9, v10, v11);
  v28 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v28 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_1 = v28->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = RuntimeProcessRunner___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__13_1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__13_1, v30, Method_RuntimeProcessRunner___c___ctor_b__13_1__, 0);
    v31 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v31->__9__13_1 = _9__13_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31->__9__13_1, (int32_t)_9__13_1, v32, v33, v34, v35, v36, v37);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__13_1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)_9__13_1,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void RuntimeProcessRunner__Abort(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  ;
}


void RuntimeProcessRunner__Execute(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(RuntimeProcessRunner_o *, const MethodInfo *))this->klass->vtable._4_ProcessSuccesful.methodPtr)(
    this,
    this->klass->vtable._4_ProcessSuccesful.method);
  this->fields._IsComplete_k__BackingField = 1;
}


// local variable allocation has failed, the output may be wrong!
void RuntimeProcessRunner__ProcessFailed(
        RuntimeProcessRunner_o *this,
        bool timedOut,
        System_String_o *errorMessage,
        int32_t errorCode,
        const MethodInfo *method)
{
  RuntimeProcessRunner_o *v7; // x21
  struct System_Action_o *OnProcessFailed_k__BackingField; // x8
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x19
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v7 = this;
  if ( (byte_4D2E7EB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C93AD4(&StringLiteral_10821/*"Process Failed : {0} with code : {1}"*/);
    byte_4D2E7EB = 1;
  }
  OnProcessFailed_k__BackingField = v7->fields._OnProcessFailed_k__BackingField;
  if ( !OnProcessFailed_k__BackingField )
    sub_1C93D2C(this, timedOut);
  ((void (__fastcall *)(intptr_t, intptr_t, System_String_o *, _QWORD, const MethodInfo *))OnProcessFailed_k__BackingField->fields.invoke_impl)(
    OnProcessFailed_k__BackingField->fields.method_code,
    OnProcessFailed_k__BackingField->fields.method,
    errorMessage,
    *(_QWORD *)&errorCode,
    method);
  v11 = errorCode;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = (Il2CppObject *)System_String__Format_64467032(
                          (System_String_o *)StringLiteral_10821/*"Process Failed : {0} with code : {1}"*/,
                          (Il2CppObject *)errorMessage,
                          v9,
                          0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v10, 0);
}


void RuntimeProcessRunner__ProcessSuccesful(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  RuntimeProcessRunner_o *v2; // x19
  struct System_Action_o *OnProcessSuccesful_k__BackingField; // x8

  v2 = this;
  if ( (byte_4D2E7EA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C93AD4(&StringLiteral_10820/*"Process Complete"*/);
    byte_4D2E7EA = 1;
  }
  OnProcessSuccesful_k__BackingField = v2->fields._OnProcessSuccesful_k__BackingField;
  if ( !OnProcessSuccesful_k__BackingField )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))OnProcessSuccesful_k__BackingField->fields.invoke_impl)(
    OnProcessSuccesful_k__BackingField->fields.method_code,
    OnProcessSuccesful_k__BackingField->fields.method);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_10820/*"Process Complete"*/, 0);
}


bool RuntimeProcessRunner__get_IsComplete(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  return this->fields._IsComplete_k__BackingField;
}


System_Action_o *RuntimeProcessRunner__get_OnProcessFailed(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  return this->fields._OnProcessFailed_k__BackingField;
}


System_Action_o *RuntimeProcessRunner__get_OnProcessSuccesful(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  return this->fields._OnProcessSuccesful_k__BackingField;
}


void RuntimeProcessRunner__set_IsComplete(RuntimeProcessRunner_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsComplete_k__BackingField = value;
}


void RuntimeProcessRunner__set_OnProcessFailed(
        RuntimeProcessRunner_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnProcessFailed_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RuntimeProcessRunner__set_OnProcessSuccesful(
        RuntimeProcessRunner_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnProcessSuccesful_k__BackingField = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void RuntimeProcessRunner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E7EC & 1) == 0 )
  {
    sub_1C93AD4(&RuntimeProcessRunner___c_TypeInfo);
    byte_4D2E7EC = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(RuntimeProcessRunner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RuntimeProcessRunner___c_TypeInfo->static_fields->__9 = (struct RuntimeProcessRunner___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RuntimeProcessRunner___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RuntimeProcessRunner___c___ctor(RuntimeProcessRunner___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RuntimeProcessRunner___c____ctor_b__12_0(RuntimeProcessRunner___c_o *this, const MethodInfo *method)
{
  ;
}


void RuntimeProcessRunner___c____ctor_b__12_1(RuntimeProcessRunner___c_o *this, const MethodInfo *method)
{
  ;
}


void RuntimeProcessRunner___c____ctor_b__13_0(RuntimeProcessRunner___c_o *this, const MethodInfo *method)
{
  ;
}


void RuntimeProcessRunner___c____ctor_b__13_1(RuntimeProcessRunner___c_o *this, const MethodInfo *method)
{
  ;
}