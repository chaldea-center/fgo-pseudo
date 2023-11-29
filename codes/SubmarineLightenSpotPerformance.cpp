void __fastcall SubmarineLightenSpotPerformance___ctor(
        SubmarineLightenSpotPerformance_o *this,
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.spot, (System_Int32_array **)spot, v5, v6, v7, v8, v9, v10);
}


System_Collections_IEnumerator_o *__fastcall SubmarineLightenSpotPerformance__Execute(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7C38 & 1) == 0 )
  {
    sub_B16FFC(&SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo, method);
    byte_40F7C38 = 1;
  }
  v6 = sub_B170CC(SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo, method, v2, v3, v4);
  SubmarineLightenSpotPerformance__Execute_d__4___ctor((SubmarineLightenSpotPerformance__Execute_d__4_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SubmarineLightenSpotPerformance__OnStart(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SrcSpotBasePrefab_o *spot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x21

  if ( (byte_40F7C37 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__, v3);
    byte_40F7C37 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_B170D4();
  SrcSpotBasePrefab__SetState(spot, 4, v9, 0LL);
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
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SrcSpotBasePrefab_o *v5; // x0

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 1, (v5 = this->fields.spot) == 0LL) )
  {
    sub_B170D4();
  }
  SrcSpotBasePrefab__SetTouchType(v5, 1, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_WaitUntil_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w8

  if ( (byte_40F7A6A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&Method_SubmarineLightenSpotPerformance__Execute_b__4_0__, v7);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_40F7A6A = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v24 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool____ctor(
      v12,
      _4__this,
      Method_SubmarineLightenSpotPerformance__Execute_b__4_0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v17 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v13, v14, v15, v16);
    UnityEngine_WaitUntil___ctor(v17, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = 1;
    result = 1;
  }
  this->fields.__1__state = v24;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SubmarineLightenSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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