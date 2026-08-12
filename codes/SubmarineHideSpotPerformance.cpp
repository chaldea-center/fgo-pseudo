void SubmarineHideSpotPerformance___ctor(
        SubmarineHideSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0);
  this->fields.spot = spot;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spot, (int32_t)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *SubmarineHideSpotPerformance__Execute(
        SubmarineHideSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596CF88 & 1) == 0 )
  {
    sub_2213A60(&SubmarineHideSpotPerformance__Execute_d__4_TypeInfo);
    byte_596CF88 = 1;
  }
  v3 = sub_2213CCC(SubmarineHideSpotPerformance__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void SubmarineHideSpotPerformance__OnStart(SubmarineHideSpotPerformance_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  SrcSpotBasePrefab_o *spot; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596CF87 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineHideSpotPerformance__OnStart_b__3_0__);
    byte_596CF87 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0);
  v3 = System_Action_TypeInfo;
  spot = this->fields.spot;
  this->fields.spotAnimFinished = 0;
  v5 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineHideSpotPerformance__OnStart_b__3_0__, 0);
  if ( !spot )
    sub_2213CDC(v6, v7);
  SrcSpotBasePrefab__SetState(spot, 2, v5, 0);
}


bool SubmarineHideSpotPerformance___Execute_b__4_0(SubmarineHideSpotPerformance_o *this, const MethodInfo *method)
{
  return this->fields.spotAnimFinished;
}


void SubmarineHideSpotPerformance___OnStart_b__3_0(SubmarineHideSpotPerformance_o *this, const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  spot = this->fields.spot;
  if ( !spot || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0 )
    sub_2213CDC(this, method);
  mMapCtrl_SpotInfo->fields.dispType = 0;
  this->fields.spotAnimFinished = 1;
}


void SubmarineHideSpotPerformance__Execute_d__4___ctor(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SubmarineHideSpotPerformance__Execute_d__4__MoveNext(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  int32_t v4; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596CF89 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SubmarineHideSpotPerformance__Execute_b__4_0__);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596CF89 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_SubmarineHideSpotPerformance__Execute_b__4_0__, 0);
    v7 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v4 = 1;
    goto LABEL_7;
  }
  if ( _1__state == 1 )
  {
    v4 = -1;
LABEL_7:
    this->fields.__1__state = v4;
  }
  return _1__state == 0;
}


Il2CppObject *SubmarineHideSpotPerformance__Execute_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SubmarineHideSpotPerformance__Execute_d__4__System_Collections_IEnumerator_Reset(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SubmarineHideSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SubmarineHideSpotPerformance__Execute_d__4__System_Collections_IEnumerator_get_Current(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SubmarineHideSpotPerformance__Execute_d__4__System_IDisposable_Dispose(
        SubmarineHideSpotPerformance__Execute_d__4_o *this,
        const MethodInfo *method)
{
  ;
}