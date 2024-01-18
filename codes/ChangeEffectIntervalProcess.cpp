void __fastcall ChangeEffectIntervalProcess___ctor(
        ChangeEffectIntervalProcess_o *this,
        float interval,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Interval_k__BackingField = interval;
}


bool __fastcall ChangeEffectIntervalProcess__IsMatchCond(
        ChangeEffectIntervalProcess_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  return 0;
}


float __fastcall ChangeEffectIntervalProcess__get_Interval(
        ChangeEffectIntervalProcess_o *this,
        const MethodInfo *method)
{
  return this->fields._Interval_k__BackingField;
}


void __fastcall ChangeEffectIntervalProcess__set_Interval(
        ChangeEffectIntervalProcess_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Interval_k__BackingField = value;
}