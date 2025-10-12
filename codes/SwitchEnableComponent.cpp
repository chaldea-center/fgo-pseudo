void SwitchEnableComponent___ctor(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SwitchEnableComponent__SetEnable(SwitchEnableComponent_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *targetComponent; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4C3595E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3595E = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_Behaviour__set_enabled(v6, value, 0);
  }
}


void SwitchEnableComponent__Switch(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetComponent; // x20
  UnityEngine_Behaviour_o *v4; // x0
  char v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4C3595D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3595D = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v4 )
      sub_1C32E7C(0);
    v5 = ~UnityEngine_Behaviour__get_enabled(v4, 0);
    SwitchEnableComponent__SetEnable(this, v5 & 1, v6);
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