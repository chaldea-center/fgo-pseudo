void __fastcall WarBoardSimpleAnimationPerformance___ctor(
        WarBoardSimpleAnimationPerformance_o *this,
        SimpleAnimation_o *animation,
        System_String_o *animationName,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)animation);
  this->fields.animation = animation;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.animation, (int64_t)animation, v7, v8, v9, v10, v11, v12);
  this->fields.animationName = animationName;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.animationName,
    (int64_t)animationName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_IEnumerator_o *__fastcall WarBoardSimpleAnimationPerformance__Execute(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C1FD75 & 1) == 0 )
  {
    sub_1C3B764(&WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo, method);
    byte_4C1FD75 = 1;
  }
  v3 = sub_1C3B9B0(WarBoardSimpleAnimationPerformance__Execute_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardSimpleAnimationPerformance__OnEnd(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardSimpleAnimationPerformance__OnStart(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  UnityEngine_Object_o *animation; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4C1FD74 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1FD74 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  this->fields.isStart = 0;
  animation = (UnityEngine_Object_o *)this->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animation, 0LL, 0LL) )
  {
    v6 = this->fields.animation;
    if ( !v6 || (SimpleAnimation__Rewind(v6, 0LL), (v6 = this->fields.animation) == 0LL) )
      sub_1C3B9C0(v6, v5);
    if ( SimpleAnimation__Play_65506988(v6, this->fields.animationName, 0LL) )
      this->fields.isStart = 1;
  }
}


bool __fastcall WarBoardSimpleAnimationPerformance___Execute_b__5_0(
        WarBoardSimpleAnimationPerformance_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1C3B9C0(0LL, method);
  return !SimpleAnimation__CheckPlaying(animation, 0LL) || this->fields.IsForceEnd;
}


void __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5___ctor(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__MoveNext(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  WarBoardSimpleAnimationPerformance__Execute_d__5_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct WarBoardSimpleAnimationPerformance_o *_4__this; // x20
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4C1FD76 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v3);
    this = (WarBoardSimpleAnimationPerformance__Execute_d__5_o *)sub_1C3B764(
                                                                   &Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
                                                                   v4);
    byte_4C1FD76 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C3B9C0(this, method);
    if ( !_4__this->fields.isStart )
    {
      return 0;
    }
    else
    {
      v7 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v7,
        (Il2CppObject *)_4__this,
        Method_WarBoardSimpleAnimationPerformance__Execute_b__5_0__,
        0LL);
      v8 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v8, v7, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v8;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C3B708(p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_Reset(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_WarBoardSimpleAnimationPerformance__Execute_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_Collections_IEnumerator_get_Current(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardSimpleAnimationPerformance__Execute_d__5__System_IDisposable_Dispose(
        WarBoardSimpleAnimationPerformance__Execute_d__5_o *this,
        const MethodInfo *method)
{
  ;
}