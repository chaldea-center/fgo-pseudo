void RuntimeProcessRunner___ctor(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        System_String_o *workingDirectory,
        int32_t timeoutMs,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  RuntimeProcessRunner___c_c *v9; // x0
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v11; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  RuntimeProcessRunner___c_c *v17; // x0
  System_Action_o *_9__12_1; // x20
  Il2CppObject *v19; // x21
  struct RuntimeProcessRunner___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C40DF8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RuntimeProcessRunner___c___ctor_b__12_0__);
    sub_1C37058(&Method_RuntimeProcessRunner___c___ctor_b__12_1__);
    sub_1C37058(&RuntimeProcessRunner___c_TypeInfo);
    byte_4C40DF8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v9 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_0 = v9->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = RuntimeProcessRunner___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v11, Method_RuntimeProcessRunner___c___ctor_b__12_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
  }
  if ( !this )
    sub_1C372B4(v9);
  this->fields._OnProcessSuccesful_k__BackingField = _9__12_0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)_9__12_0, v7, v8);
  v17 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v17 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_1 = v17->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = RuntimeProcessRunner___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__12_1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__12_1, v19, Method_RuntimeProcessRunner___c___ctor_b__12_1__, 0);
    v20 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v20->__9__12_1 = _9__12_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v20->__9__12_1, (int32_t)_9__12_1, v21, v22);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__12_1;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._OnProcessFailed_k__BackingField, (int32_t)_9__12_1, v15, v16);
}


void RuntimeProcessRunner___ctor_38463504(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  RuntimeProcessRunner___c_c *v7; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v9; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  RuntimeProcessRunner___c_c *v15; // x0
  System_Action_o *_9__13_1; // x20
  Il2CppObject *v17; // x21
  struct RuntimeProcessRunner___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C40DF9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_RuntimeProcessRunner___c___ctor_b__13_0__);
    sub_1C37058(&Method_RuntimeProcessRunner___c___ctor_b__13_1__);
    sub_1C37058(&RuntimeProcessRunner___c_TypeInfo);
    byte_4C40DF9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v7 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_0 = v7->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RuntimeProcessRunner___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v9, Method_RuntimeProcessRunner___c___ctor_b__13_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v11, v12);
  }
  if ( !this )
    sub_1C372B4(v7);
  this->fields._OnProcessSuccesful_k__BackingField = _9__13_0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)_9__13_0, v5, v6);
  v15 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v15 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_1 = v15->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = RuntimeProcessRunner___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__13_1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__13_1, v17, Method_RuntimeProcessRunner___c___ctor_b__13_1__, 0);
    v18 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v18->__9__13_1 = _9__13_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v18->__9__13_1, (int32_t)_9__13_1, v19, v20);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__13_1;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._OnProcessFailed_k__BackingField, (int32_t)_9__13_1, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v7 = this;
  if ( (byte_4C40DFB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C37058(&StringLiteral_10744/*"Process Failed : {0} with code : {1}"*/);
    byte_4C40DFB = 1;
  }
  OnProcessFailed_k__BackingField = v7->fields._OnProcessFailed_k__BackingField;
  if ( !OnProcessFailed_k__BackingField )
    sub_1C372B4(this);
  ((void (__fastcall *)(intptr_t, intptr_t, System_String_o *, _QWORD, const MethodInfo *))OnProcessFailed_k__BackingField->fields.invoke_impl)(
    OnProcessFailed_k__BackingField->fields.method_code,
    OnProcessFailed_k__BackingField->fields.method,
    errorMessage,
    *(_QWORD *)&errorCode,
    method);
  v17 = errorCode;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9, v10, v11, v12, v13, v14);
  v16 = (Il2CppObject *)System_String__Format_63602948(
                          (System_String_o *)StringLiteral_10744/*"Process Failed : {0} with code : {1}"*/,
                          (Il2CppObject *)errorMessage,
                          v15,
                          0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v16, 0);
}


void RuntimeProcessRunner__ProcessSuccesful(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  RuntimeProcessRunner_o *v2; // x19
  struct System_Action_o *OnProcessSuccesful_k__BackingField; // x8

  v2 = this;
  if ( (byte_4C40DFA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C37058(&StringLiteral_10743/*"Process Complete"*/);
    byte_4C40DFA = 1;
  }
  OnProcessSuccesful_k__BackingField = v2->fields._OnProcessSuccesful_k__BackingField;
  if ( !OnProcessSuccesful_k__BackingField )
    sub_1C372B4(this);
  ((void (__fastcall *)(intptr_t, intptr_t))OnProcessSuccesful_k__BackingField->fields.invoke_impl)(
    OnProcessSuccesful_k__BackingField->fields.method_code,
    OnProcessSuccesful_k__BackingField->fields.method);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_10743/*"Process Complete"*/, 0);
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
  const MethodInfo *v3; // x3

  this->fields._OnProcessFailed_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void RuntimeProcessRunner__set_OnProcessSuccesful(
        RuntimeProcessRunner_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnProcessSuccesful_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void RuntimeProcessRunner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C40DFC & 1) == 0 )
  {
    sub_1C37058(&RuntimeProcessRunner___c_TypeInfo);
    byte_4C40DFC = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(RuntimeProcessRunner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RuntimeProcessRunner___c_TypeInfo->static_fields->__9 = (struct RuntimeProcessRunner___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)RuntimeProcessRunner___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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