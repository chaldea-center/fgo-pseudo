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
  BattleActionWaitCond_UntilSideEffectInvisible_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.perf = perf;
  v4 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.perf) = 1067450368;
  sub_1B64814((ServantStatusBattleListViewItem_o *)v4, (int32_t)perf, v5, v6);
}


bool __fastcall BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1B64ACC(this, method);
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}