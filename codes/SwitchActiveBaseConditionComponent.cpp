void __fastcall SwitchActiveBaseConditionComponent___ctor(
        SwitchActiveBaseConditionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall SwitchActiveBaseConditionComponent__IsSatisfyCond(
        SwitchActiveBaseConditionComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(
        SwitchActiveBaseConditionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.Timing == 0;
}


void __fastcall SwitchActiveBaseConditionComponent__SwitchActive(
        SwitchActiveBaseConditionComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF8AE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF8AE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)data, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v6 = ((__int64 (__fastcall *)(SwitchActiveBaseConditionComponent_o *, BattleData_o *, void *))this->klass->vtable._4_IsSatisfyCond.method)(
           this,
           data,
           this->klass[1]._1.image);
    if ( !gameObject )
      sub_1C22094(v6, v7);
    UnityEngine_GameObject__SetActive(gameObject, v6 & 1, 0LL);
  }
}