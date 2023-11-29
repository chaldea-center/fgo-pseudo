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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F63A2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method);
    byte_40F63A2 = 1;
  }
  v6 = sub_B170CC(WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method, v2, v3, v4);
  WarBoardDispNotiDialog__Execute_d__5___ctor((WarBoardDispNotiDialog__Execute_d__5_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_40F63A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F63A3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, v4);
  EventTutorialMaster__ClearLocalCheckedEntities(0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog__OnStart(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x3

  if ( (byte_40F63A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F63A1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t v20; // w21
  int32_t targetId; // w22
  System_Action_o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Func_bool__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_WaitUntil_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w8

  if ( (byte_40F7AE2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v8);
    sub_B16FFC(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v9);
    sub_B16FFC(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v11);
    byte_40F7AE2 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v39 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v15 = sub_B170CC(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 || (*(_BYTE *)(v15 + 16) = 0, !_4__this) )
      sub_B170D4();
    v20 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v15,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v20, targetId, v22, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v27 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v23, v24, v25, v26);
    System_Func_bool____ctor(
      v27,
      (Il2CppObject *)v15,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v32 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v28, v29, v30, v31);
    UnityEngine_WaitUntil___ctor(v32, v27, 0LL);
    this->fields.__2__current = (Il2CppObject *)v32;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = 1;
    result = 1;
  }
  this->fields.__1__state = v39;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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