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
  int v2; // w2
  __int64 v3; // x3
  WarBoardDispNotiDialog__Execute_d__5_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E51D8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E51D8 = 1;
  }
  v5 = (WarBoardDispNotiDialog__Execute_d__5_o *)sub_B5D694(WarBoardDispNotiDialog__Execute_d__5_TypeInfo);
  WarBoardDispNotiDialog__Execute_d__5___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42E51D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E51D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, v7);
  EventTutorialMaster__ClearLocalCheckedEntities(0LL);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardDispNotiDialog__OnStart(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42E51D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E51D7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w21
  int32_t targetId; // w22
  System_Action_o *v31; // x23
  System_Func_bool__o *v32; // x21
  UnityEngine_WaitUntil_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int32_t v40; // w8

  if ( (byte_42E7665 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v14, v15, v16);
    sub_B5D5C4(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v20, v21, v22);
    byte_42E7665 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v40 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v26 = sub_B5D694(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 || (*(_BYTE *)(v26 + 16) = 0, !_4__this) )
      sub_B5D69C(v27, v28);
    v29 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v26,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v29, targetId, v31, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v32 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v32,
      (Il2CppObject *)v26,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v33 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v33, v32, 0LL);
    this->fields.__2__current = (Il2CppObject *)v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v40 = 1;
    result = 1;
  }
  this->fields.__1__state = v40;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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