void __fastcall WarBoardTaskBase___ctor(WarBoardTaskBase_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B3502E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B3502E = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.Key = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  this->fields.IsEnabled = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall WarBoardTaskBase__Execute(
        WarBoardTaskBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4B3502D & 1) == 0 )
  {
    sub_1BD3458(&WarBoardTaskBase__Execute_d__15_TypeInfo, method);
    byte_4B3502D = 1;
  }
  v2 = sub_1BD36A4(WarBoardTaskBase__Execute_d__15_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BD3518(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A13BD0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A13B90;
}


System_IAsyncResult_o *__fastcall WarBoardTaskBase_TaskCallback__BeginInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BD340C(this, &v5, callback, object);
}


void __fastcall WarBoardTaskBase_TaskCallback__EndInvoke(
        WarBoardTaskBase_TaskCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_WarBoardTaskBase__Execute_d__15_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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