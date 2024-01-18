void __fastcall SubmarineHideSpotPerformance___ctor(
        SubmarineHideSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spot = spot;
  sub_B2C2F8(&this->fields.spot, spot);
}


System_Collections_IEnumerator_o *__fastcall SubmarineHideSpotPerformance__Execute(
        SubmarineHideSpotPerformance_o *this,
        const MethodInfo *method)
{
  SubmarineHideSpotPerformance__Execute_d__4_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_41857A2 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineHideSpotPerformance__Execute_d__4_TypeInfo, method);
    byte_41857A2 = 1;
  }
  v3 = (SubmarineHideSpotPerformance__Execute_d__4_o *)sub_B2C42C(SubmarineHideSpotPerformance__Execute_d__4_TypeInfo);
  SubmarineHideSpotPerformance__Execute_d__4___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SubmarineHideSpotPerformance__OnStart(SubmarineHideSpotPerformance_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SrcSpotBasePrefab_o *spot; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41857A1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SubmarineHideSpotPerformance__OnStart_b__3_0__, v3);
    byte_41857A1 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineHideSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_B2C434(v6, v7);
  SrcSpotBasePrefab__SetState(spot, 2, v5, 0LL);
}


bool __fastcall SubmarineHideSpotPerformance___Execute_b__4_0(
        SubmarineHideSpotPerformance_o *this,
        const MethodInfo *method)
{
  return this->fields.spotAnimFinished;
}


void __fastcall SubmarineHideSpotPerformance___OnStart_b__3_0(
        SubmarineHideSpotPerformance_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  spot = this->fields.spot;
  if ( !spot || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B2C434(this, method);
  mMapCtrl_SpotInfo->fields.dispType = 0;
  this->fields.spotAnimFinished = 1;
}


void __fastcall SubmarineHideSpotPerformance__Execute_d__4___ctor(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineHideSpotPerformance__Execute_d__4__MoveNext(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  int32_t v11; // w8

  if ( (byte_418479A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineHideSpotPerformance__Execute_b__4_0__, v4);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_418479A = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      _4__this,
      Method_SubmarineHideSpotPerformance__Execute_b__4_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v10 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_B2C2F8(&this->fields.__2__current, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
  return result;
}


Il2CppObject *__fastcall SubmarineHideSpotPerformance__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineHideSpotPerformance__Execute_d__4__System_Collections_IEnumerator_Reset(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_SubmarineHideSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall SubmarineHideSpotPerformance__Execute_d__4__System_Collections_IEnumerator_get_Current(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineHideSpotPerformance__Execute_d__4__System_IDisposable_Dispose(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}