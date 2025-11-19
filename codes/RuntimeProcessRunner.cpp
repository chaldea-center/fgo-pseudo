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
  const MethodInfo *v9; // x3
  RuntimeProcessRunner___c_c *v10; // x0
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  RuntimeProcessRunner___c_c *v18; // x0
  System_Action_o *_9__12_1; // x20
  Il2CppObject *v20; // x21
  struct RuntimeProcessRunner___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB40ED & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RuntimeProcessRunner___c___ctor_b__12_0__);
    sub_1C6BA08(&Method_RuntimeProcessRunner___c___ctor_b__12_1__);
    sub_1C6BA08(&RuntimeProcessRunner___c_TypeInfo);
    byte_4CB40ED = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v10 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v10 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_0 = v10->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RuntimeProcessRunner___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v12, Method_RuntimeProcessRunner___c___ctor_b__12_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v14, v15);
  }
  if ( !this )
    sub_1C6BC60(v10, v7);
  this->fields._OnProcessSuccesful_k__BackingField = _9__12_0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)_9__12_0, v8, v9);
  v18 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v18 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__12_1 = v18->static_fields->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RuntimeProcessRunner___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__12_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__12_1, v20, Method_RuntimeProcessRunner___c___ctor_b__12_1__, 0);
    v21 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v21->__9__12_1 = _9__12_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v21->__9__12_1, (int32_t)_9__12_1, v22, v23);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__12_1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._OnProcessFailed_k__BackingField, (int32_t)_9__12_1, v16, v17);
}


void RuntimeProcessRunner___ctor_38688376(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  RuntimeProcessRunner___c_c *v8; // x0
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v10; // x21
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  RuntimeProcessRunner___c_c *v16; // x0
  System_Action_o *_9__13_1; // x20
  Il2CppObject *v18; // x21
  struct RuntimeProcessRunner___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB40EE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_RuntimeProcessRunner___c___ctor_b__13_0__);
    sub_1C6BA08(&Method_RuntimeProcessRunner___c___ctor_b__13_1__);
    sub_1C6BA08(&RuntimeProcessRunner___c_TypeInfo);
    byte_4CB40EE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v8 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_0 = v8->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RuntimeProcessRunner___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v10, Method_RuntimeProcessRunner___c___ctor_b__13_0__, 0);
    static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = _9__13_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v12, v13);
  }
  if ( !this )
    sub_1C6BC60(v8, v5);
  this->fields._OnProcessSuccesful_k__BackingField = _9__13_0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)_9__13_0, v6, v7);
  v16 = RuntimeProcessRunner___c_TypeInfo;
  if ( !RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo);
    v16 = RuntimeProcessRunner___c_TypeInfo;
  }
  _9__13_1 = v16->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = RuntimeProcessRunner___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__13_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__13_1, v18, Method_RuntimeProcessRunner___c___ctor_b__13_1__, 0);
    v19 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v19->__9__13_1 = _9__13_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v19->__9__13_1, (int32_t)_9__13_1, v20, v21);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__13_1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._OnProcessFailed_k__BackingField, (int32_t)_9__13_1, v14, v15);
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
  if ( (byte_4CB40F0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C6BA08(&StringLiteral_10742/*"Process Failed : {0} with code : {1}"*/);
    byte_4CB40F0 = 1;
  }
  OnProcessFailed_k__BackingField = v7->fields._OnProcessFailed_k__BackingField;
  if ( !OnProcessFailed_k__BackingField )
    sub_1C6BC60(this, timedOut);
  ((void (__fastcall *)(intptr_t, intptr_t, System_String_o *, _QWORD, const MethodInfo *))OnProcessFailed_k__BackingField->fields.invoke_impl)(
    OnProcessFailed_k__BackingField->fields.method_code,
    OnProcessFailed_k__BackingField->fields.method,
    errorMessage,
    *(_QWORD *)&errorCode,
    method);
  v11 = errorCode;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = (Il2CppObject *)System_String__Format_64008100(
                          (System_String_o *)StringLiteral_10742/*"Process Failed : {0} with code : {1}"*/,
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
  if ( (byte_4CB40EF & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_1C6BA08(&StringLiteral_10741/*"Process Complete"*/);
    byte_4CB40EF = 1;
  }
  OnProcessSuccesful_k__BackingField = v2->fields._OnProcessSuccesful_k__BackingField;
  if ( !OnProcessSuccesful_k__BackingField )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))OnProcessSuccesful_k__BackingField->fields.invoke_impl)(
    OnProcessSuccesful_k__BackingField->fields.method_code,
    OnProcessSuccesful_k__BackingField->fields.method);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_10741/*"Process Complete"*/, 0);
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
  sub_1C6B9AC(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void RuntimeProcessRunner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB40F1 & 1) == 0 )
  {
    sub_1C6BA08(&RuntimeProcessRunner___c_TypeInfo);
    byte_4CB40F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(RuntimeProcessRunner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RuntimeProcessRunner___c_TypeInfo->static_fields->__9 = (struct RuntimeProcessRunner___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)RuntimeProcessRunner___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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