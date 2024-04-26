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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.spot, (System_Int32_array **)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall SubmarineRevealSpotPerformance__Execute(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350EB2 & 1) == 0 )
  {
    sub_B70694(&SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo);
    byte_4350EB2 = 1;
  }
  v3 = sub_B70764(SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo);
  SubmarineRevealSpotPerformance__Execute_d__4___ctor((SubmarineRevealSpotPerformance__Execute_d__4_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SubmarineRevealSpotPerformance__OnStart(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *spot; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4350EB1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__);
    byte_4350EB1 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_B7076C(v5, v6);
  SrcSpotBasePrefab__SetState(spot, 3, v4, 0LL);
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
    sub_B7076C(this, method);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  int32_t v8; // w8

  if ( (byte_434F0D1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_SubmarineRevealSpotPerformance__Execute_b__4_0__);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434F0D1 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v8 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v6,
      _4__this,
      Method_SubmarineRevealSpotPerformance__Execute_b__4_0__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v7 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_B70630(&this->fields.__2__current);
    v8 = 1;
    result = 1;
  }
  this->fields.__1__state = v8;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SubmarineRevealSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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