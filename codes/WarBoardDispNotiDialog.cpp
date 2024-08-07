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
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCA37 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardDispNotiDialog__Execute_d__5_TypeInfo, method);
    byte_49FCA37 = 1;
  }
  v3 = sub_1B64C4C(WarBoardDispNotiDialog__Execute_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardDispNotiDialog__OnEnd(WarBoardDispNotiDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_49FCA38 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FCA38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
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
  __int64 v4; // x1
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8

  if ( (byte_49FCA36 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FCA36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardDispNotiDialog_o *_4__this; // x24
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t targetId; // w22
  System_Action_o *v16; // x23
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w8

  if ( (byte_49FCA39 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&System_Func_bool__TypeInfo, v3);
    sub_1B64A00(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__, v4);
    sub_1B64A00(&Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__, v5);
    sub_1B64A00(&WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo, v6);
    sub_1B64A00(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_49FCA39 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v21 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    v11 = sub_1B64C4C(WarBoardDispNotiDialog___c__DisplayClass5_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( !v11 || (*(_BYTE *)(v11 + 16) = 0, !_4__this) )
      sub_1B64C5C(v12, v13);
    v14 = *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3);
    targetId = _4__this->fields.targetId;
    v16 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v11,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__0__,
      0LL);
    EventTutorialMaster__CheckTutorial(v14, targetId, v16, _4__this->fields.eventId, 0, 0, 0, 0LL);
    v17 = (System_Func_bool__o *)sub_1B64C4C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_WarBoardDispNotiDialog___c__DisplayClass5_0__Execute_b__1__,
      0LL);
    v18 = (UnityEngine_WaitUntil_o *)sub_1B64C4C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
    this->fields.__2__current = (Il2CppObject *)v18;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v18, v19, v20);
    v21 = 1;
    result = 1;
  }
  this->fields.__1__state = v21;
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_WarBoardDispNotiDialog__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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