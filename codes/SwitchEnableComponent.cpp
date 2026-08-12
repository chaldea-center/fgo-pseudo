void SwitchEnableComponent___ctor(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SwitchEnableComponent__SetEnable(SwitchEnableComponent_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *targetComponent; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_596E756 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E756 = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, value, 0);
  }
}


void SwitchEnableComponent__Switch(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *targetComponent; // x20
  __int64 v5; // x1
  UnityEngine_Behaviour_o *v6; // x0
  bool v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_596E755 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E755 = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v6 )
      sub_2213CDC(0, v5);
    v7 = !UnityEngine_Behaviour__get_enabled(v6, 0);
    SwitchEnableComponent__SetEnable(this, v7, v8);
  }
}


void SwitchEnableComponent__SwitchDisable(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SwitchEnableComponent__SetEnable(this, 0, v2);
}


void SwitchEnableComponent__SwitchEnable(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SwitchEnableComponent__SetEnable(this, 1, v2);
}