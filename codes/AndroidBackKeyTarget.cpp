void AndroidBackKeyTarget___ctor(AndroidBackKeyTarget_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AndroidBackKeyTarget__OnEnable(AndroidBackKeyTarget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_59729D1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59729D1 = 1;
  }
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
    gameObject = this->fields.targetObject;
  else
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, v4);
}