void __fastcall WarBoardTaskBase___ctor(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A6DE11 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A6DE11 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.Key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, v5, v2, v3);
  this->fields.IsEnabled = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardTaskBase__Execute(
        WarBoardTaskBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4A6DE10 & 1) == 0 )
  {
    sub_1B90010(&WarBoardTaskBase__Execute_d__15_TypeInfo, method);
    byte_4A6DE10 = 1;
  }
  v2 = sub_1B9025C(WarBoardTaskBase__Execute_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0LL);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void __fastcall WarBoardTaskBase__OnEnd(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardTaskBase__OnPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 1;
}


void __fastcall WarBoardTaskBase__OnResume(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = 0;
}


void __fastcall WarBoardTaskBase__OnStart(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
}


bool __fastcall WarBoardTaskBase__get_isPause(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPause_k__BackingField;
}


bool __fastcall WarBoardTaskBase__get_isPlaying(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  return this->fields._isPlaying_k__BackingField;
}


void __fastcall WarBoardTaskBase__set_isPause(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPause_k__BackingField = value;
}


void __fastcall WarBoardTaskBase__set_isPlaying(WarBoardTaskBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._isPlaying_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTaskBase_TaskCallback___ctor(
        WarBoardTaskBase_TaskCallback_o *this,
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D413C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D40FC;
}


System_IAsyncResult_o *__fastcall WarBoardTaskBase_TaskCallback__BeginInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v5, callback, object);
}


void __fastcall WarBoardTaskBase_TaskCallback__EndInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall WarBoardTaskBase_TaskCallback__Invoke(WarBoardTaskBase_TaskCallback_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WarBoardTaskBase__Execute_d__15___ctor(
        WarBoardTaskBase__Execute_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardTaskBase__Execute_d__15__MoveNext(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *__fastcall WarBoardTaskBase__Execute_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_Reset(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_WarBoardTaskBase__Execute_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
}


Il2CppObject *__fastcall WarBoardTaskBase__Execute_d__15__System_Collections_IEnumerator_get_Current(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardTaskBase__Execute_d__15__System_IDisposable_Dispose(
        WarBoardTaskBase__Execute_d__15_o *this,
        const MethodInfo *method)
{
  ;
}