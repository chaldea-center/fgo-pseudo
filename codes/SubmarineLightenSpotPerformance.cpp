void __fastcall SubmarineLightenSpotPerformance___ctor(
        SubmarineLightenSpotPerformance_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spot = spot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spot, (int32_t)spot, v5, v6);
}


System_Collections_IEnumerator_o *__fastcall SubmarineLightenSpotPerformance__Execute(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57E6A & 1) == 0 )
  {
    sub_1B885B0(&SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo);
    byte_4A57E6A = 1;
  }
  v3 = sub_1B887FC(SubmarineLightenSpotPerformance__Execute_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SubmarineLightenSpotPerformance__OnStart(
        SubmarineLightenSpotPerformance_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *spot; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A57E69 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__);
    byte_4A57E69 = 1;
  }
  SchedulerTaskBase__OnStart((SchedulerTaskBase_o *)this, 0LL);
  this->fields.spotAnimFinished = 0;
  spot = this->fields.spot;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineLightenSpotPerformance__OnStart_b__3_0__, 0LL);
  if ( !spot )
    sub_1B8880C(v5, v6);
  SrcSpotBasePrefab__SetState(spot, 4, v4, 0LL);
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
    sub_1B8880C(spot, method);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8

  if ( (byte_4A57E6B & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SubmarineLightenSpotPerformance__Execute_b__4_0__);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A57E6B = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_SubmarineLightenSpotPerformance__Execute_b__4_0__, 0LL);
    v7 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_SubmarineLightenSpotPerformance__Execute_d__4_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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