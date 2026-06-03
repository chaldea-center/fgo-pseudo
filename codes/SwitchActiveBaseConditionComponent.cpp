void SwitchActiveBaseConditionComponent___ctor(SwitchActiveBaseConditionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool SwitchActiveBaseConditionComponent__IsSatisfyCond(
        SwitchActiveBaseConditionComponent_o *this,
        BattleData_o *data,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  return 0;
}


bool SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(
        SwitchActiveBaseConditionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.Timing == 0;
}


void SwitchActiveBaseConditionComponent__SwitchActive(
        SwitchActiveBaseConditionComponent_o *this,
        BattleData_o *data,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4E7B06B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7B06B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v8 = ((__int64 (__fastcall *)(SwitchActiveBaseConditionComponent_o *, BattleData_o *, BattleActorControl_o *, const MethodInfo *))this->klass->vtable._4_IsSatisfyCond.methodPtr)(
           this,
           data,
           actor,
           this->klass->vtable._4_IsSatisfyCond.method);
    if ( !gameObject )
      sub_1D0F30C(v8, v9);
    UnityEngine_GameObject__SetActive(gameObject, v8 & 1, 0);
  }
}