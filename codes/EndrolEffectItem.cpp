void EndrolEffectItem___ctor(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EndrolEffectItem__LateUpdate(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *particle; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2686F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2686F = 1;
  }
  particle = this->fields.particle;
  if ( !particle )
    sub_1C942F0(0, method);
  if ( !UnityEngine_ParticleSystem__IsAlive_72397288(particle, 0) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
  }
}


void EndrolEffectItem__Start(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *ComponentInChildren_object; // x0

  if ( (byte_4D2686E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    byte_4D2686E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 gameObject,
                                 (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  this->fields.particle = (struct UnityEngine_ParticleSystem_o *)ComponentInChildren_object;
  sub_1C9403C(&this->fields.particle, ComponentInChildren_object);
}