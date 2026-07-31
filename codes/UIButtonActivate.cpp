void UIButtonActivate___ctor(UIButtonActivate_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonActivate__OnClick(UIButtonActivate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  _BOOL4 state; // w19

  if ( (byte_593CCB1 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCB1 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    v5 = this->fields.target;
    state = this->fields.state;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
    NGUITools__SetActive(v5, state, 0);
  }
}