void AutoDestroyObjectComponent___ctor(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  this->fields.lostTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoDestroyObjectComponent__Start(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  this->fields.elapsedTime = 0.0;
}


void AutoDestroyObjectComponent__Update(AutoDestroyObjectComponent_o *this, const MethodInfo *method)
{
  float elapsedTime; // s8
  float v4; // s0
  float lostTime; // s1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5972E43 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E43 = 1;
  }
  elapsedTime = this->fields.elapsedTime;
  v4 = elapsedTime + UnityEngine_Time__get_deltaTime(0);
  lostTime = this->fields.lostTime;
  this->fields.elapsedTime = v4;
  if ( lostTime < v4 )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
}