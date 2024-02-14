void __fastcall WarBoardDispNotiDialog___ctor(
        WarBoardDispNotiDialog_o *this,
        int32_t eventId,
        int32_t targetId,
        int32_t openType,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = eventId;
  this->fields.eventId = targetId;
  this->fields.targetId = openType;
}


System_Collections_IEnumerator_o *__fastcall WarBoardDispNotiDialog__Execute(
        WarBoardDispNotiDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardDispNotiDialog__Execute_d__5_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4210D53 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method);
    byte_4210D53 = 1;
  }
  v4 = (WarBoardDispNotiDialog__Execute_d__5_o *)sub_B0D974(WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method, v2);
  WarBoardDispNotiDialog__Execute_d__5___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4210D54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210D54 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, v4);
  EventTutorialMaster__ClearLocalCheckedEntities(0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog__OnStart(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4210D52 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210D52 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, v4);
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog__Execute_d__5___ctor(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardDispNotiDialog__Execute_d__5__MoveNext(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w21
  int32_t targetId; // w22
  System_Action_o *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_bool__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_WaitUntil_o *v25; // x20
  int32_t v26; // w8

  if ( (byte_42126B7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v6);
    sub_B0D8A4(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v7);
    sub_B0D8A4(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_42126B7 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v26 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v13 = sub_B0D974(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v13, 0LL);
    if ( !v13 || (*(_BYTE *)(v13 + 16) = 0, !_4__this) )
      sub_B0D97C(v14);
    v17 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v13,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v17, targetId, v19, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v22 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v20, v21);
    System_Func_bool____ctor(
      v22,
      (Il2CppObject *)v13,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v25 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v23, v24);
    UnityEngine_WaitUntil___ctor(v25, v22, 0LL);
    this->fields.__2__current = (Il2CppObject *)v25;
    sub_B0D840(&this->fields.__2__current, v25);
    v26 = 1;
    result = 1;
  }
  this->fields.__1__state = v26;
  return result;
}


Il2CppObject *__fastcall WarBoardDispNotiDialog__Execute_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardDispNotiDialog__Execute_d__5__System_Collections_IEnumerator_Reset(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall WarBoardDispNotiDialog__Execute_d__5__System_Collections_IEnumerator_get_Current(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardDispNotiDialog__Execute_d__5__System_IDisposable_Dispose(
        WarBoardDispNotiDialog__Execute_d__5_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardDispNotiDialog___c__DisplayClass5_0___ctor(
        WarBoardDispNotiDialog___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog___c__DisplayClass5_0___Execute_b__0(
        WarBoardDispNotiDialog___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  this->fields.workFinished = 1;
}


bool __fastcall WarBoardDispNotiDialog___c__DisplayClass5_0___Execute_b__1(
        WarBoardDispNotiDialog___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  return this->fields.workFinished;
}