void WarBoardTaskBase___ctor(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CC5068 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC5068 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.Key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  this->fields.IsEnabled = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_IEnumerator_o *WarBoardTaskBase__Execute(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CC5067 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardTaskBase__Execute_d__15_TypeInfo);
    byte_4CC5067 = 1;
  }
  v2 = sub_1C715FC(WarBoardTaskBase__Execute_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void WarBoardTaskBase__OnEnd(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardTaskBase__OnPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 1;
}


void WarBoardTaskBase__OnResume(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 0;
}


void WarBoardTaskBase__OnStart(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
}


bool WarBoardTaskBase__get_isPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPause_k__BackingField;
}


bool WarBoardTaskBase__get_isPlaying(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPlaying_k__BackingField;
}


void WarBoardTaskBase__set_isPause(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = value;
}


void WarBoardTaskBase__set_isPlaying(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPlaying_k__BackingField = value;
}


void WarBoardTaskBase_TaskCallback___ctor(
        WarBoardTaskBase_TaskCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA52DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA529C;
}


System_IAsyncResult_o *WarBoardTaskBase_TaskCallback__BeginInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void WarBoardTaskBase_TaskCallback__EndInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void WarBoardTaskBase_TaskCallback__Invoke(WarBoardTaskBase_TaskCallback_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void WarBoardTaskBase__Execute_d__15___ctor(
        WarBoardTaskBase__Execute_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardTaskBase__Execute_d__15__MoveNext(WarBoardTaskBase__Execute_d__15_o *this, const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *WarBoardTaskBase__Execute_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_Reset(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_WarBoardTaskBase__Execute_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardTaskBase__Execute_d__15__System_IDisposable_Dispose(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  ;
}