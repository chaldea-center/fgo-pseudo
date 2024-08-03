// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispNotiDialog___ctor(
        WarBoardDispNotiDialog_o *this,
        int32_t eventId,
        int32_t targetId,
        int32_t openType,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&eventId);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = eventId;
  this->fields.eventId = targetId;
  this->fields.targetId = openType;
}


System_Collections_IEnumerator_o *__fastcall WarBoardDispNotiDialog__Execute(
        WarBoardDispNotiDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA322 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method);
    byte_49FA322 = 1;
  }
  v4 = sub_1B64314(WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_49FA323 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA323 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 1, 0, 0LL);
  EventTutorialMaster__ClearLocalCheckedEntities(0LL);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardDispNotiDialog__OnStart(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  if ( (byte_49FA321 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA321 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  WarBoardManager__SetMapTouchEnable((WarBoardManager_o *)Instance, 0, 0, 0LL);
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
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
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w21
  int32_t targetId; // w22
  System_Action_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_bool__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_WaitUntil_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w8

  if ( (byte_49FA324 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v5);
    sub_1B640C8(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v6);
    sub_1B640C8(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_49FA324 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v27 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v12 = sub_1B64314(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    if ( !v12 || (*(_BYTE *)(v12 + 16) = 0, !_4__this) )
      sub_1B64324(v13);
    v16 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v12,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v16, targetId, v18, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v21 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v19, v20);
    System_Func_bool____ctor(
      v21,
      (Il2CppObject *)v12,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      0LL);
    v24 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v22, v23);
    UnityEngine_WaitUntil___ctor(v24, v21, 0LL);
    this->fields.__2__current = (Il2CppObject *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v24, v25, v26);
    v27 = 1;
    result = 1;
  }
  this->fields.__1__state = v27;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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