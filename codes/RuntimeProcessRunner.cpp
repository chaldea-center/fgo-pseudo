void RuntimeProcessRunner___ctor(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        System_String_o *workingDirectory,
        int32_t timeoutMs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  RuntimeProcessRunner___c_c *v14; // x0
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x8
  System_Action_o *_9__12_0; // x20
  Il2CppObject *v17; // x21
  struct RuntimeProcessRunner___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  RuntimeProcessRunner___c_c *v32; // x0
  struct RuntimeProcessRunner___c_StaticFields *v33; // x8
  System_Action_o *_9__12_1; // x20
  Il2CppObject *v35; // x21
  struct RuntimeProcessRunner___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5936402 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RuntimeProcessRunner___c___ctor_b__12_0__);
    sub_21FFC50(&Method_RuntimeProcessRunner___c___ctor_b__12_1__);
    sub_21FFC50(&RuntimeProcessRunner___c_TypeInfo);
    byte_5936402 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v14 = RuntimeProcessRunner___c_TypeInfo;
  if ( !*(&RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo, v7, v8);
    v14 = RuntimeProcessRunner___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v7, v8);
      static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__12_0, v17, Method_RuntimeProcessRunner___c___ctor_b__12_0__, 0);
    v18 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v18->__9__12_0 = _9__12_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__12_0, (int32_t)_9__12_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !this )
    sub_21FFECC(v14, v7);
  this->fields._OnProcessSuccesful_k__BackingField = _9__12_0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  v32 = RuntimeProcessRunner___c_TypeInfo;
  if ( !*(&RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo, v25, v26);
    v32 = RuntimeProcessRunner___c_TypeInfo;
  }
  v33 = v32->static_fields;
  _9__12_1 = v33->__9__12_1;
  if ( !_9__12_1 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v25, v26);
      v33 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__12_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__12_1, v35, Method_RuntimeProcessRunner___c___ctor_b__12_1__, 0);
    v36 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v36->__9__12_1 = _9__12_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->__9__12_1, (int32_t)_9__12_1, v37, v38, v39, v40, v41, v42);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__12_1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)_9__12_1,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void RuntimeProcessRunner___ctor_45337640(
        RuntimeProcessRunner_o *this,
        System_String_o *executable,
        System_String_o *args,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  RuntimeProcessRunner___c_c *v12; // x0
  struct RuntimeProcessRunner___c_StaticFields *static_fields; // x8
  System_Action_o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct RuntimeProcessRunner___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  RuntimeProcessRunner___c_c *v30; // x0
  struct RuntimeProcessRunner___c_StaticFields *v31; // x8
  System_Action_o *_9__13_1; // x20
  Il2CppObject *v33; // x21
  struct RuntimeProcessRunner___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_5936403 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_RuntimeProcessRunner___c___ctor_b__13_0__);
    sub_21FFC50(&Method_RuntimeProcessRunner___c___ctor_b__13_1__);
    sub_21FFC50(&RuntimeProcessRunner___c_TypeInfo);
    byte_5936403 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = RuntimeProcessRunner___c_TypeInfo;
  if ( !*(&RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo, v5, v6);
    v12 = RuntimeProcessRunner___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v5, v6);
      static_fields = RuntimeProcessRunner___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_0, v15, Method_RuntimeProcessRunner___c___ctor_b__13_0__, 0);
    v16 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v16->__9__13_0 = _9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__13_0, (int32_t)_9__13_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !this )
    sub_21FFECC(v12, v5);
  this->fields._OnProcessSuccesful_k__BackingField = _9__13_0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)_9__13_0, v6, v7, v8, v9, v10, v11);
  v30 = RuntimeProcessRunner___c_TypeInfo;
  if ( !*(&RuntimeProcessRunner___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RuntimeProcessRunner___c_TypeInfo, v23, v24);
    v30 = RuntimeProcessRunner___c_TypeInfo;
  }
  v31 = v30->static_fields;
  _9__13_1 = v31->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v23, v24);
      v31 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__13_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__13_1, v33, Method_RuntimeProcessRunner___c___ctor_b__13_1__, 0);
    v34 = RuntimeProcessRunner___c_TypeInfo->static_fields;
    v34->__9__13_1 = _9__13_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->__9__13_1, (int32_t)_9__13_1, v35, v36, v37, v38, v39, v40);
  }
  this->fields._OnProcessFailed_k__BackingField = _9__13_1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)_9__13_1,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_5936405 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_21FFC50(&StringLiteral_11193/*"Process Failed : {0} with code : {1}"*/);
    byte_5936405 = 1;
  }
  OnProcessFailed_k__BackingField = v7->fields._OnProcessFailed_k__BackingField;
  if ( !OnProcessFailed_k__BackingField )
    sub_21FFECC(this, timedOut);
  ((void (__fastcall *)(intptr_t, intptr_t, System_String_o *, _QWORD, const MethodInfo *))OnProcessFailed_k__BackingField->fields.invoke_impl)(
    OnProcessFailed_k__BackingField->fields.method_code,
    OnProcessFailed_k__BackingField->fields.method,
    errorMessage,
    *(_QWORD *)&errorCode,
    method);
  v13 = errorCode;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  v12 = (Il2CppObject *)System_String__Format_75484576(
                          (System_String_o *)StringLiteral_11193/*"Process Failed : {0} with code : {1}"*/,
                          (Il2CppObject *)errorMessage,
                          v9,
                          0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v10, v11);
  UnityEngine_Debug__Log(v12, 0);
}


void RuntimeProcessRunner__ProcessSuccesful(RuntimeProcessRunner_o *this, const MethodInfo *method)
{
  RuntimeProcessRunner_o *v2; // x19
  struct System_Action_o *OnProcessSuccesful_k__BackingField; // x8
  __int64 v4; // x1
  __int64 v5; // x2

  v2 = this;
  if ( (byte_5936404 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    this = (RuntimeProcessRunner_o *)sub_21FFC50(&StringLiteral_11191/*"Process Complete"*/);
    byte_5936404 = 1;
  }
  OnProcessSuccesful_k__BackingField = v2->fields._OnProcessSuccesful_k__BackingField;
  if ( !OnProcessSuccesful_k__BackingField )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))OnProcessSuccesful_k__BackingField->fields.invoke_impl)(
    OnProcessSuccesful_k__BackingField->fields.method_code,
    OnProcessSuccesful_k__BackingField->fields.method);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v4, v5);
  UnityEngine_Debug__Log((Il2CppObject *)StringLiteral_11191/*"Process Complete"*/, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnProcessFailed_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnProcessFailed_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnProcessSuccesful_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RuntimeProcessRunner___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936406 & 1) == 0 )
  {
    sub_21FFC50(&RuntimeProcessRunner___c_TypeInfo);
    byte_5936406 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RuntimeProcessRunner___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RuntimeProcessRunner___c_TypeInfo->static_fields->__9 = (struct RuntimeProcessRunner___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RuntimeProcessRunner___c_TypeInfo->static_fields,
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