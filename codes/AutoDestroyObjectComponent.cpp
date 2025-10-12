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
  float deltaTime; // s0
  float lostTime; // s1
  float v6; // s0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C39EB3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39EB3 = 1;
  }
  elapsedTime = this->fields.elapsedTime;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  lostTime = this->fields.lostTime;
  v6 = elapsedTime + deltaTime;
  this->fields.elapsedTime = v6;
  if ( lostTime < v6 )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
  }
}