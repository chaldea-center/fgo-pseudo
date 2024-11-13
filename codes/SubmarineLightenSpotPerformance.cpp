void __fastcall SubmarineLightenSpotPerformance___ctor(
        SubmarineLightenSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spot = spot;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spot, (int64_t)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall SubmarineLightenSpotPerformance__Execute(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12E1B & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo, method, v2);
    byte_4B12E1B = 1;
  }
  v5 = sub_1BCAA2C(SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineLightenSpotPerformance__OnStart(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SrcSpotBasePrefab_o *spot; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B12E1A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__, v4, v5);
    byte_4B12E1A = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_1BCAA3C(v11, v12);
  SrcSpotBasePrefab__SetState(spot, 4, v10, 0LL);
}


bool __fastcall SubmarineLightenSpotPerformance___Execute_b__4_0(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  return this->fields.spotAnimFinished;
}


void __fastcall SubmarineLightenSpotPerformance___OnStart_b__3_0(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  spot = this->fields.spot;
  if ( !spot || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1BCAA3C(spot, method);
  mMapCtrl_SpotInfo->fields.dispType = 1;
  SrcSpotBasePrefab__SetTouchType(spot, 1, 0LL);
  this->fields.spotAnimFinished = 1;
}


void __fastcall SubmarineLightenSpotPerformance__Execute_d__4___ctor(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineLightenSpotPerformance__Execute_d__4__MoveNext(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UnityEngine_WaitUntil_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w8

  if ( (byte_4B12E1C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineLightenSpotPerformance__Execute_b__4_0__, v5, v6);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v7, v8);
    byte_4B12E1C = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v23 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v12, _4__this, Method_SubmarineLightenSpotPerformance__Execute_b__4_0__, 0LL);
    v16 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v13, v14, v15);
    UnityEngine_WaitUntil___ctor(v16, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    v23 = 1;
    result = 1;
  }
  this->fields.__1__state = v23;
  return result;
}


Il2CppObject *__fastcall SubmarineLightenSpotPerformance__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineLightenSpotPerformance__Execute_d__4__System_Collections_IEnumerator_Reset(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SubmarineLightenSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall SubmarineLightenSpotPerformance__Execute_d__4__System_Collections_IEnumerator_get_Current(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineLightenSpotPerformance__Execute_d__4__System_IDisposable_Dispose(
        SubmarineLightenSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}