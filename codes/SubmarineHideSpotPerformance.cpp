void __fastcall SubmarineHideSpotPerformance___ctor(
        SubmarineHideSpotPerformance_o *this,
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.spot, (System_Int32_array **)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall SubmarineHideSpotPerformance__Execute(
        SubmarineHideSpotPerformance_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7B2E & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineHideSpotPerformance__Execute_d__4_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B2E = 1;
  }
  v5 = sub_B5D694(SubmarineHideSpotPerformance__Execute_d__4_TypeInfo);
  SubmarineHideSpotPerformance__Execute_d__4___ctor((SubmarineHideSpotPerformance__Execute_d__4_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineHideSpotPerformance__OnStart(SubmarineHideSpotPerformance_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SrcSpotBasePrefab_o *spot; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E7B2D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineHideSpotPerformance__OnStart_b__3_0__, v5, v6, v7);
    byte_42E7B2D = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SubmarineHideSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_B5D69C(v10, v11);
  SrcSpotBasePrefab__SetState(spot, 2, v9, 0LL);
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
    sub_B5D69C(this, method);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  int32_t v19; // w8

  if ( (byte_42E6450 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineHideSpotPerformance__Execute_b__4_0__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v11, v12, v13);
    byte_42E6450 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v19 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v17 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v17,
      _4__this,
      Method_SubmarineHideSpotPerformance__Execute_b__4_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v18 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
    this->fields.__2__current = (Il2CppObject *)v18;
    sub_B5D560(&this->fields.__2__current);
    v19 = 1;
    result = 1;
  }
  this->fields.__1__state = v19;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SubmarineHideSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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