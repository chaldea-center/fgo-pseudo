void __fastcall BattleActionWaitCond___ctor(BattleActionWaitCond_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionWaitCond_Base___ctor(BattleActionWaitCond_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionWaitCond_Base__IsWait(
        BattleActionWaitCond_Base_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_LimitTime___ctor(
        BattleActionWaitCond_LimitTime_o *this,
        float limit,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = limit;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsInLimitTime(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return this->fields.limit > elapsedTime;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWait(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  if ( this->fields.limit <= elapsedTime )
    return 0;
  else
    return ((__int64 (__fastcall *)(BattleActionWaitCond_LimitTime_o *, void *))this->klass->vtable._5_IsWaitCond.method)(
             this,
             this->klass[1]._1.image);
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWaitCond(
        BattleActionWaitCond_LimitTime_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)perf;
  v4 = (BattleServantConfConponent_o *)((char *)v4 + 24);
  *(_DWORD *)&v4[-1].fields.isOpenAfter = 1067450368;
  sub_B16F98(v4, (System_Int32_array **)perf, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_B170D4();
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}