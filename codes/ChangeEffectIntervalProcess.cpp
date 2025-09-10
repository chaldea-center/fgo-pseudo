void ChangeEffectIntervalProcess___ctor(ChangeEffectIntervalProcess_o *this, float interval, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Interval_k__BackingField = interval;
}


bool ChangeEffectIntervalProcess__IsMatchCond(
        ChangeEffectIntervalProcess_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  return 0;
}


float ChangeEffectIntervalProcess__get_Interval(ChangeEffectIntervalProcess_o *this, const MethodInfo *method)
{
  return this->fields._Interval_k__BackingField;
}


void ChangeEffectIntervalProcess__set_Interval(
        ChangeEffectIntervalProcess_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Interval_k__BackingField = value;
}