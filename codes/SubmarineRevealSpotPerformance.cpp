void __fastcall SubmarineRevealSpotPerformance___ctor(
        SubmarineRevealSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spot = spot;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.spot, (int32_t)spot, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall SubmarineRevealSpotPerformance__Execute(
        SubmarineRevealSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F912D & 1) == 0 )
  {
    sub_1B640C8(&SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo, method);
    byte_49F912D = 1;
  }
  v4 = sub_1B64314(SubmarineRevealSpotPerformance__Execute_d__4_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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

  if ( (byte_49F912C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__, v3);
    byte_49F912C = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineRevealSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_1B64324(v8);
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
    sub_1B64324(this);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_WaitUntil_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w8

  if ( (byte_49F912E & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_SubmarineRevealSpotPerformance__Execute_b__4_0__, v4);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_49F912E = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v15 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(v9, _4__this, Method_SubmarineRevealSpotPerformance__Execute_b__4_0__, 0LL);
    v12 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v10, v11);
    UnityEngine_WaitUntil___ctor(v12, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v12, v13, v14);
    v15 = 1;
    result = 1;
  }
  this->fields.__1__state = v15;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SubmarineRevealSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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