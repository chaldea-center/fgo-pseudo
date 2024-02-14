void __fastcall SubmarineRevealSpotPerformance___ctor(
        SubmarineRevealSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spot = spot;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.spot, (System_Int32_array **)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall SubmarineRevealSpotPerformance__Execute(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421365E & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo, method);
    byte_421365E = 1;
  }
  v4 = sub_B0D974(SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo, method, v2);
  SubmarineRevealSpotPerformance__Execute_d__4___ctor((SubmarineRevealSpotPerformance__Execute_d__4_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall SubmarineRevealSpotPerformance__OnStart(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SrcSpotBasePrefab_o *spot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_421365D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__, v3);
    byte_421365D = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_B0D97C(v8);
  SrcSpotBasePrefab__SetState(spot, 3, v7, 0LL);
}


bool __fastcall SubmarineRevealSpotPerformance___Execute_b__4_0(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  return this->fields.spotAnimFinished;
}


void __fastcall SubmarineRevealSpotPerformance___OnStart_b__3_0(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  spot = this->fields.spot;
  if ( !spot || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B0D97C(this);
  mMapCtrl_SpotInfo->fields.dispType = 2;
  this->fields.spotAnimFinished = 1;
}


void __fastcall SubmarineRevealSpotPerformance__Execute_d__4___ctor(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineRevealSpotPerformance__Execute_d__4__MoveNext(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_WaitUntil_o *v13; // x20
  int32_t v14; // w8

  if ( (byte_4211741 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_SubmarineRevealSpotPerformance__Execute_b__4_0__, v5);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4211741 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v10 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(
      v10,
      _4__this,
      Method_SubmarineRevealSpotPerformance__Execute_b__4_0__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v13 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v11, v12);
    UnityEngine_WaitUntil___ctor(v13, v10, 0LL);
    this->fields.__2__current = (Il2CppObject *)v13;
    sub_B0D840(&this->fields.__2__current, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *__fastcall SubmarineRevealSpotPerformance__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineRevealSpotPerformance__Execute_d__4__System_Collections_IEnumerator_Reset(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
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
  v6 = sub_B0D8A8(&Method_SubmarineRevealSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall SubmarineRevealSpotPerformance__Execute_d__4__System_Collections_IEnumerator_get_Current(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineRevealSpotPerformance__Execute_d__4__System_IDisposable_Dispose(
        SubmarineRevealSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}