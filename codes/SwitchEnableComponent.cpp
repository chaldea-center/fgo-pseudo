void SwitchEnableComponent___ctor(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SwitchEnableComponent__SetEnable(SwitchEnableComponent_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_Object_o *targetComponent; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4C54C68 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54C68 = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, value, 0);
  }
}


void SwitchEnableComponent__Switch(SwitchEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetComponent; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0
  char v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4C54C67 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54C67 = 1;
  }
  targetComponent = (UnityEngine_Object_o *)this->fields.targetComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetComponent, 0, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.targetComponent;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    v6 = ~UnityEngine_Behaviour__get_enabled(v5, 0);
    SwitchEnableComponent__SetEnable(this, v6 & 1, v7);
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