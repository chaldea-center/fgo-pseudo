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
  WarBoardDispNotiDialog__Execute_d__5_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4183FF5 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method);
    byte_4183FF5 = 1;
  }
  v3 = (WarBoardDispNotiDialog__Execute_d__5_o *)sub_B2C42C(WarBoardDispNotiDialog__Execute_d__5_TypeInfo);
  WarBoardDispNotiDialog__Execute_d__5___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4183FF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4183FF6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, v5);
  EventTutorialMaster__ClearLocalCheckedEntities(0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog__OnStart(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4183FF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4183FF4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w21
  int32_t targetId; // w22
  System_Action_o *v17; // x23
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitUntil_o *v19; // x20
  int32_t v20; // w8

  if ( (byte_4185740 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v5);
    sub_B2C35C(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v6);
    sub_B2C35C(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_4185740 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v20 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v12 = sub_B2C42C(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( !v12 || (*(_BYTE *)(v12 + 16) = 0, !_4__this) )
      sub_B2C434(v13, v14);
    v15 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v12,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v15, targetId, v17, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v18 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v19 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v19, v18, 0LL);
    this->fields.__2__current = (Il2CppObject *)v19;
    sub_B2C2F8(&this->fields.__2__current, v19);
    v20 = 1;
    result = 1;
  }
  this->fields.__1__state = v20;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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