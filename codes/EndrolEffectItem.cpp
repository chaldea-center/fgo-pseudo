void EndrolEffectItem___ctor(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EndrolEffectItem__LateUpdate(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *particle; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C214B5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C214B5 = 1;
  }
  particle = this->fields.particle;
  if ( !particle )
    sub_1C2D6EC(0, method);
  if ( !UnityEngine_ParticleSystem__IsAlive_71447732(particle, 0) )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
}


void EndrolEffectItem__Start(EndrolEffectItem_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C214B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    byte_4C214B4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  this->fields.particle = (struct UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                   gameObject,
                                                                   (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  sub_1C2D434(&this->fields.particle);
}